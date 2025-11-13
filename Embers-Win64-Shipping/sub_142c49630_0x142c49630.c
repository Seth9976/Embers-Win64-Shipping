// 函数: sub_142c49630
// 地址: 0x142c49630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int16_t rax_2 = *arg1
    
    if (rax_2 == 0x5c || rax_2 == 0x2f)
        return 1
    
    if (isalpha(zx.d(rax_2)) != 0 && arg1[1] == 0x3a)
        int16_t rax_4 = arg1[2]
        
        if (rax_4 == 0x5c || rax_4 == 0x2f)
            return 1

return 0
