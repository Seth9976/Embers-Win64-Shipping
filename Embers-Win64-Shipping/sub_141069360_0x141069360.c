// 函数: sub_141069360
// 地址: 0x141069360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d != 0xffffffff)
    int32_t r11_1 = arg1[8]
    
    if (r11_1 != 1)
        int32_t rax = *arg1
        
        if (rax s< 0)
            int32_t r8 = 0
            
            if (r11_1 != 0)
                do
                    void* rax_1 = *(arg1 + 0x18)
                    void* rcx = &arg1[2]
                    
                    if (rax_1 != 0)
                        rcx = rax_1
                    
                    int64_t rax_2 = sx.q(r8)
                    r8 += 1
                    *(rcx + (rax_2 << 2)) = (*arg1 * 2) s>> 1
                while (r8 u< r11_1)
                
                rax = *arg1
            
            *arg1 = rax & 0x7fffffff
        
        void* rax_4 = *(arg1 + 0x18)
        void* rcx_1 = &arg1[2]
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        *(rcx_1 + (rdi << 2)) = arg3
        return 

*arg1 = arg3 | 0x80000000
