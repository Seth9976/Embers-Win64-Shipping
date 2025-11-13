// 函数: sub_1417589b0
// 地址: 0x1417589b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t r14
int64_t arg_18 = r14
int32_t* i_1 = arg2
int128_t zmm6
int128_t var_28_1 = zmm6
float zmm7[0x4]
float var_38_1[0x4] = zmm7
float zmm8[0x4]
float var_48_1[0x4] = zmm8
int128_t zmm9
int128_t var_58_1 = zmm9
int128_t zmm10
int128_t var_68_1 = zmm10
uint128_t zmm11 = 0x3f1a36e2eb1c432d
int32_t* i

do
    int64_t zmm5 = 0x38d1b717
    int32_t j_5 = -1
    int64_t r11_1 = -1
    int32_t j = 0
    int64_t r10_1 = 0
    int64_t zmm0
    float zmm1
    int64_t zmm3
    
    if (arg4 s>= 4)
        int64_t rcx = sx.q(*i_1) * 3
        int64_t rax_2 = *(arg1 + 0x28)
        zmm6 = *(rax_2 + (rcx << 2))
        zmm7 = *(rax_2 + (rcx << 2) + 4)
        zmm8 = *(rax_2 + (rcx << 2) + 8)
        
        do
            void* rax_3 = *(arg3 + (r10_1 << 3))
            zmm1 = zmm8[0]
            zmm3 = zmm7[0].q
            int32_t j_3 = j
            int64_t rcx_1 = r10_1
            zmm7[0] = zmm7[0] f- *(rax_3 + 0x14)
            zmm0.d = zmm6.q.d f- *(rax_3 + 0x10)
            zmm1 = zmm1 f- *(rax_3 + 0x18)
            zmm7[0] = zmm7[0] f* *(rax_3 + 0x20)
            zmm0.d = zmm0.d f* *(rax_3 + 0x1c)
            zmm1 = zmm1 f* *(rax_3 + 0x24)
            void* rax_4 = *(arg3 + (r10_1 << 3) + 8)
            zmm7[0] = zmm7[0] f+ zmm0.d
            zmm0.d = zmm6.q.d f- *(rax_4 + 0x10)
            zmm3.d = zmm3.d f- *(rax_4 + 0x14)
            zmm7[0] = zmm7[0] + zmm1
            zmm0.d = zmm0.d f* *(rax_4 + 0x1c)
            zmm3.d = zmm3.d f* *(rax_4 + 0x20)
            zmm1 = (zmm8[0] f- *(rax_4 + 0x18)) f* *(rax_4 + 0x24)
            void* rax_5 = *(arg3 + (r10_1 << 3) + 0x10)
            zmm7[0] f- zmm5.d
            bool cond:1_1 = zmm7[0] f<= zmm5.d
            bool cond:2_1 = zmm7[0] f<= zmm5.d
            float temp0_1[0x4] = _mm_max_ss(zmm7[0], zmm5.d)
            zmm3.d = zmm3.d f+ zmm0.d
            zmm0.d = zmm6.q.d f- *(rax_5 + 0x10)
            
            if (cond:1_1)
                j_3 = j_5
            
            if (cond:2_1)
                rcx_1 = r11_1
            
            int64_t r8 = r10_1 + 2
            zmm5 = temp0_1[0].q
            r11_1 = r10_1 + 3
            zmm3.d = zmm3.d f+ zmm1
            zmm0.d = zmm0.d f* *(rax_5 + 0x1c)
            zmm7[0] = zmm7[0] f- *(rax_5 + 0x14)
            zmm1 = zmm8[0] f- *(rax_5 + 0x18)
            bool cond:3_1 = zmm3.d f<= temp0_1[0]
            zmm7[0] = zmm7[0] f* *(rax_5 + 0x20)
            int64_t temp0_2 = _mm_max_ss(zmm5.d, zmm3.d)
            zmm1 = zmm1 f* *(rax_5 + 0x24)
            int64_t rax_6 = r10_1 + 1
            
            if (cond:3_1)
                rax_6 = rcx_1
            
            int32_t j_6 = j + 2
            zmm7[0] = zmm7[0] f+ zmm0.d
            zmm7[0] = zmm7[0] + zmm1
            zmm1 = zmm8[0]
            
            if (zmm7[0] f<= temp0_2.d)
                r8 = rax_6
            
            int32_t j_4 = j + 1
            
            if (zmm3.d f<= temp0_1[0])
                j_4 = j_3
            
            bool cond:4_1 = zmm7[0] f<= temp0_2.d
            int64_t temp0_3 = _mm_max_ss(temp0_2.d, zmm7[0])
            
            if (cond:4_1)
                j_6 = j_4
            
            void* rax_7 = *(arg3 + (r11_1 << 3))
            zmm7[0] = zmm7[0] f- *(rax_7 + 0x14)
            zmm0.d = zmm6.q.d f- *(rax_7 + 0x10)
            zmm1 = zmm1 f- *(rax_7 + 0x18)
            zmm7[0] = zmm7[0] f* *(rax_7 + 0x20)
            zmm0.d = zmm0.d f* *(rax_7 + 0x1c)
            zmm1 = zmm1 f* *(rax_7 + 0x24)
            zmm7[0] = zmm7[0] f+ zmm0.d
            zmm7[0] = zmm7[0] + zmm1
            zmm7[0] f- temp0_3.d
            bool cond:5_1 = zmm7[0] f<= temp0_3.d
            bool cond:6_1 = zmm7[0] f<= temp0_3.d
            zmm5 = _mm_max_ss(temp0_3.d, zmm7[0])
            
            if (cond:5_1)
                r11_1 = r8
            
            j_5 = j + 3
            
            if (cond:6_1)
                j_5 = j_6
            
            r10_1 += 4
            j += 4
        while (j s< arg4 - 3)
    
    float zmm4[0x4]
    
    if (j s< arg4)
        int64_t rcx_2 = sx.q(*i_1) * 3
        int64_t rax_9 = *(arg1 + 0x28)
        zmm3 = *(rax_9 + (rcx_2 << 2))
        zmm4 = *(rax_9 + (rcx_2 << 2) + 4)
        zmm6 = *(rax_9 + (rcx_2 << 2) + 8)
        
        do
            void* rax_10 = *(arg3 + (r10_1 << 3))
            zmm4[0] = zmm4[0] f- *(rax_10 + 0x14)
            zmm0.d = zmm3.d f- *(rax_10 + 0x10)
            zmm1 = zmm6.d f- *(rax_10 + 0x18)
            zmm4[0] = zmm4[0] f* *(rax_10 + 0x20)
            zmm0.d = zmm0.d f* *(rax_10 + 0x1c)
            zmm1 = zmm1 f* *(rax_10 + 0x24)
            int64_t rax_11 = r10_1
            zmm4[0] = zmm4[0] f+ zmm0.d
            zmm4[0] = zmm4[0] + zmm1
            zmm4[0] f- zmm5.d
            bool cond:7_1 = zmm4[0] f<= zmm5.d
            bool cond:8_1 = zmm4[0] f<= zmm5.d
            float temp0_5[0x4] = _mm_max_ss(zmm4[0], zmm5.d)
            
            if (cond:7_1)
                rax_11 = r11_1
            
            r11_1 = rax_11
            int32_t j_2 = j
            
            if (cond:8_1)
                j_2 = j_5
            
            r10_1 += 1
            j += 1
            j_5 = j_2
            zmm5 = temp0_5[0].q
        while (j s< arg4)
    
    r14.b = j_5 == 0xffffffff
    
    if (j_5 != 0xffffffff)
        int64_t r9 = *(arg1 + 0x28)
        int32_t* rbp_2 = **(arg3 + (r11_1 << 3))
        int32_t* r10_2 = rbp_2
        int64_t rax_14 = sx.q(*i_1) * 3
        zmm8 = *(r9 + (rax_14 << 2))
        zmm9 = *(r9 + (rax_14 << 2) + 4)
        zmm10 = *(r9 + (rax_14 << 2) + 8)
        int64_t rax_15 = sx.q(*rbp_2)
        int64_t r8_1 = sx.q(**(rbp_2 + 8)) * 3
        zmm5.d = zmm9.q.d f- *(r9 + (r8_1 << 2) + 4)
        zmm8[0] = zmm8[0] f- *(r9 + (r8_1 << 2))
        zmm3.d = zmm10.q.d f- *(r9 + (r8_1 << 2) + 8)
        int64_t rcx_4 = rax_15 * 3
        float zmm2[0x4] = *(r9 + (rcx_4 << 2) + 8)
        zmm2[0] = zmm2[0] f- *(r9 + (r8_1 << 2) + 8)
        zmm4 = *(r9 + (rcx_4 << 2) + 4)
        zmm4[0] = zmm4[0] f- *(r9 + (r8_1 << 2) + 4)
        zmm6.d = (*(r9 + (rcx_4 << 2))).d f- *(r9 + (r8_1 << 2))
        zmm0 = zmm2[0].q
        zmm2[0] = zmm2[0] * zmm8[0]
        zmm0.d = zmm0.d f* zmm5.d
        zmm1 = zmm4[0] f* zmm3.d
        zmm4[0] = zmm4[0] * zmm8[0]
        zmm1 = zmm1 f- zmm0.d
        zmm0.d = zmm6.q.d f* zmm3.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm2[0] = zmm2[0] f- zmm0.d
        zmm6.d = zmm6.d f- zmm4[0]
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm6.d = zmm6.d f* zmm6.d
        zmm2[0] = zmm2[0] + zmm1 * zmm1
        zmm2[0] = zmm2[0] f+ zmm6.d
        
        if (not(_mm_cvtps_pd(zmm2[0].q) f< zmm11.q))
            int64_t j_1
            
            do
                r10_2 = *(r10_2 + 0x10)
                
                if (r10_2 == rbp_2)
                    goto label_141758dcd
                
                int64_t rax_17 = sx.q(**(r10_2 + 8)) * 3
                zmm2 = *(r9 + (rax_17 << 2))
                zmm1 = *(r9 + (rax_17 << 2) + 4)
                zmm8[0] = zmm8[0] - zmm2[0]
                zmm0 = *(r9 + (rax_17 << 2) + 8)
                zmm5.d = zmm9.q.d f- zmm1
                zmm3.d = zmm10.q.d f- zmm0.d
                int64_t rcx_6 = sx.q(*r10_2) * 3
                zmm4 = *(r9 + (rcx_6 << 2) + 4)
                zmm6.d = (*(r9 + (rcx_6 << 2))).d f- zmm2[0]
                zmm2 = *(r9 + (rcx_6 << 2) + 8)
                zmm4[0] = zmm4[0] - zmm1
                zmm2[0] = zmm2[0] f- zmm0.d
                zmm1 = zmm4[0]
                zmm4[0] = zmm4[0] * zmm8[0]
                zmm0 = zmm2[0].q
                zmm2[0] = zmm2[0] * zmm8[0]
                zmm0.d = zmm0.d f* zmm5.d
                zmm1 = zmm1 f* zmm3.d f- zmm0.d
                zmm0.d = zmm6.q.d f* zmm3.d
                zmm6.d = zmm6.d f* zmm5.d
                zmm2[0] = zmm2[0] f- zmm0.d
                zmm6.d = zmm6.d f- zmm4[0]
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm6.d = zmm6.d f* zmm6.d
                zmm2[0] = zmm2[0] + zmm1 * zmm1
                zmm2[0] = zmm2[0] f+ zmm6.d
                j_1 = _mm_cvtps_pd(zmm2[0].q)
            while (j_1 f>= zmm11.q)
        
        r14.b = 1
    
label_141758dcd:
    i = *(i_1 + 0x10)
    
    if (r14.b != 0)
        j_sub_140a74f90(i_1)
    else
        void* rax = *(arg3 + (r11_1 << 3))
        void* rcx_7 = *(rax + 8)
        
        if (rcx_7 != 0)
            *(rcx_7 + 8) = i_1
            rcx_7 = *(rax + 8)
        
        *(i_1 + 0x10) = rcx_7
        *(rax + 8) = i_1
        *(i_1 + 8) = 0
    
    i_1 = i
while (i != 0)
