// 函数: sub_140d80730
// 地址: 0x140d80730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
sub_140d7ac60(&var_28, arg1 + 0xc8, arg2)
void* rcx_1 = var_28

if (rcx_1 == 0)
    goto label_140d80899

int64_t* var_20

if (IsWindowEnabled(*(rcx_1 + 0x28)) == 0)
    *arg4 = 0
label_140d80899:
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
else
    char rcx_3 = *(arg3 + 0x20)
    int128_t var_18
    int32_t rax_4
    
    if ((rcx_3 & 3) == 3)
        if (var_20 != 0)
            var_20[1].d += 1
        
        var_18 = var_28.o
        
        if (var_20 != 0)
            var_20[1].d += 1
        
        int64_t* rcx_4 = *(arg1 + 0x18)
        rax_4 = (*(*rcx_4 + 0x180))(rcx_4, &var_18, arg3, arg3 + 0x10)
        goto label_140d80837
    
    if ((rcx_3 & 1) != 0)
        if (var_20 != 0)
            var_20[1].d += 1
        
        var_18 = var_28.o
        
        if (var_20 != 0)
            var_20[1].d += 1
        
        int64_t* rcx_5 = *(arg1 + 0x18)
        rax_4 = (*(*rcx_5 + 0x170))(rcx_5, &var_18, arg3)
        goto label_140d80837
    
    if ((rcx_3 & 2) == 0)
        goto label_140d80899
    
    if (var_20 != 0)
        var_20[1].d += 1
    
    var_18 = var_28.o
    
    if (var_20 != 0)
        var_20[1].d += 1
    
    int64_t* rcx_6 = *(arg1 + 0x18)
    rax_4 = (*(*rcx_6 + 0x178))(rcx_6, &var_18, arg3 + 0x10)
label_140d80837:
    int64_t* rdi_1 = var_18:8.q
    *arg4 = rax_4
    
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
        
        goto label_140d80899
return 0
