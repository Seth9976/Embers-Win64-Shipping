// 函数: sub_142c067e0
// 地址: 0x142c067e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
*arg1 = arg2
*(arg1 + 8) = *arg3
*(arg1 + 0x18) = arg3[1]
sub_142c36890(&arg1[5], arg2, arg3)
arg1[0x15] = arg2
arg1[0x16] = 0
arg1[0x17] = 0
char rax
char r8
rax, r8 = sub_142c06930(arg2)
arg1[0x18].b &= 0xfe
arg1[0x18].b |= rax & 1
char rdx = arg1[0x18].b
void** rax_1 = sub_142c07da0(arg1)
arg1[0x19] = rax_1
r8 = (sbb.b(r8, r8, rax_1[0xc].d != 0) & 2) | (rdx & 0xfd)
arg1[0x18].b = r8
char rcx_4 = ((*(rax_1 + 0x64) << 2 ^ r8) & 4) ^ r8
arg1[0x18].b = rcx_4
void** rax_2 = &data_1436a0a20

if ((rcx_4 & 1) == 0)
    rax_2 = rax_1

arg1[0x19] = rax_2
return arg1
