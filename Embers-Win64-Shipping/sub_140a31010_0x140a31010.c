// 函数: sub_140a31010
// 地址: 0x140a31010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg2, arg1)
int32_t rdx_1 = arg2[1].d
int32_t rcx_1 = rdx_1 - 1

if (rdx_1 == 0)
    rcx_1 = -1

int32_t rax = rdx_1 - 1

if (rdx_1 == 0)
    rax = -1

if (rdx_1 == 0)
    rax = 0

if (rax s> 0)
    int16_t* rax_1 = *arg2
    
    if (rdx_1 == 0)
        rcx_1 = 0
    
    int16_t* r8_3 = &rax_1[sx.q(rcx_1) - 1]
    
    do
        int16_t rdx_2 = *rax_1
        *rax_1 = *r8_3
        rax_1 = &rax_1[1]
        *r8_3 = rdx_2
        r8_3 -= 2
    while (rax_1 u< r8_3)

return arg2
