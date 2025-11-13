// 函数: sub_141c63ae0
// 地址: 0x141c63ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x74) & 8) == 0)
    char rax = *(arg1 + 0x160)
    
    if (rax == 0)
        return 1
    
    if (rax != 1)
        if (*(arg1 + 0x10) == 0 || *(arg1 + 0xa8) == 0)
            return 1
        
        bool z_1
        
        if (0 == *(arg1 + 0x174))
            *(arg1 + 0x174) = 0
            z_1 = true
        else
            *(arg1 + 0x174)
            z_1 = false
        
        bool z_2
        
        if (not(z_1))
            if (0 == *(arg1 + 0x178))
                *(arg1 + 0x178) = 0
                z_2 = true
            else
                *(arg1 + 0x178)
                z_2 = false
        
        if (not(z_1) && not(z_2))
            sub_141e656c0(*(arg1 + 0x10), 0)
            *(arg1 + 0x16c)
            *(arg1 + 0x16c) = 0
            return 1
        
        bool z_3
        
        if (0 == *(arg1 + 0x170))
            *(arg1 + 0x170) = 0
            z_3 = true
        else
            *(arg1 + 0x170)
            z_3 = false
        
        if (not(z_3))
            void* rcx_1 = *(arg1 + 0x10)
            
            if (*(rcx_1 + 0xf8) == 1)
                sub_141e656c0(rcx_1, 0)
                *(arg1 + 0x170)
                *(arg1 + 0x170) = 0

return 0
