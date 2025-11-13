// 函数: sub_1423fb8b0
// 地址: 0x1423fb8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].b ^= (arg1[1].b ^ arg2[1].b) & 1
char r8 = ((arg2[1].b ^ arg1[1].b) & 2) ^ arg1[1].b
arg1[1].b = r8
char rcx = ((arg2[1].b ^ r8) & 4) ^ r8
arg1[1].b = rcx
arg1[1].b = ((arg2[1].b ^ rcx) & 8) ^ rcx
arg1[2] = arg2[2]
arg1[3] = arg2[3]
void* rax_4 = arg2[4]
arg1[4] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return arg1
