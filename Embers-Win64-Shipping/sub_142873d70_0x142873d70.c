// 函数: sub_142873d70
// 地址: 0x142873d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_2 = *(arg1 + 0x28)

if (i_2 != 0)
    int64_t* i_1 = *i_2
    
    if (i_1 != 0)
        int64_t* i
        
        do
            i = *i_1
            i_2 = i_1
            i_1 = i
        while (i != 0)
    
    int64_t r8_1 = i_2[2]
    int64_t rax_3
    
    if (r8_1 - 1 u> 6)
        rax_3 = -1
    else
        rax_3 = r8_1 - 1 + (1 << r8_1.b << 3)
    
    if (rax_3 u>= arg2 && arg2 u>= *(arg1 + 0x18))
        *(arg1 + 0x20) = arg2
        return 1

return 0
