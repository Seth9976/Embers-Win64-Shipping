// 函数: sub_141d33b20
// 地址: 0x141d33b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432224c8
int64_t* rcx = arg1[0xc]

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t rcx_1 = arg1[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

void* rcx_2 = arg1[1]
*arg1 = &data_143222250

if (rcx_2 != 0)
    sub_1409740e0(rcx_2 + 8, arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
