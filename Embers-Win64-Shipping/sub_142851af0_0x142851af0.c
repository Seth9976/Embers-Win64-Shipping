// 函数: sub_142851af0
// 地址: 0x142851af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t r8 = 0

if (arg1 == 0x100 || (arg1 & 0xffffff00) == 0xfe00)
    r9 = 1

if (arg2 == 0x100 || (arg2 & 0xffffff00) == 0xfe00)
    r8 = 1

if (r9 == 0)
    if (r8 == 0)
    label_142851b52:
        int32_t rax_6 = 0x300
        
        if (arg1 != 0)
            rax_6 = arg1
        
        int32_t rcx = 0x304
        
        if (arg2 != 0)
            rcx = arg2
        
        if (rax_6 != 0x300 && rax_6 s<= 0x300 && rcx s>= 0x300)
            return 0
    else
        if (arg1 != 0)
            return 0
        
        if (r8 == 0)
            goto label_142851b52
else if (r8 == 0 && arg2 != 0)
    return 0

return 1
