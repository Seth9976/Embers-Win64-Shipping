// 函数: sub_1418fde70
// 地址: 0x1418fde70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x48)
int32_t result = *(r10 + 0x1af0) & 0x30

if (result != 0 || *(arg1 + 0xd0) != result.b)
    int32_t r9_1 = *(arg1 + 0xb0)
    
    if (r9_1 s> 0)
        if (result != 0)
            *(arg1 + 0xb0) = r9_1 - 1
            
            if ((*(r10 + 0x1af0) & 0x10) != 0)
                int64_t var_28
                var_28.d = r9_1 - 1
                return data_143efbb38(arg2, 0x2000, arg3, 0, var_28)
        else if (data_143efb318 != 0)
            int32_t var_10_1 = 5
            int64_t var_18_1 = 8
            int64_t var_20_1 = *(arg1 + 0xc0)
            int64_t var_28_1 = 0x4000
            return data_143efb7f8(*(r10 + 8), *(*(arg1 + 0xb8) + 0x10), 0)

return result
