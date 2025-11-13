// 函数: sub_140eb4730
// 地址: 0x140eb4730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4f8
int64_t rax_1 = __security_cookie ^ &var_4f8
*(arg1 + 0x560) = *arg4
void* rbx = arg4[1]
int64_t* rcx = *(arg1 + 0x568)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x568)
    
    if (rcx != 0)
        int32_t temp1_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x568) = rbx

*(arg1 + 0x558) = 0
void* result
int64_t var_498
int128_t zmm0

if (arg2 u<= 1)
    zmm0 = *arg3
    char rax_39 = arg3[1].b
    var_498 = 0
    int32_t var_490_1 = 0
    sub_140692f90(&var_498, arg3 + 0x18)
    void* rbx_13 = arg1 + 0x2b0
    void* rdi_2 = arg1 + 0x2b0
    
    if (arg1 == -0x2c0)
        rbx_13 = -0xfffffffffffffff0
    
    if (arg1 == -0x2c0)
        rbx_13 = nullptr
    
    if (arg1 == -0x2c0)
        rdi_2 = -0xfffffffffffffff0
    
    if (arg1 == -0x2c0)
        rdi_2 = nullptr
    
    *(rbx_13 + 0x48) = rax_39
    *(rbx_13 + 0x38) = zmm0
    sub_140692f90(rbx_13 + 0x50, &var_498)
    sub_140745b20(&var_498)
    sub_140de1b90(rbx_13 + 0x10, arg4)
    result = rdi_2 + 0x10
    
    if (rdi_2 == 0)
        result = nullptr
    
    *(arg1 + 0x558) = result
