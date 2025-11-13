// 函数: sub_140d3a3a0
// 地址: 0x140d3a3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    *arg1 = 0xffffffff
    arg1[1] = 0
    return 

int32_t rdx = *(arg2 + 0xc)
*arg1 = rdx
arg1[1] = sub_140d18d10(&data_143e1d990, rdx)
