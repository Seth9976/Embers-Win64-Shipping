// 函数: sub_140fee930
// 地址: 0x140fee930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1419767f0()

if (result.b != 0 && data_1439c7a38 != 1 && arg2 != 0)
    result = (*(*arg2 + 0x48))(arg2)
    
    if (result != 0)
        if (*(result + 0x20) == 0)
            int64_t rdx = *(result + 0x38)
            int64_t rcx_1 = *(arg1 + 0x150)
            int64_t arg_18 = 0
            sub_142c48de0(rcx_1, rdx, &arg_18)
            *(result + 0x20) = arg_18
        
        (*(*(arg1 + 0x17cf8) + 0x10))(arg1 + 0x17cf8, u"BeginMFUpdate", zx.q(data_14399f634))
        sub_142c48b50(*(arg1 + 0x150), *(result + 0x20), 0)
        return (*(*(arg1 + 0x17cf8) + 0x18))(arg1 + 0x17cf8)

return result
