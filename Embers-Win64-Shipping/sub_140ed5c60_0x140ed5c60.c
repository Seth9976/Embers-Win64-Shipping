// 函数: sub_140ed5c60
// 地址: 0x140ed5c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6

if (arg3 == 0)
    zmm6 = zx.o(0)
else
    zmm6 = 0x3f000000

int64_t* result

if (*(arg1 + 0x3c0) != 0)
    result = *(arg1 + 0x3c8)

if (*(arg1 + 0x3c0) == 0 || result == 0 || result[1].d s<= 0)
    int32_t var_40_1 = 0
    int64_t* (* var_48)(void* arg1, int64_t arg2, int64_t arg3, char arg4) = sub_140edee10
    var_48.o = var_48.o
    void var_38
    void var_28
    result = sub_140e20c50(arg1 + 8, &var_38, zmm6, sub_140e8ff00(&var_28, arg1, &var_48, arg2))
    *(arg1 + 0x3c0) = *result
    void* rdi_1 = result[1]
    int64_t* rcx_3 = *(arg1 + 0x3c8)
    
    if (rdi_1 != rcx_3)
        if (rdi_1 != 0)
            *(rdi_1 + 0xc) += 1
            rcx_3 = *(arg1 + 0x3c8)
        
        if (rcx_3 != 0)
            int32_t temp2_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*rcx_3 + 8))(rcx_3, 1)
        
        *(arg1 + 0x3c8) = rdi_1
    
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
