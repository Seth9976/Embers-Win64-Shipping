// 函数: sub_140f4ab00
// 地址: 0x140f4ab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38
int32_t result = sub_140ed2370(arg1, &var_38, arg2)

if (arg1[0x92].d != 0)
    int64_t* rcx = arg1[0x91]
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result.b != 0)
            int64_t* rcx_1
            
            if (arg1[0x92].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x91]
            
            result = (*(*rcx_1 + 0x48))(rcx_1)
            arg1[0x90].d = result

int32_t rbp = arg1[0x90].d
int64_t* var_30

if (rbp != 0)
    int128_t zmm6 = var_38
    var_38 = zmm6
    
    if (var_30 != 0)
        var_30[1].d += 1
    
    if (&var_38 != &arg1[0xce])
        int128_t zmm0_1 = *(arg1 + 0x670)
        *(arg1 + 0x670) = zmm6
        var_38 = zmm0_1
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp3_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    int32_t r8_1 = *(arg3 + 0xc)
    
    if (var_30 != 0)
        var_30[1].d += 1
    
    arg1[0xee].b = 1
    var_38 = zmm6
    
    if (var_30 != 0)
        var_30[1].d += 1
    
    int128_t zmm6_1 = sub_140ed5b90(arg1, &var_38, r8_1)
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp5_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    if (rbp != 3)
    label_140f4ac57:
        var_38 = zmm6_1
        
        if (var_30 != 0)
            var_30[1].d += 1
        
        result = sub_140f5acf0(arg1, &var_38, 1)
    else
        int16_t rax_7 = *(arg3 + 8)
        int16_t rcx_7 = rax_7 & 0xc
        
        if ((rbp.b & rax_7.b) != 0)
            if (rcx_7 == 0)
                (*(arg1[0x9d] + 0x30))(&arg1[0x9d])
            
            var_38 = zmm6_1
            
            if (var_30 != 0)
                var_30[1].d += 1
            
            (*(arg1[0x9d] + 0x38))(&arg1[0x9d], &var_38)
            result = (*(arg1[0x9d] + 0x40))(&arg1[0x9d], 1)
        else
            if (rcx_7 == 0)
                goto label_140f4ac57
            
            result = (*(arg1[0x9d] + 0x40))(&arg1[0x9d], 1)

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*var_30 + 8))

return result
