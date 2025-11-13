// 函数: sub_142be4b50
// 地址: 0x142be4b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(arg1 + 0x2a0))(arg3, 0x6d617870, arg2, 0)

if (result == 0)
    result = sub_142b96aa0(arg2, &data_143698a48, arg1 + 0x170)
    
    if (result == 0)
        bool cond:0_1 = *(arg1 + 0x170) s< 0x10000
        __builtin_memset(arg1 + 0x176, 0, 0x1a)
        
        if (not(cond:0_1))
            result = sub_142b96aa0(arg2, &data_143698a58, arg1 + 0x170)
            
            if (result == 0)
                if (*(arg1 + 0x184) u< 0x40)
                    *(arg1 + 0x184) = 0x40
                
                if (*(arg1 + 0x180) u> 0xfffb)
                    *(arg1 + 0x180) = 0xfffb

return result
