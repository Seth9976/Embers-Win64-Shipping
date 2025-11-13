// 函数: sub_141bb2f00
// 地址: 0x141bb2f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_588
int64_t rax_1 = __security_cookie ^ &var_588
int32_t var_554 = 0
int32_t rcx
rcx.b = sub_140b5b8a0(*(arg1 + 0x120), 0) == 0

if ((*(arg1 + 0x124) != 0 | rcx.b) == 0)
label_141bb2fef:
    int64_t var_4e0
    int64_t* rax_8
    int32_t rsi_1
    
    if (arg3 == 0)
        void var_4c0
        rax_8 = _vfprintf_p_l(&var_4c0, u"null", &data_14306d0f0)
        rsi_1 = 4
    else
        var_554.q = *(arg3 + 0x18)
        sub_140b63b70(&var_554, &var_4e0)
        void var_4a8
        rax_8 = sub_140aae2f0(&var_4a8, &var_4e0)
        rsi_1 = 3
    
    int64_t var_548 = *rax_8
    int64_t* rax_10 = rax_8[1]
    
    if (rax_10 != 0)
        rax_10[1].d += 1
    
    int32_t var_538_1 = rax_8[2].d
    char var_530_1 = 1
    int64_t var_528 = 0
    int32_t var_520_1 = 0
    void var_490
    int64_t* rax_12 = sub_14068d9d0(&var_490)
    sub_14065da90(&rax_12[0x34], &var_548)
    rax_12[0x37].b = var_530_1
    sub_140692f90(&rax_12[0x38], &var_528)
    void*** rax_13 = j_sub_140a82f30(0x7a8)
    void*** rdi_1 = rax_13
    
    if (rax_13 == 0)
        rdi_1 = nullptr
    else
        rax_13[1].d = 1
        *(rax_13 + 0xc) = 1
        *rdi_1 = &data_142d8b060
        
        if (rdi_1 != -0x10)
            sub_140f66da0(&rdi_1[2])
    
    void* var_508 = &rdi_1[2]
    sub_14065fa30(&var_508, &rdi_1[2])
    int64_t var_568_1 = 0x798
    void var_557
    void* var_4f8_1 = &var_557
    void* var_4d0
    void** rax_14 =
        sub_140697520(&var_508, &var_4d0, rax_12, sub_140e23ed0(&rdi_1[2], "STextBlock"))
    *arg2 = *rax_14
    void* rcx_20 = rax_14[1]
    arg2[1] = rcx_20
    
    if (rcx_20 != 0)
        *(rcx_20 + 8) += 1
    
    int64_t* var_4c8
    
    if (var_4c8 != 0)
        var_4c8[1].d -= 1
        
        if (var_4c8[1].d == 1)
            (**var_4c8)(var_4c8)
            int32_t temp3_1 = *(var_4c8 + 0xc)
            *(var_4c8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_4c8 + 8))(var_4c8, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rdi_1)[1](rdi_1, 1)
    
    sub_1406913d0(&var_490)
    sub_140745b20(&var_528)
    
    if (rax_10 != 0)
        rax_10[1].d -= 1
        
        if (rax_10[1].d == 1)
            (**rax_10)(rax_10)
            int32_t rax_21 = *(rax_10 + 0xc)
            *(rax_10 + 0xc) -= 1
            
            if (rax_21 == 1)
                (*(*rax_10 + 8))(rax_10, 1)
    
    if ((rsi_1.b & 4) != 0)
        rsi_1 &= 0xfffffffb
        int64_t* var_4b8
        
        if (var_4b8 != 0)
            var_4b8[1].d -= 1
            
            if (var_4b8[1].d == 1)
                (**var_4b8)(var_4b8)
                int32_t rax_25 = *(var_4b8 + 0xc)
                *(var_4b8 + 0xc) -= 1
                
                if (rax_25 == 1)
                    (*(*var_4b8 + 8))(var_4b8, 1)
    
    if ((rsi_1.b & 2) != 0)
        rsi_1 &= 0xfffffffd
        int64_t* var_4a0
        
        if (var_4a0 != 0)
            var_4a0[1].d -= 1
            
            if (var_4a0[1].d == 1)
                (**var_4a0)(var_4a0)
                int32_t rdi_2 = *(var_4a0 + 0xc)
                *(var_4a0 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*var_4a0 + 8))(var_4a0, zx.q(rdi_2))
    
    if ((rsi_1.b & 1) != 0)
        int64_t rcx_34 = var_4e0
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
else
    void* rax_3 = sub_140d3c6e0(arg1 + 0x118)
    
    if (rax_3 == 0)
        goto label_141bb2fef
    
    if (sub_140d1fd20(rax_3, *(arg1 + 0x120)) == 0)
        goto label_141bb2fef
    
    int64_t* var_510_1 = nullptr
    void* var_518 = arg3
    int64_t* rax_5 = sub_140d3c6e0(arg1 + 0x118)
    int64_t rax_6 = sub_140d1fd30(rax_5, *(arg1 + 0x120))
    int64_t r9_1 = *rax_5
    (*(r9_1 + 0x210))(rax_5, rax_6, &var_518, r9_1)
    
    if (var_510_1 == 0)
        goto label_141bb2fef
    
    char var_558 = 0
    char* var_4e8_1 = &var_558
    void** (* var_4f0)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
    sub_141befea0(var_510_1, arg2, &var_4f0)

__security_check_cookie(rax_1 ^ &var_588)
return arg2
