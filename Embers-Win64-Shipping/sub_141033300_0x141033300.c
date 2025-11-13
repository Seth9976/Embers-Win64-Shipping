// 函数: sub_141033300
// 地址: 0x141033300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0 = sub_141044ca0(arg1 + 0x70, arg2)
void* i = *(arg1 + 0xe0)
*(arg1 + 0x1c) = 0
*(arg1 + 0x18) = 0

for (; i != 0; i = *(i + 0xe0))
    zmm0 = sub_141044ca0(i + 0x70, zmm0)
    *(i + 0x1c) = 0
    *(i + 0x18) = 0

return 0
