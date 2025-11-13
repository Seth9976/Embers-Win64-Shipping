// 函数: sub_142ae7500
// 地址: 0x142ae7500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t rcx = *(arg1 + 8)
    
    if (arg2 s< rcx)
        int64_t r9 = sx.q(arg2) << 3
        int64_t result = *(r9 + *(arg1 + 0x10))
        
        if (arg2 s< rcx - 1)
            do
                int64_t* rcx_1 = *(arg1 + 0x10)
                r9 += 8
                arg2 += 1
                *(rcx_1 + r9 - 8) = *(rcx_1 + r9)
            while (arg2 s< *(arg1 + 8) - 1)
        
        *(arg1 + 8) -= 1
        return result

return 0
