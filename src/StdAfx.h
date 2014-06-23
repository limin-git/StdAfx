// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

// TODO: reference additional headers your program requires here

#define WINVER 0x0601

#define WIN32_LEAN_AND_MEAN
#define NOGDICAPMASKS
#define NOVIRTUALKEYCODES
#define NOWINMESSAGES
#define NOWINSTYLES
#define NOSYSMETRICS
#define NOMENUS
#define NOICONS
#define NOKEYSTATES
#define NOSYSCOMMANDS
#define NORASTEROPS
#define NOSHOWWINDOW
#define OEMRESOURCE
#define NOATOM
#define NOCLIPBOARD
#define NOCOLOR
#define NOCTLMGR
#define NODRAWTEXT
#define NOGDI
#define NOKERNEL
#define NOUSER
#define __NONLS
#define NOMB
#define NOMEMMGR
#define NOMETAFILE
#define NOMINMAX
#define NOMSG
#define NOOPENFILE
#define NOSCROLL
#define NOSERVICE
#define NOSOUND
#define NOTEXTMETRIC
#define NOWH
#define NOWINOFFSETS
#define NOCOMM
#define NOKANJI
#define NOHELP
#define NOPROFILER
#define NODEFERWINDOWPOS
#define NOMCX


// std
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>

#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <deque>
#include <stack>

#include <exception>
#include <memory>
#include <algorithm>
#include <utility>

#include <cassert>
#include <cstdarg>
#include <ctime>
#include <cstdlib>
#include <cstdio>

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>
#include <tchar.h>

#include <sys/timeb.h>
#include <sys/types.h>

// boost
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/algorithm/string/find.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/algorithm/string/regex.hpp>
#include <boost/algorithm/string/replace.hpp>
#include <boost/algorithm/string/trim.hpp>
#include <boost/filesystem.hpp>
#include "boost/filesystem/path.hpp"
#include <boost/progress.hpp>
#include <boost/regex.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/timer.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/tokenizer.hpp>
#include <boost/unordered/unordered_map.hpp>
#include <boost/unordered/unordered_set.hpp>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/ordered_index.hpp>

// MFC
#include <Windows.h>
#include <WindowsX.h>

// Thrid-Part
#include "Console.h"
