// 函数: sub_1407ab990
// 地址: 0x1407ab990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    *arg3 = 0xffffffff
    *arg4 = 0xffffffff
    return 

uint64_t rax = sub_140761ad0(arg2)

if (rax != 0 && *(arg1 + 0xf8) != *(arg1 + 0x124))
    int64_t r10_1 = *(rax + 0xe0)
    void* r9 = arg1 + 0x128
    void* r8 = *(r9 + 8)
    
    if (r8 != 0)
        r9 = r8
    
    rax = zx.q(
        *(r9 + ((sx.q((r10_1 u>> 0x20).d * 0x17 + r10_1.d) & (sx.q(*(arg1 + 0x138)) - 1)) << 2)))
    
    if (rax.d != 0xffffffff)
        int64_t r8_1 = *(arg1 + 0xf0)
        
        do
            int64_t rdx_2 = sx.q(rax.d)
            int64_t rcx_3 = rdx_2 * 3
            
            if (*(r8_1 + (rcx_3 << 3)) == r10_1)
                if (rax.d != 0xffffffff)
                    void* rcx_4 = r8_1 + rdx_2 * 0x18
                    
                    if (rcx_4 != 0)
                        int32_t* rcx_5 = *(rcx_4 + 8)
                        
                        if (rcx_5 != 0)
                            *arg3 = rcx_5[2] * *rcx_5
                            *arg4 = rcx_5[3] * rcx_5[1]
                            return 
                
                break
            
            rax = zx.q(*(r8_1 + (rcx_3 << 3) + 0x10))
        while (rax.d != 0xffffffff)

*arg3 = 0xffffffff
*arg4 = 0xffffffff
