// 函数: sub_140e3dc20
// 地址: 0x140e3dc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = sx.d(arg2[1])
int32_t rax = sx.d(arg2[2])
int32_t r9 = rax * 0x1151
int32_t r14_1 = sx.d(*arg2) << 0xd
int32_t r11 = r10 * 0xffffe333
int32_t r8_1 = rax * 0x187e + r9
int32_t r15_1 = r14_1 - r8_1
int32_t rbp = r14_1 + r9
int32_t rdi = r14_1 + r8_1
int32_t r8_2 = sx.d(arg2[3])
int32_t r14_2 = r14_1 - r9
int32_t rdx = r8_2 * 0xffffadfd
int32_t r9_1 = (r10 + r8_2) * 0x25a1
int32_t rcx_1 = r9_1 - r8_2 * 0x3ec5
int32_t r8_5 = r8_2 * 0x6254 + rcx_1 + rdx
int32_t rsi = rcx_1 + r11
int32_t r9_2 = r9_1 - r10 * 0xc7c
int32_t rbx = r9_2 + rdx
int32_t rcx_4 = r10 * 0x300b + r9_2 + r11
*arg1 = (rdi + 0x400 + rcx_4) s>> 0xb
arg1[1] = (rbp + 0x400 + r8_5) s>> 0xb
arg1[7] = (rdi - rcx_4 + 0x400) s>> 0xb
arg1[2] = (r14_2 + 0x400 + rbx) s>> 0xb
int32_t result = (r15_1 + 0x400 + rsi) s>> 0xb
arg1[6] = (rbp - r8_5 + 0x400) s>> 0xb
arg1[4] = (r15_1 - rsi + 0x400) s>> 0xb
arg1[5] = (r14_2 - rbx + 0x400) s>> 0xb
arg1[3] = result
return result
