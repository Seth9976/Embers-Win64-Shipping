// 函数: sub_140d99fb0
// 地址: 0x140d99fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4ec0(arg1)

int64_t rax_1 = *arg1
int64_t r8 = *arg3
*arg3 = 0
int32_t rdx_1 = arg3[1].d
int64_t* r9 = rax_1 + rdi * 0x28
int32_t rcx_1 = *(arg3 + 0xc)
arg3[1] = 0
*r9 = *arg2
r9[1] = r8
r9[2].d = rdx_1
*(r9 + 0x14) = rcx_1
r9[3].b = arg4
*(r9 + 0x19) = arg5
*(r9 + 0x1c) = 0
r9[4] = 0
int64_t rcx_2 = *arg3

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg1
