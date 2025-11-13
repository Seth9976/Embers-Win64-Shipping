// 函数: sub_142ab1c40
// 地址: 0x142ab1c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
GetLocaleInfoEx(arg2, 0x20000011, arg1, 4)
GetLocaleInfoEx(arg2, 0x20000012, &arg1[2], 4)
wchar16 lCData[0xc]
GetLocaleInfoEx(arg2, 0x10, &lCData, 0xa)
wchar16 i = lCData[0]
wchar16 (* r8_3)[0xc] = &lCData
uint64_t rax_2 = 0

while (i != 0)
    if (i - 0x31 u<= 7)
        rax_2 = zx.q(zx.d(i) + ((rax_2 * 5).d << 1) - 0x30)
    else if (i != 0x3b)
        break
    
    i = (*r8_3)[1]
    r8_3 = &(*r8_3)[1]

if (*r8_3 != 0x30)
    rax_2 = zx.q((rax_2 * 5).d * 2)

*(arg1 + 8) = rax_2.d
wchar16* lpLCData = sub_142a7dd00(0xc)
*(arg1 + 0x10) = lpLCData
GetLocaleInfoEx(arg2, 0xe, lpLCData, 6)
wchar16* lpLCData_1 = sub_142a7dd00(0xc)
*(arg1 + 0x18) = lpLCData_1
GetLocaleInfoEx(arg2, 0xf, lpLCData_1, 6)
int64_t result = GetLocaleInfoEx(arg2, 0x20001010, &arg1[0x10], 4)
__security_check_cookie(rax_1 ^ &var_48)
return result
