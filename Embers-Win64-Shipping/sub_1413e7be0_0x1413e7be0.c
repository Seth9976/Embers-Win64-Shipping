// 函数: sub_1413e7be0
// 地址: 0x1413e7be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x1050)
int32_t i = 0
float zmm8[0x4] = 0x7f7fffff
int32_t i_4 = -1
float zmm0
float zmm1
float zmm2[0x4]
float zmm5

if (r10 s>= 4)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    int128_t zmm9 = *arg2
    void* rax_1 = *(arg1 + 0x1048)
    int128_t zmm10 = *(arg2 + 4)
    int128_t zmm11 = *(arg2 + 8)
    void* rbx_1 = rax_1 + 8
    void* rdi_1 = rax_1 + 0x14
    
    do
        int32_t i_3 = i + 1
        zmm7 = *(rbx_1 - 4)
        zmm1 = *(rbx_1 - 8) f- zmm9.d
        zmm0 = *rbx_1
        zmm7[0] = zmm7[0] f- zmm10.d
        zmm0 = zmm0 f- zmm11.d
        zmm2 = *(rdi_1 + 8)
        zmm5 = *(rdi_1 - 4) f- zmm10.d
        zmm2[0] = zmm2[0] f- zmm10.d
        int32_t i_2 = i
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm7[0] = zmm7[0] + zmm1 * zmm1
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm1 = *(rbx_1 + 4) f- zmm9.d
        zmm7[0] = zmm7[0] + zmm0 * zmm0
        zmm0 = *rdi_1 f- zmm11.d
        zmm5 = zmm5 * zmm5 + zmm1 * zmm1
        zmm1 = *(rbx_1 + 0x10)
        
        if (zmm8[0] <= zmm7[0])
            i_2 = i_4
        
        float temp0_1[0x4] = _mm_min_ss(zmm7[0], zmm8[0])
        zmm8 = *(rdi_1 + 0x14)
        zmm1 = zmm1 f- zmm9.d
        zmm5 = zmm5 + zmm0 * zmm0
        zmm0 = *(rdi_1 + 0xc) f- zmm11.d
        zmm8[0] = zmm8[0] f- zmm10.d
        i_4 = i + 3
        zmm2[0] = zmm2[0] + zmm1 * zmm1
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm1 = *(rbx_1 + 0x1c)
        float temp0_2 = _mm_min_ss(zmm5, temp0_1[0])
        bool cond:1_1 = temp0_1[0] <= zmm5
        zmm2[0] = zmm2[0] + zmm0 * zmm0
        zmm0 = *(rdi_1 + 0x18) f- zmm11.d
        
        if (cond:1_1)
            i_3 = i_2
        
        zmm1 = zmm1 f- zmm9.d
        int32_t i_5 = i + 2
        bool cond:2_1 = temp0_2 <= zmm2[0]
        float temp0_3 = _mm_min_ss(temp0_2, zmm2[0])
        
        if (cond:2_1)
            i_5 = i_3
        
        zmm8[0] = zmm8[0] + zmm1 * zmm1
        zmm8[0] = zmm8[0] + zmm0 * zmm0
        zmm0 = zmm8[0]
        zmm8 = _mm_min_ss(zmm8[0], temp0_3)
        
        if (temp0_3 <= zmm0)
            i_4 = i_5
        
        rbx_1 += 0x30
        rdi_1 += 0x30
        i += 4
    while (i s< r10 - 3)

if (i s< r10)
    float zmm3 = *arg2
    float zmm4 = *(arg2 + 4)
    zmm5 = *(arg2 + 8)
    void* rdx = *(arg1 + 0x1048) + sx.q(i) * 0xc
    
    do
        zmm2 = *(rdx + 4)
        int32_t i_1 = i
        zmm1 = *rdx
        zmm2[0] = zmm2[0] - zmm4
        zmm1 = zmm1 - zmm3
        zmm0 = *(rdx + 8) - zmm5
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm2[0] = zmm2[0] + zmm1 * zmm1
        zmm2[0] = zmm2[0] + zmm0 * zmm0
        bool cond:3_1 = zmm8[0] <= zmm2[0]
        float temp0_5[0x4] = _mm_min_ss(zmm2[0], zmm8[0])
        
        if (cond:3_1)
            i_1 = i_4
        
        rdx += 0xc
        i += 1
        i_4 = i_1
        zmm8 = temp0_5
    while (i s< r10)

if (i_4 == 0xffffffff)
    return 0

return *(*(arg1 + 0x1038) + (sx.q(i_4) << 3))
