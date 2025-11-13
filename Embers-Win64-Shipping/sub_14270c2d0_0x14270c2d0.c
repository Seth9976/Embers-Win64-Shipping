// 函数: sub_14270c2d0
// 地址: 0x14270c2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1b9) &= 0xbf
char rax = 0
int64_t rdi = sx.q(arg3)

if (arg4 == 0)
    rax = 0x40

*(arg1 + 0x1b9) |= rax
int16_t arg_20
char arg_22

if (arg1[0x37].b != 0)
    arg_22 = 3
    arg_20 = data_143b58116 | 0x80
    (*(*arg1 + 0x440))(arg1, &arg_20)

int32_t rcx_1 = data_143b58068
*arg2 = rcx_1
arg_22 = rdi.b
data_143b58068 = rcx_1 + 1
arg1[0x47].d = rcx_1
arg_20 = (&data_143b58110)[rdi]
(*(*arg1 + 0x440))(arg1, &arg_20)
return arg2
