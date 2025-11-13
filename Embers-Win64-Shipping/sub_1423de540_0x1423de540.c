// 函数: sub_1423de540
// 地址: 0x1423de540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool arg_10

if (arg2 == 0)
    if (arg3 == 1)
        arg_10.q = 0
        arg2.b = 3
        sub_140d23f50(A null object was passed as a world context object to UEngine::GetWorldFromContextObject().", 
            arg2.b)
    
    return 0

arg_10 = true
int64_t result

if (arg3 != 2)
    result = (*(*arg2 + 0x150))(arg2)
else
    result = sub_140cde370(arg2, &arg_10)

if (arg_10 != 0)
    if (result == 0 && arg3 == 1)
        int64_t result_1 = result
        int16_t* var_18
        sub_140d21e10(arg2, &var_18, 0)
        int16_t* const rbx_1 = &data_142d40450
        int16_t* const r8_1 = &data_142d40450
        int32_t var_10
        
        if (var_10 != result.d)
            r8_1 = var_18
        
        int16_t* var_28
        sub_140a2e390(&var_28, 
            No world was found for object (%s) passed in to UEngine::GetWorldFromContextObject().", 
            r8_1)
        int32_t var_20
        
        if (var_20 != result.d)
            rbx_1 = var_28
        
        sub_140d23f50(rbx_1, 3)
        int16_t* rcx_4 = var_28
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int16_t* rcx_5 = var_18
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    if (arg_10 != 0)
        return result

return data_143f5e920
