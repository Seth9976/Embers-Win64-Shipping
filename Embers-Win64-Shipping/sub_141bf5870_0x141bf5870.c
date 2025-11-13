// 函数: sub_141bf5870
// 地址: 0x141bf5870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x648) == 0)
    sub_141bcc810(arg1)
    int64_t* rsi_1 = *(arg1 + 0x148)
    int64_t rbp_1 = 0
    result = &rsi_1[sx.q(*(arg1 + 0x150))]
    uint64_t r15_2 = sx.q(*(arg1 + 0x150)) << 3 u>> 3
    
    if (rsi_1 u> result)
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            int64_t* rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                result = sub_141c08960()
                
                if (result != 0)
                    result = sx.q(result[7].d)
                    
                    if (result.d s<= rbx_1[7].d)
                        void* const* result_1 = result
                        result = rbx_1[6]
                        
                        if (result[result_1] == &result[6] && (*(rbx_1 + 0xcc) & 1) == 0)
                            int64_t arg_8 = 0
                            
                            if ((1 & sub_140b5b8a0(0, 0)) != 0)
                                sub_140d19010(arg1, 
                                    NewObject with empty name can't be used to create default subobjects "
                                "(inside of UObject derived class constructor) as it produces 
                                        incon")
                            
                            void* rax_2 = sub_140d2dfc0(rbx_1, arg1, 0, 0, 0, 0, 0, 0, 0)
                            int64_t rdi_1 = sx.q(*(arg1 + 0x640))
                            int32_t rcx_2 = (rdi_1 + 1).d
                            *(arg1 + 0x640) = rcx_2
                            
                            if (rcx_2 s> *(arg1 + 0x644))
                                sub_1405a4d70(arg1 + 0x638)
                            
                            result = *(arg1 + 0x638)
                            result[rdi_1] = rax_2
            
            rsi_1 = &rsi_1[1]
            rbp_1 += 1
        while (rbp_1 != r15_2)

return result
