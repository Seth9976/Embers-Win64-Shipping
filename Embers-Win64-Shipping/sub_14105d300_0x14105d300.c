// 函数: sub_14105d300
// 地址: 0x14105d300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0xf] == 0
*arg1 = &data_142efcca0
arg1[4] = &data_142efcca8

if (not(cond:0))
    arg2 = 0
    arg3 = 3

int512_t zmm0 = j_sub_141059a80(&arg1[0x1e], arg4, arg2, arg3)
void* rcx_2 = arg1[0x1b]

if (rcx_2 != 0)
    (*(*(rcx_2 + 0x20) + 0x10))(rcx_2 + 0x20)

sub_14100e880(&arg1[4], zmm0)
*arg1 = &data_142d3ff08
return &data_142d3ff08
