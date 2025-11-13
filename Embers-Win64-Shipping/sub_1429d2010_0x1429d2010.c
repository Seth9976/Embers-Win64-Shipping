// 函数: sub_1429d2010
// 地址: 0x1429d2010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *arg1
int64_t rdx = sx.q(*(r11 + 0x50))
int32_t rbx = *(r11 + 0x34)
int64_t r9 = sx.q(*(r11 + 0x38) + rdx.d)

if (rdx s< r9)
    int64_t i_3 = r9 - rdx
    int32_t* r8_1 = *(r11 + 0x138) + (rdx << 2)
    int64_t i
    
    do
        int64_t rdx_2 = sx.q(*r8_1)
        int32_t rax_3
        
        if ((not.b(*(rdx_2 + *(arg1[2] + 0x30))) & 1) == 0)
            rax_3 = *(*(arg1[1] + 0x90) + (sx.q((rdx_2 * 2).d) << 2))
        else
            rax_3 = 1
        
        rbx += rax_3
        r8_1 = &r8_1[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t rcx_3 = sx.q(*(r11 + 0x54))
int32_t r9_1 = 0
int32_t r10_2 = 0
int64_t r14 = sx.q(*(r11 + 0x3c) + rcx_3.d)
int64_t rsi = rcx_3

if (rcx_3 s< r14)
    if (r14 - rcx_3 s>= 2)
        int64_t i_2 = ((r14 - rsi - 2) u>> 1) + 1
        int32_t* rdx_4 = *(r11 + 0x138) + (rsi << 2)
        int64_t rbp_1 = *(arg1[2] + 0x48)
        rsi += i_2 << 1
        int64_t i_1
        
        do
            int64_t rax_11 = sx.q(*rdx_4)
            rdx_4 = &rdx_4[2]
            r9_1 += zx.d(*(rbp_1 + (rax_11 << 1)))
            r10_2 += zx.d(*(rbp_1 + (sx.q(rdx_4[-1]) << 1)))
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (rsi s< r14)
        rbx += zx.d(*(*(arg1[2] + 0x48) + (sx.q(*(*(r11 + 0x138) + (rsi << 2))) << 1)))
    
    rbx += r10_2 + r9_1

sub_1429d1dd0(arg1[4])
int64_t rbx_1 = sx.q(rbx)
sub_1429cd3a0(arg1[4] + 0xa8, rbx_1)
int16_t arg_8 = 0
return sub_1429d19e0(&arg1[5], rbx_1, &arg_8)
