// 函数: sub_140e68f40
// 地址: 0x140e68f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == *arg2)
    int32_t rdx = arg2[3].d
    int32_t rcx = arg1[3].d
    int32_t r8_3 = rdx u>> 2 & 1
    int32_t r9_3 = rcx u>> 2 & 1
    
    if (r9_3 == r8_3 && ((rdx.b ^ rcx.b) & 2) == 0 && ((rdx.b ^ rcx.b) & 1) == 0
            && ((rdx.b ^ rcx.b) & 8) == 0)
        return 1
    
    if ((r9_3 != 0 || r8_3 == 0) && ((rcx.b & 2) != 0 || (rdx.b & 2) == 0))
        if ((rcx.b & 1) != 0)
            if ((rcx.b & 8) != 0 || (rdx.b & 8) == 0)
                return 3
        else if ((rdx.b & 1) == 0 && ((rcx.b & 8) != 0 || (rdx.b & 8) == 0))
            return 3
    
    if (((r9_3 == 0 && r8_3 != 0) || r9_3 == 0 || r8_3 != 0)
            && ((rcx.b & 2) == 0 || (rdx.b & 2) != 0) && ((rcx.b & 1) == 0 || (rdx.b & 1) != 0)
            && ((rcx.b & 8) == 0 || (rdx.b & 8) != 0))
        return 2

return 0
