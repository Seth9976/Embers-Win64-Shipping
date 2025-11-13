// 函数: sub_140b6c290
// 地址: 0x140b6c290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int16_t* systemTime
sub_140b74300(arg1, &systemTime, arg3, 1)
int16_t* const lpFileName = &data_142d40450
int32_t var_78

if (var_78 != 0)
    lpFileName = systemTime

int32_t fileInformation
BOOL rax_2 = GetFileAttributesExW(lpFileName, GetFileExInfoStandard, &fileInformation)
int16_t* systemTime_3 = systemTime

if (systemTime_3 != 0)
    sub_140a74f90(systemTime_3)

int64_t rsi = -1

if (rax_2 == 0)
    __builtin_memset(arg2, 0, 0x18)
    arg2[4].b &= 0xf8
else
    uint8_t r14_2 = (fileInformation u>> 4).b & 1
    int32_t var_98
    
    if (r14_2 == 0)
        int32_t var_34
        int32_t var_94_1 = var_34
        int32_t var_30
        var_98 = var_30
        rsi = var_98.q
    
    int64_t rbx_1 = 0
    int64_t var_90
    SYSTEMTIME systemTime_1
    FILETIME fileTime_2
    
    if (FileTimeToSystemTime(&fileTime_2, &systemTime_1) == 0)
        var_90 = 0
    else
        sub_140b0a2c0(&var_90, zx.d(systemTime_1.wYear), zx.d(systemTime_1.wMonth), 
            zx.d(systemTime_1.wDay), zx.d(systemTime_1.wHour), zx.d(systemTime_1.wMinute), 
            zx.d(systemTime_1.wSecond), 0)
    
    SYSTEMTIME systemTime_2
    FILETIME fileTime_1
    
    if (FileTimeToSystemTime(&fileTime_1, &systemTime_2) == 0)
        var_98.q = 0
    else
        sub_140b0a2c0(&var_98, zx.d(systemTime_2.wYear), zx.d(systemTime_2.wMonth), 
            zx.d(systemTime_2.wDay), zx.d(systemTime_2.wHour), zx.d(systemTime_2.wMinute), 
            zx.d(systemTime_2.wSecond), 0)
    
    FILETIME fileTime
    
    if (FileTimeToSystemTime(&fileTime, &systemTime) != 0)
        int64_t var_88
        int16_t var_74
        sub_140b0a2c0(&var_88, zx.d(systemTime.w), zx.d(systemTime:2.w), zx.d(systemTime:6.w), 
            zx.d(var_78.w), zx.d(var_78:2.w), zx.d(var_74), 0)
        rbx_1 = var_88
    
    arg2[4].b &= 0xfe
    char rdx_7 = (arg2[4].b | r14_2) & 0xfd
    char rcx_9 = (fileInformation.b & 1) | 2
    arg2[1] = var_98.q
    int64_t rax_12 = var_90
    *arg2 = rbx_1
    arg2[4].b = rdx_7 | (rcx_9 * 2)
    arg2[2] = rax_12

arg2[3] = rsi
__security_check_cookie(rax_1 ^ &var_d8)
return arg2
