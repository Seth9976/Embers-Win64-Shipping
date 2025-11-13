// 函数: sub_1421886f0
// 地址: 0x1421886f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x408)
char rax = *(rdx + 0xb5)

if (rax != 0 && (*(rdx + 0xa0) != 0 || rax == 2))
    return 1

return 0
