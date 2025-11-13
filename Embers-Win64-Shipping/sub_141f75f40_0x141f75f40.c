// 函数: sub_141f75f40
// 地址: 0x141f75f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t i_1 = 0
int32_t rax_2 = *(arg1 + 0x4bc)
*(arg1 + 0x4b8) = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(arg1 + 0x4b0, 0)

uint64_t result = sub_141f6f7f0(arg1 + 0x4c0)

if (*(arg1 + 0x430) != 0)
    result = sub_140d3c6e0(arg1 + 0x438)
    
    if (result != 0)
        void* rbx_1 = *(result + 0x430)
        
        if (rbx_1 != 0)
            void* r12_1 = *(arg1 + 0x430)
            int32_t rcx_4 = *(r12_1 + 0x1b0) + *(arg1 + 0x4b8)
            *(arg1 + 0x4b8) = rcx_4
            
            if (rcx_4 s> *(arg1 + 0x4bc))
                sub_1405a4cf0(arg1 + 0x4b0)
            
            void* rcx_9 = *(arg1 + 0x430)
            result = zx.q(*(arg1 + 0x4b8))
            
            if (rcx_9 != rbx_1)
                int32_t i = 0
                int64_t var_b8
                
                if (result.d s> 0)
                    int32_t* r14_1 = nullptr
                    int64_t* r15_1 = nullptr
                    
                    do
                        int64_t rbx_2 = *(arg1 + 0x4b0)
                        var_b8 = *(r15_1 + *(r12_1 + 0x1a8))
                        *(r14_1 + rbx_2) = sub_14078ee20(rbx_1 + 0x188, &var_b8)
                        r15_1 += 0xc
                        i += 1
                        r14_1 = &r14_1[1]
                    while (i s< *(arg1 + 0x4b8))
                    
                    rcx_9 = *(arg1 + 0x430)
                
                void** var_90
                sub_1423118a0(rcx_9, &var_90)
                void** r14_2 = var_90
                var_b8 = 0
                int32_t var_88
                void* rcx_10 = &r14_2[sx.q(var_88)]
                result = (rcx_10 - r14_2 + 7) u>> 3
                
                if (r14_2 u> rcx_10)
                    result = 0
                
                uint64_t result_1 = result
                
                if (result != 0)
                    int64_t rbx_6
                    
                    do
                        void* rsi_1 = *r14_2
                        int32_t r15_2 = -1
                        int32_t rcx_11
                        rcx_11.b = sub_140b5b8a0(*(rsi_1 + 0x30), 0) == 0
                        int32_t var_b0
                        
                        if ((*(rsi_1 + 0x34) != 0 | rcx_11.b) != 0)
                            int64_t rbx_3 = *(rsi_1 + 0x30)
                            var_b0.q = rbx_3
                            void* const rcx_15
                            
                            if (*(r12_1 + 0x220) == *(r12_1 + 0x24c))
                            label_141f76190:
                                rcx_15 = nullptr
                            else
                                int32_t var_ac
                                int32_t rax_13 = sub_140b5ead0(rbx_3.d) + var_ac
                                void* r8_1 = r12_1 + 0x250
                                void* rcx_13 = *(r8_1 + 8)
                                
                                if (rcx_13 != 0)
                                    r8_1 = rcx_13
                                
                                int32_t rax_15 =
                                    *(r8_1 + (((sx.q(*(r12_1 + 0x260)) - 1) & sx.q(rax_13)) << 2))
                                
                                if (rax_15 == 0xffffffff)
                                label_141f76190_1:
                                    rcx_15 = nullptr
                                else
                                    int64_t r8_2 = *(r12_1 + 0x218)
                                    
                                    while (true)
                                        int64_t rdx_7 = sx.q(rax_15) * 5
                                        rcx_15 = r8_2 + (rdx_7 << 2)
                                        
                                        if (*(r8_2 + (rdx_7 << 2)) == rbx_3)
                                            break
                                        
                                        rax_15 = *(rcx_15 + 0xc)
                                        
                                        if (rax_15 == 0xffffffff)
                                            goto label_141f76190_2
                                    
                                    if (rax_15 == 0xffffffff)
                                    label_141f76190_2:
                                        rcx_15 = nullptr
                            
                            void* rax_16 = rcx_15 + 8
                            
                            if (rcx_15 == 0)
                                rax_16 = nullptr
                            
                            if (rax_16 != 0)
                                r15_2 = *rax_16
                        
                        int32_t rcx_16 = *(rsi_1 + 0x30)
                        var_b0 = r15_2
                        int32_t rbp_1 = -1
                        rcx_16.b = sub_140b5b8a0(rcx_16, 0).b == 0
                        result.b = *(rsi_1 + 0x34) != 0
                        result.b |= rcx_16.b
                        
                        if (result.b != 0)
                            int64_t rbx_4 = *(rsi_1 + 0x30)
                            void* const rcx_20
                            
                            if (*(rbx_1 + 0x220) == *(rbx_1 + 0x24c))
                            label_141f7624e:
                                rcx_20 = nullptr
                            else
                                int32_t rax_19 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
                                void* r8_3 = rbx_1 + 0x250
                                void* rcx_18 = *(r8_3 + 8)
                                
                                if (rcx_18 != 0)
                                    r8_3 = rcx_18
                                
                                int32_t rax_21 =
                                    *(r8_3 + (((sx.q(*(rbx_1 + 0x260)) - 1) & sx.q(rax_19)) << 2))
                                
                                if (rax_21 == 0xffffffff)
                                label_141f7624e_1:
                                    rcx_20 = nullptr
                                else
                                    int64_t r8_4 = *(rbx_1 + 0x218)
                                    
                                    while (true)
                                        int64_t rdx_11 = sx.q(rax_21) * 5
                                        rcx_20 = r8_4 + (rdx_11 << 2)
                                        
                                        if (*(r8_4 + (rdx_11 << 2)) == rbx_4)
                                            break
                                        
                                        rax_21 = *(rcx_20 + 0xc)
                                        
                                        if (rax_21 == 0xffffffff)
                                            goto label_141f7624e_2
                                    
                                    if (rax_21 == 0xffffffff)
                                    label_141f7624e_2:
                                        rcx_20 = nullptr
                            
                            result = rcx_20 + 8
                            
                            if (rcx_20 == 0)
                                result = 0
                            
                            if (result != 0)
                                rbp_1 = *result
                        
                        if (r15_2 != 0xffffffff && rbp_1 == 0xffffffff)
                            int128_t zmm1 = data_143dbb0d0
                            int128_t var_78 = data_143dbb0c0
                            int128_t var_58_1 = data_143dbb0e0
                            int128_t var_68_1 = zmm1
                            int32_t var_48_1 = rbp_1
                            result = sub_141f64290(arg1, r15_2, &var_78)
                            
                            if (result.b != 0)
                                result = sub_141f4f5d0(arg1 + 0x4c0, &var_b0, &var_78)
                        
                        r14_2 = &r14_2[1]
                        rbx_6 = var_b8 + 1
                        var_b8 = rbx_6
                    while (rbx_6 != result_1)
                    r14_2 = var_90
                
                if (r14_2 != 0)
                    result = sub_140a74f90(r14_2)
            else if (result.d s> 0)
                int64_t rcx_6 = 0
                
                do
                    result = *(arg1 + 0x4b0)
                    rcx_6 += 4
                    *(rcx_6 + result - 4) = i_1
                    i_1 += 1
                while (i_1 s< *(arg1 + 0x4b8))

*(arg1 + 0x49c) += 1
__security_check_cookie(rax_1 ^ &var_d8)
return result
