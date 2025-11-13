// 函数: sub_14183a300
// 地址: 0x14183a300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140910250(arg1 + 8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 8) + rax * 0x28

int64_t* rax_2 = rcx_1 + 0x10

if (rcx_1 == 0)
    rax_2 = nullptr

if (rax_2 == 0)
    return rax_2

void* rax_3 = *rax_2
*arg3 = *(rax_3 + 0x18)
int32_t rax_4 = *(rax_3 + 0x28)
arg3[1].d = rax_4
int64_t rcx_2 = *arg3
int64_t rcx_3 = rcx_2

if (rcx_2 == 0)
    int64_t rcx_4 = *(arg3 + 8)
    rcx_3 = rcx_4
    
    if (rcx_4 == 0)
        rcx_3 = zx.q(rax_4)

rax_4.b = rcx_3 != 0
return rax_4
