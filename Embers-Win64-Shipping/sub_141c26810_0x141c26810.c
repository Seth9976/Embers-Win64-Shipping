// 函数: sub_141c26810
// 地址: 0x141c26810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141c27b40()
void* r8 = rax[0x23]

if (r8 == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    r8 = rax[0x23]

int64_t rax_1 = sx.q(*(r8 + 0x868))

if (rax_1.d s> 0)
    int64_t* r8_2 = *(r8 + 0x860)
    int64_t rdx = 0
    int32_t* rcx_1 = &r8_2[3]
    
    do
        if (not(*(arg1 + 0x7c8) f!= rcx_1[-2]) && not(*(arg1 + 0x7cc) f!= rcx_1[-1])
                && not(*(arg1 + 0x7d0) f!= *rcx_1) && not(*(arg1 + 0x7d4) f!= rcx_1[1])
                && not(*(arg1 + 0x7d8) f!= rcx_1[2]) && rcx_1[3] == *(arg1 + 0x7dc))
            sub_140596d10(arg2, r8_2)
            return arg2
        
        rdx += 1
        r8_2 = &r8_2[5]
        rcx_1 = &rcx_1[0xa]
    while (rdx s< rax_1)

*arg2 = 0
arg2[1] = 0
return arg2
