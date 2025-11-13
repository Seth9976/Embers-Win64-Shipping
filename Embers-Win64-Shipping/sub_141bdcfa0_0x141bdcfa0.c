// 函数: sub_141bdcfa0
// 地址: 0x141bdcfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 1)
    arg2 = 1

if (arg2 != *(arg1 + 0x6c))
    *(arg1 + 0x6c) = arg2
    
    if (*(arg1 + 0x50) != 0)
        int64_t* rdi = *(arg1 + 0x58)
        
        if (rdi != 0)
            int32_t rax_1 = rdi[1].d
            
            if (rax_1 s> 0)
                int64_t* rcx = nullptr
                
                if (rdi != 0)
                    if (rax_1 != 0)
                        rdi[1].d = rax_1 + 1
                        rax_1 = 1
                    
                    if (rax_1.b == 0)
                        rdi = nullptr
                    
                    if (rdi != 0)
                        rcx = *(arg1 + 0x50)
                
                sub_140f4adb0(rcx, arg1, 0)
                
                if (rdi != 0)
                    rdi[1].d -= 1
                    
                    if (rdi[1].d == 1)
                        (**rdi)(rdi)
                        int32_t temp1_1 = *(rdi + 0xc)
                        *(rdi + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rdi + 8))(rdi, 1)

return arg1
