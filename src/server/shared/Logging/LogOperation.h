/*
 * Copyright (C) 2015 DevKM <http://facebook.com/krizttianmoreno>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LOGOPERATION_H
#define LOGOPERATION_H

class Logger;
struct LogMessage;

class LogOperation
{
    public:
        LogOperation(Logger* _logger, LogMessage* _msg)
            : logger(_logger)
            , msg(_msg)
        { }

        ~LogOperation();

        int call();

    protected:
        Logger *logger;
        LogMessage *msg;
};

#endif
