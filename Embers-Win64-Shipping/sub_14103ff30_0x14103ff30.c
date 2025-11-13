// 函数: sub_14103ff30
// 地址: 0x14103ff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142d3ff08
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = &data_142f009b0
arg1[4] = arg2
arg1[5] = 0
void arg_8

if (arg2 != 0)
    arg1[5] = *sub_141013ee0(arg2 + 0x230, &arg_8, &arg1[6])
arg1[7].d = 0
arg1[0x11] = 0
arg1[0x12].b = 1
*arg1 = &data_142f009b8
arg1[3] = &data_142f009c0
arg1[0x13] = arg5

if (arg5 != 0)
    *(arg5 + 8) += 1

arg1[0x14].b = 0
arg1[8] = arg4
void* r8_1 = *(arg4 + 0x10)
void* rdx_1 = *(r8_1 + 0x28)
void* rcx_2 = rdx_1 + 0x28

if (rdx_1 == 0)
    rcx_2 = r8_1 + 0x30

arg1[9] = rcx_2
*(arg1 + 0x60) = *arg3
*(arg1 + 0x70) = arg3[1]
arg1[0x10] = arg3[2].q
int16_t rcx_3

if (*(r8_1 + 0x88) != 4)
    rcx_3 = *(r8_1 + 0xa4)
else
    rcx_3 = 1

void var_28
*(arg1 + 0x50) = *sub_14103e660(&var_28, arg1 + 0x60, zx.q(*(r8_1 + 0xa6)), zx.q(rcx_3), 
    *(r8_1 + 0xa8), arg1[7].d)

if (arg5 != 0)
    rsi = *(arg5 + 0x20)

int32_t var_38
var_38.q = arg1[5]
sub_141010dcc(sub_141022ce0(arg1[4]), *(*(arg4 + 0x10) + 0x20), rsi, &arg1[0xc], var_38)
return arg1
