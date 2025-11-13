// 函数: sub_1423461a0
// 地址: 0x1423461a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
uint64_t result = sub_140b4e7c0(arg2, &data_1439a94d8)

if (result.d s< 7)
    int32_t i = 0
    
    if (*(arg1 + 0x48) s> 0)
        result = 0
        
        do
            int64_t rdx = *(arg1 + 0x40)
            bool cond:0_1 = 0f f!= *(rdx + result + 0x54)
            *(rdx + result + 0x58) = 2
            
            if (not(cond:0_1))
                *(rdx + result + 0x54) = 0x3f800000
            
            i += 1
            result -= -0x80
        while (i s< *(arg1 + 0x48))

return result
