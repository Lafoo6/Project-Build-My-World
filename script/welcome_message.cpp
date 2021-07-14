#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginproject2 : public WorldPlugin
  {
    public: WorldPluginproject2() : WorldPlugin()
            {
              printf("Welcome to Latifa's world!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginproject2)
}
