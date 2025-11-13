// 函数: sub_14110e680
// 地址: 0x14110e680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
uint64_t result = __security_cookie ^ &var_b8
uint64_t result_1 = result
void* r13 = arg1

if (data_143f0f21f != 0)
    uint64_t rdx = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rdx.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rdx))
            int32_t i = 0
            int32_t i_1 = 0
            
            if (*(r13 + 0xa8) s> 0)
                int64_t rbp_1 = 0
                int64_t var_88_1 = 0
                
                do
                    void* rbp_2 = rbp_1 + *(r13 + 0xa0)
                    void* var_80_1 = rbp_2
                    
                    if (*(rbp_2 + 0x51f0) != 0 && *(rbp_2 + 0x5200) != 0)
                        int32_t rbx_1 = data_14399e5e0
                        int64_t* rax_3 = sub_140a242a0()
                        void* rcx = *(rbp_2 + 0x5208)
                        int32_t var_44_1 = 4
                        void** var_50_1 = nullptr
                        int32_t j_3 = 1
                        void* var_70 = rcx
                        
                        if (rcx != 0)
                            *(rcx + 0x48) += 1
                        
                        (*(*rax_3 + 0x48))(rax_3, &var_70, zx.q(rbx_1))
                        void** rcx_2 = var_50_1
                        void** rbx_2 = &var_70
                        int32_t j_2 = j_3
                        
                        if (rcx_2 != 0)
                            rbx_2 = rcx_2
                        
                        if (j_2 != 0)
                            int32_t j
                            
                            do
                                int64_t* rcx_3 = *rbx_2
                                
                                if (rcx_3 != 0)
                                    rcx_3[9].d -= 1
                                    
                                    if (rcx_3[9].d == 1)
                                        sub_140a2f6e0(rcx_3)
                                
                                rbx_2 = &rbx_2[1]
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                            rcx_2 = var_50_1
                        
                        if (rcx_2 != 0)
                            sub_140a74f90(rcx_2)
                        
                        int64_t* r15_1 = *(rbp_2 + 0x51f8)
                        void* rax_7 = &r15_1[sx.q(*(rbp_2 + 0x5200))]
                        
                        if (r15_1 != rax_7)
                            do
                                int64_t r12_1 = *(rbp_2 + 0x51e8)
                                int64_t r13_1 = *(rbp_2 + 0x51f0)
                                void* j_1 = **r15_1
                                
                                if (j_1 != 0)
                                    do
                                        int32_t rsi_1 = *(j_1 + 0xa008)
                                        void*** rax_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        void* rcx_4 = &rax_11[0xc]
                                        
                                        if (rcx_4 u> *(arg2 + 0x38))
                                            sub_140b0e3d0(arg2 + 0x30, 0x68)
                                            rax_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                            rcx_4 = &rax_11[0xc]
                                        
                                        *(arg2 + 0x30) = rcx_4
                                        void**** rcx_6 = *(arg2 + 8)
                                        *(arg2 + 0x14) += 1
                                        *rcx_6 = rax_11
                                        *(arg2 + 8) = &rax_11[1]
                                        rax_11[1] = 0
                                        *rax_11 = &data_142f18bf8
                                        rax_11[2] = r12_1
                                        rax_11[3] = 3
                                        rax_11[4] = 0
                                        rax_11[5] = r13_1
                                        __builtin_memset(&rax_11[6], 0, 0x14)
                                        rax_11[9] = 0
                                        rax_11[0xa].d = 0
                                        *(rax_11 + 0x54) = rsi_1
                                        rax_11[0xb] = j_1
                                        j_1 = *(j_1 + 0xa000)
                                    while (j_1 != 0)
                                    
                                    rbp_2 = var_80_1
                                
                                r15_1 = &r15_1[1]
                            while (r15_1 != rax_7)
                            
                            i = i_1
                            r13 = arg1
                        
                        int64_t* r15_2 = *(rbp_2 + 0x51f8)
                        *(rbp_2 + 0x51f8) = 0
                        int64_t rdi_1 = sx.q(*(rbp_2 + 0x5200))
                        int32_t rsi_2 = *(rbp_2 + 0x5204)
                        *(rbp_2 + 0x5200) = 0
                        
                        if (*(arg2 + 0x10) == 0)
                            void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_14 = &rcx_13[4]
                            
                            if (rax_14 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x28)
                                rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_14 = &rcx_13[4]
                            
                            *(arg2 + 0x30) = rax_14
                            void**** rax_15 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_15 = rcx_13
                            *(arg2 + 8) = &rcx_13[1]
                            rcx_13[1] = 0
                            result = &data_142f19bf8
                            *rcx_13 = &data_142f19bf8
                            rcx_13[2] = r15_2
                            rcx_13[3].d = rdi_1.d
                            *(rcx_13 + 0x1c) = rsi_2
                        else
                            int64_t rsi_3 = 0
                            result = &r15_2[rdi_1]
                            int64_t* rdi_2 = r15_2
                            uint64_t rbp_4 = rdi_1 << 3 u>> 3
                            
                            if (r15_2 u> result)
                                rbp_4 = 0
                            
                            if (rbp_4 != 0)
                                do
                                    void* rbx_3 = *rdi_2
                                    
                                    if (rbx_3 != 0)
                                        sub_140b16b40(rbx_3 + 0x10, 0)
                                        result = j_sub_140a74f90(rbx_3)
                                    
                                    rdi_2 = &rdi_2[1]
                                    rsi_3 += 1
                                while (rsi_3 != rbp_4)
                            
                            if (r15_2 != 0)
                                result = sub_140a74f90(r15_2)
                    
                    i += 1
                    rbp_1 = var_88_1 + 0x5240
                    i_1 = i
                    var_88_1 = rbp_1
                while (i s< *(r13 + 0xa8))
            
            int64_t rsi_4 = *(r13 + 0x3f8)
            
            if (rsi_4 != 0)
                void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_17 = &rcx_19[3]
                
                if (rax_17 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_17 = &rcx_19[3]
                
                *(arg2 + 0x30) = rax_17
                int64_t* rax_18 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_18 = rcx_19
                *(arg2 + 8) = &rcx_19[1]
                rcx_19[1] = 0
                *rcx_19 = &data_142f11608
                rcx_19[2] = rsi_4
                sub_1405d16e0(r13 + 0x3f0, nullptr)
                result = sub_1405d16e0(r13 + 0x3f8, nullptr)

__security_check_cookie(result_1 ^ &var_b8)
return result
