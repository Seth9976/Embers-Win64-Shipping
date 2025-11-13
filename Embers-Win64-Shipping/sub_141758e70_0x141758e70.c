// 函数: sub_141758e70
// 地址: 0x141758e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x38)
int32_t i_4 = 0
float zmm7[0x4] = 0xff7fffff
float zmm11[0x4] = arg4

if (rbx s<= 0)
    *arg2 = 0.0
    arg2[2] = 0
else
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    int32_t i = 0
    int128_t zmm8
    int128_t var_38_1 = zmm8
    int64_t zmm0
    float zmm1
    int64_t zmm5
    
    if (rbx s>= 4)
        zmm8 = *(arg3 + 4)
        float zmm9[0x4] = *arg3
        void* rax_1 = *(arg1 + 0x48)
        int128_t zmm10 = *(arg3 + 8)
        void* rdx = rax_1 + 8
        void* rsi_1 = rax_1 + 0x14
        
        do
            int32_t i_3 = i + 1
            zmm5.d = zmm9[0].q.d f* *(rdx - 8)
            int32_t i_2 = i
            zmm0.d = zmm8.q.d f* *(rdx - 4)
            zmm1 = zmm10.d f* *rdx
            zmm9[0] = zmm9[0] f* *(rdx + 4)
            zmm5.d = zmm5.d f+ zmm0.d
            zmm0.d = zmm8.q.d f* *(rsi_1 - 4)
            zmm9[0] = zmm9[0] f* *(rdx + 0x10)
            zmm5.d = zmm5.d f+ zmm1
            zmm9[0] = zmm9[0] f+ zmm0.d
            zmm1 = zmm10.d f* *rsi_1
            zmm0.d = zmm8.q.d f* *(rsi_1 + 8)
            bool cond:0_1 = zmm5.d f<= zmm7[0]
            int64_t temp0_1 = _mm_max_ss(zmm5.d, zmm7[0])
            zmm9[0] = zmm9[0] f* *(rdx + 0x1c)
            zmm9[0] = zmm9[0] + zmm1
            
            if (cond:0_1)
                i_2 = i_4
            
            i_4 = i + 3
            zmm9[0] = zmm9[0] f+ zmm0.d
            zmm0.d = zmm8.q.d f* *(rsi_1 + 0x14)
            bool cond:1_1 = zmm9[0] f<= temp0_1.d
            zmm9[0] = zmm9[0] + zmm10.d f* *(rsi_1 + 0xc)
            zmm1 = zmm10.d f* *(rsi_1 + 0x18)
            zmm9[0] = zmm9[0] f+ zmm0.d
            
            if (cond:1_1)
                i_3 = i_2
            
            int32_t i_5 = i + 2
            float temp0_2[0x4] = _mm_max_ss(zmm9[0], temp0_1.d)
            zmm9[0] = zmm9[0] + zmm1
            bool cond:2_1 = zmm9[0] <= temp0_2[0]
            float temp0_3[0x4] = _mm_max_ss(temp0_2[0], zmm9[0])
            
            if (cond:2_1)
                i_5 = i_3
            
            bool cond:3_1 = zmm9[0].q.d f<= temp0_3[0]
            zmm7 = _mm_max_ss(zmm9[0], temp0_3[0])
            
            if (cond:3_1)
                i_4 = i_5
            
            rdx += 0x30
            rsi_1 += 0x30
            i += 4
        while (i s< rbx - 3)
    
    int64_t zmm4
    
    if (i s< rbx)
        arg4 = *(arg3 + 4)
        zmm4 = *arg3
        zmm5 = *(arg3 + 8)
        void* rdx_1 = *(arg1 + 0x48) + sx.q(i) * 0xc
        
        do
            int32_t i_1 = i
            arg4[0] = arg4[0] f* *(rdx_1 + 4)
            zmm0.d = zmm4.d f* *rdx_1
            zmm1 = zmm5.d f* *(rdx_1 + 8)
            arg4[0] = arg4[0] f+ zmm0.d
            arg4[0] = arg4[0] + zmm1
            bool cond:4_1 = arg4[0] <= zmm7[0]
            float temp0_5[0x4] = _mm_max_ss(arg4[0], zmm7[0])
            
            if (cond:4_1)
                i_1 = i_4
            
            rdx_1 += 0xc
            i += 1
            i_4 = i_1
            zmm7 = temp0_5
        while (i s< rbx)
    
    if (zmm11[0] == 0f)
        int64_t rcx_2 = sx.q(i_4) * 3
        int64_t rax_8 = *(arg1 + 0x48)
        int32_t rax_9 = *(rax_8 + (rcx_2 << 2) + 8)
        *arg2 = *(rax_8 + (rcx_2 << 2))
        arg2[2] = rax_9
    else
        zmm7 = *(arg3 + 4)
        zmm6 = *arg3
        zmm8 = *(arg3 + 8)
        zmm0.d = zmm7[0].q.d f* zmm7[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        int64_t rcx_1 = sx.q(i_4) * 3
        int64_t rax_5 = *(arg1 + 0x48)
        zmm6[0] = zmm6[0] f+ zmm0.d
        zmm6[0] = zmm6[0] + zmm8.d f* zmm8.d
        int64_t temp0_6 = _mm_rsqrt_ss(zmm6[0].q.d, zmm6[0])
        float zmm2[0x4] = 0x3f000000
        zmm6[0] = zmm6[0] * 0.5f
        zmm0.d = temp0_6.d f* temp0_6.d
        zmm2[0] = 0.5f - zmm6[0] f* zmm0.d
        zmm0.d = temp0_6.d f* zmm2[0]
        zmm4.d = temp0_6.d f+ zmm0.d
        zmm6[0] = zmm6[0] * zmm4.d f* zmm4.d
        zmm5.d = 0.5f - zmm6[0]
        zmm0.d = zmm4.d f* zmm5.d
        zmm4.d = zmm4.d f+ zmm0.d
        zmm6[0] = zmm6[0] f* zmm4.d
        zmm7[0] = zmm7[0] f* zmm4.d
        zmm8.d = zmm8.d f* zmm4.d
        zmm6[0] = zmm6[0] * zmm11[0]
        zmm7[0] = zmm7[0] * zmm11[0]
        zmm6[0] = zmm6[0] f+ *(rax_5 + (rcx_1 << 2))
        zmm8.d = zmm8.d f* zmm11[0]
        zmm7[0] = zmm7[0] f+ *(rax_5 + (rcx_1 << 2) + 4)
        zmm8.d = zmm8.d f+ *(rax_5 + (rcx_1 << 2) + 8)
        *arg2 = zmm6[0]
        arg2[1] = zmm7[0]
        arg2[2] = zmm8.d

return arg2
