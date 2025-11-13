// 函数: sub_141bb32c0
// 地址: 0x141bb32c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_608
int64_t rax_1 = __security_cookie ^ &var_608
int64_t* rax_2 = *arg3
int32_t var_558 = 0
uint64_t rsi = 0
uint64_t var_5c0
uint64_t var_550
uint64_t* rcx
int32_t rbx_1

if (rax_2 == 0)
    int64_t var_548_1 = 0
    rcx = &var_550
    rbx_1 = 2
else
    int32_t rbx = rax_2[1].d
    int64_t r14_1 = *rax_2
    var_5c0 = 0
    int32_t var_5b8_1 = rbx
    
    if (rbx != 0)
        sub_1405a4c70(&var_5c0, rbx, 0)
        rsi = var_5c0
        memcpy(rsi, r14_1, rbx * 2)
        rcx = &var_5c0
        rbx_1 = 1
    else
        int32_t var_5b4_1 = 0
        rcx = &var_5c0
        rbx_1 = 1

*rcx = 0
int32_t rax_3 = rcx[1].d
int32_t var_5c4 = *(rcx + 0xc)
rcx[1] = 0
uint64_t var_5d0 = rsi

if ((rbx_1.b & 2) != 0)
    uint64_t rcx_3 = var_550
    rbx_1 &= 0xfffffffd
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

if ((rbx_1.b & 1) != 0)
    uint64_t rcx_4 = var_5c0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int32_t rcx_5
rcx_5.b = sub_140b5b8a0(*(arg1 + 0xd7c), 0) == 0

