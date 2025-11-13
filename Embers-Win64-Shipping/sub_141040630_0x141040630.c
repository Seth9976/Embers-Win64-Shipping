// 函数: sub_141040630
// 地址: 0x141040630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efcc78
arg1[5] = &data_142efcc80
int512_t zmm0 = sub_141059a80(&arg1[0x1f], arg2)
void* rcx_1 = arg1[0x1c]

if (rcx_1 != 0)
    (*(*(rcx_1 + 0x28) + 0x10))(rcx_1 + 0x28)

sub_14100e880(&arg1[5], zmm0)
*arg1 = &data_142d3ff08
return &data_142d3ff08
