// 函数: sub_140ae44d0
// 地址: 0x140ae44d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ad0d40(arg2, 3, arg3)
int64_t rsi = sx.q(arg1[1].d)
int32_t rax = (rsi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t* rcx_4 = (rsi << 4) + *arg1
*rcx_4 = *arg2
void* rax_2 = arg2[1]
rcx_4[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

return arg2
