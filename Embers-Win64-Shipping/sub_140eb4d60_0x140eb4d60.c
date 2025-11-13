// 函数: sub_140eb4d60
// 地址: 0x140eb4d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
void* rdi = *arg3
void var_308
void var_328
void* var_320

if (rdi == 0)
    int64_t* rax_9 = sub_140e50320(&var_308)
    sub_14065da90(&rax_9[0x34], arg2)
    rax_9[0x37].b = arg2[3].b
    sub_140692f90(&rax_9[0x38], &arg2[4])
    int64_t* rax_10 = sub_140e49080()
    var_320 = &rax_10[2]
    sub_140918950(&var_320, &rax_10[2])
    int64_t var_338_1 = 0x4f0
    void* var_310_1 = &var_328
    sub_140e579a0(&var_320, arg1, rax_9, sub_140e23ed0(&rax_10[2], "SToolTip"))
    
    if (rax_10 != 0)
        rax_10[1].d -= 1
        
        if (rax_10[1].d == 1)
            (**rax_10)(rax_10)
            int32_t temp1_1 = *(rax_10 + 0xc)
            *(rax_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rax_10 + 8))(rax_10, 1)
else
    int64_t* rbx = arg3[1]
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t* rax_2 = sub_140e50320(&var_308)
    var_320 = rdi
    int64_t* rdi_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    if (&var_320 != &rax_2[0x3a])
        var_320.o = *(rax_2 + 0x1d0)
        rdi_1 = rbx
        *(rax_2 + 0x1d0) = var_320.o
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp6_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    void*** rax_8 = sub_140e49080()
    var_320 = &rax_8[2]
    sub_140918950(&var_320, &rax_8[2])
    int64_t var_338 = 0x4f0
    void* var_310 = &var_328
    sub_140e579a0(&var_320, arg1, rax_2, sub_140e23ed0(&rax_8[2], "SToolTip"))
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t temp7_1 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (temp7_1 == 1)
                void** r8_3 = *rax_8
                r8_3[1](rax_8, 1, r8_3)
sub_140e53770(&var_308)
__security_check_cookie(rax_1 ^ &var_358)
return arg1
