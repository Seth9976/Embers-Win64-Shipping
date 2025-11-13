// 函数: sub_1426002e0
// 地址: 0x1426002e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x74)

if ((rax & 8) == 0 && (rax & 0x10) != 0)
    if (*(arg1 + 0x10) == 0 || ((*(arg1 + 0x78) & 1) == 0 && *(arg1 + 0x98) == 0))
        return 1
    
    bool z_1
    
    if (0 == *(arg1 + 0x19c))
        *(arg1 + 0x19c) = 0
        z_1 = true
    else
        *(arg1 + 0x19c)
        z_1 = false
    
    if (not(z_1))
        sub_141e656c0(*(arg1 + 0x10), 0)
        return 1
    
    bool z_2
    
    if (0 == *(arg1 + 0x198))
        *(arg1 + 0x198) = 0
        z_2 = true
    else
        *(arg1 + 0x198)
        z_2 = false
    
    if (not(z_2))
        void* rcx_1 = *(arg1 + 0x10)
        
        if (*(rcx_1 + 0xf8) == 1)
            sub_141e656c0(rcx_1, 0)
            *(arg1 + 0x198)
            *(arg1 + 0x198) = 0

return 0
