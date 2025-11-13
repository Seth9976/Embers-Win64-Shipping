// 函数: sub_141e1e860
// 地址: 0x141e1e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x28)
void* rcx_15

if (r8 == 0)
    rcx_15 = &arg2[1]
else
    int32_t rax_1 = *(r8 + 0x18)
    
    if (rax_1 == 0)
        rcx_15 = &arg2[1]
    else
        int64_t rdx = sx.q(*(arg1 + 0x1c))
        
        if (rdx.d s< 0 || rdx.d s>= rax_1)
            rcx_15 = &arg2[1]
        else
            void* result
            
            if (*(arg1 + 0x38) s> 0)
                int64_t rbp_1 = sx.q(*(arg1 + 0x48))
                int64_t rdi_1 = sx.q(*(arg1 + 0x88))
                int32_t rax_2 = (rdi_1 + rbp_1).d
                *(arg1 + 0x88) = rax_2
                
                if (rax_2 s> *(arg1 + 0x8c))
                    sub_1405a4d70(arg1 + 0x80)
                
                memset(*(arg1 + 0x80) + (rdi_1 << 3), 0, rbp_1 << 3)
                int32_t i = 0
                
                if (*(arg1 + 0x38) s> 0)
                    int64_t r14_1 = 0
                    
                    do
                        void* rdx_3 = *(arg1 + 0x30) + r14_1
                        bool r9_1 = i s> 0
                        
                        if (*(rdx_3 + 0xc2) != 0)
                            uint32_t rcx_2 = zx.d(*(rdx_3 + 0xc1))
                            
                            if (rcx_2 == 0)
                                arg3 = sub_141e1cca0(arg1, arg2, rdx_3, r9_1, arg3)
                            else if (rcx_2 == 1)
                                arg3 = sub_141e1c9d0(arg1, *(rdx_3 + 0x30), arg2, arg3)
                            else if (rcx_2 == 2)
                                arg3 = sub_141e1cae0(arg1, arg2, rdx_3, r9_1, arg3)
                        
                        i += 1
                        r14_1 += 0xc8
                    while (i s< *(arg1 + 0x38))
                
                sub_141e451a0(&arg2[1], arg3)
                int64_t rdi_2 = 0
                int64_t* rbx_1 = *(arg1 + 0x80)
                result = &rbx_1[sx.q(*(arg1 + 0x88))]
                uint64_t rsi_2 = sx.q(*(arg1 + 0x88)) << 3 u>> 3
                
                if (rbx_1 u> result)
                    rsi_2 = 0
                
                if (rsi_2 != 0)
                    do
                        int64_t rcx_8 = *rbx_1
                        
                        if (rcx_8 != 0)
                            result = j_sub_140a74f90(rcx_8)
                        
                        rbx_1 = &rbx_1[1]
                        rdi_2 += 1
                    while (rdi_2 != rsi_2)
                
                bool cond:1_1 = *(arg1 + 0x8c) == 0
                *(arg1 + 0x88) = 0
                
                if (not(cond:1_1))
                    return sub_1405c5570(arg1 + 0x80, 0)
                
                return result
            
            if (rdx.d s< rax_1)
                result = *(r8 + 0x10)
                
                if (*(rdx * 0x58 + result + 0x28) != 0)
                    return result
            
            int64_t arg_8 = *arg2
            sub_141e18430(arg1, rdx.d, &arg_8)
            int64_t* rcx_14 = *(*(arg1 + 0x40) + sx.q(*(arg1 + 0x1c)) * 0x10 + 8)
            
            if (rcx_14 != 0)
                jump(*(*rcx_14 + 0x18))
            
            rcx_15 = &arg2[1]
            
            if (arg2[8].b != 0)
                return sub_141e47c50(rcx_15, arg3) __tailcall

return sub_141e0ba30(rcx_15) __tailcall
