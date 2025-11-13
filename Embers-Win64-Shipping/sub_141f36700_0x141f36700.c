// 函数: sub_141f36700
// 地址: 0x141f36700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (data_143a2d7b4 == 1)
    char rax = *(arg1 + 0x14c)
    
    if ((rax & 2) == 0)
        break
    
    *(arg1 + 0x14c) = rax & 0xfd
    arg1 = *(arg1 + 0xc0)
    
    if (arg1 == 0)
        break
