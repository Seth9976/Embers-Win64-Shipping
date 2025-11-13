// 函数: sub_142a31a80
// 地址: 0x142a31a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = sx.d(arg1[1])
int32_t r8 = sx.d(arg1[7])
int32_t rdx = sx.d(arg1[3])
int32_t rcx_2 = sx.d(arg1[5])
int32_t rdx_1 = sx.d(*arg1)
int16_t rbp_3 = ((r9 * 0xc7c - r8 * 0x3ec5 + 0x2000) s>> 0xe).w
int16_t rbx_2 = ((r9 * 0x3ec5 + r8 * 0xc7c + 0x2000) s>> 0xe).w
int32_t rcx_5 = sx.d(arg1[4])
int16_t r9_4 = ((rcx_2 * 0x3537 - rdx * 0x238e + 0x2000) s>> 0xe).w
int16_t r14_2 = ((rdx * 0x3537 + rcx_2 * 0x238e + 0x2000) s>> 0xe).w
int32_t rcx_6 = sx.d(arg1[6])
int16_t r11 = r9_4 + rbp_3
int32_t rdx_3 = sx.d(arg1[2])
int16_t rsi_2 = (((rdx_1 + rcx_5) * 0x2d41 + 0x2000) s>> 0xe).w
int16_t rdi_2 = (((rdx_1 - rcx_5) * 0x2d41 + 0x2000) s>> 0xe).w
int16_t rax_4 = rbx_2 - r14_2
int16_t r8_4 = ((rdx_3 * 0x187e - rcx_6 * 0x3b21 + 0x2000) s>> 0xe).w
int16_t rdx_6 = ((rdx_3 * 0x3b21 + rcx_6 * 0x187e + 0x2000) s>> 0xe).w
r14_2 += rbx_2
int32_t rcx_9 = sx.d(rbp_3 - r9_4)
int16_t r9_5 = rdi_2 + r8_4
rdi_2 -= r8_4
int16_t r10_1 = rsi_2 + rdx_6
rsi_2 -= rdx_6
int32_t rdx_7 = sx.d(rax_4)
*arg2 = r10_1 + r14_2
int16_t r8_7 = (((rdx_7 - rcx_9) * 0x2d41 + 0x2000) s>> 0xe).w
int16_t rcx_12 = (((rcx_9 + rdx_7) * 0x2d41 + 0x2000) s>> 0xe).w
arg2[1] = r9_5 + rcx_12
arg2[2] = rdi_2 + r8_7
int16_t result = rsi_2 + r11
arg2[5] = rdi_2 - r8_7
arg2[3] = result
arg2[4] = rsi_2 - r11
arg2[7] = r10_1 - r14_2
arg2[6] = r9_5 - rcx_12
return result
