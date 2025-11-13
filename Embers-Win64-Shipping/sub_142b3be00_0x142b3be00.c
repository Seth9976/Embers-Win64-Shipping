// 函数: sub_142b3be00
// 地址: 0x142b3be00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*arg1)
uint64_t r11 = zx.q(arg3)

if (rax.d s<= 0x31)
    rax = zx.q(*(rax + &data_14366c490))

void* rcx = &arg2[r11]
void* r8_1 = &arg1[2] + sx.q(rax.d)
void* i = rcx - arg2

if (arg2 u> rcx)
    i = nullptr

if (i != 0)
    int64_t rcx_2 = neg.q(arg2)
    
    do
        char rax_2 = *arg2
        arg2 = &arg2[1]
        *r8_1 = rax_2
        r8_1 -= 1
    while (&arg2[rcx_2] u< i)

*arg1 = r11.d
return arg1
