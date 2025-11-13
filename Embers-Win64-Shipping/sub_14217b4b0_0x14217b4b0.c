// 函数: sub_14217b4b0
// 地址: 0x14217b4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_38 = zmm6

if (arg3 != 0)
    if (not(data_143f4d264.d f<= 0f))
        void* rax_1 = *(arg1 + 0x130)
        void* const rax_2
        
        if (rax_1 == 0)
            rax_2 = nullptr
        else
            rax_2 = *(rax_1 + 0x58)
        
        if (rax_2 != 0)
            zmm6 = zx.o(*(rax_2 + 0x218))
            int32_t rdx = *(arg1 + 0x1cc)
            int64_t r15_1
            
            if (rdx == 0)
                r15_1 = zx.q(*(arg1 + 0x1a0))
                int32_t rax_4 = (r15_1 + 1).d
                *(arg1 + 0x1a0) = rax_4
                
                if (rax_4 s> *(arg1 + 0x1a4))
                    sub_1405a4df0(arg1 + 0x198)
                
                int32_t rbx_1 = *(arg1 + 0x1c0)
                void* rdi_1 = arg1 + 0x1a8
                sub_1405a4980(rdi_1, rbx_1 + 1)
                *(rdi_1 + 0x18) += 1
                void* rax_5 = *(rdi_1 + 0x10)
                
                if (rax_5 != 0)
                    rdi_1 = rax_5
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rbx_1)
                int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                *(rdi_1 + (rdx_5 << 2)) &= not.d(1 << (rbx_1.b & 0x1f))
            else
                r15_1 = sx.q(*(arg1 + 0x1c8))
                int64_t r9_1 = *(arg1 + 0x198)
                int64_t r8 = sx.q(*(r9_1 + r15_1 * 0x18 + 4))
                *(arg1 + 0x1c8) = r8.d
                *(arg1 + 0x1cc) = rdx - 1
                
                if (rdx != 1)
                    *(r9_1 + r8 * 0x18) = 0xffffffff
            
            void* rax_12 = *(arg1 + 0x1b8)
            void* r8_1 = arg1 + 0x1a8
            
            if (rax_12 != 0)
                r8_1 = rax_12
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r15_1.d)
            int64_t rdx_8 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
            *(r8_1 + (rdx_8 << 2)) |= 1 << (r15_1.b & 0x1f)
            int64_t r8_2 = *(arg1 + 0x198)
            int64_t rdx_9 = sx.q(r15_1.d) * 3
            int32_t rax_18 = *arg2
            *(r8_2 + (rdx_9 << 3) + 8) = zmm6.q
            *(r8_2 + (rdx_9 << 3)) = rax_18
            int32_t* r10_1 = r8_2 + (rdx_9 << 3)
            r10_1[4] = 0xffffffff
            void arg_18
            sub_1421650b0(arg1 + 0x198, &arg_18, rax_18, r10_1, r15_1.d, nullptr)
    
    int32_t rax_19 = *(arg1 + 0x3f0)
    int32_t rcx_9 = *(arg1 + 0x1a0) - *(arg1 + 0x1cc)
    
    if (rax_19 u>= rcx_9)
        rcx_9 = rax_19
    
    *(arg1 + 0x3f0) = rcx_9
    return rax_19

uint64_t rax_20 = zx.q(*(arg1 + 0x1a0))

if (rax_20.d != *(arg1 + 0x1cc))
    void* rdx_11 = *(arg1 + 0x1d8)
    void* r8_4 = arg1 + 0x1d0
    int64_t r10_2 = sx.q(*arg2)
    
    if (rdx_11 != 0)
        r8_4 = rdx_11
    
    int32_t rdx_12 = *(r8_4 + (((sx.q(*(arg1 + 0x1e0)) - 1) & r10_2) << 2))
    
    if (rdx_12 != 0xffffffff)
        int64_t r8_5 = *(arg1 + 0x198)
        
        while (true)
            rax_20 = sx.q(rdx_12)
            uint64_t rcx_13 = rax_20 * 3
            
            if (*(r8_5 + (rcx_13 << 3)) == r10_2.d)
                break
            
            rdx_12 = *(r8_5 + (rcx_13 << 3) + 0x10)
            
            if (rdx_12 == 0xffffffff)
                return rax_20
        
        if (rdx_12 != 0xffffffff)
            uint128_t zmm7 = zx.o(*(r8_5 + rax_20 * 0x18 + 8))
            rax_20 = sub_1405c2fb0(arg1 + 0x198, rdx_12)
            int64_t zmm1 = data_143f4d264
            
            if (not(zmm1.d f== 0f))
                int64_t* r9_4 = *(arg1 + 0x310)
                
                if (r9_4 != 0)
                    void* rbp_1 = *(arg1 + 0x130)
                    
                    if (rbp_1 != 0)
                        rbp_1 = *(rbp_1 + 0x58)
                    
                    if (rbp_1 != 0)
                        zmm6.q = *(rbp_1 + 0x218) f- zmm7.q
                        
                        if (not(zmm6.q f<= _mm_cvtps_pd(zmm1).q))
                            rax_20 = zx.q(r9_4[1].d)
                            
                            if (rax_20.d != *(r9_4 + 0x34))
                                void* rdx_13 = r9_4[8]
                                void* r8_6 = &r9_4[7]
                                int64_t r10_3 = sx.q(*arg2)
                                
                                if (rdx_13 != 0)
                                    r8_6 = rdx_13
                                
                                rax_20 = zx.q(*(r8_6 + (((sx.q(r9_4[9].d) - 1) & r10_3) << 2)))
                                
                                if (rax_20.d != 0xffffffff)
                                    int64_t rdx_14 = *r9_4
                                    
                                    do
                                        int64_t r8_7 = sx.q(rax_20.d)
                                        int32_t* rcx_18 = r8_7 * 0x38
                                        
                                        if (*(rcx_18 + rdx_14) == r10_3.d)
                                            if (rax_20.d != 0xffffffff)
                                                int64_t rax_22 = r8_7 * 0x38
                                                rax_20 = rax_22 + rdx_14
                                                
                                                if (rax_22 != neg.q(rdx_14) && rax_20 != -8)
                                                    rax_20 = sub_140d3c6e0(rax_20 + 8)
                                                    
                                                    if (rax_20 != 0)
                                                        int64_t zmm0
                                                        zmm0.d = fconvert.s(zmm6.q)
                                                        int64_t var_58 = *(*(rax_20 + 0x10) + 0x18)
                                                        int32_t var_50_1 = zmm0.d
                                                        return sub_14213cae0(arg1 + 0x388, &var_58)
                                            
                                            break
                                        
                                        rax_20 = zx.q(*(rcx_18 + rdx_14 + 0x30))
                                    while (rax_20.d != 0xffffffff)

return rax_20
