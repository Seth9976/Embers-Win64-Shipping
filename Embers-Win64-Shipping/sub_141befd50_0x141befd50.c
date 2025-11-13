// 函数: sub_141befd50
// 地址: 0x141befd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint64_t result = *(arg1 + 0x58)
int128_t zmm1 = *(arg1 + 0x38)

if (result != 0)
    char var_38_1 = 1
    int64_t var_30 = 0
    int32_t var_28_1 = 0
    int128_t var_48_1 = zmm1
    *(result + 0x38) = 1
    *(result + 0x28) = zmm1
    sub_140692f90(result + 0x40, &var_30)
    sub_140745b20(&var_30)
    result = *(arg1 + 0x58)

if (result != 0)
    *(result + 0x58) = *(arg1 + 0x48)
    result = *(arg1 + 0x58)

zmm1 = *(arg1 + 0x4c)

if (result != 0)
    int32_t var_20
    char var_1c_1
    
    if (zmm1.d f!= (zx.o(0)).d)
        var_20 = zmm1.d
        var_1c_1 = 1
    else
        var_1c_1 = 0
    
    int32_t zmm0
    
    zmm0 = var_1c_1 == 0 ? var_20 : var_20
    
    result += 0x50
    
    if (&var_20 != result)
        if (*(result + 4) != 0)
            *(result + 4) = 0
        
        if (var_1c_1 != 0)
            *result = zmm0
            *(result + 4) = 1

void* rcx_3 = *(arg1 + 0x58)

if (rcx_3 != 0)
    result = zx.q(*(arg1 + 0x50))
    *(rcx_3 + 0x20) = result.d
    void* rcx_4 = *(arg1 + 0x58)
    
    if (rcx_4 != 0)
        result = zx.q(*(arg1 + 0x51))
        *(rcx_4 + 0x24) = result.d

__security_check_cookie(rax_1 ^ &var_68)
return result
