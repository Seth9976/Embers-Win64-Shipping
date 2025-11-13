// 函数: sub_1427c7a60
// 地址: 0x1427c7a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_2 = (*(*arg1 + 8))()
    
    if (rax_2 != 0)
        int32_t rbp_1 = *(rax_2 + 0x20)
        int32_t rdi_1 = 0
        int32_t r15_1 = *(rax_2 + 0x24)
        int32_t rbx_1 = 0
        
        if (rbp_1 != 0)
            do
                int64_t* rax_4 = (*(*arg1 + 0x10))(arg1, zx.q(rbx_1))
                
                if (rax_4 != 0)
                    int64_t rdx_1 = *rax_4
                    void* rax_5 = (*(rdx_1 + 8))(rax_4, rdx_1)
                    
                    if (rax_5 != 0)
                        char* rcx_2 = arg2
                        uint32_t i
                        uint32_t rdx_2
                        
                        do
                            rdx_2 = zx.d(*rcx_2)
                            i = zx.d(*(rcx_2 + *(rax_5 + 8) - arg2))
                            
                            if (rdx_2 != i)
                                break
                            
                            rcx_2 = &rcx_2[1]
                        while (i != 0)
                        
                        if (rdx_2 - i == 0)
                            return zx.q(rbx_1)
                
                rbx_1 += 1
            while (rbx_1 u< rbp_1)
        
        if (r15_1 != 0)
            do
                int64_t* rax_7 = (*(*arg1 + 0x18))(arg1, zx.q(rdi_1))
                
                if (rax_7 != 0)
                    int64_t rdx_5 = *rax_7
                    void* rax_8 = (*(rdx_5 + 8))(rax_7, rdx_5)
                    
                    if (rax_8 != 0)
                        void* rcx_5 = arg2
                        uint32_t i_1
                        uint32_t rdx_6
                        
                        do
                            rdx_6 = zx.d(*rcx_5)
                            i_1 = zx.d(*(rcx_5 + *(rax_8 + 8) - arg2))
                            
                            if (rdx_6 != i_1)
                                break
                            
                            rcx_5 += 1
                        while (i_1 != 0)
                        
                        if (rdx_6 - i_1 == 0)
                            return zx.q(rdi_1 + rbp_1)
                
                rdi_1 += 1
            while (rdi_1 u< r15_1)

return 0xffffffff
