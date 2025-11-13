// 函数: sub_1425d8070
// 地址: 0x1425d8070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
int64_t* entry_rdx
memset(entry_rdx[0x30], 0, sx.q(entry_rdx[0x31].d) * 0xc)
int64_t rbx = sx.q(entry_rdx[0xc].d)
int64_t* rcx_3 = *((rbx << 6) + entry_rdx[0x26] + 8)
int32_t rax_3 = (*(*rcx_3 + 0x20))(rcx_3)
int64_t* rcx_5 = *((rbx << 6) + entry_rdx[0x26] + 8)
int64_t r8_2 = *rcx_5
int64_t var_a8
(*(r8_2 + 0x40))(rcx_5, &var_a8, r8_2)
int32_t r11 = 0
int64_t rbx_1 = rbx * 0x158
int64_t rbp = *(*entry_rdx + 0xc8)
int32_t r15 = 0
int32_t r14 = *(rbx_1 + rbp + 0x28)
float entry_zmm1[0x4]
float entry_zmm2[0x4]
float zmm3[0x4]
float zmm4_1[0x4]

if (r14 != 0)
    do
        int64_t rcx_7 = var_a8
        int64_t rdx_3 = *(rbx_1 + rbp + 0x20)
        int64_t r10_1 = sx.q(r15)
        r15 += 3
        int32_t r9_1 = *(rdx_3 + (r10_1 << 2))
        uint64_t rax_5 = zx.q(r9_1) * 2
        uint64_t r8_4 = zx.q(*(rdx_3 + (r10_1 << 2) + 8)) * 2
        float zmm0_1[0x4] = *(rcx_7 + (rax_5 << 3))
        entry_zmm1 = *(rcx_7 + (rax_5 << 3) + 4)
        zmm3 = *(rcx_7 + (rax_5 << 3) + 8)
        zmm8 = *(rcx_7 + (r8_4 << 3) + 4)
        zmm4_1 = *(rcx_7 + (r8_4 << 3))
        zmm8[0] = zmm8[0] - entry_zmm1[0]
        uint64_t rax_6 = zx.q(*(rdx_3 + (r10_1 << 2) + 4))
        zmm4_1[0] = zmm4_1[0] - zmm0_1[0]
        uint64_t rax_7 = rax_6 * 2
        float zmm5_1[0x4] = *(rcx_7 + (rax_7 << 3) + 4)
        entry_zmm2 = *(rcx_7 + (rax_7 << 3) + 8)
        zmm5_1[0] = zmm5_1[0] - entry_zmm1[0]
        zmm6 = *(rcx_7 + (rax_7 << 3))
        entry_zmm2[0] = entry_zmm2[0] - zmm3[0]
        entry_zmm1 = *(rcx_7 + (r8_4 << 3) + 8)
        zmm6[0] = zmm6[0] - zmm0_1[0]
        entry_zmm1[0] = entry_zmm1[0] - zmm3[0]
        zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
        zmm8[0] = zmm8[0] * entry_zmm2[0]
        int64_t rcx_8 = sx.q(r9_1) * 3
        int64_t rax_9 = entry_rdx[0x30]
        zmm4_1[0] = zmm4_1[0] * entry_zmm2[0]
        zmm7 = entry_zmm1
        entry_zmm1[0] = entry_zmm1[0] * zmm6[0]
        zmm7[0] = zmm7[0] * zmm5_1[0]
        zmm8[0] = zmm8[0] * zmm6[0]
        zmm4_1[0] = zmm4_1[0] - entry_zmm1[0]
        zmm7[0] = zmm7[0] - zmm8[0]
        zmm8[0] = zmm8[0] - zmm4_1[0]
        zmm4_1[0] = zmm4_1[0] f+ *(rax_9 + (rcx_8 << 2) + 4)
        zmm7[0] = zmm7[0] f+ *(rax_9 + (rcx_8 << 2))
        *(rax_9 + (rcx_8 << 2) + 4) = zmm4_1[0]
        entry_zmm1 = zmm4_1
        *(rax_9 + (rcx_8 << 2)) = zmm7[0]
        zmm8[0] = zmm8[0] f+ *(rax_9 + (rcx_8 << 2) + 8)
        *(rax_9 + (rcx_8 << 2) + 8) = zmm8[0]
        int64_t rax_11 = entry_rdx[0x30]
        int64_t rdx_4 = sx.q(*(*(rbx_1 + rbp + 0x20) + (r10_1 << 2) + 4)) * 3
        zmm7[0] = zmm7[0] f+ *(rax_11 + (rdx_4 << 2))
        *(rax_11 + (rdx_4 << 2)) = zmm7[0]
        entry_zmm1[0] = entry_zmm1[0] f+ *(rax_11 + (rdx_4 << 2) + 4)
        *(rax_11 + (rdx_4 << 2) + 4) = entry_zmm1[0]
        zmm8[0] = zmm8[0] f+ *(rax_11 + (rdx_4 << 2) + 8)
        *(rax_11 + (rdx_4 << 2) + 8) = zmm8[0]
        int64_t rax_13 = entry_rdx[0x30]
        int64_t rdx_5 = sx.q(*(*(rbx_1 + rbp + 0x20) + (r10_1 << 2) + 8)) * 3
        zmm7[0] = zmm7[0] f+ *(rax_13 + (rdx_5 << 2))
        *(rax_13 + (rdx_5 << 2)) = zmm7[0]
        zmm4_1[0] = zmm4_1[0] f+ *(rax_13 + (rdx_5 << 2) + 4)
        *(rax_13 + (rdx_5 << 2) + 4) = zmm4_1[0]
        zmm8[0] = zmm8[0] f+ *(rax_13 + (rdx_5 << 2) + 8)
        *(rax_13 + (rdx_5 << 2) + 8) = zmm8[0]
    while (r15 u< r14)