if ((*(arg1 + 0xd80) != 0 | rcx_5.b) == 0)
label_141bb3518:
    int128_t zmm0 = *(arg1 + 0xd08)
    int64_t var_518 = *(arg1 + 0xcf8)
    int64_t var_510_1 = *(arg1 + 0xd00)
    int64_t var_4e8_1 = *(arg1 + 0xd28)
    int64_t* rax_13 = *(arg1 + 0xd30)
    int128_t var_508_1 = zmm0
    int128_t var_4f8_1 = *(arg1 + 0xd18)
    
    if (rax_13 != 0)
        rax_13[1].d += 1
    
    int64_t var_4d8_1 = *(arg1 + 0xd38)
    int32_t var_4d0_1 = *(arg1 + 0xd40)
    char var_4cc_1 = *(arg1 + 0xd44)
    char var_4c8_1 = 1
    int64_t var_4c0 = 0
    int32_t var_4b8_1 = 0
    void var_4a0
    int64_t* rax_17 = sub_140aae420(&var_4a0, &var_5d0)
    int64_t var_588 = *rax_17
    int64_t* rcx_22 = rax_17[1]
    
    if (rcx_22 != 0)
        rcx_22[1].d += 1
    
    int32_t var_578_1 = rax_17[2].d
    char var_570_1 = 1
    int64_t var_568 = 0
    int32_t var_560_1 = 0
    void var_488
    int64_t* rax_19 = sub_14068d9d0(&var_488)
    sub_14065da90(&rax_19[0x34], &var_588)
    rax_19[0x37].b = var_570_1
    sub_140692f90(&rax_19[0x38], &var_568)
    sub_140d962e0(&rax_19[0x3b], &var_518)
    rax_19[0x45].b = var_4c8_1
    sub_140692f90(&rax_19[0x46], &var_4c0)
    void*** rax_20 = j_sub_140a82f30(0x7a8)
    void*** rdi_1 = rax_20
    
    if (rax_20 == 0)
        rdi_1 = nullptr
    else
        rax_20[1].d = 1
        *(rax_20 + 0xc) = 1
        *rdi_1 = &data_142d8b060
        
        if (rdi_1 != -0x10)
            sub_140f66da0(&rdi_1[2])
    
    void* var_540 = &rdi_1[2]
    sub_14065fa30(&var_540, &rdi_1[2])
    int64_t var_5e8_1 = 0x798
    void var_5d7
    void* var_530_1 = &var_5d7
    void* var_4b0
    void** rax_21 =
        sub_140697520(&var_540, &var_4b0, rax_19, sub_140e23ed0(&rdi_1[2], "STextBlock"))
    *arg2 = *rax_21
    void* rcx_35 = rax_21[1]
    arg2[1] = rcx_35
    
    if (rcx_35 != 0)
        *(rcx_35 + 8) += 1
    
    int64_t* var_4a8
    
    if (var_4a8 != 0)
        var_4a8[1].d -= 1
        
        if (var_4a8[1].d == 1)
            (**var_4a8)(var_4a8)
            int32_t temp3_1 = *(var_4a8 + 0xc)
            *(var_4a8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_4a8 + 8))(var_4a8, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rdi_1)[1](rdi_1, 1)
    
    sub_1406913d0(&var_488)
    sub_140745b20(&var_568)
    
    if (rcx_22 != 0)
        rcx_22[1].d -= 1
        
        if (rcx_22[1].d == 1)
            (**rcx_22)(rcx_22)
            int32_t rax_28 = *(rcx_22 + 0xc)
            *(rcx_22 + 0xc) -= 1
            
            if (rax_28 == 1)
                (*(*rcx_22 + 8))(rcx_22, 1)
    
    int64_t* var_498
    
    if (var_498 != 0)
        var_498[1].d -= 1
        
        if (var_498[1].d == 1)
            (**var_498)(var_498)
            int32_t rdi_2 = *(var_498 + 0xc)
            *(var_498 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_498 + 8))(var_498, zx.q(rdi_2))
    
    sub_140745b20(&var_4c0)
    
    if (rax_13 != 0)
        rax_13[1].d -= 1
        
        if (rax_13[1].d == 1)
            (**rax_13)(rax_13)
            int32_t temp6_1 = *(rax_13 + 0xc)
            *(rax_13 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rax_13 + 8))(rax_13, 1)
    
    uint64_t rcx_50 = var_5d0
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)
    
    int64_t* rbx_11 = arg3[1]
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t temp8_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_11 + 8))(rbx_11, 1)
else
    void* rax_6 = sub_140d3c6e0(arg1 + 0xd74)
    
    if (rax_6 == 0)
        goto label_141bb3518
    
    if (sub_140d1fd20(rax_6, *(arg1 + 0xd7c)) == 0)
        goto label_141bb3518
    
    uint64_t rsi_1 = var_5d0
    uint64_t var_598 = 0
    uint64_t rsi_2
    
    if (rax_3 != 0)
        sub_1405a4c70(&var_598, rax_3, 0)
        rsi_2 = var_598
        memcpy(rsi_2, rsi_1, rax_3 * 2)
    else
        rsi_2 = 0
    
    uint64_t var_5b0 = 0
    int32_t var_5a4_1 = 0
    int64_t* var_5a0_1 = nullptr
    int32_t var_5a8_1 = rax_3
    
    if (rax_3 != 0)
        sub_1405a4c70(&var_5b0, rax_3, 0)
        memcpy(var_5b0, rsi_2, rax_3 * 2)
    
    int64_t* rax_8 = sub_140d3c6e0(arg1 + 0xd74)
    int64_t rax_9 = sub_140d1fd30(rax_8, *(arg1 + 0xd7c))
    int64_t r9_1 = *rax_8
    (*(r9_1 + 0x210))(rax_8, rax_9, &var_5b0, r9_1)
    uint64_t rcx_15 = var_5b0
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    if (var_5a0_1 == 0)
        goto label_141bb3518
    
    char var_5d8 = 0
    char* var_520_1 = &var_5d8
    void** (* var_528)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
    sub_141befea0(var_5a0_1, arg2, &var_528)
    uint64_t rcx_18 = var_5d0
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    sub_140597060(arg3)

__security_check_cookie(rax_1 ^ &var_608)
return arg2
