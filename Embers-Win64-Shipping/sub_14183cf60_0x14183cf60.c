// 函数: sub_14183cf60
// 地址: 0x14183cf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1408f1b50(arg1 + 0x1b0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x1b0)

int64_t* rax_1 = rcx_3 + 0x10

if (rcx_3 == 0)
    rax_1 = nullptr

if (rax_1 == 0)
    return rax_1

void* rax_2 = *rax_1
*arg3 = *(rax_2 + 0x20)
arg3[1].d = *(rax_2 + 0x30)
int32_t rax_3
rax_3.b = 1
return rax_3
