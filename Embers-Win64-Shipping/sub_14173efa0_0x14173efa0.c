// 函数: sub_14173efa0
// 地址: 0x14173efa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 1)
    *arg2 = *arg1
    *(arg2 + 4) = arg1[1]
    arg2[1].d = arg1[2]
    return arg2

if (arg3 == 2)
    *arg2 = arg1[4]
    *(arg2 + 4) = arg1[5]
    arg2[1].d = arg1[6]
    return arg2

if (arg3 == 3)
    *arg2 = arg1[8]
    *(arg2 + 4) = arg1[9]
    arg2[1].d = arg1[0xa]
    return arg2

int32_t rax = data_143dbb200
*arg2 = data_143dbb1f8.q
arg2[1].d = rax
return arg2
