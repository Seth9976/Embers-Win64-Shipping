// 函数: sub_14217b840
// 地址: 0x14217b840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (arg2 s> rdi.d)
    int32_t i_1 = arg2 - rdi.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405c4d20(arg1)
    
    int64_t* rax = *arg1 + rdi * 0x14
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rax = 0
            rax[1] = 0
            rax[2].w = 0x100
            *(rax + 0x12) = 0
            rax += 0x14
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rdi.d)
    return sub_142174b40(arg1, arg2, rdi.d - arg2, arg3) __tailcall
