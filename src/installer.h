/**
 * KOZRUM PACKAGE INSTALLER
 *
 * @version		1.0.0
 * @copyright	2017, Kozrum
 * @license		MIT
 */

#ifndef KOZ_INSTALLER_H
#define KOZ_INSTALLER_h

#include <vector>
#include <string>

namespace kozrum
{
    class Installer
    {
    public:
        Installer(std::vector<std::string> t_command, int t_command_size);
        void run();

    private:
        std::vector<std::string> m_command;
        int m_command_size;
        int m_installation_type;
        std::string m_repository_name;
        std::string m_repo_url;

        void set_repo_url();
        std::vector<std::string> parse_repository_name();
        bool check_repository_status();
    };
}

#endif
