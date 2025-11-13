// 函数: sub_141d98b20
// 地址: 0x141d98b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int64_t var_18
sub_141d9ef80(rcx, &var_18, rcx + 0x3a0)
int64_t* rcx_1 = *arg1
int64_t* var_28
int64_t result = (*(*rcx_1 + 0x1d8))(rcx_1, &var_28, &var_18)
int64_t* r8_2 = var_28
int64_t* var_20

if (r8_2 == 0)
label_141d98c03:
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            result = (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*var_20 + 8))(var_20, 1)
else
    int32_t rcx_3 = arg1[1].d + *(arg2 + 0xa8)
    *(arg2 + 0xa8) = rcx_3
    
    if (rcx_3 s> *(arg2 + 0xac))
        sub_1405daba0(arg2 + 0xa0)
        r8_2 = var_28
    
    (*(*r8_2 + 0x178))(r8_2, arg1[2])
    int64_t* rcx_6 = var_28
    (*(*rcx_6 + 0x150))(rcx_6, *(arg2 + 0xa0), sx.q(*(arg2 + 0xa8)))
    result = 0
    *(arg2 + 8) = 0
    int64_t* rbx_1 = var_20
    var_28 = nullptr
    
    if (rbx_1 != 0)
        var_20 = nullptr
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        goto label_141d98c03
int64_t rcx_11 = var_18

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
