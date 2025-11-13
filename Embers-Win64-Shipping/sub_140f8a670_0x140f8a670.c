// 函数: sub_140f8a670
// 地址: 0x140f8a670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_578
int64_t rax_1 = __security_cookie ^ &var_578
int64_t rax_2 = *arg2

if (rax_2 != data_143e244b0)
    *(arg1 + 0x38) = rax_2
    void* rbx_1 = arg2[1]
    int64_t* rcx = *(arg1 + 0x40)
    
    if (rbx_1 != rcx)
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            rcx = *(arg1 + 0x40)
        
        if (rcx != 0)
            int32_t temp0_1 = *(rcx + 0xc)
            *(rcx + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rcx + 8))(rcx, 1)
        
        *(arg1 + 0x40) = rbx_1

int64_t* rsi = *(arg1 + 0x40)

if (rsi != 0)
    int32_t rax_4 = rsi[1].d
    
    if (rax_4 != 0)
        rsi[1].d = rax_4 + 1
        rax_4.b = 1
    
    if (rax_4.b == 0)
        rsi = nullptr

void* rax_5

if (rsi != 0)
    rax_5 = *(arg1 + 0x38)

uint64_t result
void var_548
void* var_540
int32_t var_528
void*** var_520
void* var_510
int64_t* var_508
void var_488

