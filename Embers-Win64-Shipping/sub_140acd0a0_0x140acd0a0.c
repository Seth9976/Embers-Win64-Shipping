// 函数: sub_140acd0a0
// 地址: 0x140acd0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t rsi = sx.q(arg3)
*arg1 = 0
arg1[1] = 0

if (arg3 != 0)
    int32_t var_48
    sub_140acc6d0(&var_48, arg2, rsi.d)
    float zmm3_1[0x4] = var_48
    int32_t var_44
    float zmm2_1[0x4] = var_44
    int32_t var_38
    zmm2_1[0] = zmm2_1[0] f+ var_38
    int32_t var_3c
    zmm3_1[0] = zmm3_1[0] f+ var_3c
    zmm2_1[0] = zmm2_1[0] * 0.5f
    zmm3_1[0] = zmm3_1[0] * 0.5f
    float temp0_1[0x4] = _mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)
    float var_40
    float var_34
    float var_40_2 = (var_40 + var_34) * 0.5f
    zmm2_1 = var_48.o
    zmm2_1[0].q = temp0_1.q
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x93)
    temp0_2[0] = 0
    *arg1 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
    zmm3_1 = *(arg1 + 0xc)
    float zmm0_1
    float zmm4_1[0x4]
    
    if (rsi s>= 4)
        float zmm6[0x4]
        float var_18_1[0x4] = zmm6
        void* rax_2 = arg2 + 0x14
        int64_t i_2 = ((rsi - 4) u>> 2) + 1
        float zmm7[0x4]
        float var_28_1[0x4] = zmm7
        rdi = i_2 << 2
        int64_t i
        
        do
            zmm4_1 = *arg1
            zmm7 = zmm3_1
            zmm2_1 = *(arg1 + 4)
            zmm4_1[0] = zmm4_1[0] f- *(rax_2 - 0x14)
            float zmm5_1 = arg1[1].d
            zmm2_1[0] = zmm2_1[0] f- *(rax_2 - 0x10)
            zmm0_1 = zmm5_1 f- *(rax_2 - 0xc)
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm0_1 * zmm0_1
            
            if (not(zmm2_1[0] <= zmm3_1[0]))
                *(arg1 + 0xc) = zmm2_1[0]
                zmm7 = zmm2_1
            
            zmm2_1[0] = zmm2_1[0] f- *(rax_2 - 4)
            zmm4_1[0] = zmm4_1[0] f- *(rax_2 - 8)
            zmm3_1 = zmm7
            zmm0_1 = zmm5_1 f- *rax_2
            zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm0_1 * zmm0_1
            
            if (not(zmm2_1[0] <= zmm7[0]))
                *(arg1 + 0xc) = zmm2_1[0]
                zmm3_1 = zmm2_1
                zmm4_1 = *arg1
                zmm2_1 = *(arg1 + 4)
                zmm5_1 = arg1[1].d
            
            zmm2_1[0] = zmm2_1[0] f- *(rax_2 + 8)
            zmm4_1[0] = zmm4_1[0] f- *(rax_2 + 4)
            zmm0_1 = zmm5_1 f- *(rax_2 + 0xc)
            zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm0_1 * zmm0_1
            
            if (not(zmm2_1[0] <= zmm3_1[0]))
                *(arg1 + 0xc) = zmm2_1[0]
                zmm3_1 = zmm2_1
                zmm4_1 = *arg1
                zmm2_1 = *(arg1 + 4)
                zmm5_1 = arg1[1].d
            
            zmm2_1[0] = zmm2_1[0] f- *(rax_2 + 0x14)
            zmm4_1[0] = zmm4_1[0] f- *(rax_2 + 0x10)
            zmm5_1 = zmm5_1 f- *(rax_2 + 0x18)
            zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm4_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm5_1 * zmm5_1
            
            if (not(zmm2_1[0] <= zmm3_1[0]))
                *(arg1 + 0xc) = zmm2_1[0]
                zmm3_1 = zmm2_1
            
            rax_2 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (rdi s< rsi)
        zmm4_1 = *(arg1 + 0xc)
        int64_t i_3 = rsi - rdi
        void* rcx_4 = arg2 + 8 + rdi * 0xc
        int64_t i_1
        
        do
            float zmm1_1[0x4] = *arg1
            zmm3_1 = zmm4_1
            zmm2_1 = *(arg1 + 4)
            zmm2_1[0] = zmm2_1[0] f- *(rcx_4 - 4)
            zmm1_1[0] = zmm1_1[0] f- *(rcx_4 - 8)
            zmm0_1 = arg1[1].d f- *rcx_4
            zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
            zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
            zmm2_1[0] = zmm2_1[0] + zmm0_1 * zmm0_1
            
            if (not(zmm2_1[0] <= zmm4_1[0]))
                *(arg1 + 0xc) = zmm2_1[0]
                zmm4_1 = zmm2_1
                zmm3_1 = zmm2_1
            
            rcx_4 += 0xc
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0xc) = _mm_sqrt_ss(0, zmm3_1[0]) * 1.00100005f

return arg1
