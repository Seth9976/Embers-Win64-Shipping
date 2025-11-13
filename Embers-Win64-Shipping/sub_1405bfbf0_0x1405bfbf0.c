// 函数: sub_1405bfbf0
// 地址: 0x1405bfbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d266d0(arg1)

if (*(arg1 + 0x68) == 0)
    result = zx.q(*(arg1 + 8) u>> 4)
    
    if ((result.b & 1) == 0 && *(arg1 + 0x70) != 0)
        result = sub_1405c79e0()
        
        if (result != 0)
            void* rdx_1 = *(arg1 + 0x70)
            int64_t r8_1 = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38))
                uint64_t result_1 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_1 << 3)) == r8_1 && rdx_1 != 0)
                    int64_t* rsi_1
                    
                    if (rdx_1 == 0)
                        rsi_1 = nullptr
                    else
                        void* rax_1 = sub_1405c79e0()
                        
                        if (rax_1 == 0)
                            rsi_1 = nullptr
                        else
                            rsi_1 = *(arg1 + 0x70)
                            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                            
                            if (rax_2.d s> rsi_1[7].d || *(rsi_1[6] + (rax_2 << 3)) != rax_1 + 0x30)
                                rsi_1 = nullptr
                    
                    int32_t rax_4 = *(arg1 + 8)
                    int32_t rcx_2 = rax_4 & 0x69
                    int32_t rbp_2 = rcx_2 | 0x20
                    rax_4.b &= 0x30
                    
                    if (rax_4.b == 0)
                        rbp_2 = rcx_2
                    
                    if (rsi_1 == 0)
                        rsi_1 = sub_1405c79e0()
                    
                    if ((1 & sub_140b5b8a0(0, 0)) != 0)
                        sub_140d19010(arg1, 
                            NewObject with empty name can't be used to create default subobjects (inside "
                        "of UObject derived class constructor) as it produces incon")
                    
                    result = sub_140d2dfc0(rsi_1, arg1, 0, rbp_2, 0, 0, 0, 0, 0)
                    *(arg1 + 0x68) = result

return result
