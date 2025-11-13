// 函数: sub_142084f80
// 地址: 0x142084f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x650)
uint64_t* rbx = arg3

if (rsi != 0)
    int32_t i_2 = rsi[1].d
    
    if (i_2 != 0)
        int32_t rax = arg3[1].d
        int32_t rdx = rax + i_2
        
        if (rdx s> *(arg3 + 0xc))
            sub_1405c5570(rbx, rdx)
            rax = rbx[1].d
        
        int64_t* rdx_1 = *rsi
        int32_t i_1 = i_2
        int64_t r8 = *rbx + (sx.q(rax) << 3)
        int32_t i
        
        do
            void* rax_2 = *rdx_1
            *r8 = rax_2
            
            if (rax_2 != 0)
                *(rax_2 + 8) += 1
            
            r8 += 8
            rdx_1 = &rdx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx[1].d += i_2
        return 0

return sub_142295e30(arg1, arg2, arg3) __tailcall
