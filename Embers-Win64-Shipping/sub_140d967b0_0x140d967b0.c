// 函数: sub_140d967b0
// 地址: 0x140d967b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1[3]

if (result == arg2[3])
    if (result != 0)
        result.b = 1
        return result
    
    int16_t* const rcx = &data_142d40450
    int16_t* rdx
    
    if (arg2[1].d == result.d)
        rdx = &data_142d40450
    else
        rdx = *arg2
    
    if (arg1[1].d != 0)
        rcx = *arg1
    
    if (sub_140a54510(rcx, rdx).d == 0 && arg1[2].b == arg2[2].b && *(arg1 + 0x11) == *(arg2 + 0x11)
            && *(arg1 + 0x14) == *(arg2 + 0x14))
        result.b = 1
        return result

result.b = 0
return result
