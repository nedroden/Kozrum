/**
 * KOZRUM PACKAGE INSTALLER
 *
 * @version		1.0.0
 * @copyright	2017, Kozrum
 * @license		MIT
 */

#ifndef KOZ_UTILS_H
#define KOZ_UTILS_H

#include <string>

namespace kozrum
{
	void report(std::string t_message);
	void report(std::string t_message, bool t_status);
	void report_error(std::string t_message);
	void clear_screen();

	bool ask_for_confirmation();
	bool ask_for_confirmation(std::string t_message);
	bool is_positive();
}

#endif
