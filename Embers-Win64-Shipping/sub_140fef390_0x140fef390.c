// 函数: sub_140fef390
// 地址: 0x140fef390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = arg3
void*** rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
int32_t var_20 = arg5[1].d
int128_t var_30 = *arg5
int32_t var_c = arg6[1].d
void* rax_4 = &rcx_2[0xa]
int128_t var_1c = *arg6

if (rax_4 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x58)
    rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_2[0xa]

data_143f02bac += 1
data_143f02bc8 = rax_4
*data_143f02ba0 = rcx_2
data_143f02ba0 = &rcx_2[1]
*(rcx_2 + 0x10) = arg1.o
rcx_2[1] = 0
*rcx_2 = &data_142efae88
*(rcx_2 + 0x20) = arg4.o
*(rcx_2 + 0x30) = var_30
*(rcx_2 + 0x40) = var_1c
return &data_142efae88
