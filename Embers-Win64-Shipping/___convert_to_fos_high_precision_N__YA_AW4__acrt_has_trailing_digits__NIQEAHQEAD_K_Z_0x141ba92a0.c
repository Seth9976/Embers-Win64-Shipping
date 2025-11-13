// 函数: ??$convert_to_fos_high_precision@N@@YA?AW4__acrt_has_trailing_digits@@NIQEAHQEAD_K@Z
// 地址: 0x141ba92a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7f8
int64_t rax_1 = __security_cookie ^ &var_7f8

if (*(arg1 + 0x5e8) == 0)
label_141ba940a:
    void var_708
    int64_t* rax_11 = _vfprintf_p_l(&var_708, u"OnGenerateWidget() not assigned.", u"SListView")
    int64_t var_7b0 = *rax_11
    int64_t* rcx_10 = rax_11[1]
    
    if (rcx_10 != 0)
        rcx_10[1].d += 1
    
    int64_t r14_1 = 0
    int32_t var_7a0_1 = rax_11[2].d
    int64_t var_790 = 0
    int32_t var_788_1 = 0
    char var_798_1 = 1
    void var_490
    int64_t* rax_13 = sub_14068d9d0(&var_490)
    sub_14065da90(&rax_13[0x34], &var_7b0)
    rax_13[0x37].b = var_798_1
    sub_140692f90(&rax_13[0x38], &var_790)
    void*** rax_14 = j_sub_140a82f30(0x7a8)
    void*** rdi_2 = rax_14
    
    if (rax_14 == 0)
        rdi_2 = nullptr
    else
        rax_14[1].d = 1
        *(rax_14 + 0xc) = 1
        *rdi_2 = &data_142d8b060
        
        if (rdi_2 != -0x10)
            sub_140f66da0(&rdi_2[2])
    
    void* var_758 = &rdi_2[2]
    sub_14065fa30(&var_758, &rdi_2[2])
    int64_t var_7d8_1 = 0x798
    void var_7c8
    void* var_748_1 = &var_7c8
    void* var_718
    void** rax_15 =
        sub_140697520(&var_758, &var_718, rax_13, sub_140e23ed0(&rdi_2[2], "STextBlock"))
    int64_t* rdi_3 = rax_15[1]
    void* rbx_2 = *rax_15
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
    
    void var_6e0
    int64_t* rax_16 = sub_140e92ba0(&var_6e0)
    void* var_7c0 = rbx_2
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
    
    if (&var_7c0 != &rax_16[0x48])
        int128_t zmm1_1 = var_7c0.o
        int128_t var_6f0_1 = zmm1_1
        var_7c0.o = *(rax_16 + 0x240)
        *(rax_16 + 0x240) = zmm1_1
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp6_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rbx_4 = *(arg1 + 0x10)
    
    if (rbx_4 != 0)
        int32_t rax_19 = rbx_4[1].d
        
        if (rax_19 != 0)
            rbx_4[1].d = rax_19 + 1
            rax_19.b = 1
        
        if (rax_19.b == 0)
            rbx_4 = nullptr
        
        if (rbx_4 != 0)
            r14_1 = *(arg1 + 8)
    
    int64_t var_768 = r14_1
    
    if (rbx_4 != 0)
        int32_t rax_20 = rbx_4[1].d
        rbx_4[1].d = rax_20
        
        if (rax_20 == 0)
            (**rbx_4)(rbx_4)
            int32_t temp9_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* var_780 = &var_768
    void* var_740
    sub_141bca640(&var_740)
    int64_t** var_730_1 = &var_780
    int64_t var_7d8_2 = 0x578
    void* var_728
    sub_141b88230(&var_740, &var_728, rax_16, sub_140e23ed0(var_740 + 8, "STableRow<ItemType>"))
    int64_t* var_738
    
    if (var_738 != 0)
        var_738[1].d -= 1
        
        if (var_738[1].d == 1)
            (**var_738)(var_738)
            int32_t temp11_1 = *(var_738 + 0xc)
            *(var_738 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_738 + 8))(var_738, 1)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp13_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    sub_140e977f0(&var_6e0)
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp15_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* var_710
    
    if (var_710 != 0)
        var_710[1].d -= 1
        
        if (var_710[1].d == 1)
            (**var_710)(var_710)
            int32_t temp17_1 = *(var_710 + 0xc)
            *(var_710 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*var_710 + 8))(var_710, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp18_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*rdi_2)[1](rdi_2, 1)
    
    sub_1406913d0(&var_490)
    sub_140745b20(&var_790)
    
    if (rcx_10 != 0)
        rcx_10[1].d -= 1
        
        if (rcx_10[1].d == 1)
            (**rcx_10)(rcx_10)
            int32_t rax_35 = *(rcx_10 + 0xc)
            *(rcx_10 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*rcx_10 + 8))(rcx_10, 1)
    
    int64_t* var_700
    
    if (var_700 != 0)
        var_700[1].d -= 1
        
        if (var_700[1].d == 1)
            (**var_700)(var_700)
            int32_t rdi_4 = *(var_700 + 0xc)
            *(var_700 + 0xc) -= 1
            
            if (rdi_4 == 1)
                (*(*var_700 + 8))(var_700, zx.q(rdi_4))
    
    *arg2 = var_728
    int64_t* var_720
    arg2[1] = var_720
    
    if (var_720 != 0)
        int32_t rax_41 = var_720[1].d
        var_720[1].d = rax_41
        
        if (rax_41 == 0)
            (**var_720)(var_720)
            int32_t temp19_1 = *(var_720 + 0xc)
            *(var_720 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*var_720 + 8))(var_720, 1)
else
    int64_t* rcx = *(arg1 + 0x5e0)
    
    if (rcx == 0)
        goto label_141ba940a
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_141ba940a
    
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
                int32_t temp5_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
    
    int64_t var_778 = rdi
    
    if (rbx != 0)
        rbx[1].d += 1
    
    if (*(arg1 + 0x5e8) != 0)
        r14 = *(arg1 + 0x5e0)
    
    (*(*r14 + 0x48))(r14, arg2, arg3, &var_778)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            int64_t r8_1 = *rbx
            (*r8_1)(rbx, arg4, r8_1)
            int32_t temp7_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp7_1 == 1)
                int64_t r8_2 = *rbx
                (*(r8_2 + 8))(rbx, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_7f8)
return arg2
