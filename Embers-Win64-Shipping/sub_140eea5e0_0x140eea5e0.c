// 函数: sub_140eea5e0
// 地址: 0x140eea5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_958
int64_t rax_1 = __security_cookie ^ &var_958
int64_t* rcx = *(arg1 + 0x528)
int64_t* r15 = arg2
int64_t* var_8c8 = arg2
int64_t* var_8e8
int32_t var_8e0

if (rcx != 0)
    var_8e8 = data_143e244b0
    void* rax_3 = data_143e244b8
    var_8e0 = rax_3.d
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    (*(*rcx + 0x240))(rcx, &var_8e8)

uint32_t result

if (*(arg1 + 0x4bc) == 0)
    result = zx.d(*(*(arg1 + 0x390) + 8))
else
    result = *(arg1 + 0x4b8)

void var_928
int64_t (* var_918)(int64_t* arg1)
int128_t* (* var_908)(void* arg1, int128_t* arg2)
void* var_8b8
int128_t* (* var_898)(void* arg1, int128_t* arg2, int128_t arg3 @ zmm1)
int128_t var_888
int128_t var_878
void* var_850
void* var_840
int64_t var_820
int32_t var_818
int128_t var_808
int64_t var_7d8
int128_t* (* var_7c8)(void* arg1, int128_t* arg2, int128_t arg3 @ zmm1)
int128_t var_7b8
int64_t var_7a0
void* var_778
int64_t* var_770
void var_3a0

