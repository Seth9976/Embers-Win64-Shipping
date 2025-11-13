// 函数: sub_141415ca0
// 地址: 0x141415ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
int32_t rax = (rdi + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1410b38a0(arg1 + 0x10, rdi.d)

int64_t* rdx_1 = *(arg1 + 0x10)
int64_t r8 = rdi * 0x18
rdx_1[rdi * 3] = *arg2
rdx_1[rdi * 3 + 1].d = arg2[1].d
int64_t rdx_2 = *(arg1 + 0x10)
*(rdx_2 + r8 + 0xc) = *arg3
*(rdx_2 + r8 + 0x14) = arg3[1].d
return zx.q(rdi.d)
