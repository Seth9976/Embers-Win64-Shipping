// 函数: sub_141247f20
// 地址: 0x141247f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg4
void* rbx = arg3
void* r14 = arg2
uint64_t result = sub_141228900(arg1, arg2, arg3)

if (result.b != 0)
    void* r10_1 = arg1
    
    if (*(r10_1 + 0x10) == 0)
        int32_t i_1 = 0
        
        if (*(rbx + 0xa8) s> 0)
            int64_t rcx_7 = 0
            int64_t var_78_1 = 0
            int32_t i
            
            do
                int32_t result_7 = 0
                void* r15_3 = *(rbx + 0xa0) + rcx_7
                int32_t result_5 = 0
                int32_t rcx_8 = 0
                int32_t result_13 = 0
                int32_t rdi_2 = 1
                int32_t var_70 = 0
                int32_t var_6c_1 = 1
                int32_t rbp_2 = -1
                void* result_4 = r15_3 + 0x15b8
                int32_t result_2 = *(result_4 + 0x18)
                
                if (result_2 != 0)
                    void* result_10 = *(result_4 + 0x10)
                    void* result_9 = result_4
                    result_7 = result_2
                    
                    if (result_10 != 0)
                        result_9 = result_10
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(result_2 - 1)
                    int32_t rdx_4 = *result_9
                    result = zx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    
                    if (rdx_4 != 0)
                    label_1412481a8:
                        rdi_2 = neg.d(rdx_4) & rdx_4
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rdi_2)
                        var_6c_1 = rdi_2
                        int32_t rax_11
                        
                        if (rdi_2 == 0)
                            rax_11 = 0x20
                        else
                            rax_11 = 0x1f - temp0_2
                        
                        result = zx.q(result_13 - rax_11 + 0x1f)
                        
                        if (result.d s> result_2)
                            result = zx.q(result_2)
                        
                        result_7 = result.d
                        result_5 = result.d
                    else
                        while (true)
                            int64_t rdx_5 = sx.q(rcx_8)
                            result_13 += 0x20
                            rcx_8 += 1
                            result_5 = result_13
                            var_70 = rcx_8
                            
                            if (rdx_5.d s>= result.d)
                                result_5 = result_2
                                break
                            
                            rdx_4 = *(result_9 + (rdx_5 << 2) + 4)
                            rbp_2 = -1
                            
                            if (rdx_4 != 0)
                                goto label_1412481a8
                    
                    r10_1 = arg1
                
                if (result_7 s< result_2)
                    while (true)
                        int64_t result_12 = sx.q(result_7)
                        void* r14_2 = *(*(r14 + 0xdb8) + (result_12 << 3))
                        char rbx_5 = *(r14_2 + 0x120)
                        sub_141247bb0(r10_1, arg2 + 0x1d08, r14_2, rsi, 
                            *(*(r15_3 + 0x1658) + result_12 * 0x10 + 2) & 1, arg5, arg6, arg7)
                        
                        if ((rbx_5 & 4) == 0 && (*(r14_2 + 0x120) & 4) != 0)
                            int64_t rsi_2 = sx.q(*(r15_3 + 0x1750))
                            int32_t rax_15 = (rsi_2 + 1).d
                            *(r15_3 + 0x1750) = rax_15
                            
                            if (rax_15 s> *(r15_3 + 0x1754))
                                sub_14083a310(r15_3 + 0x1748, rsi_2.d)
                            
                            *(*(r15_3 + 0x1748) + (rsi_2 << 3)) = r14_2
                            rsi = arg4
                        
                        sub_14059bdd0(&var_70)
                        result = result_4
                        result_7 = result_5
                        
                        if (result_7 s>= *(result + 0x18))
                            break
                        
                        rbp_2 &= not.d(rdi_2)
                        rdi_2 = var_6c_1
                        r10_1 = arg1
                        r14 = arg2
                    
                    result_4 = r15_3 + 0x15b8
                
                int32_t j = 0
                
                if (*(r15_3 + 0x5170) s> 0)
                    int64_t* r14_3 = nullptr
                    
                    do
                        void* result_8 = result_4
                        void* result_11 = *(result_4 + 0x10)
                        int64_t r8_3 = sx.q(*(*(r14_3 + *(r15_3 + 0x5168)) + 0x110))
                        
                        if (result_11 != 0)
                            result_8 = result_11
                        
                        int32_t rax_18 = r8_3.d
                        
                        if (r8_3.d s< 0)
                            rax_18 = (r8_3 + 0x1f).d
                        
                        result = zx.q(*(result_8 + (sx.q(rax_18 s>> 5) << 2)))
                        
                        if (not(test_bit(result.d, r8_3.d & 0x1f)))
                            void* rsi_3 = *(*(arg2 + 0xdb8) + (r8_3 << 3))
                            char rbx_6 = *(rsi_3 + 0x120)
                            result =
                                sub_141247bb0(arg1, arg2 + 0x1d08, rsi_3, arg4, 1, arg5, arg6, arg7)
                            
                            if ((rbx_6 & 4) == 0 && (*(rsi_3 + 0x120) & 4) != 0)
                                int64_t rdi_6 = sx.q(*(r15_3 + 0x1750))
                                int32_t rax_24 = (rdi_6 + 1).d
                                *(r15_3 + 0x1750) = rax_24
                                
                                if (rax_24 s> *(r15_3 + 0x1754))
                                    sub_14083a310(r15_3 + 0x1748, rdi_6.d)
                                
                                result = *(r15_3 + 0x1748)
                                *(result + (rdi_6 << 3)) = rsi_3
                        
                        j += 1
                        r14_3 = &r14_3[1]
                    while (j s< *(r15_3 + 0x5170))
                
                i = i_1 + 1
                rbx = arg3
                rcx_7 = var_78_1 + 0x5240
                rsi = arg4
                r10_1 = arg1
                r14 = arg2
                i_1 = i
                var_78_1 = rcx_7
            while (i s< *(rbx + 0xa8))
            r10_1 = arg1
    else
        int32_t r14_1 = *(r14 + 0xdc0)
        int32_t rdi_1 = 0
        
        if (r14_1 != 0)
            do
                void* rbp_1 = *(*(arg2 + 0xdb8) + (sx.q(rdi_1) << 3))
                char rbx_1 = *(rbp_1 + 0x120)
                result = sub_141247bb0(r10_1, arg2 + 0x1d08, rbp_1, 0, 1, arg5, arg6, arg7)
                
                if ((rbx_1 & 4) == 0)
                    char rax_3 = *(rbp_1 + 0x120)
                    
                    if ((rax_3 & 4) == 0)
                        *(rbp_1 + 0x120) = rax_3 | 4
                    
                    int64_t r8_1 = 0
                    result = sx.q(*(arg3 + 0xa8))
                    
                    if (result.d s> 0)
                        void* r9 = *(arg3 + 0xa0)
                        uint64_t result_3 = result
                        int32_t rax_4 = rdi_1
                        
                        if (rdi_1 s< 0)
                            rax_4 = rdi_1 + 0x1f
                        
                        result = r9 + 0x15b8
                        
                        do
                            uint64_t result_6 = *(result + 0x10)
                            uint64_t result_1 = result
                            
                            if (result_6 != 0)
                                result_1 = result_6
                            
                            if (test_bit(*(result_1 + (sx.q(rax_4 s>> 5) << 2)), rdi_1 & 0x1f))
                                int64_t rsi_1 = sx.q(*(r9 + 0x1750))
                                int32_t rax_7 = (rsi_1 + 1).d
                                *(r9 + 0x1750) = rax_7
                                
                                if (rax_7 s> *(r9 + 0x1754))
                                    sub_14083a310(r9 + 0x1748, rsi_1.d)
                                
                                result = *(r9 + 0x1748)
                                *(result + (rsi_1 << 3)) = rbp_1
                                break
                            
                            r8_1 += 1
                            r9 += 0x5240
                            result += 0x5240
                        while (r8_1 s< result_3)
                
                r10_1 = arg1
                rdi_1 += 1
            while (rdi_1 u< r14_1)
            
            r10_1 = arg1
    
    *(r10_1 + 0x10) = 0

return result
