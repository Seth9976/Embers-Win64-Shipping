// 函数: sub_140dbd810
// 地址: 0x140dbd810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)

if ((arg2[5].b & 2) != 0)
    sub_140bd0790(arg1 + 0x28, 0x202)

int32_t var_10 = 1
uint64_t result = sub_140bcfa90(arg1 + 0x28, arg2, arg1, zmm1, 0xff, 0)

if ((arg2[5].b & 1) != 0)
    sub_140bd0790(arg1 + 0x28, 8)

return result
