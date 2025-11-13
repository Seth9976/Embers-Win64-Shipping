// 函数: sub_142c87750
// 地址: 0x142c87750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char* lpSrc = getenv(arg1)
uint8_t dst[0x110]
dst[0] = 0

if (lpSrc != 0)
    ExpandEnvironmentStringsA(lpSrc, &dst, 0x104)
    
    if (dst[0] != 0)
        int64_t result = data_143ccb8b0(&dst)
        __security_check_cookie(rax_1 ^ &var_148)
        return result

__security_check_cookie(rax_1 ^ &var_148)
return 0
