// 函数: sub_1410ee4e0
// 地址: 0x1410ee4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10_1 = (arg2 u>> 4).d
uint32_t rax_1 = r10_1 << 8

if (data_1439b5598 == 0)
    uint32_t r11_8 = (arg3 u>> 4).d
    int32_t r8_2 = (0x9e3779b9 - r10_1) ^ rax_1
    int32_t rdx_11 = neg.d(r8_2 + r10_1) ^ r8_2 u>> 0xd
    int32_t r10_10 = (r10_1 - r8_2 - rdx_11) ^ rdx_11 u>> 0xc
    int32_t r8_5 = (r8_2 - r10_10 - rdx_11) ^ r10_10 << 0x10
    int32_t rdx_14 = (rdx_11 - r8_5 - r10_10) ^ r8_5 u>> 5
    int32_t r10_13 = (r10_10 - r8_5 - rdx_14) ^ rdx_14 u>> 3
    int32_t r8_8 = (r8_5 - r10_13 - rdx_14) ^ r10_13 << 0xa
    int32_t rbx_9 = (0x9e3779b9 - r11_8) ^ r11_8 << 8
    int32_t rcx_16 = neg.d(rbx_9 + r11_8) ^ rbx_9 u>> 0xd
    int32_t r11_11 = (r11_8 - rbx_9 - rcx_16) ^ rcx_16 u>> 0xc
    int32_t rbx_12 = (rbx_9 - r11_11 - rcx_16) ^ r11_11 << 0x10
    int32_t rcx_19 = (rcx_16 - rbx_12 - r11_11) ^ rbx_12 u>> 5
    int32_t r11_14 = (r11_11 - rbx_12 - rcx_19) ^ rcx_19 u>> 3
    int32_t rbx_15 = (rbx_12 - r11_14 - rcx_19) ^ r11_14 << 0xa
    return (zx.q(rcx_19 - rbx_15 - r11_14) << 0xf ^ (zx.q(rbx_15) & 0xffffffffffff8000)) << 0x11
        | (zx.q(rdx_14 - r8_8 - r10_13) ^ zx.q(r8_8) u>> 0xf)

uint32_t r11_1 = (arg3 u>> 4).d
int32_t r9_1 = (0x9e3779b9 - r10_1) ^ rax_1
int32_t rdx_2 = neg.d(r9_1 + r10_1) ^ r9_1 u>> 0xd
int32_t r10_4 = (r10_1 - r9_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r9_4 = (r9_1 - r10_4 - rdx_2) ^ r10_4 << 0x10
int32_t rdx_5 = (rdx_2 - r9_4 - r10_4) ^ r9_4 u>> 5
int32_t r10_7 = (r10_4 - r9_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r9_7 = (r9_4 - r10_7 - rdx_5) ^ r10_7 << 0xa
int32_t rbx_1 = (0x9e3779b9 - r11_1) ^ r11_1 << 8
int32_t rcx_2 = neg.d(rbx_1 + r11_1) ^ rbx_1 u>> 0xd
int32_t r11_4 = (r11_1 - rbx_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t rbx_4 = (rbx_1 - r11_4 - rcx_2) ^ r11_4 << 0x10
int32_t rcx_5 = (rcx_2 - rbx_4 - r11_4) ^ rbx_4 u>> 5
int32_t r11_7 = (r11_4 - rbx_4 - rcx_5) ^ rcx_5 u>> 3
int32_t rbx_7 = (rbx_4 - r11_7 - rcx_5) ^ r11_7 << 0xa
int64_t rcx_10 = 0

if (arg1 == 1)
    rcx_10 = 0x800000000000

return ((((zx.q(rcx_5 - rbx_7 - r11_7) << 0xf ^ (zx.q(rbx_7) & 0xffffffffffff8000))
    & 0x7fffffffffff) | rcx_10) * 2)
    | (zx.q(rdx_5.w - r9_7.w - r10_7.w) ^ zx.q((zx.q(r9_7) u>> 0xf).w))
