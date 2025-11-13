// 函数: sub_1421f59c0
// 地址: 0x1421f59c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rax = *(arg1 + 0x168)

if ((rax & 8) == 0)
    return 0

return rax u>> 4 & 1
