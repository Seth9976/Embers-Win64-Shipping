// 函数: sub_142039060
// 地址: 0x142039060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_14083a7e0(arg2)

int64_t result = *arg2
int64_t* rdx_1 = result + rdi * 0xc

if (rdx_1 != 0)
    result = data_143f40490
    *rdx_1 = result
    rdx_1[1].b = 2

return result
