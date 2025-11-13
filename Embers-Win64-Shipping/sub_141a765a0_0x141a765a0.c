// 函数: sub_141a765a0
// 地址: 0x141a765a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_141a34c10(arg1, arg2).b != 0 && *(arg1 + 0x10) == *(arg2 + 0x10)
        && arg1[0x14] == arg2[0x14])
    int32_t i_1 = *(arg1 + 0x50)
    void* rdx = &arg1[0x18]
    void* result_1 = &arg2[0x18]
    
    if (i_1 == *(arg2 + 0x50))
        result = *(result_1 + 0x30)
        void* rcx = *(rdx + 0x30)
        
        if (result != 0)
            result_1 = result
        
        if (rcx != 0)
            rdx = rcx
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t var_28_1 = *result_1
                int64_t zmm0 = *rdx
                
                if (zmm0.d != var_28_1.d)
                    goto label_141a7667f
                
                if ((zmm0 u>> 0x20).d != (var_28_1 u>> 0x20).d)
                    goto label_141a7667f
                
                if ((*(rdx + 8)).b != (*(result_1 + 8)).b)
                    goto label_141a7667f
                
                result_1 += 0xc
                rdx += 0xc
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        result.b = 1
        return result

label_141a7667f:
result.b = 0
return result
