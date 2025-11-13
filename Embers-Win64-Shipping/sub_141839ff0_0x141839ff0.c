// 函数: sub_141839ff0
// 地址: 0x141839ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* result = arg1

if (arg2 s>= 3)
    int16_t* var_38
    sub_140b291e0(arg4, &var_38, 0)
    int16_t* rbp_1 = &data_142d40450
    int16_t* const r12_1 = &data_142d40450
    int32_t var_30
    
    if (var_30 != 0)
        r12_1 = var_38
    
    wchar16 const* const rsi_1
    
    if (arg2 s>= 6)
        rsi_1 = u"ChunksV4"
        
        if (arg2 s< 0xf)
            rsi_1 = u"ChunksV3"
    else
        rsi_1 = u"ChunksV2"
    
    int16_t* const var_50_1 = r12_1
    int64_t var_58_1 = *arg5
    sub_140b21160(arg4, 0x10, 0)
    int16_t* var_48
    sub_140a2e390(&var_48, u"%s/%02d/%016llX_%s.chunk", rsi_1)
    int16_t* const rax_4 = &data_142d40450
    int32_t var_40
    
    if (var_40 != 0)
        rax_4 = var_48
    
    if (arg3[1].d != 0)
        rbp_1 = *arg3
    
    int16_t* const var_20_1 = rax_4
    int16_t* var_28 = rbp_1
    *result = 0
    result[1] = 0
    sub_140b0f5f0(result, &var_28, 2)
    int16_t* rcx_4 = var_48
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int16_t* rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
else
    sub_14183a160(arg1, arg3, arg4)

return result
