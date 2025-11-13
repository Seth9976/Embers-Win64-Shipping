// 函数: sub_140ab26b0
// 地址: 0x140ab26b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140abd990(arg2)
uint64_t result = *arg1

if (result != 0)
    int64_t* rcx_1 = *arg2
    
    if (result == rcx_1)
        int16_t rsi_1 = 0
        
        if (*((*(*rcx_1 + 0x10))(rcx_1) + 8) s<= 1 || ((arg2[2].d u>> 1).b & 1) != 0)
            result = 0
        else
            int64_t* rcx_2 = *arg2
            result = (*(*rcx_2 + 0x40))(rcx_2)
        
        if (arg1[2].w == result.w)
            int64_t* rcx_3 = *arg2
            
            if (*((*(*rcx_3 + 0x10))(rcx_3) + 8) s> 1 && ((arg2[2].d u>> 1).b & 1) == 0)
                int64_t* rcx_4 = *arg2
                rsi_1 = (*(*rcx_4 + 0x48))(rcx_4).w
            
            if (*(arg1 + 0x12) == rsi_1 && *(arg1 + 0x14) == arg2[2].d)
                result.b = 1
                return result

result.b = 0
return result
