// 函数: sub_140d7dde0
// 地址: 0x140d7dde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
var_12c
memset(&var_12c, 0, 0x110)
OSVERSIONINFOEXW versionInformation
versionInformation.dwMajorVersion = 6
versionInformation.dwMinorVersion = 2
versionInformation.dwOSVersionInfoSize = 0x11c
int32_t rcx_3
rcx_3.b = VerifyVersionInfoW(&versionInformation, VER_MINORVERSION | VER_MAJORVERSION, 
    VerSetConditionMask(VerSetConditionMask(0, VER_MAJORVERSION, 3), VER_MINORVERSION, 3)) != 0
__security_check_cookie(rax_1 ^ &var_158)
return zx.q(rcx_3)
