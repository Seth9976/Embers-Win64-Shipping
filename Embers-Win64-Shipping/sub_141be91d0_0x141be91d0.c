// 函数: sub_141be91d0
// 地址: 0x141be91d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x1c8)

if (result != 0)
    int32_t rsi_1 = *(result + 0x118)
    int32_t rsi_2 = rsi_1 - 1
    
    if (rsi_1 - 1 s>= 0)
        int64_t* r14_2 = sx.q(rsi_2) << 4
        int32_t temp1_1
        
        do
            void* rcx = *(arg1 + 0x1c8)
            result = *(rcx + 0x110)
            void* rdx = *(r14_2 + result)
            
            if (*(rdx + 4) == arg2 && *(rdx + 2) == arg3)
                result = sub_141f22280(rcx, rsi_2)
            
            r14_2 -= 0x10
            temp1_1 = rsi_2
            rsi_2 -= 1
        while (temp1_1 - 1 s>= 0)

return result
