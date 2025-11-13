// 函数: sub_141ad15d0
// 地址: 0x141ad15d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x420) += 1
int16_t r8 = *(arg1 + 0x420)
*(arg1 + 0x418) = data_143de5458

if (r8 == 0xffff)
    *(arg1 + 0x420) = r8 + 1

jump(*(*(arg1 + 0x6e0) + 0x10))
