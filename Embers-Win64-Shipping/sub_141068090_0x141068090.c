// 函数: sub_141068090
// 地址: 0x141068090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0 = sub_141044ca0(arg1 + 0x68, arg2)
void* i = *(arg1 + 0xd8)
*(arg1 + 0x18) = 0

for (; i != 0; i = *(i + 0xd8))
    zmm0 = sub_141044ca0(i + 0x68, zmm0)
    *(i + 0x18) = 0

return 0
