// 函数: sub_141f0dc30
// 地址: 0x141f0dc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(arg1 + 0x678)

if (result.b != 0 && *(arg1 + 0x690) != 0 && *(arg1 + 0x650) s> 0)
    int128_t* var_48
    sub_141f3baa0(arg2, &var_48)
    void* rdx_1 = *(arg1 + 0x430)
    int32_t var_40
    
    if (rdx_1 != arg2[0x86] || var_40 != *(arg1 + 0x640))
        sub_140780b40(arg1 + 0x638, rdx_1 + 0x1b8)
        result = arg2[0x86]
        int32_t rbx_1 = 0
        int64_t i_1 = sx.q(*(result + 0x1b0))
        
        if (i_1 s> 0)
            int64_t rsi_1 = 0
            int64_t i
            
            do
                int64_t var_38
                sub_141f5e650(arg2, &var_38, rbx_1)
                result = sub_141f5e0e0(arg1, var_38)
                
                if (result.d != 0xffffffff)
                    int128_t* rdx_5 = var_48
                    result = sx.q(result.d)
                    int128_t* rcx_7 = result * 0x30 + *(arg1 + 0x638)
                    *rcx_7 = *(rdx_5 + rsi_1)
                    rcx_7[1] = *(rdx_5 + rsi_1 + 0x10)
                    rcx_7[2] = *(rdx_5 + rsi_1 + 0x20)
                
                rbx_1 += 1
                rsi_1 += 0x30
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        result = arg1 + 0x638
        
        if (result != &var_48)
            var_48.o = *result
            *result = var_48.o
    
    int128_t* rcx_8 = var_48
    *(arg1 + 0x790) = 1
    
    if (rcx_8 != 0)
        return sub_140a74f90(rcx_8)

return result
