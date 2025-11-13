// 函数: sub_140ebc650
// 地址: 0x140ebc650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_808
int64_t rax_1 = __security_cookie ^ &var_808

if (*(arg1 + 0x5d8) == 0)
label_140ebc82f:
    void var_708
    int64_t* rax_16 = _vfprintf_p_l(&var_708, u"OnGenerateWidget() not assigned.", u"SListView")
    int64_t var_7c0 = *rax_16
    int64_t* rcx_14 = rax_16[1]
    
    if (rcx_14 != 0)
        rcx_14[1].d += 1
    
    int64_t r14_1 = 0
    int32_t var_7b0_1 = rax_16[2].d
    int64_t var_7a0 = 0
    int32_t var_798_1 = 0
    char var_7a8_1 = 1
    void var_490
    int64_t* rax_18 = sub_14068d9d0(&var_490)
    sub_14065da90(&rax_18[0x34], &var_7c0)
    rax_18[0x37].b = var_7a8_1
    sub_140692f90(&rax_18[0x38], &var_7a0)
    void*** rax_19 = j_sub_140a82f30(0x7a8)
    void*** rdi_3 = rax_19
    
    if (rax_19 == 0)
        rdi_3 = nullptr
    else
        rax_19[1].d = 1
        *(rax_19 + 0xc) = 1
        *rdi_3 = &data_142d8b060
        
        if (rdi_3 != -0x10)
            sub_140f66da0(&rdi_3[2])
    
    void* var_750 = &rdi_3[2]
    sub_14065fa30(&var_750, &rdi_3[2])
    int64_t var_7e8_1 = 0x798
    void var_7d8
    void* var_740_1 = &var_7d8
    void* var_718
    void** rax_20 =
        sub_140697520(&var_750, &var_718, rax_18, sub_140e23ed0(&rdi_3[2], "STextBlock"))
    int64_t* rdi_4 = rax_20[1]
    void* rbx_3 = *rax_20
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    void var_6e0
    int64_t* rax_21 = sub_140e92ba0(&var_6e0)
    void* var_7d0 = rbx_3
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    if (&var_7d0 != &rax_21[0x48])
        int128_t zmm1_1 = var_7d0.o
        int128_t var_6f0_1 = zmm1_1
        var_7d0.o = *(rax_21 + 0x240)
        *(rax_21 + 0x240) = zmm1_1
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp3_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t* rbx_5 = *(arg1 + 0x10)
    
    if (rbx_5 != 0)
        int32_t rax_24 = rbx_5[1].d
        
        if (rax_24 != 0)
            rbx_5[1].d = rax_24 + 1
            rax_24.b = 1
        
        if (rax_24.b == 0)
            rbx_5 = nullptr
        
        if (rbx_5 != 0)
            r14_1 = *(arg1 + 8)
    
    int64_t var_778 = r14_1
    
    if (rbx_5 != 0)
        int32_t rax_25 = rbx_5[1].d
        rbx_5[1].d = rax_25
        
        if (rax_25 == 0)
            (**rbx_5)(rbx_5)
            int32_t temp8_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* var_790 = &var_778
    void*** rax_28 = sub_140e91530()
    void* var_768 = &rax_28[2]
    sub_140e90fe0(&var_768, &rax_28[2])
    int64_t var_7e8_2 = 0x578
    int64_t** var_758_1 = &var_790
    int64_t var_728
    sub_140e9a3a0(&var_768, &var_728, rax_21, sub_140e23ed0(&rax_28[3], "STableRow<ItemType>"))
    
    if (rax_28 != 0)
        rax_28[1].d -= 1
        
        if (rax_28[1].d == 1)
            (**rax_28)(rax_28)
            int32_t temp12_1 = *(rax_28 + 0xc)
            *(rax_28 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*rax_28)[1](rax_28, 1)
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp16_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    sub_140e977f0(&var_6e0)
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp19_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t* var_710
    
    if (var_710 != 0)
        var_710[1].d -= 1
        
        if (var_710[1].d == 1)
            (**var_710)(var_710)
            int32_t temp21_1 = *(var_710 + 0xc)
            *(var_710 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*var_710 + 8))(var_710, 1)
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp22_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*rdi_3)[1](rdi_3, 1)
    
    sub_1406913d0(&var_490)
    sub_140745b20(&var_7a0)
    
    if (rcx_14 != 0)
        rcx_14[1].d -= 1
        
        if (rcx_14[1].d == 1)
            (**rcx_14)(rcx_14)
            int32_t rax_41 = *(rcx_14 + 0xc)
            *(rcx_14 + 0xc) -= 1
            
            if (rax_41 == 1)
                (*(*rcx_14 + 8))(rcx_14, 1)
    
    int64_t* var_700
    
    if (var_700 != 0)
        var_700[1].d -= 1
        
        if (var_700[1].d == 1)
            (**var_700)(var_700)
            int32_t rdi_5 = *(var_700 + 0xc)
            *(var_700 + 0xc) -= 1
            
            if (rdi_5 == 1)
                (*(*var_700 + 8))(var_700, zx.q(rdi_5))
    
    *arg2 = var_728
    int64_t* var_720
    arg2[1] = var_720
    
    if (var_720 != 0)
        int32_t rax_47 = var_720[1].d
        var_720[1].d = rax_47
        
        if (rax_47 == 0)
            (**var_720)(var_720)
            int32_t temp24_1 = *(var_720 + 0xc)
            *(var_720 + 0xc) -= 1
            
            if (temp24_1 == 1)
                (*(*var_720 + 8))(var_720, 1)
    
    int64_t* rbx_14 = arg3[1]
    
    if (rbx_14 != 0)
        rbx_14[1].d -= 1
        
        if (rbx_14[1].d == 1)
            (**rbx_14)(rbx_14)
            int32_t temp25_1 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*(*rbx_14 + 8))(rbx_14, 1)
else
    int64_t* rcx = *(arg1 + 0x5d0)
    
    if (rcx == 0)
        goto label_140ebc82f
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140ebc82f
    
    int64_t* rbx = *(arg1 + 0x10)
    int64_t* r14 = nullptr
    int64_t rdi = 0
    
    if (rbx != 0)
        int32_t rax_4 = rbx[1].d
        
        if (rax_4 != 0)
            rbx[1].d = rax_4 + 1
            rax_4.b = 1
        
        if (rax_4.b == 0)
            rbx = nullptr
        
        if (rbx != 0)
            int32_t rax_5 = rbx[1].d
            rdi = *(arg1 + 8)
            rbx[1].d = rax_5
            
            if (rax_5 == 0)
                (**rbx)(rbx)
                int32_t temp2_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
    
    int64_t var_788 = rdi
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t* rdi_1 = arg3[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    if (*(arg1 + 0x5d8) != 0)
        r14 = *(arg1 + 0x5d0)
    
    int64_t var_738 = *arg3
    int64_t* var_730_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    (*(*r14 + 0x48))(r14, arg2, &var_738, &var_788)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp10_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp14_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    int64_t* rbx_1 = arg3[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t r8_1 = *rbx_1
            (*r8_1)(rbx_1, arg4, r8_1)
            int32_t temp17_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp17_1 == 1)
                int64_t r8_2 = *rbx_1
                (*(r8_2 + 8))(rbx_1, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_808)
return arg2
