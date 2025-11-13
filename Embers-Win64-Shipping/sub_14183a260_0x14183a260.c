// 函数: sub_14183a260
// 地址: 0x14183a260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140cba0f0(arg1 + 0x250, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x250)

int64_t* rax_1 = rcx_3 + 0x10

if (rcx_3 == 0)
    rax_1 = nullptr

if (rax_1 == 0)
    return rax_1

void* rax_2 = *rax_1
*arg3 = *(rax_2 + 0x18)
int32_t rax_3 = *(rax_2 + 0x28)
arg3[1].d = rax_3
int64_t rcx_4 = *arg3
int64_t rcx_5 = rcx_4

if (rcx_4 == 0)
    int64_t rcx_6 = *(arg3 + 8)
    rcx_5 = rcx_6
    
    if (rcx_6 == 0)
        rcx_5 = zx.q(rax_3)

rax_3.b = rcx_5 != 0
return rax_3
