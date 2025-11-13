// 函数: sub_142b55700
// 地址: 0x142b55700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    if (arg2 != 0)
        int32_t rsi = *(arg1 + 8)
        
        if (rsi != *(arg2 + 8))
            return 0
        
        int32_t rbx = 0
        
        if (rsi s> 0)
            do
                int64_t* rax_1 = sub_142ae72d0(arg1, rbx)
                int64_t rax_2 = sub_142ae72d0(arg2, rbx)
                int64_t r8_1 = *rax_1
                
                if ((*(r8_1 + 0x20))(rax_1, rax_2, r8_1) != 0)
                    return 0
                
                rbx += 1
            while (rbx s< rsi)
        
        return 1
else if (arg2 == 0)
    return 1

return 0
