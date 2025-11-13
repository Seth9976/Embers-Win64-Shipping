// 函数: sub_142c4ad10
// 地址: 0x142c4ad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
HLOCAL lpLibFileName = arg1
int32_t rcx = data_14401aad8
enum LOAD_LIBRARY_FLAGS dwFlags = arg2 & 0xffffe0f7
HLOCAL hMem = nullptr

if (rcx == 0)
    uint64_t dwlConditionMask = VerSetConditionMask(0, VER_BUILDNUMBER, 3)
    OSVERSIONINFOEXW versionInformation
    memset(&versionInformation, 0, 0x11c)
    versionInformation.dwBuildNumber = 0x23f0
    rcx = 0x1db0
    
    if (VerifyVersionInfoW(&versionInformation, VER_BUILDNUMBER, dwlConditionMask) != 0)
        rcx = 0x23f0
    
    data_14401aad8 = rcx

if (rcx u< 0x23f0)
    hMem = sub_142c49830(lpLibFileName)
else
    dwFlags |= LOAD_LIBRARY_SEARCH_SYSTEM32

if (hMem != 0)
    lpLibFileName = hMem

HMODULE result = LoadLibraryExW(lpLibFileName, nullptr, dwFlags)
LocalFree(hMem)
__security_check_cookie(rax_1 ^ &var_168)
return result
