// 函数: sub_14174f540
// 地址: 0x14174f540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x10))

if (arg2 s> rdi.d)
    int32_t i_1 = arg2 - rdi.d
    *(arg1 + 0x10) = arg2
    
    if (arg2 s> *(arg1 + 0x14))
        sub_1405a4f90(arg1 + 8)
    
    int64_t* rax = (rdi << 4) + *(arg1 + 8)
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rax = 0
            rax[1].d = 0
            rax = &rax[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rdi.d && arg2 != rdi.d)
    *(arg1 + 0x10) = arg2
    return sub_1405a5010(arg1 + 8) __tailcall
