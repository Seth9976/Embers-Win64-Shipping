// 函数: sub_1427c7b70
// 地址: 0x1427c7b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_2 = (*(*arg1 + 8))()
    
    if (rax_2 != 0)
        int32_t rbp_1 = *(rax_2 + 0x14)
        int32_t rbx_1 = 0
        
        if (rbp_1 != 0)
            do
                int64_t* result = (*(*arg1 + 0x10))(arg1, zx.q(rbx_1))
                
                if (result != 0)
                    int64_t rdx_1 = *result
                    int64_t* rax_4 = (*(rdx_1 + 8))(result, rdx_1)
                    
                    if (rax_4 != 0)
                        char* rcx_2 = *rax_4
                        void* r8_2 = arg2 - rcx_2
                        uint32_t i
                        uint32_t rdx_2
                        
                        do
                            rdx_2 = zx.d(*rcx_2)
                            i = zx.d(*(rcx_2 + r8_2))
                            
                            if (rdx_2 != i)
                                break
                            
                            rcx_2 = &rcx_2[1]
                        while (i != 0)
                        
                        if (rdx_2 - i == 0)
                            return result
                
                rbx_1 += 1
            while (rbx_1 u< rbp_1)

return nullptr
