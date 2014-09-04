#include <facter/facts/collection.hpp>
#include <facter/facts/posix/kernel_resolver.hpp>
#include <facter/facts/posix/operating_system_resolver.hpp>
#include <facter/facts/posix/ssh_resolver.hpp>
#include <facter/facts/solaris/uptime_resolver.hpp>
#include <facter/facts/solaris/processor_resolver.hpp>

using namespace std;

namespace facter { namespace facts {

    void collection::add_platform_facts()
    {
        add(make_shared<posix::kernel_resolver>());
        add(make_shared<posix::operating_system_resolver>());
        add(make_shared<posix::ssh_resolver>());
        add(make_shared<solaris::uptime_resolver>());
        add(make_shared<solaris::processor_resolver>());
    }

}}  // namespace facter::facts