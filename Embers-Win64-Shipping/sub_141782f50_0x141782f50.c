// 函数: sub_141782f50
// 地址: 0x141782f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg2
int64_t result = sx.q(arg2[1].d)
void* r11 = r10 + result * 6

while (r10 != r11)
    uint32_t r9_1 = zx.d(*(r10 + 4))
    uint32_t rdx_3 = (zx.d(*(r10 + 2)) - r9_1) ^ r9_1 u>> 0xd
    int32_t rcx_2 = (0x9e3779b9 - r9_1 - rdx_3) ^ rdx_3 << 8
    int32_t r9_4 = (r9_1 - rcx_2 - rdx_3) ^ rcx_2 u>> 0xd
    int32_t rdx_6 = (rdx_3 - rcx_2 - r9_4) ^ r9_4 u>> 0xc
    int32_t rcx_5 = (rcx_2 - rdx_6 - r9_4) ^ rdx_6 << 0x10
    int32_t r9_7 = (r9_4 - rcx_5 - rdx_6) ^ rcx_5 u>> 5
    int32_t rdx_9 = (rdx_6 - rcx_5 - r9_7) ^ r9_7 u>> 3
    int32_t rcx_8 = (rcx_5 - rdx_9 - r9_7) ^ rdx_9 << 0xa
    int32_t r9_10 = (r9_7 - rcx_8 - rdx_9) ^ rcx_8 u>> 0xf
    int32_t rdx_12 = (zx.d(*r10) - r9_10) ^ r9_10 u>> 0xd
    int32_t rcx_12 = (0x9e3779b9 - rdx_12 - r9_10) ^ rdx_12 << 8
    int32_t r9_13 = (r9_10 - rcx_12 - rdx_12) ^ rcx_12 u>> 0xd
    int32_t rdx_15 = (rdx_12 - rcx_12 - r9_13) ^ r9_13 u>> 0xc
    int32_t rcx_15 = (rcx_12 - rdx_15 - r9_13) ^ rdx_15 << 0x10
    int32_t r9_16 = (r9_13 - rcx_15 - rdx_15) ^ rcx_15 u>> 5
    int32_t* r8_1 = *arg1
    int32_t rdx_18 = (rdx_15 - rcx_15 - r9_16) ^ r9_16 u>> 3
    int32_t rcx_18 = (rcx_15 - rdx_18 - r9_16) ^ rdx_18 << 0xa
    r10 += 6
    int32_t r9_19 = (r9_16 - rcx_18 - rdx_18) ^ rcx_18 u>> 0xf
    int32_t rdx_21 = (*r8_1 - r9_19) ^ r9_19 u>> 0xd
    int32_t rcx_22 = (0x9e3779b9 - rdx_21 - r9_19) ^ rdx_21 << 8
    int32_t r9_22 = (r9_19 - rcx_22 - rdx_21) ^ rcx_22 u>> 0xd
    int32_t rdx_24 = (rdx_21 - rcx_22 - r9_22) ^ r9_22 u>> 0xc
    int32_t rcx_25 = (rcx_22 - rdx_24 - r9_22) ^ rdx_24 << 0x10
    int32_t r9_25 = (r9_22 - rcx_25 - rdx_24) ^ rcx_25 u>> 5
    int32_t rdx_27 = (rdx_24 - rcx_25 - r9_25) ^ r9_25 u>> 3
    result = zx.q(rdx_27 << 0xa)
    int32_t rcx_28 = (rcx_25 - rdx_27 - r9_25) ^ result.d
    *r8_1 = (r9_25 - rcx_28 - rdx_27) ^ rcx_28 u>> 0xf

return result