if (rsi == 0 || rax_5 == 0)
    char var_4f0_1 = 0
    int128_t var_500 = data_14399f5e0
    char var_4d8_1 = 1
    int128_t var_4e8 = zx.o(0)
    int64_t var_4d0 = 0
    int32_t var_4c8_1 = 0
    int64_t* rax_21 = sub_14068d9d0(&var_488)
    sub_14065da90(&rax_21[0x34], arg1 + 8)
    rax_21[0x37].b = *(arg1 + 0x20)
    sub_140692f90(&rax_21[0x38], arg1 + 0x28)
    sub_140d962e0(&rax_21[0x3b], arg1 + 0x58)
    rax_21[0x45].b = *(arg1 + 0xa8)
    sub_140692f90(&rax_21[0x46], arg1 + 0xb0)
    sub_140693390(&rax_21[0x4c], &var_500)
    rax_21[0x51].b = var_4d8_1
    sub_140692f90(&rax_21[0x52], &var_4d0)
    uint64_t rax_24 = sub_140a84c80(0, 0x20, 0)
    void*** rbx_7 = rax_24
    
    if (rax_24 != 0)
        *rbx_7 = &data_142ee7728
        rbx_7[1] = sub_140f76fb0
        rbx_7[3] = sub_140a387b0()
    
    var_520 = nullptr
    int32_t zmm0_2 = (zx.o(0)).d
    var_528 = 0
    rax_24.b = 1
    char var_524_1 = 1
    int32_t var_518_1 = 0
    
    if (rbx_7 != 0)
        (*rbx_7)[8](rbx_7, &var_520)
        rax_24 = zx.q(var_524_1)
        zmm0_2 = var_528
    
    rax_21[0x6c].d = zmm0_2
    *(rax_21 + 0x364) = rax_24.b
    sub_140692f90(&rax_21[0x6d], &var_520)
    sub_140745b20(&var_520)
    
    if (rbx_7 != 0)
        (*rbx_7)[7](rbx_7, 0)
        int64_t rax_27 = sub_140a84c80(rbx_7, 0, 0)
        
        if (rax_27 != 0)
            sub_140a74f90(rax_27)
    
    void*** rax_28 = j_sub_140a82f30(0x7a8)
    void*** rdi_2 = rax_28
    
    if (rax_28 == 0)
        rdi_2 = nullptr
    else
        rax_28[1].d = 1
        *(rax_28 + 0xc) = 1
        *rdi_2 = &data_142d8b060
        
        if (rdi_2 != -0x10)
            sub_140f66da0(&rdi_2[2])
    
    var_540 = &rdi_2[2]
    sub_14065fa30(&var_540, &rdi_2[2])
    int64_t var_558_1 = 0x798
    void* var_530_1 = &var_548
    void** rax_29 =
        sub_140697520(&var_540, &var_510, rax_21, sub_140e23ed0(&rdi_2[2], "STextBlock"))
    int64_t* rbx_9 = rax_29[1]
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
    
    if (arg1 + 0x48 == &var_528)
    label_140f8abd7:
        
        if (rbx_9 != 0)
            rbx_9[1].d -= 1
            
            if (rbx_9[1].d == 1)
                (**rbx_9)(rbx_9)
                int32_t temp5_1 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_9 + 8))(rbx_9, 1)
    else
        *(arg1 + 0x48) = *rax_29
        int64_t* rdi_3 = *(arg1 + 0x50)
        
        if (rbx_9 == rdi_3)
            goto label_140f8abd7
        
        *(arg1 + 0x50) = rbx_9
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp10_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
    
    if (var_508 != 0)
        var_508[1].d -= 1
        
        if (var_508[1].d == 1)
            (**var_508)(var_508)
            int32_t temp9_1 = *(var_508 + 0xc)
            *(var_508 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_508 + 8))(var_508, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp14_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*rdi_2)[1](rdi_2, 1)
    
    sub_1406913d0(&var_488)
    sub_140745b20(&var_4d0)
    int64_t* rbx_12 = var_4e8:8.q
    
    if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12)
            int32_t temp17_1 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*rbx_12 + 8))(rbx_12, 1)
    
    int64_t* rbx_13 = data_143e243c8
    __builtin_memcpy(&var_500, 
        "\x00\x00\x30\x41\x00\x00\x30\x41\x00\x00\x30\x41\x00\x00\x30\x41\x01", 0x11)
    var_4e8.q = 0
    var_4e8:8.d = 0
    int64_t rax_40 =
        (*(*rbx_13 + 0x48))(rbx_13, *sub_140b58170(&var_540, "ToolTip.BrightBackground", 1), 0)
    var_510 = *(arg1 + 0x48)
    void* rcx_55 = *(arg1 + 0x50)
    int64_t var_4a8_1 = rax_40
    char var_4a0_1 = 1
    int64_t var_498 = 0
    int32_t var_490_1 = 0
    void* var_508_1 = rcx_55
    
    if (rcx_55 != 0)
        *(rcx_55 + 8) += 1
    
    int64_t* rax_41
    int128_t zmm6_1
    rax_41, zmm6_1 = sub_14068c640(&var_488)
    rax_41[0x44] = rax_40
    rax_41[0x45].b = 1
    sub_140692f90(&rax_41[0x46], &var_498)
    rax_41[0x39].b = 1
    *(rax_41 + 0x1b8) = zmm6_1
    sub_140692f90(&rax_41[0x3a], &var_4e8)
    void*** rax_42 = j_sub_140a82f30(0x4c8)
    void*** rdi_5 = rax_42
    
    if (rax_42 == 0)
        rdi_5 = nullptr
    else
        rax_42[1].d = 1
        *(rax_42 + 0xc) = 1
        *rdi_5 = &data_142d8c5a0
        
        if (rdi_5 != -0x10)
            sub_140f20640(&rdi_5[2])
    
    void* var_4c0 = &rdi_5[2]
    sub_14065fa30(&var_4c0, &rdi_5[2])
    int64_t var_558_2 = 0x4b8
    void* var_4b0_1 = &var_548
    void* rax_43
    int128_t zmm1_5
    rax_43, zmm1_5 = sub_1406936e0(rax_41, &var_510, sub_140e23ed0(&rdi_5[2], "SBorder"))
    void** rax_44 = sub_140695920(&var_4c0, &var_528, rax_43, zmm1_5)
    int64_t* rbx_16 = rax_44[1]
    var_510 = *rax_44
    int64_t* var_508_2 = rbx_16
    
    if (rbx_16 != 0)
        rbx_16[1].d += 1
    
    sub_140de1b90(arg1 - 0xd8, &var_510)
    
    if (rbx_16 != 0)
        rbx_16[1].d -= 1
        
        if (rbx_16[1].d == 1)
            (**rbx_16)(rbx_16)
            int32_t temp23_1 = *(rbx_16 + 0xc)
            *(rbx_16 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*rbx_16 + 8))(rbx_16, 1)
    
    void*** rbx_17 = var_520
    
    if (rbx_17 != 0)
        rbx_17[1].d -= 1
        
        if (rbx_17[1].d == 1)
            (**rbx_17)(rbx_17)
            int32_t temp25_1 = *(rbx_17 + 0xc)
            *(rbx_17 + 0xc) -= 1
            
            if (temp25_1 == 1)
                (*rbx_17)[1](rbx_17, 1)
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t temp26_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (temp26_1 == 1)
                (*rdi_5)[1](rdi_5, 1)
    
    sub_14068fed0(&var_488)
    sub_140745b20(&var_498)
    result = sub_140745b20(&var_4e8)
