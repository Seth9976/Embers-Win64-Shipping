// 函数: sub_141ac6850
// 地址: 0x141ac6850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rax = sub_141ea6180(arg1 + 0xc8, arg3)

if (rax != 0 && *(arg1 + 0xec) != 0xffffffff && *(arg1 + 0x15c) != 0xffffffff)
    if (*(arg1 + 0x1d0) - 2 u<= 1)
        if (*(arg1 + 0xf0) == 0)
            rax = sub_141ea6180(arg1 + 0xf4, arg3)
        else
            rax = *(arg1 + 0x14c) != 0xffffffff
    
    if (*(arg1 + 0x1d0) - 2 u> 1 || rax != 0)
        if (*(arg1 + 0x1d1) - 2 u<= 1)
            if (*(arg1 + 0x160) == 0)
                rax = sub_141ea6180(arg1 + 0x164, arg3)
            else
                rax = *(arg1 + 0x1bc) != 0xffffffff
        
        if (*(arg1 + 0x1d1) - 2 u> 1 || rax != 0)
            return true

return false
