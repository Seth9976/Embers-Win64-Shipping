// 函数: sub_141090f30
// 地址: 0x141090f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = (arg4 u>> 4).d
uint32_t r8 = (arg3 u>> 4).d
int32_t r11_1 = (0x9e3779b9 - r8) ^ r8 << 8
int32_t rdx_2 = neg.d(r11_1 + r8) ^ r11_1 u>> 0xd
int32_t r8_3 = (r8 - r11_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r11_4 = (r11_1 - r8_3 - rdx_2) ^ r8_3 << 0x10
int32_t rdx_5 = (rdx_2 - r11_4 - r8_3) ^ r11_4 u>> 5
int32_t r8_6 = (r8_3 - r11_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r11_7 = (r11_4 - r8_6 - rdx_5) ^ r8_6 << 0xa
int32_t r10_1 = (0x9e3779b9 - r9) ^ r9 << 8
int32_t rcx_2 = neg.d(r10_1 + r9) ^ r10_1 u>> 0xd
int32_t r9_3 = (r9 - r10_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r10_4 = (r10_1 - r9_3 - rcx_2) ^ r9_3 << 0x10
int32_t rcx_5 = (rcx_2 - r10_4 - r9_3) ^ r10_4 u>> 5
int32_t r9_6 = (r9_3 - r10_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r10_7 = (r10_4 - r9_6 - rcx_5) ^ r9_6 << 0xa
int64_t r9_12 = (((zx.q(rcx_5 - r10_7 - r9_6) << 0xf ^ (zx.q(r10_7) & 0xffffffffffff8000))
    & 0x7fffffffffff) * 2) | (zx.q(rdx_5.w - r11_7.w - r8_6.w) ^ zx.q((zx.q(r11_7) u>> 0xf).w))
int64_t rax_33 = 0

if (arg1 == 0)
    if (arg2 == 1)
        rax_33 = 0x1000000000000
    
    return rax_33 | r9_12

if (arg2 != 1)
    rax_33 = 0x1000000000000

return rax_33 | r9_12
