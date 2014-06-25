/*
 * Game Develop Core
 * Copyright 2008-2014 Florian Rival (Florian.Rival@gmail.com). All rights reserved.
 * This project is released under the GNU Lesser General Public License.
 */
#ifndef GDCORE_LOG_H
#define GDCORE_LOG_H
#include <string>
#if defined(GD_IDE_ONLY) && !defined(GD_NO_WX_GUI)
#include <wx/log.h>
#endif

namespace gd {

/**
 * \brief Standard function that should be used when emitting a warning to be displayed to
 * the user. When used in the IDE, this result in a message box with a exclamation icon.
 */
void GD_CORE_API LogWarning(const std::string & msg);

/**
 * \brief Standard function that should be used when emitting an error to be displayed to
 * the user. When used in the IDE, this result in a message box with a error icon.
 */
void GD_CORE_API LogError(const std::string & msg);

/**
 * \brief Standard function that should be used when emitting a message to be displayed to
 * the user. When used in the IDE, this result in a message box.
 */
void GD_CORE_API LogMessage(const std::string & msg);
/**
 * \brief Standard function that should be used when emitting a status message to be displayed to
 * the user. When used in the IDE, this result in a message displayed in the status bar.
 */
void GD_CORE_API LogStatus(const std::string & msg);

}

#endif // GDCORE_LOG_H