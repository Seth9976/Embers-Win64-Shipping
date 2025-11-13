// 函数: sub_141bd2140
// 地址: 0x141bd2140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_598
int64_t rax_1 = __security_cookie ^ &var_598
int64_t var_560
sub_140a96170(&var_560)
int64_t* var_558
int32_t var_550

if (arg1[0x21] == 0)
label_141bd21d5:
    void var_4d0
    int64_t* rax_5 = _vfprintf_p_l(&var_4d0, 
        No EntryWidgetClass specified on this list.\nEven if doing custom stuff, this is always ", 
        &data_14306d0f0)
    int64_t rcx_3 = var_560
    var_560 = *rax_5
    *rax_5 = rcx_3
    int64_t* rcx_4 = var_558
    var_558 = rax_5[1]
    rax_5[1] = rcx_4
    var_550 = rax_5[2].d
    int64_t* var_4c8
    
    if (var_4c8 != 0)
        var_4c8[1].d -= 1
        
        if (var_4c8[1].d == 1)
            (**var_4c8)(var_4c8)
            int32_t rax_11 = *(var_4c8 + 0xc)
            *(var_4c8 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*(*var_4c8 + 8))(var_4c8, 1)
else
    void* rax_2 = sub_141c122a0()
    
    if (rax_2 == 0)
        goto label_141bd21d5
    
    void* rdx = arg1[0x21]
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30 || rdx == 0)
        goto label_141bd21d5

if (sub_140ab3dc0(&var_560) != 0)
    void var_4e0
    int64_t* rax_33 = (*(*arg1 + 0x2c0))(arg1, &var_4e0)
    int64_t* rcx_28 = rax_33[1]
    
    if (rcx_28 != 0)
        rcx_28[1].d += 1
    
    void var_4b8
    
    if (&arg1[0x41] == &var_4b8)
    label_141bd24df:
        
        if (rcx_28 != 0)
            rcx_28[1].d -= 1
            
            if (rcx_28[1].d == 1)
                (**rcx_28)(rcx_28)
                int32_t temp3_1 = *(rcx_28 + 0xc)
                *(rcx_28 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx_28 + 8))(rcx_28, 1)
    else
        arg1[0x41] = *rax_33
        int64_t* rbx_7 = arg1[0x42]
        
        if (rcx_28 == rbx_7)
            goto label_141bd24df
        
        arg1[0x42] = rcx_28
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp6_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
    
    int64_t* var_4d8
    
    if (var_4d8 != 0)
        var_4d8[1].d -= 1
        
        if (var_4d8[1].d == 1)
            (**var_4d8)(var_4d8)
            int32_t temp5_1 = *(var_4d8 + 0xc)
            *(var_4d8 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_4d8 + 8))(var_4d8, 1)
    
    sub_140f8c010(arg1[0x41], *(arg1 + 0x114))
    int64_t* rax_39
    
    if (*(arg1 + 0x115) == 0)
        char var_490_1 = 0
        void var_498
        rax_39 = &var_498
    else
        float var_4a8[0x2]
        rax_39 = &var_4a8
        char var_4a0_1 = 1
        var_4a8 = _mm_cvtps_pd(arg1[0x23].d).q
    
    char var_510_1 = 0
    float var_518[0x2]
    
    if (rax_39[1].b != 0)
        var_518 = *rax_39
        char var_510_2 = 1
    
    sub_140f8ba90(arg1[0x41], &var_518)
    int64_t rbx_9 = data_143e24388
    int64_t r14_2
    
    if (data_143de5480 == 0)
        r14_2 = 0
    else
        r14_2.b = GetCurrentThreadId() != data_143de5470
    
    sub_140f8df10(arg1[0x41], *(rbx_9 + (r14_2 << 2)) f* arg1[0x22].d)
    int64_t* rbx_10 = arg1[0x42]
    
    if (rbx_10 != 0)
        rbx_10[1].d += 1
    
    *arg2 = arg1[0x41]
    arg2[1] = rbx_10
    
    if (rbx_10 != 0)
        rbx_10[1].d += 1
        
        if (rbx_10 != 0)
            rbx_10[1].d -= 1
            
            if (rbx_10[1].d == 1)
                (**rbx_10)(rbx_10)
                int32_t temp12_1 = *(rbx_10 + 0xc)
                *(rbx_10 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rbx_10 + 8))(rbx_10, 1)
    
    if (var_558 != 0)
        var_558[1].d -= 1
        
        if (var_558[1].d == 1)
            (**var_558)(var_558)
            int32_t rdi_2 = *(var_558 + 0xc)
            *(var_558 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_558 + 8))(var_558, zx.q(rdi_2))
else
    int64_t var_548 = var_560
    
    if (var_558 != 0)
        var_558[1].d += 1
    
    int32_t var_538_1 = var_550
    int64_t var_528 = 0
    int32_t var_520_1 = 0
    char var_530_1 = 1
    void var_488
    int64_t* rax_17 = sub_14068d9d0(&var_488)
    sub_14065da90(&rax_17[0x34], &var_548)
    rax_17[0x37].b = var_530_1
    sub_140692f90(&rax_17[0x38], &var_528)
    void*** rax_19 = j_sub_140a82f30(0x7a8)
    void*** r15 = rax_19
    
    if (rax_19 == 0)
        r15 = nullptr
    else
        rax_19[1].d = 1
        *(rax_19 + 0xc) = 1
        *r15 = &data_142d8b060
        
        if (r15 != -0x10)
            sub_140f66da0(&r15[2])
    
    void* var_508 = &r15[2]
    sub_14065fa30(&var_508, &r15[2])
    int64_t var_578_1 = 0x798
    void var_568
    void* var_4f8_1 = &var_568
    void* var_4f0
    void** rax_20 = sub_140697520(&var_508, &var_4f0, rax_17, sub_140e23ed0(&r15[2], "STextBlock"))
    *arg2 = *rax_20
    void* rax_22 = rax_20[1]
    arg2[1] = rax_22
    
    if (rax_22 != 0)
        *(rax_22 + 8) += 1
    
    int64_t* var_4e8
    
    if (var_4e8 != 0)
        var_4e8[1].d -= 1
        
        if (var_4e8[1].d == 1)
            (**var_4e8)(var_4e8)
            int32_t temp9_1 = *(var_4e8 + 0xc)
            *(var_4e8 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_4e8 + 8))(var_4e8, 1)
    
    if (r15 != 0)
        r15[1].d -= 1
        
        if (r15[1].d == 1)
            (**r15)(r15)
            int32_t temp10_1 = *(r15 + 0xc)
            *(r15 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*r15)[1](r15, 1)
    
    sub_1406913d0(&var_488)
    sub_140745b20(&var_528)
    
    if (var_558 != 0)
        var_558[1].d -= 1
        
        if (var_558[1].d == 1)
            (**var_558)(var_558)
            int32_t rax_29 = *(var_558 + 0xc)
            *(var_558 + 0xc) -= 1
            
            if (rax_29 == 1)
                (*(*var_558 + 8))(var_558, 1)
    
    if (var_558 != 0)
        var_558[1].d -= 1
        
        if (var_558[1].d == 1)
            (**var_558)(var_558)
            int32_t rdi_1 = *(var_558 + 0xc)
            *(var_558 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_5 = *var_558
                (*(r8_5 + 8))(var_558, zx.q(rdi_1), r8_5)

__security_check_cookie(rax_1 ^ &var_598)
return arg2
