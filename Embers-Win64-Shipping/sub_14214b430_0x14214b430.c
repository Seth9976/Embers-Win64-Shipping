// 函数: sub_14214b430
// 地址: 0x14214b430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80

if (sub_1422a6b20(arg1, arg3) != 0 && (*(*arg3 + 0x2c) & 0x800) != 0)
    rbp = 4

arg2[1].d &= 0xfffffffb
arg2[1].d |= rbp

if (sub_1422a6980(*arg3) != 0 || (*(arg1 + 0x36) & 4) != 0)
    arg2[1].d |= 2
else
    arg2[1].d |= 1

char rax_3 = sub_1422a69b0(arg1, arg3)
arg2[1].d &= 0xfffffff7
arg2[1].d |= zx.d(rax_3) << 3
sub_142131b60(arg1 + 0x378, arg2)
return arg2
