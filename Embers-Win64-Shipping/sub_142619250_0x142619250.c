// 函数: sub_142619250
// 地址: 0x142619250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
int32_t r8 = 0
int32_t result = *(arg1 + 4)
float zmm3[0x4]
float zmm5[0x4]

if (result s> 0)
    int64_t* rdx_1 = nullptr
    
    do
        void* rcx = *(rdx_1 + *(arg1 + 0x10))
        
        if (*(rcx + 0x327) == 1)
            zmm7 = *(rcx + 0x250)
            zmm3 = *(rcx + 0x254)
            zmm3[0] = zmm3[0] f- *(rcx + 0x260)
            float zmm4[0x4] = *(rcx + 0x258)
            zmm4[0] = zmm4[0] f- *(rcx + 0x264)
            zmm5 = *(rcx + 0x25c)
            arg2[0] = arg2[0] f* *(rcx + 0x288)
            zmm7[0] = zmm7[0] - zmm5[0]
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm3[0] = zmm3[0] + zmm7[0]
            zmm3[0] = zmm3[0] + zmm4[0]
            float temp0_1[0x4] = _mm_sqrt_ss(0, zmm3[0])
            
            if (not(temp0_1[0] <= arg2[0]))
                arg2[0] = arg2[0] / temp0_1[0]
                zmm3[0] = zmm3[0] * arg2[0]
                arg2[0] = arg2[0] * zmm7[0]
                zmm4[0] = zmm4[0] * arg2[0]
                zmm7 = arg2
            
            zmm5[0] = zmm5[0] + zmm7[0]
            *(rcx + 0x25c) = zmm5[0]
            zmm3[0] = zmm3[0] f+ *(rcx + 0x260)
            zmm5[0] = zmm5[0] * zmm5[0]
            *(rcx + 0x260) = zmm3[0]
            zmm4[0] = zmm4[0] f+ *(rcx + 0x264)
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm5[0] = zmm5[0] + zmm3[0]
            *(rcx + 0x264) = zmm4[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm5[0] = zmm5[0] + zmm4[0]
            
            if (_mm_sqrt_ss(zmm5[0], zmm5[0])[0] <= 9.99999975e-05f)
                *(rcx + 0x25c) = 0
                *(rcx + 0x264) = 0
            else
                zmm5[0] = zmm5[0] * arg2[0]
                zmm5[0] = zmm5[0] f+ *(rcx + 0x22c)
                *(rcx + 0x22c) = zmm5[0]
                arg2[0] = arg2[0] f* *(rcx + 0x260)
                arg2[0] = arg2[0] f+ *(rcx + 0x230)
                *(rcx + 0x230) = arg2[0]
                arg2[0] = arg2[0] f* *(rcx + 0x264)
                arg2[0] = arg2[0] f+ *(rcx + 0x234)
                *(rcx + 0x234) = arg2[0]
        
        result = *(arg1 + 4)
        r8 += 1
        rdx_1 = &rdx_1[1]
    while (r8 s< result)

int64_t i_1 = 2
int64_t i

do
    int32_t rdi_1 = 0
    int32_t result_1 = result
    float zmm0[0x4]
    float zmm2[0x4]
    
    if (result s> 0)
        void** rsi_1 = nullptr
        
        do
            void* r8_1 = *(rsi_1 + *(arg1 + 0x10))
            void* rcx_2 = r8_1 - *(arg1 + 8)
            
            if (*(r8_1 + 0x327) == 1)
                *(r8_1 + 0x238) = 0
                zmm5 = zx.o(0)
                *(r8_1 + 0x240) = 0
                int32_t j = 0
                
                if (*(r8_1 + 0x224) s> 0)
                    void* r10_1 = r8_1 + 0x1f4
                    
                    do
                        arg2 = *(r8_1 + 0x22c)
                        zmm2 = *(r8_1 + 0x234)
                        int64_t r9_1 = sx.q(*r10_1) * 0x328
                        int64_t rax_6 = *(arg1 + 8)
                        arg2[0] = arg2[0] f- *(r9_1 + rax_6 + 0x22c)
                        zmm2[0] = zmm2[0] f- *(r9_1 + rax_6 + 0x234)
                        zmm3 = *(r9_1 + rax_6 + 0x280)
                        zmm3[0] = zmm3[0] f+ *(r8_1 + 0x280)
                        arg2[0] = arg2[0] * arg2[0]
                        zmm2[0] = zmm2[0] * zmm2[0]
                        zmm2[0] = zmm2[0] + arg2[0]
                        zmm3[0] = zmm3[0] * zmm3[0]
                        
                        if (not(zmm2[0] > zmm3[0]))
                            float temp0_3[0x4] = _mm_sqrt_ss(zmm2[0], zmm2[0])
                            bool cond:0_1 = temp0_3[0] >= 9.99999975e-05f
                            zmm3[0] = zmm3[0] - temp0_3[0]
                            
                            if (cond:0_1)
                                zmm0 = 0x3eb33333
                                zmm0[0] = 0.349999994f / temp0_3[0]
                                zmm0[0] = zmm0[0] * zmm3[0]
                            else
                                arg2 = *(r8_1 + 0x24c)
                                zmm2 = *(r8_1 + 0x244)
                                int64_t rax_7
                                int64_t rdx_3
                                rdx_3:rax_7 = muls.dp.q(-0x5dc83cd4e930288d, r9_1)
                                int64_t rdx_5 = (rdx_3 + r9_1) s>> 9
                                
                                if ((rcx_2 s/ 0x328).d s<= rdx_5.d + (rdx_5 u>> 0x3f).d)
                                    zmm2 ^= 0x80000000
                                    zmm0 = 0x3c23d70a
                                else
                                    arg2 ^= 0x80000000
                                    zmm0 = 0x3c23d70a
                            
                            arg2[0] = arg2[0] * zmm0[0]
                            zmm5[0] = zmm5[0] + 1f
                            zmm2[0] = zmm2[0] * zmm0[0]
                            arg2[0] = arg2[0] f+ *(r8_1 + 0x238)
                            *(r8_1 + 0x238) = arg2[0]
                            *(r8_1 + 0x23c) = *(r8_1 + 0x23c)
                            zmm2[0] = zmm2[0] f+ *(r8_1 + 0x240)
                            *(r8_1 + 0x240) = zmm2[0]
                        
                        j += 1
                        r10_1 += 8
                    while (j s< *(r8_1 + 0x224))
                    
                    if (not(zmm5[0] <= 9.99999975e-05f))
                        zmm2 = 0x3f800000
                        zmm2[0] = 1f / zmm5[0]
                        zmm2[0] = zmm2[0] f* *(r8_1 + 0x238)
                        *(r8_1 + 0x238) = zmm2[0]
                        zmm2[0] = zmm2[0] f* *(r8_1 + 0x23c)
                        *(r8_1 + 0x23c) = zmm2[0]
                        zmm2[0] = zmm2[0] f* *(r8_1 + 0x240)
                        *(r8_1 + 0x240) = zmm2[0]
            
            result_1 = *(arg1 + 4)
            rdi_1 += 1
            rsi_1 = &rsi_1[1]
        while (rdi_1 s< result_1)
    
    int32_t r8_2 = 0
    result = result_1
    
    if (result_1 s> 0)
        int64_t* rdx_7 = nullptr
        
        do
            void* rcx_3 = *(rdx_7 + *(arg1 + 0x10))
            
            if (*(rcx_3 + 0x327) == 1)
                zmm0 = *(rcx_3 + 0x238)
                zmm0[0] = zmm0[0] f+ *(rcx_3 + 0x22c)
                *(rcx_3 + 0x22c) = zmm0[0]
                arg2 = *(rcx_3 + 0x230)
                arg2[0] = arg2[0] f+ *(rcx_3 + 0x23c)
                *(rcx_3 + 0x230) = arg2[0]
                zmm0 = *(rcx_3 + 0x234)
                zmm0[0] = zmm0[0] f+ *(rcx_3 + 0x240)
                *(rcx_3 + 0x234) = zmm0[0]
            
            result = *(arg1 + 4)
            r8_2 += 1
            rdx_7 = &rdx_7[1]
        while (r8_2 s< result)
    
    int32_t rdi_2 = 0
    
    if (result s> 0)
        void** rsi_2 = nullptr
        
        do
            void* r8_3 = *(rsi_2 + *(arg1 + 0x10))
            void* rcx_5 = r8_3 - *(arg1 + 8)
            
            if (*(r8_3 + 0x327) == 1)
                *(r8_3 + 0x238) = 0
                zmm5 = zx.o(0)
                *(r8_3 + 0x240) = 0
                int32_t j_1 = 0
                
                if (*(r8_3 + 0x224) s> 0)
                    void* r10_2 = r8_3 + 0x1f4
                    
                    do
                        arg2 = *(r8_3 + 0x22c)
                        zmm2 = *(r8_3 + 0x234)
                        int64_t r9_2 = sx.q(*r10_2) * 0x328
                        int64_t rax_17 = *(arg1 + 8)
                        arg2[0] = arg2[0] f- *(r9_2 + rax_17 + 0x22c)
                        zmm2[0] = zmm2[0] f- *(r9_2 + rax_17 + 0x234)
                        zmm3 = *(r9_2 + rax_17 + 0x280)
                        zmm3[0] = zmm3[0] f+ *(r8_3 + 0x280)
                        arg2[0] = arg2[0] * arg2[0]
                        zmm2[0] = zmm2[0] * zmm2[0]
                        zmm2[0] = zmm2[0] + arg2[0]
                        zmm3[0] = zmm3[0] * zmm3[0]
                        
                        if (not(zmm2[0] > zmm3[0]))
                            float temp0_4[0x4] = _mm_sqrt_ss(zmm2[0], zmm2[0])
                            bool cond:1_1 = temp0_4[0] >= 9.99999975e-05f
                            zmm3[0] = zmm3[0] - temp0_4[0]
                            
                            if (cond:1_1)
                                zmm0 = 0x3eb33333
                                zmm0[0] = 0.349999994f / temp0_4[0]
                                zmm0[0] = zmm0[0] * zmm3[0]
                            else
                                arg2 = *(r8_3 + 0x24c)
                                zmm2 = *(r8_3 + 0x244)
                                int64_t rax_18
                                int64_t rdx_9
                                rdx_9:rax_18 = muls.dp.q(-0x5dc83cd4e930288d, r9_2)
                                int64_t rdx_11 = (rdx_9 + r9_2) s>> 9
                                
                                if ((rcx_5 s/ 0x328).d s<= rdx_11.d + (rdx_11 u>> 0x3f).d)
                                    zmm2 ^= 0x80000000
                                    zmm0 = 0x3c23d70a
                                else
                                    arg2 ^= 0x80000000
                                    zmm0 = 0x3c23d70a
                            
                            arg2[0] = arg2[0] * zmm0[0]
                            zmm5[0] = zmm5[0] + 1f
                            zmm2[0] = zmm2[0] * zmm0[0]
                            arg2[0] = arg2[0] f+ *(r8_3 + 0x238)
                            *(r8_3 + 0x238) = arg2[0]
                            *(r8_3 + 0x23c) = *(r8_3 + 0x23c)
                            zmm2[0] = zmm2[0] f+ *(r8_3 + 0x240)
                            *(r8_3 + 0x240) = zmm2[0]
                        
                        j_1 += 1
                        r10_2 += 8
                    while (j_1 s< *(r8_3 + 0x224))
                    
                    if (not(zmm5[0] <= 9.99999975e-05f))
                        zmm2 = 0x3f800000
                        zmm2[0] = 1f / zmm5[0]
                        zmm2[0] = zmm2[0] f* *(r8_3 + 0x238)
                        *(r8_3 + 0x238) = zmm2[0]
                        zmm2[0] = zmm2[0] f* *(r8_3 + 0x23c)
                        *(r8_3 + 0x23c) = zmm2[0]
                        zmm2[0] = zmm2[0] f* *(r8_3 + 0x240)
                        *(r8_3 + 0x240) = zmm2[0]
            
            result = *(arg1 + 4)
            rdi_2 += 1
            rsi_2 = &rsi_2[1]
        while (rdi_2 s< result)
    
    int32_t r8_4 = 0
    
    if (result s> 0)
        void** rdx_13 = nullptr
        
        do
            void* rcx_6 = *(rdx_13 + *(arg1 + 0x10))
            
            if (*(rcx_6 + 0x327) == 1)
                zmm0 = *(rcx_6 + 0x238)
                zmm0[0] = zmm0[0] f+ *(rcx_6 + 0x22c)
                *(rcx_6 + 0x22c) = zmm0[0]
                arg2 = *(rcx_6 + 0x230)
                arg2[0] = arg2[0] f+ *(rcx_6 + 0x23c)
                *(rcx_6 + 0x230) = arg2[0]
                zmm0 = *(rcx_6 + 0x234)
                zmm0[0] = zmm0[0] f+ *(rcx_6 + 0x240)
                *(rcx_6 + 0x234) = zmm0[0]
            
            result = *(arg1 + 4)
            r8_4 += 1
            rdx_13 = &rdx_13[1]
        while (r8_4 s< result)
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
