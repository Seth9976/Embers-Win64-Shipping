// 函数: sub_141f9cf00
// 地址: 0x141f9cf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (arg2 s> rdi.d)
    int32_t i_1 = arg2 - rdi.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405a4cf0(arg1)
    
    int32_t* rdx_1 = *arg1 + (rdi << 2)
    
    if (i_1 != 0)
        uint64_t rax = zx.q(data_143a2d8ec)
        int32_t i
        
        do
            rax = zx.q(rax.d + 1)
            *rdx_1 = rax.d
            rdx_1 = &rdx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        data_143a2d8ec = rax.d
else if (arg2 s< rdi.d)
    return sub_140908e30(arg1, arg2, rdi.d - arg2, arg3) __tailcall
