// 函数: sub_142b1e120
// 地址: 0x142b1e120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_2 = (arg1 - 0xac00) s/ 0x1c
int32_t rax_2 = r8_2 * 0x1c
int16_t rcx_1 = (arg1 - 0xac00).w - rax_2.w

if (arg1 - 0xac00 != rax_2)
    *arg2 = arg1.w - rcx_1
    arg2[1] = rcx_1 + 0x11a7
    return 0x11a7

int16_t rdx_3 = (r8_2 s/ 0x15).w
*arg2 = 0x1100 + rdx_3
r8_2.w -= rdx_3 * 0x15
r8_2.w += 0x1161
arg2[1] = r8_2.w
return 0x1161
