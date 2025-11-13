// 函数: sub_14060c9e0
// 地址: 0x14060c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg3)
sub_14060ca80(arg1, 0, 0)
arg1[1].d = 0xffffff01
*arg1 = &data_142d63e60
arg1[6] = 0
*(arg1 + 0x2c) = 0
arg1[3].d = rsi.d
arg1[4] = arg2
int32_t rax = *(arg2 + 0x28)

if (rax == 0xc)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi.d)
    arg1[7].d = (temp1_1 - temp0_1) s>> 1
else if (rax == 0x18)
    arg1[7].d = rsi.d
else if (rax == 0x30)
    arg1[7].d = (rsi * 2).d
else if (rax == 0x60)
    arg1[7].d = (rsi << 2).d

arg1[5].d = 1
return arg1
