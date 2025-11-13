// 函数: sub_142618310
// 地址: 0x142618310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x30) s<= 0)
    return 

int64_t r14_1 = 0

do
    void* r10_1 = *(arg1 + 0x90)
    void* r10_2 = r10_1 + r14_1
    
    if (r10_1 != neg.q(r14_1))
        void* rcx = *(r10_2 + 8)
        
        if (rcx != 0)
            int32_t j = 0
            
            if (*(rcx + 0x38) s> 0)
                int64_t rbx_1 = 0
                void* rax
                
                do
                    rax = rcx
                    void* r9_1 = *(r10_2 + 0x50) + rbx_1
                    
                    if (*(r9_1 + 0x38) == arg2)
                        int32_t k = 0
                        
                        if (*(r9_1 + 0x3e) u> 0)
                            do
                                int32_t rax_4 = *(*(r10_2 + 8) + 0x40) + zx.d(*(r9_1 + 0x3c)) + k
                                k += 1
                                void* rax_7 = (sx.q(rax_4) << 5) + *(r10_2 + 0x10)
                                *(rax_7 + 0x1f) &= 0xc0
                                *(rax_7 + 0x1f) |= arg3 & 0x3f
                                *(rax_7 + 0x1c) = arg4
                            while (k s< zx.d(*(r9_1 + 0x3e)))
                            
                            rax = *(r10_2 + 8)
                    
                    j += 1
                    rbx_1 += 0x40
                    rcx = rax
                while (j s< *(rax + 0x38))
    
    i += 1
    r14_1 += 0xb0
while (i s< *(arg1 + 0x30))
