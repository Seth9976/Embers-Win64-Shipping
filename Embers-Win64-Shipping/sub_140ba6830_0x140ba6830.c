// 函数: sub_140ba6830
// 地址: 0x140ba6830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 4)

if (arg3[1].d != *(arg3 + 0x34))
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = &arg3[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(arg3[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg3
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_2 = i_1 * 3
            
            if (*(r8_1 + (rcx_2 << 3)) == rbx)
                if (i != 0xffffffff)
                    void* rbx_1 = r8_1 + i_1 * 0x18
                    
                    if (rbx_1 != 0)
                        void* result = *(rbx_1 + 8)
                        
                        if (result != 0)
                            if (*(arg2 + 0x28) != 0)
                                int64_t rbp_1 = sx.q(*(result + 0x68))
                                int32_t rax_6 = (rbp_1 + 1).d
                                *(result + 0x68) = rax_6
                                
                                if (rax_6 s> *(result + 0x6c))
                                    sub_1405a4f90(result + 0x60)
                                
                                int16_t* rcx_6 = (rbp_1 << 4) + *(result + 0x60)
                                *rcx_6 = 0
                                *(rcx_6 + 8) = *(arg2 + 0x28)
                                *(arg2 + 0x28) = 0
                            
                            sub_140b9b3f0(result, *arg2)
                            
                            if (arg4 != 0)
                                sub_140bafaf0(result, arg4)
                            
                            *(arg1 + 0x2b8) -= 1
                        
                        return result
                
                break
            
            i = *(r8_1 + (rcx_2 << 3) + 0x10)
        while (i != 0xffffffff)

return nullptr
