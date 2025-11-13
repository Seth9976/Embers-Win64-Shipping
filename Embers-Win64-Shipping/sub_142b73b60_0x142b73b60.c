// 函数: sub_142b73b60
// 地址: 0x142b73b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[6].d s>> 4

if (i_1 s> 0)
    int64_t i = sx.q(i_1)
    
    do
        i -= 1
        i_1 -= 1
        
        if (*(arg1 + i + 0x40) != 0)
            for (int64_t j = 0; j != 0x10; j += 1)
                if (*(arg1[2] + (zx.q(*(*arg1 + (i << 2))) << 2) + (j << 2)) != *(arg1 + 0x34))
                    return zx.q((i_1 + 1) << 4)
        else
            int32_t rax_1
            rax_1.b = *(*arg1 + (i << 2)) == *(arg1 + 0x34)
            
            if (rax_1.b == 0)
                return zx.q((i_1 + 1) << 4)
    while (i s> 0)

return 0
