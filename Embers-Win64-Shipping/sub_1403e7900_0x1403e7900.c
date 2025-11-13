// 函数: sub_1403e7900
// 地址: 0x1403e7900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
int32_t r11 = arg3 - 0x10000

if (arg2 - 1 s> 0)
    do
        int32_t rax = sx.d(*(arg1 + (i << 1)))
        i += 1
        *(arg1 + (i << 1) - 2) = ((((rax * arg3) s>> 0xf) + 1) s>> 1).w
        arg3 += (((r11 * arg3) s>> 0xf) + 1) s>> 1
    while (i s< sx.q(arg2 - 1))

void* rcx = arg1 + (sx.q(arg2) << 1)
int16_t result = ((((sx.d(*(rcx - 2)) * arg3) s>> 0xf) + 1) s>> 1).w
*(rcx - 2) = result
return result
