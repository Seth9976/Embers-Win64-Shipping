// 函数: sub_141c98260
// 地址: 0x141c98260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)
int32_t i_1 = arg2
int32_t rax = rbx.d + arg2
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c5060(arg1)

int64_t* r8_2 = rbx * 0x50 + *arg1

if (i_1 != 0)
    int64_t* rcx = &r8_2[4]
    int32_t i
    
    do
        *r8_2 = 0
        int64_t* rdx_1 = &rcx[-2]
        rcx[-3] = 0
        r8_2 = &r8_2[0xa]
        *rcx = 0
        rcx[1].d = 0
        *(rcx + 0xc) = 0x80
        int64_t* rax_1 = *rcx
        rcx = &rcx[0xa]
        
        if (rax_1 != 0)
            rdx_1 = rax_1
        
        *rdx_1 = 0
        rdx_1[1] = 0
        rcx[-8].d = 0xffffffff
        *(rcx - 0x3c) = 0
        rcx[-6] = 0
        rcx[-5].d = 0
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rbx.d)
