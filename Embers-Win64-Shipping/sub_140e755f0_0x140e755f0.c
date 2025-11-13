// 函数: sub_140e755f0
// 地址: 0x140e755f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x398) == 0)
label_140e756c8:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rcx = *(arg1 + 0x390)
    
    if (rcx == 0)
        goto label_140e756c8
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140e756c8
    
    int64_t rdx = *(arg4 + 0x20)
    int64_t* rbx_1 = *(arg4 + 0x28)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* rcx_1
    
    if (*(arg1 + 0x398) == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x390)
    
    int64_t var_28 = *(arg4 + 0x18)
    int64_t var_20_1 = rdx
    int64_t* var_18_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    (*(*rcx_1 + 0x48))(rcx_1, arg2, &var_28)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
