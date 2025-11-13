// 函数: sub_142c877f0
// 地址: 0x142c877f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
wchar16* lpUnicodeCharStr = sub_142c90ed0(arg1)
wchar16 aSCIICharStr[0x100]
int32_t rax_2

if (lpUnicodeCharStr != 0)
    rax_2 = IdnToAscii(0, lpUnicodeCharStr, 0xffffffff, &aSCIICharStr, 0xff)
    data_143ccb8a0(lpUnicodeCharStr)

uint64_t result

if (lpUnicodeCharStr == 0 || rax_2 == 0)
    result = 0
else
    PSTR rax_3 = sub_142c90f80(&aSCIICharStr)
    char result_1 = 0
    *arg2 = rax_3
    
    if (rax_3 != 0)
        result_1 = 1
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_258)
return result
