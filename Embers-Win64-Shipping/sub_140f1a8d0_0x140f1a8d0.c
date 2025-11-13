// 函数: sub_140f1a8d0
// 地址: 0x140f1a8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
void* rax_1 = arg2[2]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[3].d ^= (arg2[3].d ^ arg1[3].d) & 1
int32_t rcx_3 = ((arg2[3].d ^ arg1[3].d) & 2) ^ arg1[3].d
arg1[3].d = rcx_3
int32_t rdx_3 = ((arg2[3].d ^ rcx_3) & 4) ^ rcx_3
arg1[3].d = rdx_3
arg1[3].d = ((arg2[3].d ^ rdx_3) & 8) ^ rdx_3
arg1[4].b = 1
arg1[5] = 0
arg1[6].d = 0
return arg1
