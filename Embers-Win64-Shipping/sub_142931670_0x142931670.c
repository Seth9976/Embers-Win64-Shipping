// 函数: sub_142931670
// 地址: 0x142931670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = arg2

while (true)
    char r8_1 = *rax
    
    if (r8_1 u<= 0x7f)
        int64_t r9_1 = *(arg1 + 8)
        
        if ((*(r9_1 + (zx.q(r8_1) << 1)) & 8) != 0)
            void* i
            
            for (i = rax - 1; i u>= arg2; i -= 1)
                char rcx = *i
                
                if (rcx u> 0x7f)
                    break
                
                if ((*(r9_1 + (zx.q(rcx) << 1)) & 0x10) == 0)
                    break
            
            *(i + 1) = 0
            return i
    
    rax = &rax[1]
