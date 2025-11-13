// 函数: sub_140d94370
// 地址: 0x140d94370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140da8da0()
*arg1 = data_143e242d0
arg1[1] = data_143e242e0
arg1[2] = data_143e242f0
arg1[3].q = data_143e24300
*(arg1 + 0x38) = data_143e24308
void* rcx_1 = data_143e24310
arg1[4].q = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

*(arg1 + 0x48) = 0
arg1[5].q = 0
return arg1
