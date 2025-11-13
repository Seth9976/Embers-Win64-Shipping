// 函数: sub_140971be0
// 地址: 0x140971be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg1
int16_t* var_18

if (arg1 != &var_18)
    *arg1 = 0
    int64_t* rbx_1 = arg1[1]
    
    if (rbx_1 != 0)
        arg1[1] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

void* rbx_2

if (arg2 != 0)
    rbx_2 = *(arg2 + 0x228)

int64_t* result
int64_t var_28
wchar16 const* const rdx

if (arg2 == 0 || rbx_2 == 0)
    rdx = u"%s - Invalid player state"
label_140971cc6:
    int64_t r8_1 = *(rdi + 0x18)
    var_28 = 0
    sub_140a2e390(&var_18, rdx, r8_1)
    int16_t* const rcx_5 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        rcx_5 = var_18
    
    result = sub_140d23f50(rcx_5, 3)
    int16_t* rcx_6 = var_18
    
    if (rcx_6 != 0)
        return sub_140a74f90(rcx_6)
else
    int64_t* rbx_3 = *(rbx_2 + 0x260)
    var_28 = *(rbx_2 + 0x258)
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    result = &var_28
    
    if (&var_28 != rdi)
        var_28.o = *rdi
        *rdi = var_28.o
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (*rdi == 0)
        rdx = u"%s - Cannot map local player to unique net ID"
        goto label_140971cc6
return result
