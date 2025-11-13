// 函数: sub_141f49250
// 地址: 0x141f49250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && data_143a2d7b4 == 1)
    char rax = *(arg1 + 0x14c)
    
    if ((rax & 2) != 0)
        *(arg1 + 0x14c) = rax & 0xfd
        void* rcx = *(arg1 + 0xc0)
        
        if (rcx != 0)
            sub_141f36700(rcx)

*(arg1 + 0x14d) &= 0xfd
*(arg1 + 0x14d) |= arg2 * 2
