// 函数: sub_140fb1b90
// 地址: 0x140fb1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_828
int64_t rax_1 = __security_cookie ^ &var_828

if (*(arg1 + 0x5d8) == 0)
label_140fb1d6f:
    void var_708
    int64_t* rax_14 = _vfprintf_p_l(&var_708, u"OnGenerateWidget() not assigned.", u"SListView")
    int64_t var_7c8 = *rax_14
    int64_t* rcx_14 = rax_14[1]
    
    if (rcx_14 != 0)
        rcx_14[1].d += 1
    
    int64_t r14_1 = 0
    int32_t var_7b8_1 = rax_14[2].d
    int64_t var_7a8 = 0
    int32_t var_7a0_1 = 0
    char var_7b0_1 = 1
    void var_490
    int64_t* rax_16 = sub_14068d9d0(&var_490)
    sub_14065da90(&rax_16[0x34], &var_7c8)
    rax_16[0x37].b = var_7b0_1
    sub_140692f90(&rax_16[0x38], &var_7a8)
    void*** rax_17 = j_sub_140a82f30(0x7a8)
    void*** rdi_1 = rax_17
    
    if (rax_17 == 0)
        rdi_1 = nullptr
    else
        rax_17[1].d = 1
        *(rax_17 + 0xc) = 1
        *rdi_1 = &data_142d8b060
        
        if (rdi_1 != -0x10)
            sub_140f66da0(&rdi_1[2])
    
    void* var_768 = &rdi_1[2]
    sub_14065fa30(&var_768, &rdi_1[2])
    int64_t var_808_1 = 0x798
    void var_7f8
    void* var_758_1 = &var_7f8
    void* var_718
    void** rax_18 =
        sub_140697520(&var_768, &var_718, rax_16, sub_140e23ed0(&rdi_1[2], "STextBlock"))
    int64_t* rdi_2 = rax_18[1]
    void* rbx_5 = *rax_18
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    void var_6e0
    int64_t* rax_19 = sub_140e92ba0(&var_6e0)
    void* var_7d8 = rbx_5
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    if (&var_7d8 != &rax_19[0x48])
        int128_t zmm1_1 = var_7d8.o
        int128_t var_6f0_1 = zmm1_1
        var_7d8.o = *(rax_19 + 0x240)
        *(rax_19 + 0x240) = zmm1_1
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp3_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    int64_t* rbx_7 = *(arg1 + 0x10)
    
    if (rbx_7 != 0)
        int32_t rax_22 = rbx_7[1].d
        
        if (rax_22 != 0)
            rbx_7[1].d = rax_22 + 1
            rax_22.b = 1
        
        if (rax_22.b == 0)
            rbx_7 = nullptr
        
        if (rbx_7 != 0)
            r14_1 = *(arg1 + 8)
    
    int64_t var_790 = r14_1
    int64_t* var_788_1 = rbx_7
    
    if (rbx_7 != 0)
        int32_t rax_23 = rbx_7[1].d
        rbx_7[1].d = rax_23
        
        if (rax_23 == 0)
            (**rbx_7)(rbx_7)
            int32_t temp6_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    int64_t* var_798 = &var_790
    void*** rax_26 = sub_140f96600()
    void* var_780 = &rax_26[2]
    sub_140e90fe0(&var_780, &rax_26[2])
    int64_t var_808_2 = 0x578
    int64_t** var_770_1 = &var_798
    int64_t var_728
    sub_140f9c1d0(&var_780, &var_728, rax_19, sub_140e23ed0(&rax_26[3], "STableRow<ItemType>"))
    
    if (rax_26 != 0)
        rax_26[1].d -= 1
        
        if (rax_26[1].d == 1)
            (**rax_26)(rax_26)
            int32_t temp10_1 = *(rax_26 + 0xc)
            *(rax_26 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*rax_26)[1](rax_26, 1)
    
    sub_140f9a690(&var_790)
    sub_140e977f0(&var_6e0)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp14_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    int64_t* var_710
    
    if (var_710 != 0)
        var_710[1].d -= 1
        
        if (var_710[1].d == 1)
            (**var_710)(var_710)
            int32_t temp17_1 = *(var_710 + 0xc)
            *(var_710 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*var_710 + 8))(var_710, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp18_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*rdi_1)[1](rdi_1, 1)
    
    sub_1406913d0(&var_490)
    sub_140745b20(&var_7a8)
    
    if (rcx_14 != 0)
        rcx_14[1].d -= 1
        
        if (rcx_14[1].d == 1)
            (**rcx_14)(rcx_14)
            int32_t rax_37 = *(rcx_14 + 0xc)
            *(rcx_14 + 0xc) -= 1
            
            if (rax_37 == 1)
                (*(*rcx_14 + 8))(rcx_14, 1)
    
    int64_t* var_700
    
    if (var_700 != 0)
        var_700[1].d -= 1
        
        if (var_700[1].d == 1)
            (**var_700)(var_700)
            int32_t rdi_3 = *(var_700 + 0xc)
            *(var_700 + 0xc) -= 1
            
            if (rdi_3 == 1)
                (*(*var_700 + 8))(var_700, zx.q(rdi_3))
    
    *arg2 = var_728
    int64_t* var_720
    arg2[1] = var_720
    
    if (var_720 != 0)
        int32_t rax_43 = var_720[1].d
        var_720[1].d = rax_43
        
        if (rax_43 == 0)
            (**var_720)(var_720)
            int32_t temp20_1 = *(var_720 + 0xc)
            *(var_720 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*(*var_720 + 8))(var_720, 1)
    
    int64_t* rbx_15 = arg3[1]
    
    if (rbx_15 != 0)
        rbx_15[1].d -= 1
        
        if (rbx_15[1].d == 1)
            (**rbx_15)(rbx_15)
            int32_t temp21_1 = *(rbx_15 + 0xc)
            *(rbx_15 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*rbx_15 + 8))(rbx_15, 1)
else
    int64_t* rcx = *(arg1 + 0x5d0)
    
    if (rcx == 0)
        goto label_140fb1d6f
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140fb1d6f
    
    int64_t* rbx = *(arg1 + 0x10)
    int64_t* r14 = nullptr
    int64_t rcx_1 = 0
    
    if (rbx != 0)
        int32_t rax_4 = rbx[1].d
        
        if (rax_4 != 0)
            rbx[1].d = rax_4 + 1
            rax_4.b = 1
        
        if (rax_4.b == 0)
            rbx = nullptr
        
        if (rbx != 0)
            rcx_1 = *(arg1 + 8)
    
    int64_t var_7e8 = rcx_1
    
    if (rbx != 0)
        int32_t rax_5 = rbx[1].d
        rbx[1].d = rax_5
        
        if (rax_5 == 0)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    int128_t var_738 = var_7e8.o
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t* rbx_1 = arg3[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (*(arg1 + 0x5d8) != 0)
        r14 = *(arg1 + 0x5d0)
    
    int64_t var_750 = *arg3
    int64_t* var_748_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    (*(*r14 + 0x48))(r14, arg2, &var_750, &var_738)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp8_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = var_738:8.q
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp12_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    sub_140f9a690(&var_7e8)
    int64_t* rbx_3 = arg3[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            int64_t r8_1 = *rbx_3
            (*r8_1)(rbx_3, arg4, r8_1)
            int32_t temp15_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp15_1 == 1)
                int64_t r8_2 = *rbx_3
                (*(r8_2 + 8))(rbx_3, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_828)
return arg2
