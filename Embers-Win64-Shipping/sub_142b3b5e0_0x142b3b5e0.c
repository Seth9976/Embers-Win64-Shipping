// 函数: sub_142b3b5e0
// 地址: 0x142b3b5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    arg1[2].b = arg2[2].b
    arg1[1] = arg2[1]
    *arg1 = *arg2
    *(arg1 + 9) = *(arg2 + 9)
    int64_t rax_5 = sx.q(*arg2)
    
    if (rax_5.d s> 1)
        if (rax_5.d s<= 0x31)
            rax_5 = zx.q(*(rax_5 + &data_14366c490))
        
        void* rcx_1 = arg2 + 9 + sx.q(rax_5.d)
        void* rdx = arg2 + 0xa
        int64_t r10_2 = rcx_1 - rdx
        
        if (rdx u> rcx_1)
            r10_2 = 0
        
        if (r10_2 != 0)
            void* rax_9 = rdx - arg2 - 0xa
            
            do
                char rcx_2 = *rdx
                rdx += 1
                *(rax_9 + arg1 + 0xa) = rcx_2
                rax_9 += 1
            while (rax_9 u< r10_2)

return arg1
