// 函数: sub_142c3d830
// 地址: 0x142c3d830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_142c3ae60(arg2, arg1, 6) != 0)
    char* rcx_1 = *(arg2 + 0x18)
    int64_t var_20_1 = *(arg3 + 8)
    uint16_t rdx_2 = rcx_1.w - arg1.w
    int32_t var_18_1 = *(arg3 + 0x10)
    *(arg1 + 3) = rdx_2.b
    *(arg1 + 2) = (rdx_2 u>> 8).b
    void var_28
    
    if (sub_142c3cad0(rcx_1, arg2, &var_28).b == 0)
        result.b = 0
    else
        *(arg1 + 5) = arg4.b
        result.w = arg4 s>> 8
        *(arg1 + 4) = result.b
        result.b = 1
else
    result.b = 0

return result
