// 函数: sub_1421265f0
// 地址: 0x1421265f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)

if (rax != 0)
    int32_t rdx = *(rax + 0x330)
    
    if (rdx != 0)
        *arg2 = *(rax + 0x328)
        arg2[1].d = rdx
        return arg2

void* rcx = *(arg1 + 0x28)

if (rcx != 0)
    *arg2 = *(rcx + 0x460)
    arg2[1].d = *(rcx + 0x468)
    return arg2

void* rax_5 = sub_14210f630(rcx.d)
arg2[1].d = *(rax_5 + 0x468)
*arg2 = *(rax_5 + 0x460)
return arg2
