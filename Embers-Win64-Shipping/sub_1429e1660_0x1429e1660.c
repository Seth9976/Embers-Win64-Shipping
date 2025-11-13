// 函数: sub_1429e1660
// 地址: 0x1429e1660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int64_t r9_1 = sx.q(*arg1)
    int32_t rdx = 0
    
    if (r9_1.d s> 0)
        int64_t rcx = 0
        int32_t* rax_3 = *(arg1 + 8) + 0x10
        
        while (*rax_3 != 0)
            rdx += 1
            rcx += 1
            rax_3 = &rax_3[6]
            
            if (rcx s>= r9_1)
                break
    
    if (rdx != r9_1.d)
        int64_t* rax_5 = *(arg1 + 8)
        int64_t rdi = sx.q(rdx) * 0x18
        
        if (rax_5[sx.q(rdx) * 3 + 1] u< arg2)
            sub_1429dde60(rax_5[sx.q(rdx) * 3])
            *(rdi + *(arg1 + 8)) = sub_1429dddd0(1, arg2)
            int64_t* rcx_4 = *(arg1 + 8)
            
            if (rcx_4[sx.q(rdx) * 3] == 0)
                return 0xffffffff
            
            rcx_4[sx.q(rdx) * 3 + 1] = arg2
        
        *arg3 = *(rdi + *(arg1 + 8))
        arg3[1] = *(*(arg1 + 8) + rdi + 8)
        *(*(arg1 + 8) + rdi + 0x10) = 1
        arg3[2] = *(arg1 + 8) + rdi
        return 0

return 0xffffffff
