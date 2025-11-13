// 函数: sub_142b99bf0
// 地址: 0x142b99bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = 0

if (arg1 != 0)
    int64_t r10_1 = *(*arg1 + 0x30)
    
    if (r10_1 != 0)
        r9 = r10_1()
    
    if (arg3 != 0 && r9 == 0)
        void* rcx = arg1[1]
        void* i = rcx + 0x18
        
        for (void* rsi = i + (zx.q(*(rcx + 0x14)) << 3); i u< rsi; i += 8)
            int64_t* rcx_2 = *i
            
            if (rcx_2 != arg1)
                int64_t r8 = *(*rcx_2 + 0x30)
                
                if (r8 != 0)
                    int64_t rax_4 = r8(rcx_2, arg2)
                    r9 = rax_4
                    
                    if (rax_4 != 0)
                        return rax_4

return r9
