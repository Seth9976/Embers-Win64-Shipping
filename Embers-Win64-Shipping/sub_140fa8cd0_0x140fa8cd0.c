// 函数: sub_140fa8cd0
// 地址: 0x140fa8cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9f8
int64_t rax_1 = __security_cookie ^ &var_9f8
sub_140f9be50(arg1 + 0x310, arg2 + 0x1a0)
sub_1407473e0(arg1 + 0x338, arg2 + 0x1c8)
sub_1407473e0(arg1 + 0x360, arg2 + 0x1d8)
sub_1407473e0(arg1 + 0x370, arg2 + 0x1e8)
*(arg1 + 0x380) = *(arg2 + 0x210)
*(arg1 + 0x381) = *(arg2 + 0x211)
sub_140692f90(arg1 + 0x388, arg2 + 0x218)
*(arg1 + 0x398) = *(arg2 + 0x228)
*(arg1 + 0x399) = *(arg2 + 0x229)
sub_140692f90(arg1 + 0x3a0, arg2 + 0x230)
int64_t* (* var_9b8)(void* arg1) = sub_140fc1c90
int32_t var_9b0 = 0
int128_t var_878 = var_9b8.o
int64_t* var_9a8
sub_1407473e0(arg1 + 0x348, sub_140f94540(&var_9a8, arg1, &var_878))
int32_t var_9a0
int64_t* rax_8

if (var_9a0 == 0)
    rax_8 = var_9a8
label_140fa8e2c:
    
    if (rax_8 != 0)
        sub_140a74f90(rax_8)
else
    int64_t* rcx_8 = var_9a8
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x38))(rcx_8, 0)
        rax_8 = var_9a8
        
        if (rax_8 != 0)
            rax_8 = sub_140a84c80(rax_8, 0, 0)
            var_9a8 = rax_8
        
        int32_t var_9a0_1 = 0
        goto label_140fa8e2c
sub_140f9f800(arg1)
sub_140faa630(arg1)

