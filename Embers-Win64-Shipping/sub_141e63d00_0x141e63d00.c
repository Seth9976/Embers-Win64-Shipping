// 函数: sub_141e63d00
// 地址: 0x141e63d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
*arg1 = 0

if (*(arg3 + 0x10) s> 0)
    uint32_t temp0_1[0x4] = _mm_and_ps(arg2, 0x7fffffff)
    
    if (not(temp0_1[0] f<= 9.99999994e-09f))
        uint32_t* r15_1 = 8
        arg2 = *(*(arg3 + 8) + sx.q(*(arg3 + 0x10)) * 0x10 - 0x10)
        *(arg1 + 4) = arg2[0]
        arg2[0] = arg2[0] f/ temp0_1[0]
        *(arg1 + 8) = arg2[0]
        int64_t r12_1 = sx.q(*(arg3 + 0x10))
        int64_t rcx_2 = *(arg3 + 8)
        int64_t rax_2 = (r12_1 - 1) * 2
        int32_t* arg_8
        void** result_1
        int32_t* rbx_1
        uint32_t zmm2[0x4]
        uint32_t zmm6[0x4]
        uint32_t zmm7[0x4]
        
        if (arg2[0] f>= arg2[0])
            zmm2 = *(rcx_2 + (rax_2 << 3) + 8)
            
            if (arg2[0] f<= zmm2[0])
                zmm6 = arg2
                zmm2[0] = zmm2[0] f- arg2[0]
                zmm6[0] = zmm6[0] f- arg2[0]
                zmm7 = 0x3f800000
                zmm6[0] = zmm6[0] f/ zmm2[0]
            else
                zmm7 = arg2
                zmm6 = 0x3f800000
                zmm7[0] = zmm7[0] f/ zmm2[0]
            
            rbx_1 = 8
            arg_8 = 8
            result_1 = 0x20
        else
            zmm2 = *(rcx_2 + (rax_2 << 3) + 4)
            
            if (arg2[0] f>= zmm2[0])
                zmm6 = arg2
                zmm7 = 0x3f800000
                zmm6[0] = zmm6[0] f- arg2[0]
                arg2[0] = arg2[0] f- zmm2[0]
                zmm6[0] = zmm6[0] f/ arg2[0]
            else
                arg2[0] = arg2[0] f/ zmm2[0]
                zmm6 = 0x3f800000
                zmm7 = arg2
            
            rbx_1 = 4
            result_1 = 0x1c
            arg_8 = 4
        
        int32_t i_3 = 0
        *(arg1 + 0x28) = 0
        
        if (r12_1.d s> *(arg1 + 0x2c))
            sub_1405dadb0(&arg1[0x20], r12_1.d)
        
        int32_t rax_3 = *(arg1 + 0x28) + r12_1.d
        *(arg1 + 0x28) = rax_3
        
        if (rax_3 s> *(arg1 + 0x2c))
            sub_1406105e0(&arg1[0x20])
        
        int64_t i = 0
        
        if (r12_1 - 1 s>= 4)
            zmm2 = 0x3f800000
            int64_t r8 = 0
            zmm2[0] = 1f f- zmm6[0]
            
            do
                int64_t rax_4 = *(arg1 + 0x20)
                int32_t* rcx_6 = *(arg3 + 8) + r8
                zmm6[0] = zmm6[0] f* *(arg_8 + rcx_6)
                zmm2[0] = zmm2[0] f* *rcx_6
                zmm6[0] = zmm6[0] f+ zmm2[0]
                zmm6[0] = zmm6[0] f* zmm7[0]
                *(rax_4 + (i << 2)) = zmm6[0]
                int64_t rax_5 = *(arg1 + 0x20)
                void* rcx_8 = *(arg3 + 8) + r8
                zmm6[0] = zmm6[0] f* *(arg_8 + rcx_8 + 0x10)
                zmm2[0] = zmm2[0] f* *(rcx_8 + 0x10)
                zmm6[0] = zmm6[0] f+ zmm2[0]
                zmm6[0] = zmm6[0] f* zmm7[0]
                *(rax_5 + (i << 2) + 4) = zmm6[0]
                int64_t rax_6 = *(arg1 + 0x20)
                void* rcx_10 = *(arg3 + 8) + r8
                zmm6[0] = zmm6[0] f* *(arg_8 + rcx_10 + 0x20)
                zmm2[0] = zmm2[0] f* *(rcx_10 + 0x20)
                zmm6[0] = zmm6[0] f+ zmm2[0]
                zmm6[0] = zmm6[0] f* zmm7[0]
                *(rax_6 + (i << 2) + 8) = zmm6[0]
                int64_t rax_7 = *(arg1 + 0x20)
                void* rcx_12 = *(arg3 + 8) + r8
                r8 += 0x40
                zmm6[0] = zmm6[0] f* *(arg_8 + rcx_12 + 0x30)
                zmm2[0] = zmm2[0] f* *(rcx_12 + 0x30)
                zmm6[0] = zmm6[0] f+ zmm2[0]
                zmm6[0] = zmm6[0] f* zmm7[0]
                *(rax_7 + (i << 2) + 0xc) = zmm6[0]
                i += 4
            while (i s< r12_1 - 4)
        
        zmm2 = 0x3f800000
        zmm2[0] = 1f f- zmm6[0]
        
        if (i s< r12_1 - 1)
            int64_t r8_2 = i << 4
            
            do
                int64_t rax_8 = *(arg1 + 0x20)
                int32_t* rcx_14 = *(arg3 + 8) + r8_2
                r8_2 += 0x10
                zmm6[0] = zmm6[0] f* *(rbx_1 + rcx_14)
                zmm2[0] = zmm2[0] f* *rcx_14
                zmm6[0] = zmm6[0] f+ zmm2[0]
                zmm6[0] = zmm6[0] f* zmm7[0]
                *(rax_8 + (i << 2)) = zmm6[0]
                i += 1
            while (i s< r12_1 - 1)
        
        *(*(arg1 + 0x20) + ((r12_1 - 1) << 2)) = *(arg1 + 8)
        result = result_1
        zmm2[0] = zmm2[0] f* *(arg3 + 0x18)
        zmm6[0] = zmm6[0] f* *(result + arg3)
        zmm6[0] = zmm6[0] f+ zmm2[0]
        zmm6[0] = zmm6[0] f* zmm7[0]
        zmm6[0] = zmm6[0] f* zmm7[0]
        
        if (not(_mm_and_ps(zmm6, 0x7fffffff)[0] f<= 9.99999994e-09f))
            zmm7[0] = zmm7[0] f* *(arg1 + 8)
            uint32_t zmm9[0x4] = *(arg1 + 4)
            zmm9[0] = zmm9[0] f- zmm7[0]
            zmm9[0] = zmm9[0] f/ zmm6[0]
            
            if (not(zmm9[0] f<= -1f))
                zmm9[0] = zmm9[0] f+ 1f
                zmm9[0] = zmm9[0] f* zmm7[0]
                
                if (not(zmm9[0] f< 9.99999994e-09f))
                    *(arg1 + 0x18) = 0
                    
                    if (r12_1.d s> *(arg1 + 0x1c))
                        sub_1405dadb0(&arg1[0x10], r12_1.d)
                    
                    int32_t rax_10 = *(arg1 + 0x18) + r12_1.d
                    *(arg1 + 0x18) = rax_10
                    
                    if (rax_10 s> *(arg1 + 0x1c))
                        sub_1406105e0(&arg1[0x10])
                    
                    zmm2 = zx.o(0)
                    int64_t i_2 = 0
                    
                    if (r12_1 - 1 s>= 4)
                        int64_t r8_3 = 0
                        int64_t i_4 = ((r12_1 - 5) u>> 2) + 1
                        i_2 = i_4 << 2
                        int64_t i_1
                        
                        do
                            *(r15_1 + *(arg1 + 0x10) - 8) = zmm2[0]
                            int64_t rax_12 = *(arg1 + 0x20)
                            arg2 = *(r15_1 + rax_12 - 4)
                            arg2[0] = arg2[0] f- *(r15_1 + rax_12 - 8)
                            zmm9[0] = zmm9[0] f* *(*(arg3 + 8) + r8_3 + 0xc)
                            int64_t rax_14 = *(arg1 + 0x10)
                            arg2[0] = arg2[0] f* zmm7[0]
                            zmm9[0] = zmm9[0] f+ 1f
                            arg2[0] = arg2[0] f* zmm9[0]
                            zmm2[0] = zmm2[0] f+ arg2[0]
                            *(r15_1 + rax_14 - 4) = zmm2[0]
                            int64_t rax_15 = *(arg1 + 0x20)
                            arg2 = *(r15_1 + rax_15)
                            arg2[0] = arg2[0] f- *(r15_1 + rax_15 - 4)
                            zmm9[0] = zmm9[0] f* *(*(arg3 + 8) + r8_3 + 0x1c)
                            int64_t rax_17 = *(arg1 + 0x10)
                            arg2[0] = arg2[0] f* zmm7[0]
                            zmm9[0] = zmm9[0] f+ 1f
                            arg2[0] = arg2[0] f* zmm9[0]
                            zmm2[0] = zmm2[0] f+ arg2[0]
                            *(r15_1 + rax_17) = zmm2[0]
                            int64_t rax_18 = *(arg1 + 0x20)
                            arg2 = *(r15_1 + rax_18 + 4)
                            arg2[0] = arg2[0] f- *(r15_1 + rax_18)
                            zmm9[0] = zmm9[0] f* *(*(arg3 + 8) + r8_3 + 0x2c)
                            int64_t rax_20 = *(arg1 + 0x10)
                            arg2[0] = arg2[0] f* zmm7[0]
                            zmm9[0] = zmm9[0] f+ 1f
                            arg2[0] = arg2[0] f* zmm9[0]
                            zmm2[0] = zmm2[0] f+ arg2[0]
                            *(r15_1 + rax_20 + 4) = zmm2[0]
                            int64_t rax_21 = *(arg1 + 0x20)
                            arg2 = *(r15_1 + rax_21 + 8)
                            arg2[0] = arg2[0] f- *(r15_1 + rax_21 + 4)
                            r15_1 = &r15_1[4]
                            zmm9[0] = zmm9[0] f* *(*(arg3 + 8) + r8_3 + 0x3c)
                            r8_3 += 0x40
                            arg2[0] = arg2[0] f* zmm7[0]
                            zmm9[0] = zmm9[0] f+ 1f
                            arg2[0] = arg2[0] f* zmm9[0]
                            zmm2[0] = zmm2[0] f+ arg2[0]
                            i_1 = i_4
                            i_4 -= 1
                        while (i_1 != 1)
                    
                    uint32_t zmm0[0x4]
                    
                    if (i_2 s< r12_1 - 1)
                        int64_t r8_5 = i_2 << 4
                        
                        do
                            *(*(arg1 + 0x10) + (i_2 << 2)) = zmm2[0]
                            int64_t rcx_20 = *(arg1 + 0x20)
                            zmm0 = *(rcx_20 + (i_2 << 2) + 4)
                            zmm9[0] = zmm9[0] f* *(*(arg3 + 8) + r8_5 + 0xc)
                            r8_5 += 0x10
                            zmm0[0] = zmm0[0] f- *(rcx_20 + (i_2 << 2))
                            i_2 += 1
                            zmm9[0] = zmm9[0] f+ 1f
                            zmm0[0] = zmm0[0] f* zmm7[0]
                            zmm9[0] = zmm9[0] f* zmm0[0]
                            zmm2[0] = zmm2[0] f+ zmm9[0]
                        while (i_2 s< r12_1 - 1)
                    
                    *(*(arg1 + 0x10) + ((r12_1 - 1) << 2)) = *(arg1 + 4)
                    int32_t rcx_22 = *(arg1 + 0x18)
                    result = zx.q(rcx_22 - 1)
                    
                    if (result.d s> 0)
                        int32_t rsi_2 = 1
                        int32_t* rdi_1 = nullptr
                        int32_t r15_2 = 2
                        
                        do
                            int64_t rcx_23 = *(arg1 + 0x20)
                            zmm0 = *(rdi_1 + rcx_23 + 4)
                            zmm0[0] = zmm0[0] f- *(rdi_1 + rcx_23)
                            uint32_t temp0_3[0x4] = _mm_and_ps(zmm0, 0x7fffffff)
                            uint32_t temp0_4[0x4]
                            
                            if (not(temp0_3[0] f<= 9.99999975e-05f))
                                int64_t rax_26 = *(arg1 + 0x10)
                                zmm0 = *(rdi_1 + rax_26 + 4)
                                zmm0[0] = zmm0[0] f- *(rdi_1 + rax_26)
                                temp0_4 = _mm_and_ps(zmm0, 0x7fffffff)
                            
                            if (temp0_3[0] f<= 9.99999975e-05f
                                    || not(temp0_4[0] f> 9.99999975e-05f))
                                int32_t rdx_5 = *(arg1 + 0x28)
                                int32_t rax_28 = rdx_5 - rsi_2
                                int64_t r12_2 = sx.q(r15_2)
                                
                                if (rax_28 != 1)
                                    memmove(rcx_23 + (sx.q(rsi_2) << 2), rcx_23 + (r12_2 << 2), 
                                        (rax_28 - 1) << 2)
                                    rdx_5 = *(arg1 + 0x28)
                                
                                *(arg1 + 0x28) = rdx_5 - 1
                                int32_t rax_33 = *(arg1 + 0x18) - rsi_2
                                
                                if (rax_33 != 1)
                                    int64_t rcx_25 = *(arg1 + 0x10)
                                    memmove(rcx_25 + (sx.q(rsi_2) << 2), rcx_25 + (r12_2 << 2), 
                                        (rax_33 - 1) << 2)
                                
                                *(arg1 + 0x18) -= 1
                                i_3 -= 1
                                rsi_2 -= 1
                                r15_2 -= 1
                                rdi_1 -= 4
                            
                            rcx_22 = *(arg1 + 0x18)
                            i_3 += 1
                            rsi_2 += 1
                            r15_2 += 1
                            rdi_1 = &rdi_1[1]
                            result = zx.q(rcx_22 - 1)
                        while (i_3 s< result.d)
                    
                    if (rcx_22 s> 2)
                        *arg1 = 1

return result
