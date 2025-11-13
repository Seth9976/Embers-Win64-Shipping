// 函数: sub_1417877c0
// 地址: 0x1417877c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *arg2
int64_t result = sx.q(arg2[1].d)
void* r11 = r10 + result * 0xc

while (r10 != r11)
    int32_t r9_1 = r10[1].d
    int64_t zmm0 = *r10
    int32_t rdx_4 = ((zmm0 u>> 0x20).d - r9_1) ^ r9_1 u>> 0xd
    int32_t rcx_2 = (0x9e3779b9 - r9_1 - rdx_4) ^ rdx_4 << 8
    int32_t r9_4 = (r9_1 - rcx_2 - rdx_4) ^ rcx_2 u>> 0xd
    int32_t rdx_7 = (rdx_4 - rcx_2 - r9_4) ^ r9_4 u>> 0xc
    int32_t rcx_5 = (rcx_2 - rdx_7 - r9_4) ^ rdx_7 << 0x10
    int32_t r9_7 = (r9_4 - rcx_5 - rdx_7) ^ rcx_5 u>> 5
    int32_t rdx_10 = (rdx_7 - rcx_5 - r9_7) ^ r9_7 u>> 3
    int32_t rcx_8 = (rcx_5 - rdx_10 - r9_7) ^ rdx_10 << 0xa
    int32_t r9_10 = (r9_7 - rcx_8 - rdx_10) ^ rcx_8 u>> 0xf
    int32_t rdx_13 = (zmm0.d - r9_10) ^ r9_10 u>> 0xd
    int32_t rcx_12 = (0x9e3779b9 - rdx_13 - r9_10) ^ rdx_13 << 8
    int32_t r9_13 = (r9_10 - rcx_12 - rdx_13) ^ rcx_12 u>> 0xd
    int32_t rdx_16 = (rdx_13 - rcx_12 - r9_13) ^ r9_13 u>> 0xc
    int32_t rcx_15 = (rcx_12 - rdx_16 - r9_13) ^ rdx_16 << 0x10
    int32_t r9_16 = (r9_13 - rcx_15 - rdx_16) ^ rcx_15 u>> 5
    int32_t* r8_1 = *arg1
    r10 += 0xc
    int32_t rdx_19 = (rdx_16 - rcx_15 - r9_16) ^ r9_16 u>> 3
    int32_t rcx_18 = (rcx_15 - rdx_19 - r9_16) ^ rdx_19 << 0xa
    int32_t r9_19 = (r9_16 - rcx_18 - rdx_19) ^ rcx_18 u>> 0xf
    int32_t rdx_22 = (*r8_1 - r9_19) ^ r9_19 u>> 0xd
    int32_t rcx_22 = (0x9e3779b9 - rdx_22 - r9_19) ^ rdx_22 << 8
    int32_t r9_22 = (r9_19 - rcx_22 - rdx_22) ^ rcx_22 u>> 0xd
    int32_t rdx_25 = (rdx_22 - rcx_22 - r9_22) ^ r9_22 u>> 0xc
    int32_t rcx_25 = (rcx_22 - rdx_25 - r9_22) ^ rdx_25 << 0x10
    int32_t r9_25 = (r9_22 - rcx_25 - rdx_25) ^ rcx_25 u>> 5
    int32_t rdx_28 = (rdx_25 - rcx_25 - r9_25) ^ r9_25 u>> 3
    result = zx.q(rdx_28 << 0xa)
    int32_t rcx_28 = (rcx_25 - rdx_28 - r9_25) ^ result.d
    *r8_1 = (r9_25 - rcx_28 - rdx_28) ^ rcx_28 u>> 0xf

return result
