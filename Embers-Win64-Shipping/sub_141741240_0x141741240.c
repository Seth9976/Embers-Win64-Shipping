// 函数: sub_141741240
// 地址: 0x141741240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0x58))
int32_t r8 = 0
int64_t rbx = 0
int32_t zmm0

if (r10 s>= 4)
    void* rsi_2 = *(arg1 + 0x50) + 8
    int64_t i_3 = ((r10 - 4) u>> 2) + 1
    rbx = i_3 << 2
    int64_t i
    
    do
        int32_t rdx_1 = *(rsi_2 - 8)
        zmm0 = *(rsi_2 - 4)
        int32_t r8_2 = (r8 - rdx_1) ^ rdx_1 u>> 0xd
        int32_t rcx_2 = (0x9e3779b9 - rdx_1 - r8_2) ^ r8_2 << 8
        int32_t rdx_4 = (rdx_1 - rcx_2 - r8_2) ^ rcx_2 u>> 0xd
        int32_t r8_5 = (r8_2 - rdx_4 - rcx_2) ^ rdx_4 u>> 0xc
        int32_t rcx_5 = (rcx_2 - rdx_4 - r8_5) ^ r8_5 << 0x10
        int32_t rdx_7 = (rdx_4 - rcx_5 - r8_5) ^ rcx_5 u>> 5
        int32_t r8_8 = (r8_5 - rdx_7 - rcx_5) ^ rdx_7 u>> 3
        int32_t rcx_8 = (rcx_5 - rdx_7 - r8_8) ^ r8_8 << 0xa
        int32_t rdx_12 = (((rdx_7 - rcx_8 - r8_8) ^ rcx_8 u>> 0xf) - zmm0) ^ zmm0 u>> 0xd
        int32_t rcx_12 = (0x9e3779b9 - zmm0 - rdx_12) ^ rdx_12 << 8
        int32_t r9_4 = (zmm0 - rcx_12 - rdx_12) ^ rcx_12 u>> 0xd
        int32_t rdx_15 = (rdx_12 - r9_4 - rcx_12) ^ r9_4 u>> 0xc
        int32_t rcx_15 = (rcx_12 - r9_4 - rdx_15) ^ rdx_15 << 0x10
        int32_t r9_7 = (r9_4 - rcx_15 - rdx_15) ^ rcx_15 u>> 5
        int32_t r8_9 = *rsi_2
        zmm0 = *(rsi_2 + 4)
        int32_t rdx_18 = (rdx_15 - r9_7 - rcx_15) ^ r9_7 u>> 3
        int32_t rcx_18 = (rcx_15 - r9_7 - rdx_18) ^ rdx_18 << 0xa
        int32_t r9_12 = (((r9_7 - rcx_18 - rdx_18) ^ rcx_18 u>> 0xf) - r8_9) ^ r8_9 u>> 0xd
        int32_t rcx_22 = (0x9e3779b9 - r8_9 - r9_12) ^ r9_12 << 8
        int32_t r8_12 = (r8_9 - rcx_22 - r9_12) ^ rcx_22 u>> 0xd
        int32_t r9_15 = (r9_12 - r8_12 - rcx_22) ^ r8_12 u>> 0xc
        int32_t rcx_25 = (rcx_22 - r8_12 - r9_15) ^ r9_15 << 0x10
        int32_t r8_15 = (r8_12 - rcx_25 - r9_15) ^ rcx_25 u>> 5
        int32_t r9_18 = (r9_15 - r8_15 - rcx_25) ^ r8_15 u>> 3
        int32_t rcx_28 = (rcx_25 - r8_15 - r9_18) ^ r9_18 << 0xa
        int32_t r8_20 = (((r8_15 - rcx_28 - r9_18) ^ rcx_28 u>> 0xf) - zmm0) ^ zmm0 u>> 0xd
        int32_t rcx_32 = (0x9e3779b9 - zmm0 - r8_20) ^ r8_20 << 8
        int32_t rdx_22 = (zmm0 - rcx_32 - r8_20) ^ rcx_32 u>> 0xd
        int32_t r8_23 = (r8_20 - rdx_22 - rcx_32) ^ rdx_22 u>> 0xc
        rsi_2 += 0x10
        int32_t rcx_35 = (rcx_32 - rdx_22 - r8_23) ^ r8_23 << 0x10
        int32_t rdx_25 = (rdx_22 - rcx_35 - r8_23) ^ rcx_35 u>> 5
        int32_t r8_26 = (r8_23 - rdx_25 - rcx_35) ^ rdx_25 u>> 3
        int32_t rcx_38 = (rcx_35 - rdx_25 - r8_26) ^ r8_26 << 0xa
        r8 = (rdx_25 - rcx_38 - r8_26) ^ rcx_38 u>> 0xf
        i = i_3
        i_3 -= 1
    while (i != 1)

if (rbx s< r10)
    int64_t i_2 = r10 - rbx
    int32_t* r9_19 = *(arg1 + 0x50) + (rbx << 2)
    int64_t i_1
    
    do
        zmm0 = *r9_19
        r9_19 = &r9_19[1]
        int32_t r8_28 = (r8 - zmm0) ^ zmm0 u>> 0xd
        int32_t rcx_42 = (0x9e3779b9 - zmm0 - r8_28) ^ r8_28 << 8
        int32_t rdx_32 = (zmm0 - rcx_42 - r8_28) ^ rcx_42 u>> 0xd
        int32_t r8_31 = (r8_28 - rdx_32 - rcx_42) ^ rdx_32 u>> 0xc
        int32_t rcx_45 = (rcx_42 - rdx_32 - r8_31) ^ r8_31 << 0x10
        int32_t rdx_35 = (rdx_32 - rcx_45 - r8_31) ^ rcx_45 u>> 5
        int32_t r8_34 = (r8_31 - rdx_35 - rcx_45) ^ rdx_35 u>> 3
        int32_t rcx_48 = (rcx_45 - rdx_35 - r8_34) ^ r8_34 << 0xa
        r8 = (rdx_35 - rcx_48 - r8_34) ^ rcx_48 u>> 0xf
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return zx.q(r8)
