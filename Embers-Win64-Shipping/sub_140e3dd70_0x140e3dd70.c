// 函数: sub_140e3dd70
// 地址: 0x140e3dd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = sx.d(arg2[2])
int32_t r8 = sx.d(arg2[6])
int32_t r12 = sx.d(*arg2)
int32_t rsi = sx.d(arg2[1])
int32_t r9 = (r8 + r10) * 0x1151
int32_t r10_1 = sx.d(arg2[5])
int32_t r11_1 = r9 - r8 * 0x3b21
int32_t rax_2 = sx.d(arg2[4])
int32_t r8_2 = r10 * 0x187e + r9
int32_t r12_2 = (r12 - rax_2) << 0xd
int32_t r13_1 = (r12 + rax_2) << 0xd
int32_t r15 = r12_2 + r11_1
int32_t r12_3 = r12_2 - r11_1
int32_t r11_2 = sx.d(arg2[3])
int32_t r14 = r8_2 + r13_1
int32_t r13_2 = r13_1 - r8_2
int32_t r8_3 = sx.d(arg2[7])
int32_t rdx = rsi + r10_1
int32_t rcx = r11_2 + r8_3
int32_t rdi = (rdx + rcx) * 0x25a1
int32_t rbx = (rsi + r8_3) * 0xffffe333
int32_t r9_1 = (r11_2 + r10_1) * 0xffffadfd
int32_t rcx_2 = rdi - rcx * 0x3ec5
int32_t rbp_2 = r8_3 * 0x98e + rcx_2 + rbx
int32_t rdi_1 = rdi - rdx * 0xc7c
int32_t r8_6 = r10_1 * 0x41b3 + rdi_1 + r9_1
int32_t rdx_3 = r11_2 * 0x6254 + rcx_2 + r9_1
int32_t rcx_5 = rsi * 0x300b + rdi_1 + rbx
*arg1 = (r14 + 0x400 + rcx_5) s>> 0xb
arg1[1] = (r15 + 0x400 + rdx_3) s>> 0xb
arg1[7] = (r14 - rcx_5 + 0x400) s>> 0xb
arg1[2] = (r12_3 + 0x400 + r8_6) s>> 0xb
arg1[6] = (r15 - rdx_3 + 0x400) s>> 0xb
int32_t result = (r13_2 + 0x400 + rbp_2) s>> 0xb
arg1[5] = (r12_3 - r8_6 + 0x400) s>> 0xb
arg1[4] = (r13_2 - rbp_2 + 0x400) s>> 0xb
arg1[3] = result
return result
