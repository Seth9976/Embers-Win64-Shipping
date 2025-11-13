// 函数: sub_142b36b30
// 地址: 0x142b36b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg2

switch (result)
    case -6
        void* rsi_3 = *(arg1 + 0x78)
        
        if (rsi_3 != 0)
            sub_142b324e0(rsi_3)
            result = sub_142a47920(rsi_3)
        
        *(arg1 + 0x78) = arg2
    case -5
        void* rsi_2 = *(arg1 + 0x70)
        
        if (rsi_2 != 0)
            sub_142b324e0(rsi_2)
            result = sub_142a47920(rsi_2)
        
        *(arg1 + 0x70) = arg2
    case -4
        return sub_142b36880(arg1, (result + 7).d, arg2, 1) __tailcall
    case -3
        return sub_142b36880(arg1, (result + 5).d, arg2, 1) __tailcall
    case -2
        return sub_142b36880(arg1, (result + 3).d, arg2, 1) __tailcall
    case -1
        void* rsi_1 = *(arg1 + 0x50)
        
        if (rsi_1 != 0)
            sub_142b324e0(rsi_1)
            result = sub_142a47920(rsi_1)
        
        *(arg1 + 0x50) = arg2

return result
