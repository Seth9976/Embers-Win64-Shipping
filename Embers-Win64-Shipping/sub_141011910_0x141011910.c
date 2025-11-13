// 函数: sub_141011910
// 地址: 0x141011910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0xf].d == 0
*arg1 = &data_142efcc50
char rsi = arg2
arg1[5] = &data_142efcc58

if (not(cond:0))
    arg2 = 0
    arg3 = 2

int512_t zmm0 = j_sub_141059a80(&arg1[0x1f], arg4, arg2, arg3)
void* rcx_2 = arg1[0x1c]

if (rcx_2 != 0)
    (*(*(rcx_2 + 0x28) + 0x10))(rcx_2 + 0x28)

sub_14100e880(&arg1[5], zmm0)
*arg1 = &data_142d3ff08

if ((rsi & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
