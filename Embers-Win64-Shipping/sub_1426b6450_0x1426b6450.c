// 函数: sub_1426b6450
// 地址: 0x1426b6450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x263)

if ((rax & 0x40) == 0 && (rax & 0x20) != 0 && *(arg1 + 0x118) != 0)
    return 1

return 0
