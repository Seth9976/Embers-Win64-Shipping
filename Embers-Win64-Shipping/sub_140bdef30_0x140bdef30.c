// 函数: sub_140bdef30
// 地址: 0x140bdef30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x48))
int32_t r8 = 0

if (rax.d s> 0)
    int64_t r9_1 = 0
    int64_t* rax_2 = *(arg1 + 0x40) + 8
    
    do
        if (*rax_2 == arg3)
            goto label_140bdef6f
        
        r8 += 1
        r9_1 += 1
        rax_2 = &rax_2[2]
    while (r9_1 s< rax)

r8 = -1
label_140bdef6f:
sub_140bded20(arg1, arg2, r8)
return arg2
