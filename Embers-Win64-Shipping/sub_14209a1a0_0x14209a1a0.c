// 函数: sub_14209a1a0
// 地址: 0x14209a1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t r9_1 = arg1[1].d
    
    if (arg2 s< r9_1)
        int64_t r10 = *arg1
        int64_t r8 = sx.q(arg2) * 3
        int64_t rbx = *(r10 + (r8 << 2))
        int32_t rax_2 = r9_1 - arg2
        
        if (rax_2 != 1)
            memmove(r10 + (r8 << 2), r10 + sx.q(arg2 + 1) * 0xc, (rax_2 - 1) * 0xc)
            r9_1 = arg1[1].d
        
        arg1[1].d = r9_1 - 1
        sub_140775970(arg1)
        int64_t rax_8 = sx.q(arg1[1].d)
        int32_t rdi = 0
        
        if (rax_8.d s> 0)
            int64_t rcx_2 = 0
            int32_t* rax_10 = *arg1 + 8
            
            while (not(arg3.d f<= *rax_10))
                rdi += 1
                rcx_2 += 1
                rax_10 = &rax_10[3]
                
                if (rcx_2 s>= rax_8)
                    break
        
        sub_142075310(arg1, rdi, 1)
        int64_t rdx_4 = sx.q(rdi) * 3
        *(*arg1 + (rdx_4 << 2) + 8) = arg3.d
        *(*arg1 + (rdx_4 << 2)) = rbx
        return zx.q(rdi)

return zx.q(arg2)
