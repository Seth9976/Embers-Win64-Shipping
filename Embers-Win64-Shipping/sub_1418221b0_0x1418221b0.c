// 函数: sub_1418221b0
// 地址: 0x1418221b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *arg1

while (i != 0)
    arg1[1] = *(i + 0x18)
    *(i + 0x10) = 0
    *(i + 0x18) = 0
    j_sub_140a74f90(i)
    i = arg1[1]
    *arg1 = i

return i
