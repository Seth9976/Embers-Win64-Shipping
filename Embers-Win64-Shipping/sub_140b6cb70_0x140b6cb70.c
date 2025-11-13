// 函数: sub_140b6cb70
// 地址: 0x140b6cb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int16_t* systemTime
sub_140b74300(arg1, &systemTime, arg3, 1)
int16_t* const lpFileName = &data_142d40450
int32_t var_40

if (var_40 != 0)
    lpFileName = systemTime

void fileInformation
BOOL rax_2 = GetFileAttributesExW(lpFileName, GetFileExInfoStandard, &fileInformation)
int16_t* systemTime_1 = systemTime

if (systemTime_1 != 0)
    sub_140a74f90(systemTime_1)

BOOL rax_3
FILETIME fileTime[0x2]

if (rax_2 != 0)
    rax_3 = FileTimeToSystemTime(&fileTime, &systemTime)
int16_t var_3c

if (rax_2 == 0 || rax_3 == 0)
    *arg2 = 0
else
    sub_140b0a2c0(arg2, zx.d(systemTime.w), zx.d(systemTime:2.w), zx.d(systemTime:6.w), 
        zx.d(var_40.w), zx.d(var_40:2.w), zx.d(var_3c), 0)
__security_check_cookie(rax_1 ^ &var_88)
return arg2
