// 函数: sub_140b72e60
// 地址: 0x140b72e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int16_t* lpFileName_1
sub_140b74300(arg1, &lpFileName_1, arg2, 1)
int16_t* const lpFileName = &data_142d40450
int16_t rbx = 1
int32_t var_40

if (var_40 != 0)
    lpFileName = lpFileName_1

HANDLE result =
    CreateFileW(lpFileName, 0x100, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 0x40000080, nullptr)
int16_t* lpFileName_2 = lpFileName_1
HANDLE result_1 = result

if (lpFileName_2 != 0)
    result = sub_140a74f90(lpFileName_2)

if (result_1 != -1)
    SYSTEMTIME systemTime
    systemTime.wYear = sub_140b1b790(&arg_18)
    systemTime.wMonth = sub_140b1a320(&arg_18)
    systemTime.wDay = sub_140b19270(&arg_18)
    
    switch (sub_140b19350(&arg_18))
        case 0
            nop
        case 1
            rbx = 2
        case 2
            rbx = 3
        case 3
            rbx = 4
        case 4
            rbx = 5
        case 5
            rbx = 6
        default
            rbx = 0
    
    int64_t rcx_6 = arg_18
    systemTime.wDayOfWeek = rbx
    systemTime.wMilliseconds = 0
    int64_t temp0_1 = divs.dp.q(sx.o(rcx_6), 0x861c46800)
    systemTime.wHour = temp0_1.w - (temp0_1 s/ 0x18 * 0x18).w
    systemTime.wMinute = (rcx_6 s/ 0x23c34600 s% 0x3c).w
    systemTime.wSecond = (rcx_6 s/ 0x989680 s% 0x3c).w
    FILETIME fileTime
    SystemTimeToFileTime(&systemTime, &fileTime)
    int64_t rax_23
    rax_23.d = fileTime.dwLowDateTime
    rax_23:4.d = fileTime.dwHighDateTime
    FILETIME lastWriteTime
    lastWriteTime.dwLowDateTime = rax_23.d
    lastWriteTime.dwHighDateTime = rax_23:4.d
    SetFileTime(result_1, nullptr, nullptr, &lastWriteTime)
    result = CloseHandle(result_1)

__security_check_cookie(rax_1 ^ &var_98)
return result
