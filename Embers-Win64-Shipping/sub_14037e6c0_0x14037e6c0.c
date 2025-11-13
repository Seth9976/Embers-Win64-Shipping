// 函数: sub_14037e6c0
// 地址: 0x14037e6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 8)
int32_t rdi = 0
int64_t rbp = sx.q(arg3)
int64_t r11 = 0

if (rsi s<= 0)
    return 

do
    int64_t rax_2 = *(arg1 + 0x20)
    rdi += 1
    int32_t rdx = sx.d(*(rax_2 + (r11 << 1) + 2))
    int16_t* rcx = rax_2 + (r11 << 1)
    r11 += 1
    int32_t r8_2 = (zx.d(
        *(sx.q(rsi) * ((rbp << 1) + -ffffffffffffffff + sx.q(arg4)) + *(arg1 + 0x98) + r11 - 1)) + 0x40)
        * ((rdx - sx.d(*rcx)) << rbp.b)
    *(arg2 + (r11 << 2) - 4) = (r8_2 * arg4) s>> 2
    rsi = *(arg1 + 8)
while (rdi s< rsi)
