// 函数: sub_140d808e0
// 地址: 0x140d808e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
sub_140d7ac60(&var_28, arg1 + 0xc8, arg2)
void* rcx_1 = var_28
int64_t* var_20

if (rcx_1 == 0)
label_140d809a6:
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
else
    if (IsWindowEnabled(*(rcx_1 + 0x28)) == 0)
        goto label_140d809a6
    
    if (var_20 != 0)
        var_20[1].d += 1
    
    int128_t var_18 = var_28.o
    
    if (var_20 != 0)
        var_20[1].d += 1
    
    int64_t* rcx_3 = *(arg1 + 0x18)
    (*(*rcx_3 + 0x190))(rcx_3, &var_18)
    int64_t* rdi_1 = var_18:8.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp5_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
        
        goto label_140d809a6
return 0
