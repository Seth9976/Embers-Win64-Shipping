// 函数: sub_1424500c0
// 地址: 0x1424500c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    void* rbx_1 = *(arg1 + 0x380)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_142481000()
        
        if (rax_1 != 0)
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s<= *(rbx_1 + 0x38))
                int64_t result = *(rbx_1 + 0x30)
                
                if (*(result + (rax_2 << 3)) == rax_1 + 0x30)
                    int32_t i = 0
                    
                    if (*(arg1 + 0x390) s> 0)
                        int64_t r14_1 = 0
                        
                        do
                            int64_t** r15_1 = *(arg1 + 0x388)
                            int64_t* rcx_1 = *(r15_1 + r14_1)
                            
                            if (rcx_1 != 0 && rcx_1[2] != rbx_1)
                                result = (*(*rcx_1 + 0x260))(rcx_1)
                                *(r15_1 + r14_1) = 0
                            
                            i += 1
                            r14_1 += 8
                        while (i s< *(arg1 + 0x390))
                    
                    return result
    
    *(arg1 + 0x380) = sub_142481170()
