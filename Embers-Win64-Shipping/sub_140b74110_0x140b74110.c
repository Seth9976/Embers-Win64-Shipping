// 函数: sub_140b74110
// 地址: 0x140b74110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
OSVERSIONINFOEXW versionInformation
versionInformation.dwMajorVersion = arg1
versionInformation.dwMinorVersion = arg2
versionInformation.dwOSVersionInfoSize = 0x11c
BOOL result
result.b = VerifyVersionInfoW(&versionInformation, VER_MINORVERSION | VER_MAJORVERSION, 
    VerSetConditionMask(VerSetConditionMask(0, VER_MAJORVERSION, 3), VER_MINORVERSION, 3)) != 0
__security_check_cookie(rax_1 ^ &var_158)
return result
