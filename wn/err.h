/*
    Wn: A Server for the HTTP
    File: wn/err.h
    Version 2.4.5
    
    Copyright (C) 1995-2003  <by John Franks>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 1, or (at your option)
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/

WN_CONST
char * WN_CONST err_m[] = {
	/* 0 */ "Can't (re)open log or errorlog file: %.100s\n",
	/* 1 */ "Can't open file",
	/* 2 */ "File does not exist or is not accessible",
	/* 3 */ "UID/GID permission denied",
	/* 4 */ "Execute permission denied",
	/* 5 */ "Missing value in cache, field:filename is",
	/* 6 */ "Bad field in cache, field is ",
	/* 7 */ "Bad cache uid or gid",
	/* 8 */ "Cachefile cannot be writable by or owned by uid under which server is run",
	/* 9 */ "Can't open index.cache file",
	/* 10 */ "Missing 'value' in dir cache, file",
	/* 11 */ "Bad field=value pair in dir cache, field is ",
	/* 12 */ "Can't stat file",
	/* 13 */ "Cache file is not a regular file",
	/* 14 */ "Can't exec authorization module",
	/* 15 */ "Missing Host: header",
	/* 16 */ "Can't exec file",
	/* 17 */ "Can't filter file",
	/* 18 */ "Tried filter",
	/* 19 */ "Accept-* header overflow",
	/* 20 */ "SECURITY Found bad character (%X hex) in path",
	/* 21 */ "SECURITY Found ../ in path",
	/* 22 */ "Could not get socket",
	/* 23 */ "Could not set linger option [setsockopt]",
	/* 24 */ "Could not set SO_REUSEADDR [setsockopt]",
	/* 25 */ "Could not bind to port",
	/* 26 */ "Unable to set gid",
	/* 27 */ "Unable to set uid",
	/* 28 */ "Accept failed",
	/* 29 */ "Unable to fork new process, abandoning connection",
	/* 30 */ "Setsid failed",
	/* 31 */ "Setpgrp failed",
	/* 32 */ "Directory not searchable",
	/* 33 */ "Can't exec isearch module",
	/* 34 */ "Not a text file",
	/* 35 */ "Request for insert with no file",
	/* 36 */ "Couldn't exec included command",
	/* 37 */ "Bad file name",
	/* 38 */ "Bad markline parameter",
	/* 39 */ "Can't exec file module",
	/* 40 */ "Can't exec cache module",
	/* 41 */ "Can't open index.cache file [csearch]",
	/* 42 */ "Authentication module failed",
	/* 43 */ "Cache module failed",
	/* 44 */ "Symlink to file not world readable",
	/* 45 */ "Can't translate module name",
	/* 46 */ "Can't open search wrapper",
	/* 47 */ "No markers in binary files",
	/* 48 */ "Getpeername failed",
	/* 49 */ "Insufficient random data in file",
	/* 50 */ "Can't read from digest authorization module",
	/* 51 */ "File not searchable",
	/* 52 */ "Filtered file module or CGI output not allowed",
	/* 53 */ "Can't open POST tempfile",
	/* 54 */ "Line range incompatible with binary file",
	/* 55 */ "Can't exec CGI program/handler or PUT handler",
	/* 56 */ "CGI headers too big",
	/* 57 */ "No valid Content-Length header for request body",
	/* 58 */ "Bad search parameter",
	/* 59 */ "Bad syntax in URI",
	/* 60 */ "Timed out",
	/* 61 */ "Bad authorization module output",
	/* 62 */ "Access file line overflow or missing '\n' at file end",
	/* 63 */ "Cache file line overflow or missing '\n' at file end",
	/* 64 */ "Malloc failed",
	/* 65 */ "Found URL encoded newline or return or char > 128",
	/* 66 */ "Incomplete header read",
	/* 67 */ "Bad URL -- forbidden or non-existent user directory",
	/* 68 */ "Illegal URL -- forbidden root directory",
	/* 69 */ "Can't open root directory table",
	/* 70 */ "HTTP headers from index too large",
	/* 71 */ "Root directory table line overflow",
	/* 72 */ "Bad syntax for line in root directory table",
	/* 73 */ "Getsockname failed",
	/* 74 */ "POST data size too large or invalid, aborting",
	/* 75 */ "Write error",
	/* 76 */ "Read error",
	/* 77 */ "RFC931 lookup socket error",
	/* 78 */ "RFC931 lookup fdopen error",
	/* 79 */ "Cookie request header overflow - cookie too large",
	/* 80 */ "Bad date format",
	/* 81 */ "Search term regular expression error",
	/* 82 */ "Request for unindexed file not world readable",
	/* 83 */ "Can't open nomatchsub file",
	/* 84 */ "Two includes in searchwrapper",
	/* 85 */ "Unknown parameter field",
	/* 86 */ "Can't translate auth error file",
	/* 87 */ "Can't open access file",
	/* 88 */ "Default document can't be a directory",
	/* 89 */ "Nomatchsub requires there be a Searchwrapper",
	/* 90 */ "Not allowed to exec authorization module",
	/* 91 */ "Gethostbyname can't resolve %.200s; ",
	/* 92 */ "Accepting connections for any IP address",
	/* 93 */ "Bad range syntax in URL",
	/* 94 */ "No Ranges for parsed, dynamic, or filtered files",
	/* 95 */ "Bad range syntax in header",
	/* 96 */ "Warning: Found bad character (%X hex) in CGI args",
	/* 97 */ "Unable to open PID file",
	/* 98 */ "Could not set SO_KEEPALIVE [setsockopt]",
	/* 99 */ "Could not open virtual host file: ",
	/* 100 */ "Too many virtual hosts",
	/* 101 */ "Bad virtual host file line: ",
	/* 102 */ "CGI-bin file error",
	/* 103 */ "Unsupported range type",
	/* 104 */ "Incomplete header from CGI script",
	/* 105 */ "Could not set TCP_NODELAY [setsockopt]",
	/* 106 */ "Can't chdir for exec to",
	/* 107 */ "Value in cache file line too long -- field",
	/* 108 */ "Character '/' not allowed in nomatchsub",
	/* 109 */ "No #include in search wrapper",
	/* 110 */ "Attempt to execute directory",
	/* 111 */ "Request to include file not in List-Includes",
	/* 112 */ "Invalid MIME type format: ",
	/* 113 */ "Requested range not satisfiable",
	/* 114 */ "Malloc failed in mime_init",
	/* 115 */ "Attempt to serve a non-regular file",
	/* 116 */ "End chunk encountered while not chunking",
	/* 117 */ "Method not allowed",
	/* 118 */ "Bad chunk format in put or post data",
	/* 119 */ "Method not implemented",
	/* 120 */ "Can't chunk byteranges",
	/* 121 */ "Syntactically incorrect Range: header",
	/* 122 */ "Can't create temp directory %.100s\n",
	/* 123 */ "Outdated MD5 digest suppressed; cachefile",
	/* 124 */ "Request URI Too Long",
	/* 125 */ "HTTP version not supported",
	/* 126 */ "Request entity too large",
	/* 127 */ "Authentication required for PUT",
	/* 128 */ "String truncated",
	/* 129 */ "Parameters not allowed with CGI",
	/* 130 */ "Line too long",
	/* 131 */ "PUT, DELETE, or MOVE without put-authentication module",
	/* 132 */ "PUT, DELETE, or MOVE without -P option, put attribute, or no phandler",
	/* 133 */ "Range seek failed",
	/* 134 */ "Strict security; file cannot be writable by server:",
	/* 135 */ "Unknown log type %.32s\n",
	/* 136 */ "Unknown method for do_post",
	/* 137 */ "Can't execute cookie generating script:",
	/* 138 */ "wnssl: cannot open public cert file:",
	/* 139 */ "wnssl: cannot open private key file:",
	/* 140 */ "wnssl: error reading private key:",
	/* 141 */ "wnssl: error reading public cert:",
	/* 142 */ "wnssl: SSL nExport error:",
	/* 143 */ "wnssl: keylength error:",
	/* 144 */ "wnssl: SSL_CTX_set_default_verify_paths failed",
	/* 145 */ "User directories not allowed for this host",
	/* 146 */ "Suexec with missing user or group",
	/* 147 */ "Can't successfully write suexec key file",
	/* 148 */ "dup2 failed",
	/* 149 */ "cachefile_list is owned by or writable by server uid",
	/* 150 */ "SUEXEC executable failed",
 	/* 151 */ "wnssl: cannot open chain file:",
 	/* 152 */ "If the file doesn't exist the directory must be writable by the server.",
	/* 153 */ "TRACE method disabled."
};

WN_CONST
char * WN_CONST log_m[] = {
	/* 0 */ "",
	/* 1 */ "Sent Authorization request",
	/* 2 */ "Sent cache query",
	/* 3 */ "Successful cache search",
	/* 4 */ "Unsuccessful search",
	/* 5 */ "Sent 304 - not modified",
	/* 6 */ "Sent HTTP header",
	/* 7 */ "Sent CGI output [nph]",
	/* 8 */ "Sent CGI output",
	/* 9 */ "Sent redirection",
	/* 10 */ "Sent grep search",
	/* 11 */ "Sent index search",
	/* 12 */ "CGI redirect to ",
	/* 13 */ "Sent file",
	/* 14 */ "Sent HTTP/1.0 header and info",
	/* 15 */ "Sent imagemap referral",
	/* 16 */ "Sent 204 no response",
	/* 17 */ "Sent nomatchsub",
	/* 18 */ "Client broke connection",
	/* 19 */ "Client closed connection, pid=%d,  wait=%d ",
	/* 20 */ "PID %d got null or error read (%d) ",
	/* 21 */ "Sent TRACE; host",
	/* 22 */ "Sent HTTP OPTIONS",
	/* 23 */ "Sent byte range"
};
