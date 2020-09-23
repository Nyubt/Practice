using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity;
using Microsoft.Practices.Unity.Configuration;
using Unity.Injection;
using Unity.Interception.ContainerIntegration;
using Unity.Interception.Interceptors.TypeInterceptors.VirtualMethodInterception;
using Unity.Lifetime;
using Unity.RegistrationByConvention;
using Unity.Interception;
using Task3.Data;

namespace Task3
{
    public static class DependencyManager
    {
        public static IUnityContainer Container { get; private set; }
        public static IUnityContainer ChildContainer { get; private set; }

        private static Bank localBank = new Bank();

        public static void Start(bool automatic = false)
        {
            Initialize();

            Register();
            RegisterLifetime();

            if (automatic)
            {
                RegisterAutomatic();
            }
        }


        public static T Resolve<T>(bool throwException = true)
        {
            T resolved;

            try
            {
                resolved = ChildContainer.IsRegistered<T>() ? ChildContainer.Resolve<T>() : Container.Resolve<T>();
            }
            catch (Exception)
            {
                if (throwException)
                    throw;

                resolved = default;
            }

            return resolved;
        }

        public static T Resolve<T>(string descriptor, bool throwException = true)
        {
            T resolved;

            try
            {
                resolved = ChildContainer.IsRegistered<T>(descriptor)
                    ? ChildContainer.Resolve<T>(descriptor)
                    : Container.Resolve<T>(descriptor);
            }
            catch (Exception)
            {
                if (throwException)
                    throw;

                resolved = default;
            }

            return resolved;
        }

        public static void RegisterInstance<T>(T instance)
        {
            Container.RegisterInstance(instance);
        }

        private static void Initialize()
        {
            var container = new UnityContainer();

            var section = (UnityConfigurationSection)ConfigurationManager.GetSection("unity");
            section?.Configure(container);

            Container = container;
            Container.AddNewExtension<Interception>();

            ChildContainer = Container.CreateChildContainer();
        }

        private static void Register()
        {            
            Container.RegisterInstance<Bank>(localBank);
        }

        private static void RegisterLifetime()
        {
            
        }

        private static void RegisterAutomatic()
        {
            ChildContainer.RegisterTypes(
                AllClasses.FromLoadedAssemblies(),
                WithMappings.FromMatchingInterface,
                WithName.Default);
        }

    }

}