if (rax_3 != 0)
    do
        int64_t rcx_11 = sx.q(r11) * 3
        int64_t rax_15 = entry_rdx[0x30]
        zmm7 = *(rax_15 + (rcx_11 << 2) + 4)
        zmm6 = *(rax_15 + (rcx_11 << 2))
        zmm8 = *(rax_15 + (rcx_11 << 2) + 8)
        entry_zmm2 = zmm6
        entry_zmm2[0] = entry_zmm2[0] * zmm6[0]
        entry_zmm1 = zmm8
        zmm7[0] = zmm7[0] * zmm7[0]
        entry_zmm1[0] = entry_zmm1[0] * zmm8[0]
        entry_zmm2[0] = entry_zmm2[0] + zmm7[0]
        entry_zmm2[0] = entry_zmm2[0] + entry_zmm1[0]
        
        if (not(entry_zmm2[0] <= 9.99999994e-09f))
            zmm4_1 = zx.o(0)
            zmm4_1[0] = 0x3f000000
            zmm3 = entry_zmm2
            float temp0_1[0x4] = _mm_rsqrt_ss(entry_zmm2[0], zmm3[0])
            entry_zmm2 = zmm4_1
            zmm3[0] = zmm3[0] * 0.5f
            temp0_1[0] = temp0_1[0] * temp0_1[0]
            zmm3[0] = zmm3[0] * temp0_1[0]
            entry_zmm2[0] = entry_zmm2[0] - zmm3[0]
            temp0_1[0] = temp0_1[0] * entry_zmm2[0]
            temp0_1[0] = temp0_1[0] + temp0_1[0]
            entry_zmm1 = temp0_1
            entry_zmm1[0] = entry_zmm1[0] * temp0_1[0]
            zmm3[0] = zmm3[0] * entry_zmm1[0]
            zmm4_1[0] = 0.5f - zmm3[0]
            temp0_1[0] = temp0_1[0] * zmm4_1[0]
            temp0_1[0] = temp0_1[0] + temp0_1[0]
            zmm6[0] = zmm6[0] * temp0_1[0]
            zmm7[0] = zmm7[0] * temp0_1[0]
            zmm8[0] = zmm8[0] * temp0_1[0]
            *(rax_15 + (rcx_11 << 2)) = zmm6[0]
            *(rax_15 + (rcx_11 << 2) + 4) = zmm7[0]
            *(rax_15 + (rcx_11 << 2) + 8) = zmm8[0]
        
        r11 += 1
    while (r11 u< rax_3)

int64_t var_98
int64_t var_80
int32_t var_78
return var_80(sx.q(var_78) + var_98, entry_zmm1, entry_zmm2)
