// 函数: sub_141c266d0
// 地址: 0x141c266d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141c27b40()
void* rdx = rax[0x23]

if (rdx == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, rdx, r8_1)
    rdx = rax[0x23]

int64_t rax_1 = sx.q(*(rdx + 0x858))

if (rax_1.d s> 0)
    int64_t* rdx_1 = *(rdx + 0x850)
    int64_t rax_2 = 0
    
    do
        if (not(*(arg1 + 0x7bc) f!= rdx_1[2].d) && *(arg1 + 0x7c0) f== *(rdx_1 + 0x14))
            sub_140596d10(arg2, rdx_1)
            return arg2
        
        rax_2 += 1
        rdx_1 = &rdx_1[4]
    while (rax_2 s< rax_1)

*arg2 = 0
arg2[1] = 0
return arg2
