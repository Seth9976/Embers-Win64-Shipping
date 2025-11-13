// 函数: sub_140744f30
// 地址: 0x140744f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0
sub_1406f3c20(&arg1[1], arg2[1], arg2[2].d, 0, 0)
arg1[3] = 0
sub_1406f3c20(&arg1[3], arg2[3], arg2[4].d, 0, 0)
arg1[5] = arg2[5]
arg1[6].d ^= (arg1[6].d ^ arg2[6].d) & 1
int32_t rcx_5 = ((arg1[6].d ^ arg2[6].d) & 2) ^ arg1[6].d
arg1[6].d = rcx_5
int32_t rax_8 = ((rcx_5 ^ arg2[6].d) & 4) ^ rcx_5
arg1[6].d = rax_8
int32_t rcx_9 = ((rax_8 ^ arg2[6].d) & 8) ^ rax_8
arg1[6].d = rcx_9
int32_t rdx_5 = ((rcx_9 ^ arg2[6].d) & 0x10) ^ rcx_9
arg1[6].d = rdx_5
void* rdx_6 = &arg1[9]
arg1[6].d = ((rdx_5 ^ arg2[6].d) & 0x20) ^ rdx_5
arg1[7] = 0
arg1[8] = 0
*(rdx_6 + 0x10) = 0
*(rdx_6 + 0x18) = 0
*(rdx_6 + 0x1c) = 0x80
void* rax_13 = *(rdx_6 + 0x10)

if (rax_13 != 0)
    rdx_6 = rax_13

*rdx_6 = 0
*(rdx_6 + 8) = 0
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
arg1[0xf] = 0
arg1[0x10].d = 0
sub_1405af100(&arg1[7], &arg2[7])
return arg1
