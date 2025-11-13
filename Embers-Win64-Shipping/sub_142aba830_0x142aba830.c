// 函数: sub_142aba830
// 地址: 0x142aba830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 1) != 0)
    return *(arg2 + 8) & 1

int16_t rax_1 = *(arg1 + 8)
int32_t r8_1

if (rax_1 s< 0)
    r8_1 = *(arg1 + 0xc)
else
    r8_1 = sx.d(rax_1) s>> 5

int16_t rax_2 = *(arg2 + 8)
int32_t result

if (rax_2 s< 0)
    result = *(arg2 + 0xc)
else
    result = sx.d(rax_2) s>> 5

if ((*(arg2 + 8) & 1) == 0 && r8_1 == result && sub_142a490e0(arg1, arg2, r8_1).b != 0)
    result.b = 1
    return result

result.b = 0
return result
