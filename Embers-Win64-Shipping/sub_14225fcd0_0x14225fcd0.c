// 函数: sub_14225fcd0
// 地址: 0x14225fcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
bool result = sub_142029ad0(arg3, &var_28)
int64_t rsi = var_28
int64_t* var_20

if (rsi != 0)
    if (var_20 != 0)
        var_20[1].d += 1
        var_20[1].d += 1
    
    *(arg2 + 0x38) = rsi
    int64_t* rcx_1 = *(arg2 + 0x40)
    
    if (var_20 != rcx_1)
        if (var_20 != 0)
            *(var_20 + 0xc) += 1
            rcx_1 = *(arg2 + 0x40)
        
        if (rcx_1 != 0)
            int32_t temp4_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        *(arg2 + 0x40) = var_20
    
    *(arg2 + 0xb4) |= 0x20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp3_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    int64_t var_18 = rsi
    int64_t* var_10_1 = var_20
    
    if (var_20 != 0)
        var_20[1].d += 1
    
    sub_140dbdce0(arg2, &var_18, 2, 0)
    var_18 = rsi
    int64_t* var_10_2 = var_20
    
    if (var_20 != 0)
        var_20[1].d += 1
    
    sub_142272180(arg2, &var_18)
    *(arg3 + 0x32c) = 1
    *(arg3 + 0x329) = 0
    result = (*(arg1 + 8) == 0) + 1
    *(arg3 + 0x32a) = result
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            result = (**var_20)(var_20)
            int32_t temp6_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*var_20 + 8))(var_20, 1)

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_20 + 8))(var_20, 1)

return result