if (result == 0)
    var_7b8 = zx.o(0)
    char var_7a8_1 = 1
    var_7a0 = 0
    int32_t var_798_1 = 0
    sub_140e15430()
    int64_t* var_830_1 = &data_143e24500
    var_908 = sub_140f0b2c0
    void* rax_6 = r15[1]
    var_898 = sub_140f0b260
    var_918 = sub_140f0b090
    var_8e8 = *r15
    char var_828_1 = 1
    var_820 = 0
    var_818 = 0
    int32_t var_900_1 = 0
    int32_t var_890_1 = 0
    int32_t var_910_1 = 0
    void* var_8e0_1 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    int64_t* rax_7
    int128_t zmm6_1
    rax_7, zmm6_1 = sub_14068c640(&var_3a0)
    rax_7[0x44] = &data_143e24500
    rax_7[0x45].b = 1
    sub_140692f90(&rax_7[0x46], &var_820)
    rax_7[0x39].b = 1
    *(rax_7 + 0x1b8) = zmm6_1
    sub_140692f90(&rax_7[0x3a], &var_7a0)
    void*** rax_8 = j_sub_140a82f30(0x4c8)
    void*** rbx_1 = rax_8
    
    if (rax_8 == 0)
        rbx_1 = nullptr
    else
        rax_8[1].d = 1
        *(rax_8 + 0xc) = 1
        *rbx_1 = &data_142d8c5a0
        
        if (rbx_1 != -0x10)
            sub_140f20640(&rbx_1[2])
    
    char var_848
    var_848.q = rbx_1
    var_850 = &rbx_1[2]
    sub_14065fa30(&var_850, &rbx_1[2])
    int64_t var_938_1 = 0x4b8
    void var_8f8
    var_840 = &var_8f8
    int128_t zmm1_1 = sub_140e23ed0(&rbx_1[2], "SBorder")
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (arg1 + 0x528 == &var_8b8)
    label_140eea83c:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    else
        *(arg1 + 0x528) = &rbx_1[2]
        void*** rsi_2 = *(arg1 + 0x530)
        
        if (rbx_1 == rsi_2)
            goto label_140eea83c
        
        *(arg1 + 0x530) = rbx_1
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp7_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*rsi_2)[1](rsi_2, 1)
    
    void* rax_12
    int128_t zmm1_2
    rax_12, zmm1_2 = sub_1406936e0(rax_7, &var_8e8, zmm1_1)
    void** rax_13 = sub_140695920(&var_850, &var_888, rax_12, zmm1_2)
    int64_t* rbx_2 = rax_13[1]
    var_8e8 = *rax_13
    char var_8e0_2 = rbx_2.b
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    char var_868_1 = 1
    var_878 = zx.o(0)
    var_8b8.o = var_908.o
    void var_860
    sub_140e8eef0(&var_860, arg1, &var_8b8)
    void*** rax_14 = j_sub_140a82f30(0x88)
    void*** r15_2 = rax_14
    
    if (rax_14 == 0)
        r15_2 = nullptr
    else
        sub_14068e490(rax_14)
        *r15_2 = &data_142d8add0
    
    r15_2[0xb].b = var_868_1
    *(r15_2 + 0x48) = var_878
    sub_140692f90(&r15_2[0xc], &var_860)
    sub_140745b20(&var_860)
    *(r15_2 + 0x21) = 2
    sub_140693600(r15_2, &var_8e8)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp11_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    void var_768
    int64_t* rax_18 = sub_140e4fb70(&var_768)
    var_8b8.o = var_918.o
    int64_t* rax_19 = sub_140e45b90(&var_918, arg1, &var_8b8)
    var_8e8 = nullptr
    var_8e0_2 = 1
    int64_t var_8d8 = 0
    int32_t var_8d0_1 = 0
    sub_140692f90(&var_8d8, rax_19)
    rax_18[0x34] = var_8e8
    rax_18[0x35].b = var_8e0_2
    sub_1407473e0(&rax_18[0x36], &var_8d8)
    sub_140745b20(&var_8d8)
    int64_t (* rax_23)(int64_t* arg1)
    
    if (var_910_1 == 0)
        rax_23 = var_918
    label_140eea9fd:
        
        if (rax_23 != 0)
            sub_140a74f90(rax_23)
    else
        int64_t (* rcx_26)(int64_t* arg1) = var_918
        
        if (rcx_26 != 0)
            (*(*rcx_26 + 0x38))(rcx_26, 0)
            rax_23 = var_918
            
            if (rax_23 != 0)
                rax_23 = sub_140a84c80(rax_23, 0, 0)
                var_918 = rax_23
            
            int32_t var_910_2 = 0
            goto label_140eea9fd
    var_8b8.o = var_898.o
    int64_t* rax_24 = sub_140e45dd0(&var_908, arg1, &var_8b8)
    char var_7e0_1 = 1
    __builtin_memcpy(&var_808, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    var_7d8 = 0
    int32_t var_7d0_1 = 0
    sub_140692f90(&var_7d8, rax_24)
    sub_140693390(&rax_18[0x38], &var_808)
    rax_18[0x3d].b = var_7e0_1
    sub_1407473e0(&rax_18[0x3e], &var_7d8)
    sub_140745b20(&var_7d8)
    int64_t* rbx_3 = zx.o(0):8.q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp13_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int128_t* (* rax_29)(void* arg1, int128_t* arg2)
    
    if (var_900_1 == 0)
        rax_29 = var_908
    label_140eeaafe:
        
        if (rax_29 != 0)
            sub_140a74f90(rax_29)
    else
        int128_t* (* rcx_36)(void* arg1, int128_t* arg2) = var_908
        
        if (rcx_36 != 0)
            (*(*rcx_36 + 0x38))(rcx_36, 0)
            rax_29 = var_908
            
            if (rax_29 != 0)
                rax_29 = sub_140a84c80(rax_29, 0, 0)
                var_908 = rax_29
            
            int32_t var_900_2 = 0
            goto label_140eeaafe
    void*** rax_30 = sub_140e48c50()
    var_8b8 = &rax_30[2]
    sub_140918950(&var_8b8, &rax_30[2])
    int64_t var_938_2 = 0x3a8
    void var_8f7
    void* var_8a8_1 = &var_8f7
    void** rax_31 = sub_140e56930(&var_8b8, &var_778, rax_18, sub_140e23ed0(&rax_30[2], "SImage"))
    int64_t* rbx_5 = rax_31[1]
    var_898 = *rax_31
    var_890_1.q = rbx_5
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    void*** rax_32 = j_sub_140a82f30(0x88)
    void*** rsi_4 = rax_32
    
    if (rax_32 == 0)
        rsi_4 = nullptr
    else
        sub_14068e490(rax_32)
        *rsi_4 = &data_142d8add0
    
    void* rax_33 = sub_140698b50(rsi_4)
    *(rax_33 + 0x20) = 0x202
    sub_140693600(rax_33, &var_898)
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            int64_t rdx_20 = *rbx_5
            (*rdx_20)(rbx_5, rdx_20)
            int32_t temp21_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    void*** rax_35 = j_sub_140a82f30(0x2e8)
    void*** rsi_5 = rax_35
    
    if (rax_35 == 0)
        rsi_5 = nullptr
    else
        rax_35[1].d = 1
        *(rax_35 + 0xc) = 1
        *rsi_5 = &data_142d8c590
        
        if (rsi_5 != -0x10)
            sub_14068e500(&rsi_5[2])
    
    var_878:8.q = rsi_5
    var_878.q = &rsi_5[2]
    sub_14065fa30(&var_878, &rsi_5[2])
    int64_t var_938_3 = 0x2d8
    var_868_1.q = &var_928
    sub_140e23ed0(&rsi_5[2], "SHorizontalBox")
    void var_550
    int64_t* rax_36
    int128_t zmm1_5
    rax_36, zmm1_5 = sub_14068d420(&var_550)
    void** rax_39 = sub_140696920(&var_878, &var_7c8, 
        sub_1406938c0(sub_1406938c0(rax_36, rax_33), r15_2), zmm1_5)
    int64_t* rbx_7 = rax_39[1]
    var_898 = *rax_39
    var_890_1.q = rbx_7
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
    
    sub_140de1b90(arg1 + 0x2b8, &var_898)
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp24_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp24_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    int32_t var_7c0
    int64_t* rbx_8 = var_7c0.q
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp26_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp26_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* rbx_9 = var_878:8.q
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp27_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp27_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
    
    int64_t var_3b0
    
    if (var_3b0 != 0)
        sub_140a74f90(var_3b0)
    
    sub_140660250(&var_550)
    
    if (var_770 != 0)
        var_770[1].d -= 1
        
        if (var_770[1].d == 1)
            (**var_770)(var_770)
            int32_t temp30_1 = *(var_770 + 0xc)
            *(var_770 + 0xc) -= 1
            
            if (temp30_1 == 1)
                (*(*var_770 + 8))(var_770, 1)
    
    if (rax_30 != 0)
        rax_30[1].d -= 1
        
        if (rax_30[1].d == 1)
            (**rax_30)(rax_30)
            int32_t temp32_1 = *(rax_30 + 0xc)
            *(rax_30 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*rax_30)[1](rax_30, 1)
    
    void var_560
    sub_140745b20(&var_560)
    void var_578
    sub_140745b20(&var_578)
    int64_t* var_588
    
    if (var_588 != 0)
        var_588[1].d -= 1
        
        if (var_588[1].d == 1)
            (**var_588)(var_588)
            int32_t temp34_1 = *(var_588 + 0xc)
            *(var_588 + 0xc) -= 1
            
            if (temp34_1 == 1)
                (*(*var_588 + 8))(var_588, 1)
    
    void var_5b8
    sub_140745b20(&var_5b8)
    sub_140ddea30(&var_768)
    int64_t* rbx_13 = var_888:8.q
    
    if (rbx_13 != 0)
        rbx_13[1].d -= 1
        
        if (rbx_13[1].d == 1)
            (**rbx_13)(rbx_13)
            int32_t temp36_1 = *(rbx_13 + 0xc)
            *(rbx_13 + 0xc) -= 1
            
            if (temp36_1 == 1)
                (*(*rbx_13 + 8))(rbx_13, 1)
    
    int64_t* rbx_14 = var_848.q
    
    if (rbx_14 != 0)
        rbx_14[1].d -= 1
        
        if (rbx_14[1].d == 1)
            (**rbx_14)(rbx_14)
            int32_t temp37_1 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (temp37_1 == 1)
                (*(*rbx_14 + 8))(rbx_14, 1)
    
    sub_14068fed0(&var_3a0)
    sub_140745b20(&var_820)
    result = sub_140745b20(&var_7a0)
    
    if (*(arg1 + 0x4c4) != 0)
        result = sub_140698b50(r15_2)
    
    r15 = var_8c8
else if (result == 1)
    var_7c8 = sub_140f0b030
    void* rax_58 = *r15
    var_8c8 = sub_140f0b260
    var_8b8 = rax_58
    void* rax_59 = r15[1]
    var_8e8 = sub_140f0b2c0
    int32_t var_7c0_1 = 0
    int32_t var_8c0_1 = 0
    var_8e0 = 0
    var_898 = sub_140f0b090
    int32_t var_890_2 = 0
    void* var_8b0_2 = rax_59
    
    if (rax_59 != 0)
        *(rax_59 + 8) += 1
    
    int64_t* rax_60 = sub_14068c640(&var_3a0)
    var_888 = var_898.o
    int64_t* rax_61 = sub_140e45b90(&var_908, arg1, &var_888)
    var_850 = nullptr
    char var_848_1 = 1
    var_840 = nullptr
    int32_t var_838_1 = 0
    sub_140692f90(&var_840, rax_61)
    rax_60[0x44] = var_850
    rax_60[0x45].b = var_848_1
    sub_1407473e0(&rax_60[0x46], &var_840)
    sub_140745b20(&var_840)
    int32_t var_900
    int128_t* (* rax_65)(void* arg1, int128_t* arg2)
    
    if (var_900 == 0)
        rax_65 = var_908
    label_140eeb028:
        
        if (rax_65 != 0)
            sub_140a74f90(rax_65)
    else
        int128_t* (* rcx_91)(void* arg1, int128_t* arg2) = var_908
        
        if (rcx_91 != 0)
            (*(*rcx_91 + 0x38))(rcx_91, 0)
            rax_65 = var_908
            
            if (rax_65 != 0)
                rax_65 = sub_140a84c80(rax_65, 0, 0)
                var_908 = rax_65
            
            int32_t var_900_3 = 0
            goto label_140eeb028
    var_888 = var_8e8.o
    int64_t* rax_66 = sub_140e8eef0(&var_918, arg1, &var_888)
    var_820.b = 1
    var_818.q = 0
    int32_t var_810_1 = 0
    int64_t var_830
    var_830.o = zx.o(0)
    sub_140692f90(&var_818, rax_66)
    rax_60[0x39].b = var_820.b
    *(rax_60 + 0x1b8) = var_830.o
    sub_1407473e0(&rax_60[0x3a], &var_818)
    sub_140745b20(&var_818)
    int32_t var_910
    int64_t (* rax_69)(int64_t* arg1)
    
    if (var_910 == 0)
        rax_69 = var_918
    label_140eeb0db:
        
        if (rax_69 != 0)
            sub_140a74f90(rax_69)
    else
        int64_t (* rcx_98)(int64_t* arg1) = var_918
        
        if (rcx_98 != 0)
            (*(*rcx_98 + 0x38))(rcx_98, 0)
            rax_69 = var_918
            
            if (rax_69 != 0)
                rax_69 = sub_140a84c80(rax_69, 0, 0)
                var_918 = rax_69
            
            int32_t var_910_3 = 0
            goto label_140eeb0db
    var_888 = var_8c8.o
    int64_t* rax_70 = sub_140e45dd0(&var_8c8, arg1, &var_888)
    char var_7e0_2 = 1
    __builtin_memcpy(&var_808, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    var_7d8 = 0
    int32_t var_7d0_2 = 0
    sub_140692f90(&var_7d8, rax_70)
    sub_140693390(&rax_60[0x5d], &var_808)
    rax_60[0x62].b = var_7e0_2
    sub_1407473e0(&rax_60[0x63], &var_7d8)
    sub_140745b20(&var_7d8)
    int64_t* rbx_16 = zx.o(0):8.q
    
    if (rbx_16 != 0)
        rbx_16[1].d -= 1
        
        if (rbx_16[1].d == 1)
            (**rbx_16)(rbx_16)
            int32_t temp6_1 = *(rbx_16 + 0xc)
            *(rbx_16 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_16 + 8))(rbx_16, 1)
    
    int64_t* rax_75
    
    if (var_8c0_1 == 0)
        rax_75 = var_8c8
    label_140eeb1d5:
        
        if (rax_75 != 0)
            sub_140a74f90(rax_75)
    else
        int64_t* rcx_108 = var_8c8
        
        if (rcx_108 != 0)
            (*(*rcx_108 + 0x38))(rcx_108, 0)
            rax_75 = var_8c8
            
            if (rax_75 != 0)
                rax_75 = sub_140a84c80(rax_75, 0, 0)
                var_8c8 = rax_75
            
            int32_t var_8c0_2 = 0
            goto label_140eeb1d5
    var_888 = var_7c8.o
    int64_t* rax_76 = sub_140e45dd0(&var_8e8, arg1, &var_888)
    char var_790_1 = 1
    __builtin_memcpy(&var_7b8, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    int64_t var_788 = 0
    var_7a0.o = zx.o(0)
    int32_t var_780_1 = 0
    sub_140692f90(&var_788, rax_76)
    sub_140693390(&rax_60[0x55], &var_7b8)
    rax_60[0x5a].b = var_790_1
    sub_1407473e0(&rax_60[0x5b], &var_788)
    sub_140745b20(&var_788)
    int32_t var_798
    int64_t* rbx_17 = var_798.q
    
    if (rbx_17 != 0)
        rbx_17[1].d -= 1
        
        if (rbx_17[1].d == 1)
            (**rbx_17)(rbx_17)
            int32_t temp10_1 = *(rbx_17 + 0xc)
            *(rbx_17 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_17 + 8))(rbx_17, 1)
    
    int64_t* rax_81
    
    if (var_8e0 == 0)
        rax_81 = var_8e8
    label_140eeb2ee:
        
        if (rax_81 != 0)
            sub_140a74f90(rax_81)
    else
        int64_t* rcx_118 = var_8e8
        
        if (rcx_118 != 0)
            (*(*rcx_118 + 0x38))(rcx_118, 0)
            rax_81 = var_8e8
            
            if (rax_81 != 0)
                rax_81 = sub_140a84c80(rax_81, 0, 0)
                var_8e8 = rax_81
            
            var_8e0 = 0
            goto label_140eeb2ee
    rax_60[0x36].d = *(arg1 + 0x4c0)
    void*** rax_83 = j_sub_140a82f30(0x4c8)
    void*** rbx_18 = rax_83
    
    if (rax_83 == 0)
        rbx_18 = nullptr
    else
        rax_83[1].d = 1
        *(rax_83 + 0xc) = 1
        *rbx_18 = &data_142d8c5a0
        
        if (rbx_18 != -0x10)
            sub_140f20640(&rbx_18[2])
    
    var_878:8.q = rbx_18
    var_878.q = &rbx_18[2]
    sub_14065fa30(&var_878, &rbx_18[2])
    char var_868
    var_868.q = &var_928
    int64_t var_938_4 = 0x4b8
    void* rax_84
    int128_t zmm1_9
    rax_84, zmm1_9 = sub_1406936e0(rax_60, &var_8b8, sub_140e23ed0(var_878.q, "SBorder"))
    void** rax_86 = sub_140695920(sub_140dd3250(&var_878, arg1 + 0x528), &var_778, rax_84, zmm1_9)
    int64_t* rbx_20 = rax_86[1]
    var_8b8 = *rax_86
    int64_t* var_8b0_3 = rbx_20
    
    if (rbx_20 != 0)
        rbx_20[1].d += 1
    
    sub_140de1b90(arg1 + 0x2b8, &var_8b8)
    
    if (rbx_20 != 0)
        rbx_20[1].d -= 1
        
        if (rbx_20[1].d == 1)
            (**rbx_20)(rbx_20)
            int32_t temp16_1 = *(rbx_20 + 0xc)
            *(rbx_20 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_20 + 8))(rbx_20, 1)
    
    if (var_770 != 0)
        var_770[1].d -= 1
        
        if (var_770[1].d == 1)
            (**var_770)(var_770)
            int32_t temp18_1 = *(var_770 + 0xc)
            *(var_770 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*var_770 + 8))(var_770, 1)
    
    int64_t* rbx_22 = var_878:8.q
    
    if (rbx_22 != 0)
        rbx_22[1].d -= 1
        
        if (rbx_22[1].d == 1)
            (**rbx_22)(rbx_22)
            int32_t temp19_1 = *(rbx_22 + 0xc)
            *(rbx_22 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*rbx_22 + 8))(rbx_22, 1)
    
    result = sub_14068fed0(&var_3a0)
int64_t* rbx_15 = r15[1]

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        result = (**rbx_15)(rbx_15)
        int32_t temp1_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_15 + 8))(rbx_15, 1)

__security_check_cookie(rax_1 ^ &var_958)
return result