if (sub_140ab3dc0(arg2 + 0x1f8) == 0)
    int64_t var_980 = *(arg2 + 0x1f8)
    int64_t* rax_11 = *(arg2 + 0x200)
    
    if (rax_11 != 0)
        rax_11[1].d += 1
    
    int32_t var_970_1 = *(arg2 + 0x208)
    char var_968_1 = 1
    int128_t var_928_1 = data_14399f5e0
    int64_t var_960 = 0
    int32_t var_958_1 = 0
    int32_t var_938 = 0
    int16_t var_934_1 = 0
    int64_t var_930_1 = 0
    void var_888
    void var_838
    int64_t* rax_14 = sub_140e13c40(&var_838, *sub_140b58170(&var_888, "Regular", 1), 8, &var_938)
    int128_t zmm0_2 = *(rax_14 + 0x10)
    int64_t var_8f0 = *rax_14
    int64_t var_8e8_1 = rax_14[1]
    int64_t* rax_15 = rax_14[7]
    int64_t var_8c0_1 = rax_14[6]
    int128_t var_8e0_1 = zmm0_2
    int128_t var_8d0_1 = *(rax_14 + 0x20)
    
    if (rax_15 != 0)
        rax_15[1].d += 1
    
    int64_t var_8b0_1 = rax_14[8]
    int32_t var_8a8_1 = rax_14[9].d
    char var_8a4_1 = *(rax_14 + 0x4c)
    char var_8a0_1 = 1
    int64_t var_898 = 0
    int32_t var_890_1 = 0
    void var_490
    int64_t* rax_19 = sub_14068d9d0(&var_490)
    sub_140692eb0(&rax_19[0x3b], &var_8f0)
    sub_14065da90(&rax_19[0x34], &var_980)
    rax_19[0x37].b = var_968_1
    sub_140692f90(&rax_19[0x38], &var_960)
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
    
    void* var_950 = &rdi_1[2]
    sub_14065fa30(&var_950, &rdi_1[2])
    int64_t var_9d8_1 = 0x798
    void var_9c8
    void* var_940_1 = &var_9c8
    void* var_858
    int64_t* (** rax_21)(void* arg1) =
        sub_140697520(&var_950, &var_858, rax_19, sub_140e23ed0(&rdi_1[2], "STextBlock"))
    int64_t* rbx_2 = rax_21[1]
    int64_t* (* rdi_2)(void* arg1) = *rax_21
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int128_t var_918
    __builtin_memcpy(&var_918, 
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 0x11)
    int64_t var_900 = 0
    int32_t var_8f8_1 = 0
    void var_7d8
    int64_t* rax_22
    int128_t zmm6_1
    rax_22, zmm6_1 = sub_14068c640(&var_7d8)
    rax_22[0x39].b = 1
    *(rax_22 + 0x1b8) = zmm6_1
    sub_140692f90(&rax_22[0x3a], &var_900)
    var_9b8 = rdi_2
    int64_t* rdi_3 = rbx_2
    var_9b0.q = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (&var_9b8 != &rax_22[0x34])
        int128_t zmm1_3 = var_9b8.o
        int128_t var_7e8_1 = zmm1_3
        var_9b8.o = *(rax_22 + 0x1a0)
        rdi_3 = var_9b0.q
        *(rax_22 + 0x1a0) = zmm1_3
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp2_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    void*** rax_26 = j_sub_140a82f30(0x4c8)
    void*** rdi_4 = rax_26
    
    if (rax_26 == 0)
        rdi_4 = nullptr
    else
        rax_26[1].d = 1
        *(rax_26 + 0xc) = 1
        *rdi_4 = &data_142d8c5a0
        
        if (rdi_4 != -0x10)
            sub_140f20640(&rdi_4[2])
    
    void*** var_990_1 = rdi_4
    void* var_998 = &rdi_4[2]
    sub_14065fa30(&var_998, &rdi_4[2])
    void var_9c7
    void* var_988_1 = &var_9c7
    int64_t var_9d8_2 = 0x4b8
    void* var_868
    void** rax_27 = sub_140695920(&var_998, &var_868, rax_22, sub_140e23ed0(var_998, "SBorder"))
    int64_t* rdi_5 = rax_27[1]
    
    if (rdi_5 != 0)
        rdi_5[1].d += 1
    
    void var_848
    
    if (arg1 + 0x300 == &var_848)
    label_140fa91dd:
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp5_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
    else
        *(arg1 + 0x300) = *rax_27
        int64_t* rsi_3 = *(arg1 + 0x308)
        
        if (rdi_5 == rsi_3)
            goto label_140fa91dd
        
        *(arg1 + 0x308) = rdi_5
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t temp9_1 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
    
    sub_140669d70(&var_868)
    sub_140669d70(&var_998)
    sub_14068fed0(&var_7d8)
    sub_140745b20(&var_900)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp8_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* var_850
    
    if (var_850 != 0)
        var_850[1].d -= 1
        
        if (var_850[1].d == 1)
            (**var_850)(var_850)
            int32_t temp11_1 = *(var_850 + 0xc)
            *(var_850 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_850 + 8))(var_850, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp13_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*rdi_1)[1](rdi_1, 1)
    
    sub_1406913d0(&var_490)
    sub_140745b20(&var_898)
    
    if (rax_15 != 0)
        rax_15[1].d -= 1
        
        if (rax_15[1].d == 1)
            (**rax_15)(rax_15)
            int32_t temp15_1 = *(rax_15 + 0xc)
            *(rax_15 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*rax_15 + 8))(rax_15, 1)
    
    int64_t* var_800
    
    if (var_800 != 0)
        var_800[1].d -= 1
        
        if (var_800[1].d == 1)
            (**var_800)(var_800)
            int32_t temp16_1 = *(var_800 + 0xc)
            *(var_800 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*var_800 + 8))(var_800, 1)
    
    sub_140745b20(&var_960)
    
    if (rax_11 != 0)
        rax_11[1].d -= 1
        
        if (rax_11[1].d == 1)
            (**rax_11)(rax_11)
            int32_t rdi_6 = *(rax_11 + 0xc)
            *(rax_11 + 0xc) -= 1
            
            if (rdi_6 == 1)
                (*(*rax_11 + 8))(rax_11, zx.q(rdi_6))

int64_t* result = sub_140fc1c90(arg1)
__security_check_cookie(rax_1 ^ &var_9f8)
return result