else
    int64_t* rbx_1 = arg4[1]
    void* rax_4 = *arg4
    int32_t var_420_1 = 0x3f800000
    char var_41c_1 = 1
    int64_t var_418 = 0
    int32_t var_410_1 = 0
    void* var_4c0 = rax_4
    int64_t* var_4b8_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    zmm0 = *arg3
    char rax_5 = arg3[1].b
    var_498 = 0
    int32_t var_490 = 0
    sub_140692f90(&var_498, arg3 + 0x18)
    void*** rax_6 = j_sub_140a82f30(0x88)
    void*** rdi_1 = rax_6
    
    if (rax_6 == 0)
        rdi_1 = nullptr
    else
        sub_14068e490(rax_6)
        *rdi_1 = &data_142d8add0
    
    int32_t var_488_1 = 1
    int32_t var_480_1 = 0x3f800000
    char var_47c_1 = 1
    int64_t var_478 = 0
    int32_t var_470_1 = 0
    sub_140692f90(&var_478, &var_418)
    rdi_1[5].d = var_488_1
    *(rdi_1 + 0x34) = var_47c_1
    rdi_1[6].d = var_480_1
    sub_140692f90(&rdi_1[7], &var_478)
    sub_140745b20(&var_478)
    *(rdi_1 + 0x48) = zmm0
    rdi_1[0xb].b = rax_5
    sub_140692f90(&rdi_1[0xc], &var_498)
    sub_140745b20(&var_498)
    sub_140693600(rdi_1, &var_4c0)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t rbx_2 = *(arg1 + 0x4e8)
    void var_3e8
    int64_t* rax_12 = sub_140e948d0(&var_3e8)
    int64_t rcx_12 = 0
    rax_12[0x34] = rbx_2
    int64_t* rbx_3 = *(arg1 + 0x18)
    
    if (rbx_3 != 0)
        int32_t rax_13 = rbx_3[1].d
        
        if (rax_13 != 0)
            rbx_3[1].d = rax_13 + 1
            rax_13.b = 1
        
        if (rax_13.b == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            rcx_12 = *(arg1 + 0x10)
    
    int64_t var_468
    
    if (rcx_12 == 0)
        var_468 = 0
    else
        var_468 = rcx_12 - 8
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp5_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* var_458 = &var_468
    void*** rax_17 = sub_140e91e10()
    void* var_438 = &rax_17[2]
    sub_140918950(&var_438, &rax_17[2])
    int64_t var_4d8_1 = 0x400
    int64_t** var_428_1 = &var_458
    void* var_3f8
    void** rax_18 =
        sub_140e9d110(&var_438, &var_3f8, rax_12, sub_140e23ed0(&rax_17[2], "SExpanderArrow"))
    int64_t* rbx_5 = rax_18[1]
    var_4c0 = *rax_18
    int64_t* var_4b8_2 = rbx_5
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    void*** rax_19 = j_sub_140a82f30(0x88)
    void*** r14_2 = rax_19
    
    if (rax_19 == 0)
        r14_2 = nullptr
    else
        sub_14068e490(rax_19)
        *r14_2 = &data_142d8add0
    
    void* rax_20 = sub_140698b50(r14_2)
    *(rax_20 + 0x20) = 3
    sub_140693600(rax_20, &var_4c0)
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            int64_t rdx_9 = *rbx_5
            (*rdx_9)(rbx_5, rdx_9)
            int32_t temp7_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    void*** rax_22 = j_sub_140a82f30(0x2e8)
    void*** r14_3 = rax_22
    
    if (rax_22 == 0)
        r14_3 = nullptr
    else
        rax_22[1].d = 1
        *(rax_22 + 0xc) = 1
        *r14_3 = &data_142d8c590
        
        if (r14_3 != -0x10)
            sub_14068e500(&r14_3[2])
    
    void* var_450 = &r14_3[2]
    sub_14065fa30(&var_450, &r14_3[2])
    int64_t var_4d8_2 = 0x2d8
    void var_4c8
    void* var_440_1 = &var_4c8
    sub_140e23ed0(&r14_3[2], "SHorizontalBox")
    void var_1f8
    int64_t* rax_23
    int128_t zmm1_2
    rax_23, zmm1_2 = sub_14068d420(&var_1f8)
    void* var_408
    void** rax_26 = sub_140696920(&var_450, &var_408, 
        sub_1406938c0(sub_1406938c0(rax_23, rax_20), rdi_1), zmm1_2)
    int64_t* rbx_7 = rax_26[1]
    var_4c0 = *rax_26
    int64_t* var_4b8_3 = rbx_7
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
    
    sub_140de1b90(arg1 + 0x2c0, &var_4c0)
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp10_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    int64_t* var_400
    
    if (var_400 != 0)
        var_400[1].d -= 1
        
        if (var_400[1].d == 1)
            (**var_400)(var_400)
            int32_t temp12_1 = *(var_400 + 0xc)
            *(var_400 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_400 + 8))(var_400, 1)
    
    if (r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t temp13_1 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*r14_3)[1](r14_3, 1)
    
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    sub_140660250(&var_1f8)
    int64_t* var_3f0
    
    if (var_3f0 != 0)
        var_3f0[1].d -= 1
        
        if (var_3f0[1].d == 1)
            (**var_3f0)(var_3f0)
            int32_t temp16_1 = *(var_3f0 + 0xc)
            *(var_3f0 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*var_3f0 + 8))(var_3f0, 1)
    
    if (rax_17 != 0)
        rax_17[1].d -= 1
        
        if (rax_17[1].d == 1)
            (**rax_17)(rax_17)
            int32_t temp18_1 = *(rax_17 + 0xc)
            *(rax_17 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*rax_17)[1](rax_17, 1)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp19_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    void var_208
    sub_140745b20(&var_208)
    void var_220
    sub_140745b20(&var_220)
    void var_238
    sub_140745b20(&var_238)
    sub_140ddea30(&var_3e8)
    result = sub_140745b20(&var_418)
    *(arg1 + 0x558) = rdi_1
__security_check_cookie(rax_1 ^ &var_4f8)
return result
