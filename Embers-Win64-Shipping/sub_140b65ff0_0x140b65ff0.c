// 函数: sub_140b65ff0
// 地址: 0x140b65ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5c8
int64_t rax_1 = __security_cookie ^ &var_5c8
enum PROCESS_CREATION_FLAGS dwCreationFlags_1 = NORMAL_PRIORITY_CLASS
SECURITY_ATTRIBUTES var_568
var_568.nLength = 0x18
var_568.lpSecurityDescriptor = 0
var_568.bInheritHandle = 1
enum PROCESS_CREATION_FLAGS dwCreationFlags_2
bool cond:1_1

if (arg8 s< 0)
    dwCreationFlags_1 = IDLE_PRIORITY_CLASS
    dwCreationFlags_2 = BELOW_NORMAL_PRIORITY_CLASS
    cond:1_1 = arg8 == 0xffffffff
label_140b66084:
    
    if (cond:1_1)
        dwCreationFlags_1 = dwCreationFlags_2
else if (arg8 s> 0)
    dwCreationFlags_1 = HIGH_PRIORITY_CLASS
    dwCreationFlags_2 = ABOVE_NORMAL_PRIORITY_CLASS
    cond:1_1 = arg8 == 1
    goto label_140b66084
int16_t rcx_1 = 0
enum PROCESS_CREATION_FLAGS dwCreationFlags = dwCreationFlags_1 | DETACHED_PROCESS

if (arg4 == 0)
    dwCreationFlags = dwCreationFlags_1

int32_t rax_2 = 0

if (arg6 != 0)
    rax_2 = 1
else if (arg5 != 0)
    rcx_1 = 7
    rax_2 = 1

if (arg10 != 0 || arg11 != 0)
    rax_2 |= 0x100

STARTUPINFOW startupInfo
startupInfo.wShowWindow = rcx_1
startupInfo.hStdInput = arg11
startupInfo.hStdOutput = arg10
startupInfo.hStdError = arg10
startupInfo.lpDesktop = 0
startupInfo.lpTitle = 0
startupInfo.cb = 0x68
startupInfo.lpReserved = 0
startupInfo.dwX = 0x80000000
startupInfo.dwY = 0x80000000
startupInfo.dwXSize = 0x80000000
startupInfo.dwYSize = 0x80000000
startupInfo.dwXCountChars = 0
startupInfo.dwYCountChars = 0
startupInfo.dwFillAttribute = 0
startupInfo.dwFlags = rax_2
startupInfo.cbReserved2 = 0
startupInfo.lpReserved2 = 0
PWSTR lpCommandLine
sub_140a2e390(&lpCommandLine, u""%s" %s", arg2)
PROCESS_INFORMATION processInformation

if (CreateProcessW(nullptr, lpCommandLine, &var_568, &var_568, 1, dwCreationFlags, 0, arg9, 
        &startupInfo, &processInformation) != 0)
    if (arg7 != 0)
        *arg7 = processInformation.dwProcessId
    
    CloseHandle(processInformation.hThread)
    *arg1 = processInformation.hProcess
else
    enum WIN32_ERROR dwMessageId = GetLastError()
    wchar16 string[0x200]
    string[0] = 0
    enum WIN32_ERROR dwMessageId_1 = dwMessageId
    
    if (dwMessageId == NO_ERROR)
        dwMessageId = GetLastError()
    
    BOOL lpBuffer
    lpBuffer.q = &string
    FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM, nullptr, dwMessageId, 0x400, lpBuffer, 0x200, 
        nullptr)
    wchar16* rax_4 = wcschr(&string, 0xd)
    
    if (rax_4 != 0)
        *rax_4 = 0
    
    wchar16* rax_5 = wcschr(&string, 0xa)
    
    if (rax_5 != 0)
        *rax_5 = 0
    
    void var_4b8
    
    if (dwMessageId_1 == ERROR_NOT_ENOUGH_MEMORY || dwMessageId_1 == ERROR_OUTOFMEMORY)
        sub_140b6c480(&var_4b8)
    
    if (arg7 != 0)
        *arg7 = 0
    
    *arg1 = 0

PWSTR lpCommandLine_1 = lpCommandLine

if (lpCommandLine_1 != 0)
    sub_140a74f90(lpCommandLine_1)

__security_check_cookie(rax_1 ^ &var_5c8)
return arg1