else
    var_540 = rax_5
    
    if (rsi != 0)
        rsi[1].d += 1
    
    if (&var_540 != arg1 + 0x48)
        var_540.o = *(arg1 + 0x48)
        *(arg1 + 0x48) = var_540.o
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp2_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi + 8))(rsi, 1)
    
    var_540 = *(arg1 + 0x48)
    void* rax_9 = *(arg1 + 0x50)
    void* var_538_1 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    int64_t* rax_10 = sub_14068c640(&var_488)
    rax_10[0x44] = *(arg1 + 0x128)
    rax_10[0x45].b = *(arg1 + 0x130)
    sub_140692f90(&rax_10[0x46], arg1 + 0x138)
    *(rax_10 + 0x1b8) = *(arg1 + 0x100)
    rax_10[0x39].b = *(arg1 + 0x110)
    sub_140692f90(&rax_10[0x3a], arg1 + 0x118)
    void*** rax_12 = j_sub_140a82f30(0x4c8)
    void*** rdi_1 = rax_12
    
    if (rax_12 == 0)
        rdi_1 = nullptr
    else
        rax_12[1].d = 1
        *(rax_12 + 0xc) = 1
        *rdi_1 = &data_142d8c5a0
        
        if (rdi_1 != -0x10)
            sub_140f20640(&rdi_1[2])
    
    var_520 = rdi_1
    var_528.q = &rdi_1[2]
    sub_14065fa30(&var_528, &rdi_1[2])
    int64_t var_558 = 0x4b8
    int32_t var_518
    var_518.q = &var_548
    void* rax_13
    int128_t zmm1_2
    rax_13, zmm1_2 = sub_1406936e0(rax_10, &var_540, sub_140e23ed0(&rdi_1[2], "SBorder"))
    void** rax_14 = sub_140695920(&var_528, &var_510, rax_13, zmm1_2)
    int64_t* rbx_4 = rax_14[1]
    var_540 = *rax_14
    int64_t* var_538_2 = rbx_4
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    sub_140de1b90(arg1 - 0xd8, &var_540)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp12_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    if (var_508 != 0)
        var_508[1].d -= 1
        
        if (var_508[1].d == 1)
            (**var_508)(var_508)
            int32_t temp16_1 = *(var_508 + 0xc)
            *(var_508 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*var_508 + 8))(var_508, 1)
    
    void*** rbx_6 = var_520
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp18_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*rbx_6)[1](rbx_6, 1)
    
    result = sub_14068fed0(&var_488)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp20_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp20_1 == 1)
            result = (*(*rsi + 8))(rsi, 1)

__security_check_cookie(rax_1 ^ &var_578)
return result
