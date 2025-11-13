// 函数: sub_14103f110
// 地址: 0x14103f110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f009c8
arg1[1] = arg2
arg1[2] = 0
void arg_8

if (arg2 != 0)
    arg1[2] = *sub_141013ee0(arg2 + 0xb0, &arg_8, &arg1[3])
arg1[4].d = 0
arg1[0xc] = &data_142d3ff08
arg1[0xd].d = 0
*(arg1 + 0x6c) = 0
arg1[0xe].w = 0x100
arg1[0xf] = 0
arg1[0x10].b = 1
*arg1 = &data_142f009d0
arg1[0xc] = &data_142f009d8
arg1[5] = arg4
void* r8_1 = *(arg4 + 0x10)
void* rdx_1 = *(r8_1 + 0x28)
void* rcx_2 = rdx_1 + 0x28

if (rdx_1 == 0)
    rcx_2 = r8_1 + 0x30

arg1[6] = rcx_2
*(arg1 + 0x48) = *arg3
arg1[0xb] = arg3[1].q
int16_t rcx_3

if (*(r8_1 + 0x88) != 4)
    rcx_3 = *(r8_1 + 0xa4)
else
    rcx_3 = 1

void var_18
*(arg1 + 0x38) = *sub_14103e460(&var_18, arg1 + 0x48, zx.q(*(r8_1 + 0xa6)), zx.q(rcx_3), 
    *(r8_1 + 0xa8), arg1[4].d)
sub_141010dd8(sub_141022ce0(arg1[1]), *(*(arg4 + 0x10) + 0x20), &arg1[9], arg1[2])
return arg1
