// 函数: sub_140f08ab0
// 地址: 0x140f08ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[1].d)
int32_t r10 = 0

if (rax.d s> 0)
    int32_t* rcx = *arg1
    int64_t r9_1 = 0
    
    do
        int32_t rdx = *rcx
        
        if (arg3 s>= rdx && arg3 s<= rcx[1] + rdx)
            *(arg2 + 4) = arg3 - rdx
            *arg2 = r10
            return arg2
        
        r10 += 1
        r9_1 += 1
        rcx = &rcx[2]
    while (r9_1 s< rax)

*arg2 = 0
return arg2
