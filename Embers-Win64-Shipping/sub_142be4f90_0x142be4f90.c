// 函数: sub_142be4f90
// 地址: 0x142be4f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(arg1 + 0x2a0))(arg1, 0x4f532f32, arg2, 0)

if (result == 0)
    result = sub_142b96aa0(arg2, &data_143698140, arg1 + 0x208)
    
    if (result == 0)
        bool cond:0_1 = *(arg1 + 0x208) u< 1
        __builtin_memset(arg1 + 0x258, 0, 0x14)
        *(arg1 + 0x26c) = 0xffff
        
        if (not(cond:0_1))
            result = sub_142b96aa0(arg2, &data_143698448, arg1 + 0x208)
            
            if (result == 0 && *(arg1 + 0x208) u>= 2)
                result = sub_142b96aa0(arg2, &data_143698458, arg1 + 0x208)
                
                if (result == 0 && *(arg1 + 0x208) u>= 5)
                    return sub_142b96aa0(arg2, &data_143698478, arg1 + 0x208)

return result
