// 函数: sub_142ae7150
// 地址: 0x142ae7150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_142ae7310(arg1, *(arg2 + 8), arg4)

if (result != 0)
    result = sub_142ae7900(arg1, *(arg2 + 8), arg4)
    
    if (*arg4 s<= 0)
        int32_t i = 0
        
        if (*(arg2 + 8) s> 0)
            int64_t* rsi_1 = nullptr
            
            do
                int64_t rcx_1 = *(rsi_1 + *(arg1 + 0x10))
                
                if (rcx_1 != 0)
                    int64_t rax_1 = *(arg1 + 0x18)
                    
                    if (rax_1 != 0)
                        rax_1(rcx_1)
                
                int64_t rcx_2 = sx.q(i) << 3
                result = arg3(rcx_2 + *(arg1 + 0x10), *(arg2 + 0x10) + rcx_2)
                i += 1
                rsi_1 = &rsi_1[1]
            while (i s< *(arg2 + 8))

return result
