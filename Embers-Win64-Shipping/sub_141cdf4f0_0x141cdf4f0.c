// 函数: sub_141cdf4f0
// 地址: 0x141cdf4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg4)

if (arg3 s>= 0)
    int32_t rdi_1 = *(arg1 + 0x68)
    
    if (arg3 s< rdi_1)
        void* rsi_1 = arg1 + 0x70
        void* rax_1 = *(rsi_1 + 0x10)
        
        if (rax_1 != 0)
            rsi_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(arg3)
        
        if (test_bit(*(rsi_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f)
                && r10.d s>= 0 && r10.d s< rdi_1)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10.d)
            
            if (test_bit(*(rsi_1 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), r10.d & 0x1f))
                int64_t rdx_4 = *(arg1 + 0x60)
                int64_t rax_13 = *(arg1 + 0x28)
                int64_t r9_4 = sx.q(*(rdx_4 + sx.q(arg3) * 0x18))
                int32_t rdx_5 = *(rdx_4 + r10 * 0x18)
                int64_t rcx_5 = r9_4 << 5
                int32_t* r10_1 = *(rcx_5 + rax_13 + 0x10)
                void* rdi_2 = &r10_1[sx.q(*(rcx_5 + rax_13 + 0x18))]
                
                if (r10_1 != rdi_2)
                    int64_t rbx_1 = *(arg1 + 0x98)
                    
                    do
                        int64_t r8 = sx.q(*r10_1)
                        int64_t rcx_6 = r8 * 3
                        int32_t rcx_7 = *(rbx_1 + (rcx_6 << 3))
                        int32_t rax_16 = *(rbx_1 + (rcx_6 << 3) + 4)
                        
                        if (rcx_7 == r9_4.d && rax_16 == rdx_5)
                            *arg2 = r8.d
                            return arg2
                        
                        if (rcx_7 == rdx_5 && rax_16 == r9_4.d)
                            *arg2 = r8.d
                            return arg2
                        
                        r10_1 = &r10_1[1]
                    while (r10_1 != rdi_2)

*arg2 = data_143a1c6bc
return arg2
