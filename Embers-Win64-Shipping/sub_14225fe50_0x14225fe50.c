// 函数: sub_14225fe50
// 地址: 0x14225fe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
char result = sub_142029ad0(arg3, &var_38)

if (var_38 != 0)
    char rax = *(arg1 + 0x18)
    char rax_1
    
    if (rax != 2 && rax == 3)
        rax_1 = sub_142032570(arg3)
    
    char r9_1
    
    if (rax == 2 || (rax == 3 && rax_1 != 0))
        r9_1 = 1
    else
        r9_1 = 0
    
    uint128_t zmm0 = var_38.o
    uint128_t var_18 = zmm0
    void* rax_2 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    int64_t var_28 = *(arg1 + 8)
    void* rax_4 = *(arg1 + 0x10)
    void* var_20_1 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    sub_1422789e0(arg1, arg2, &var_28, r9_1, &var_18)
    
    if (arg2 + 0x38 != &var_18)
        *(arg2 + 0x38) = 0
        int64_t* rcx_3 = *(arg2 + 0x40)
        *(arg2 + 0x40) = 0
        
        if (rcx_3 != 0)
            int32_t temp2_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
    
    *(arg2 + 0xb4) = (*(arg2 + 0xb4) & 0xffffffdf) | 1
    result = *(arg1 + 0x18)
    *(arg3 + 0x32c) = result
    *(arg3 + 0x329) = 1

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_30 + 8))(var_30, 1)

return result
