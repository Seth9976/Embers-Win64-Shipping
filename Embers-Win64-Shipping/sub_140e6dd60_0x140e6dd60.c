// 函数: sub_140e6dd60
// 地址: 0x140e6dd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1090)
int128_t zmm8
int128_t var_68 = zmm8
void var_10c8
int64_t rax_1 = __security_cookie ^ &var_10c8
int64_t rax_2 = *arg1
int32_t rbx = arg4
int64_t* r15 = arg3
int128_t zmm0 = zx.o(0)
int32_t var_107c = rbx
int64_t* var_e50 = arg1
int128_t var_1010
__builtin_memset(&var_1010, 0, 0x20)
int128_t var_1000
(*(rax_2 + 0x240))(zmm0, &var_1000, &var_1010)
void var_1098
void var_1097
float var_1090
float var_1068
void* var_fe8
void*** var_fe0
char var_fd0
int64_t* var_fc8
char var_fb8
int64_t* var_fb0
void* var_fa0
void*** var_f98
int128_t var_f88
int64_t var_f70
void* var_f30
int64_t* var_f28
void* var_e40
void var_e30
void var_4c0

if (*r15 == 0)
    char rbx_1 = data_1439ae520
    var_fd0 = rbx_1
    __builtin_memcpy(&var_f88, 
        "\x00\x00\xa0\x40\x00\x00\x00\x40\x00\x00\xa0\x40\x00\x00\x00\x40\x01", 0x11)
    var_fb8 = rbx_1
    char var_fcf_1 = 1
    var_fc8 = nullptr
    int32_t var_fc0_1 = 0
    var_f70 = 0
    int32_t var_f68_1 = 0
    char var_fb7_1 = 1
    var_fb0 = nullptr
    int32_t var_fa8_1 = 0
    int64_t* rax_3 = sub_14068d9d0(&var_4c0)
    rax_3[0xf].b = rbx_1
    *(rax_3 + 0x79) = 1
    sub_1407473e0(&rax_3[0x10], &var_fc8)
    rax_3[0x3a] = arg1[0x75] + 0x9e8
    sub_14065da90(&rax_3[0x34], &arg1[0x8b])
    rax_3[0x37].b = arg1[0x8e].b
    sub_140692f90(&rax_3[0x38], &arg1[0x8f])
    void*** rax_7 = j_sub_140a82f30(0x7a8)
    void*** rsi_1 = rax_7
    
    if (rax_7 == 0)
        rsi_1 = nullptr
    else
        rax_7[1].d = 1
        *(rax_7 + 0xc) = 1
        *rsi_1 = &data_142d8b060
        
        if (rsi_1 != -0x10)
            sub_140f66da0(&rsi_1[2])
    
    var_f98 = rsi_1
    var_fa0 = &rsi_1[2]
    sub_14065fa30(&var_fa0, &rsi_1[2])
    int64_t var_10a8_1 = 0x798
    void* var_f90_1 = &var_1098
    void** rax_8
    int128_t zmm6_1
    rax_8, zmm6_1 = sub_140697520(&var_fa0, &var_f30, rax_3, sub_140e23ed0(&rsi_1[2], "STextBlock"))
    var_1090.q = *rax_8
    void* rax_10 = rax_8[1]
    void* var_1088_1 = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1
    
    int64_t* rax_11 = sub_14068c940(&var_e30)
    rax_11[0x34].d = 2
    rax_11[0xf].b = rbx_1
    *(rax_11 + 0x79) = 1
    sub_1407473e0(&rax_11[0x10], &var_fb0)
    rax_11[0x37].b = 1
    *(rax_11 + 0x1a8) = zmm6_1
    sub_140692f90(&rax_11[0x38], &var_f70)
    void*** rax_12 = j_sub_140a82f30(0x3d8)
    void*** rdi_2 = rax_12
    
    if (rax_12 == 0)
        rdi_2 = nullptr
    else
        rax_12[1].d = 1
        *(rax_12 + 0xc) = 1
        *rdi_2 = &data_142d8c570
        
        if (rdi_2 != -0x10)
            sub_140f20750(&rdi_2[2])
    
    var_fe0 = rdi_2
    var_fe8 = &rdi_2[2]
    sub_14065fa30(&var_fe8, &rdi_2[2])
    int64_t var_10a8_2 = 0x3c8
    void* var_fd8_1 = &var_1097
    void* rax_13
    int128_t zmm1_3
    rax_13, zmm1_3 = sub_1406937a0(rax_11, &var_1090, sub_140e23ed0(&rdi_2[2], "SBox"))
    void** rax_14 = sub_140695d20(&var_fe8, &var_1068, rax_13, zmm1_3)
    int64_t* rbx_3 = rax_14[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    if (r15 == &var_e40)
    label_140e6e094:
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp4_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    else
        *r15 = *rax_14
        int64_t* rdi_3 = r15[1]
        
        if (rbx_3 == rdi_3)
            goto label_140e6e094
        
        r15[1] = rbx_3
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp8_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* var_1060
    
    if (var_1060 != 0)
        var_1060[1].d -= 1
        
        if (var_1060[1].d == 1)
            (**var_1060)(var_1060)
            int32_t temp7_1 = *(var_1060 + 0xc)
            *(var_1060 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_1060 + 8))(var_1060, 1)
    
    if (var_fe0 != 0)
        var_fe0[1].d -= 1
        
        if (var_fe0[1].d == 1)
            (**var_fe0)(var_fe0)
            int32_t temp10_1 = *(var_fe0 + 0xc)
            *(var_fe0 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*var_fe0)[1](var_fe0, 1)
    
    sub_140690290(&var_e30)
    
    if (var_f28 != 0)
        var_f28[1].d -= 1
        
        if (var_f28[1].d == 1)
            (**var_f28)(var_f28)
            int32_t temp12_1 = *(var_f28 + 0xc)
            *(var_f28 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_f28 + 8))(var_f28, 1)
    
    if (var_f98 != 0)
        var_f98[1].d -= 1
        
        if (var_f98[1].d == 1)
            (**var_f98)(var_f98)
            int32_t temp14_1 = *(var_f98 + 0xc)
            *(var_f98 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*var_f98)[1](var_f98, 1)
    
    sub_1406913d0(&var_4c0)
    sub_140745b20(&var_fb0)
    sub_140745b20(&var_f70)
    zmm0 = sub_140745b20(&var_fc8)
    rbx = var_107c

int64_t* rcx_34 = var_1000.q

if (rcx_34 != 0)
    int64_t rax_26 = data_143e244b0
    
    if (rcx_34 == rax_26)
        int64_t rdx_11 = var_1010.q
        
        if (rdx_11 != 0 && rdx_11 == rax_26)
            if (rbx == 1)
                rbx = 2
            
            var_107c = rbx

int128_t zmm0_1 = sub_140e258a0(rcx_34, zmm0)
sub_140e258a0(var_1010.q, zmm0_1)
float var_1070
sub_140e13cf0(var_1000.q, &var_1070)
float var_1078
sub_140e13cf0(var_1010.q, &var_1078)
float zmm1_4
float zmm7
float var_1074
float var_106c

if (rbx != 2)
    zmm7 = var_106c
    zmm1_4 = var_1074
else
    zmm1_4 = var_1078
    float zmm0_2 = var_1070
    var_1090 = zmm1_4
    float var_108c_1 = var_1074
    var_1068 = zmm0_2
    float var_1064_1 = var_106c
    char rcx_38
    
    if (zmm0_2 < zmm1_4 || var_106c < var_1074)
        rcx_38 = 0
    else
        rcx_38 = 1
    
    float* rax_27 = &var_1068
    
    if (rcx_38 == 0)
        rax_27 = &var_1090
    
    zmm7 = rax_27[1]
    zmm0_2 = *rax_27
    zmm1_4 = zmm7
    var_1070 = zmm0_2
    float var_106c_1 = zmm7
    var_1078 = zmm0_2
    float var_1074_1 = zmm7
int64_t* rdi_4 = var_1010:8.q
float temp0 = _mm_max_ss(zmm7, zmm1_4)
char rbx_8 = data_1439ae520
int64_t rax_28 = var_1010.q
int32_t var_e88 = 0x3f800000
char var_e84 = 1
int64_t var_e80 = 0
int32_t var_e78 = 0
char var_ea0 = rbx_8
char var_e9f = 1
int64_t var_e98 = 0
int32_t var_e90 = 0
var_1090.q = rax_28
int64_t* var_1088_2 = rdi_4

if (rdi_4 != 0)
    rdi_4[1].d += 1

void*** rax_29 = j_sub_140a82f30(0x88)
void*** rsi_3 = rax_29

if (rax_29 == 0)
    rsi_3 = nullptr
else
    sub_14068e490(rax_29)
    *rsi_3 = &data_142d8add0

void* rax_30 = sub_140698b50(rsi_3)
*(rax_30 + 0x20) = 0x103
sub_140693600(rax_30, &var_1090)

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp1_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

void*** rax_33 = j_sub_140a82f30(0x88)
void*** rsi_4 = rax_33

if (rax_33 == 0)
    rsi_4 = nullptr
else
    sub_14068e490(rax_33)
    *rsi_4 = &data_142d8add0

int32_t var_1030 = 1
int32_t var_1028 = 0x3f800000
char var_1024 = 1
int64_t var_1020 = 0
int32_t var_1018 = 0
sub_140692f90(&var_1020, &var_e80)
int32_t zmm0_3 = var_1028
rsi_4[5].d = var_1030
*(rsi_4 + 0x34) = var_1024
rsi_4[6].d = zmm0_3
sub_140692f90(&rsi_4[7], &var_1020)
sub_140745b20(&var_1020)
int64_t* rdi_5 = var_1000:8.q
var_1090.q = var_1000.q
int64_t* var_1088_3 = rdi_5

if (rdi_5 != 0)
    rdi_5[1].d += 1

void*** rax_37 = j_sub_140a82f30(0x88)
void*** r14_2 = rax_37

if (rax_37 == 0)
    r14_2 = nullptr
else
    sub_14068e490(rax_37)
    *r14_2 = &data_142d8add0

void* rax_38 = sub_140698b50(r14_2)
*(rax_38 + 0x20) = 0x101
sub_140693600(rax_38, &var_1090)

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t temp15_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

void var_830
int64_t* rax_41 = sub_14068d420(&var_830)
rax_41[0xf].b = rbx_8
*(rax_41 + 0x79) = 1
sub_1407473e0(&rax_41[0x10], &var_e98)
int64_t rdi_6 = sx.q(rax_41[0x35].d)
int32_t rax_42 = (rdi_6 + 1).d
rax_41[0x35].d = rax_42

if (rax_42 s> *(rax_41 + 0x1ac))
    sub_140638870(&rax_41[0x34])

*(rax_41[0x34] + (rdi_6 << 3)) = rax_38
int64_t rdi_7 = sx.q(rax_41[0x35].d)
int32_t rax_44 = (rdi_7 + 1).d
rax_41[0x35].d = rax_44

if (rax_44 s> *(rax_41 + 0x1ac))
    sub_140638870(&rax_41[0x34])

*(rax_41[0x34] + (rdi_7 << 3)) = rsi_4
int64_t rdi_8 = sx.q(rax_41[0x35].d)
int32_t rax_46 = (rdi_8 + 1).d
rax_41[0x35].d = rax_46

if (rax_46 s> *(rax_41 + 0x1ac))
    sub_140638870(&rax_41[0x34])

*(rax_41[0x34] + (rdi_8 << 3)) = rax_30
void*** rdi_9 = j_sub_140a82f30(0x2e8)

if (rdi_9 == 0)
    rdi_9 = nullptr
else
    rdi_9[1].d = 1
    *(rdi_9 + 0xc) = 1
    *rdi_9 = &data_142d8c590
    
    if (rdi_9 != -0x10)
        sub_14068e500(&rdi_9[2])

void* var_eb8 = &rdi_9[2]
sub_14065fa30(&var_eb8, &rdi_9[2])
int64_t var_10a8_3 = 0x2d8
void* var_ea8 = &var_1097
void** rax_49 =
    sub_140696920(&var_eb8, &var_e40, rax_41, sub_140e23ed0(&rdi_9[2], "SHorizontalBox"))
int64_t* r15_2 = rax_49[1]
var_1068.q = *rax_49
int64_t* var_1060_1 = r15_2

if (r15_2 != 0)
    r15_2[1].d += 1

float zmm6_2 = var_1078
zmm8 = var_1070
char rbx_11 = data_1439ae520
var_f88.d = zmm6_2
int32_t var_e70 = zmm8.d
char var_ed8 = rbx_11
var_f88:4.d = temp0
float var_e6c = temp0
var_f88:8.b = 1
char var_f78
var_f78.q = 0
var_f70.d = 0
int32_t var_1030_1 = 0x3f800000
char var_102c = 1
var_1028.q = 0
var_1020.d = 0
char var_e68 = 1
int64_t var_e60 = 0
int32_t var_e58 = 0
char var_ed7 = 1
int64_t var_ed0 = 0
int32_t var_ec8 = 0
int64_t* rax_51 = sub_140e50180(&var_e30)
rax_51[0x34].d = zmm6_2
*(rax_51 + 0x1a4) = temp0
rax_51[0x35].b = 1
sub_140692f90(&rax_51[0x36], &var_f78)
void*** rax_52 = sub_140e48fc0()
void* var_ef0 = &rax_52[2]
sub_140918950(&var_ef0, &rax_52[2])
int64_t var_10a8_4 = 0x2c8
void* var_ee0 = &var_1098
void** rax_53 = sub_140e57660(&var_ef0, &var_fe8, rax_51, sub_140e23ed0(&rax_52[2], "SSpacer"))
int64_t* rdi_11 = rax_53[1]
var_1090.q = *rax_53
int64_t* var_1088_4 = rdi_11

if (rdi_11 != 0)
    rdi_11[1].d += 1

void*** rax_55 = j_sub_140a82f30(0x88)
void*** rsi_6 = rax_55

if (rax_55 == 0)
    rsi_6 = nullptr
else
    sub_14068e490(rax_55)
    *rsi_6 = &data_142d8add0

void* rax_56 = sub_140698b50(rsi_6)
*(rax_56 + 0x20) = 0x103
sub_140693600(rax_56, &var_1090)

if (rdi_11 != 0)
    rdi_11[1].d -= 1
    
    if (rdi_11[1].d == 1)
        (**rdi_11)(rdi_11)
        int32_t temp17_1 = *(rdi_11 + 0xc)
        *(rdi_11 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*rdi_11 + 8))(rdi_11, 1)

int64_t* rdi_12 = arg3[1]
var_1090.q = *arg3
int64_t* var_1088_5 = rdi_12

if (rdi_12 != 0)
    rdi_12[1].d += 1

void*** rax_60 = j_sub_140a82f30(0x88)
void*** r14_4 = rax_60

if (rax_60 == 0)
    r14_4 = nullptr
else
    sub_14068e490(rax_60)
    *r14_4 = &data_142d8add0

r14_4[4].b = var_107c.b
*(r14_4 + 0x21) = 2
int32_t var_1050 = 1
int32_t var_1048 = 0x3f800000
char var_1044 = 1
int64_t var_1040 = 0
int32_t var_1038 = 0
sub_140692f90(&var_1040, &var_1028)
int32_t zmm0_4 = var_1048
r14_4[5].d = var_1050
*(r14_4 + 0x34) = var_1044
r14_4[6].d = zmm0_4
sub_140692f90(&r14_4[7], &var_1040)
sub_140745b20(&var_1040)
sub_140693600(r14_4, &var_1090)

if (rdi_12 != 0)
    rdi_12[1].d -= 1
    
    if (rdi_12[1].d == 1)
        (**rdi_12)(rdi_12)
        int32_t temp19_1 = *(rdi_12 + 0xc)
        *(rdi_12 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rdi_12 + 8))(rdi_12, 1)

void var_680
int64_t* rax_66 = sub_140e50180(&var_680)
rax_66[0x34].d = zmm8.d
*(rax_66 + 0x1a4) = temp0
rax_66[0x35].b = 1
sub_140692f90(&rax_66[0x36], &var_e60)
void*** rax_67 = sub_140e48fc0()
void* var_f08 = &rax_67[2]
sub_140918950(&var_f08, &rax_67[2])
int64_t var_10a8_5 = 0x2c8
void var_1080
void* var_ef8 = &var_1080
void** rax_68 = sub_140e57660(&var_f08, &var_fa0, rax_66, sub_140e23ed0(&rax_67[2], "SSpacer"))
int64_t* rdi_14 = rax_68[1]
var_1090.q = *rax_68
int64_t* var_1088_6 = rdi_14

if (rdi_14 != 0)
    rdi_14[1].d += 1

void*** rax_70 = j_sub_140a82f30(0x88)
void*** rsi_8 = rax_70

if (rax_70 == 0)
    rsi_8 = nullptr
else
    sub_14068e490(rax_70)
    *rsi_8 = &data_142d8add0

void* rax_71 = sub_140698b50(rsi_8)
*(rax_71 + 0x20) = 0x101
sub_140693600(rax_71, &var_1090)

if (rdi_14 != 0)
    rdi_14[1].d -= 1
    
    if (rdi_14[1].d == 1)
        (**rdi_14)(rdi_14)
        int32_t temp21_1 = *(rdi_14 + 0xc)
        *(rdi_14 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*rdi_14 + 8))(rdi_14, 1)

void var_9e0
int64_t* rax_74 = sub_14068d420(&var_9e0)
rax_74[0xf].b = rbx_11
*(rax_74 + 0x79) = 1
sub_1407473e0(&rax_74[0x10], &var_ed0)
int64_t rdi_15 = sx.q(rax_74[0x35].d)
int32_t rax_75 = (rdi_15 + 1).d
rax_74[0x35].d = rax_75

if (rax_75 s> *(rax_74 + 0x1ac))
    sub_140638870(&rax_74[0x34])

*(rax_74[0x34] + (rdi_15 << 3)) = rax_71
int64_t rdi_16 = sx.q(rax_74[0x35].d)
int32_t rax_77 = (rdi_16 + 1).d
rax_74[0x35].d = rax_77

if (rax_77 s> *(rax_74 + 0x1ac))
    sub_140638870(&rax_74[0x34])

*(rax_74[0x34] + (rdi_16 << 3)) = r14_4
int64_t rdi_17 = sx.q(rax_74[0x35].d)
int32_t rax_79 = (rdi_17 + 1).d
rax_74[0x35].d = rax_79

if (rax_79 s> *(rax_74 + 0x1ac))
    sub_140638870(&rax_74[0x34])

*(rax_74[0x34] + (rdi_17 << 3)) = rax_56
void*** rax_81 = j_sub_140a82f30(0x2e8)
void*** rdi_18 = rax_81

if (rax_81 == 0)
    rdi_18 = nullptr
else
    rax_81[1].d = 1
    *(rax_81 + 0xc) = 1
    *rdi_18 = &data_142d8c590
    
    if (rdi_18 != -0x10)
        sub_14068e500(&rdi_18[2])

void* var_f20 = &rdi_18[2]
sub_14065fa30(&var_f20, &rdi_18[2])
int64_t var_10a8_6 = 0x2d8
void var_107f
void* var_f10 = &var_107f
void** rax_82 =
    sub_140696920(&var_f20, &var_fb8, rax_74, sub_140e23ed0(&rdi_18[2], "SHorizontalBox"))
int64_t* r14_5 = rax_82[1]
var_1090.q = *rax_82
int64_t* var_1088_7 = r14_5

if (r14_5 != 0)
    r14_5[1].d += 1

char rbx_14 = data_1439ae520
var_1050.b = rbx_14
char var_f48 = rbx_14
var_1050:1.b = 1
var_1048.q = 0
var_1040.d = 0
char var_f47 = 1
int64_t var_f40 = 0
int32_t var_f38 = 0
void*** rax_84 = j_sub_140a82f30(0x50)
void*** rsi_10 = rax_84

if (rax_84 == 0)
    rsi_10 = nullptr
else
    sub_140ddb700(rax_84)
    *rsi_10 = &data_142ec8fc8
    rsi_10[4].d = 0
    *(rsi_10 + 0x24) = 0
    rsi_10[5] = 0
    rsi_10[6] = 0
    rsi_10[7].b = 1
    rsi_10[8] = 0
    rsi_10[9].d = 0

void*** rax_85 = j_sub_140a82f30(0x50)
void*** rdi_19 = rax_85

if (rax_85 == 0)
    rdi_19 = nullptr
else
    sub_140ddb700(rax_85)
    *rdi_19 = &data_142ec8fc8
    rdi_19[4].d = 0
    *(rdi_19 + 0x24) = 0
    rdi_19[5] = 0
    rdi_19[6] = 0
    rdi_19[7].b = 1
    rdi_19[8] = 0
    rdi_19[9].d = 0

void var_b90
int64_t* rax_86 = sub_140dd5d30(&var_b90)
rax_86[0xf].b = rbx_14
*(rax_86 + 0x79) = 1
sub_1407473e0(&rax_86[0x10], &var_1048)
var_1090.q = sub_140de1aa0(rdi_19, &var_1090)
int64_t r12_1 = sx.q(rax_86[0x35].d)
int32_t rax_88 = (r12_1 + 1).d
rax_86[0x35].d = rax_88

if (rax_88 s> *(rax_86 + 0x1ac))
    sub_1405a4d70(&rax_86[0x34])

*(rax_86[0x34] + (r12_1 << 3)) = var_1090.q
void* rax_90 = sub_140de1aa0(rsi_10, &var_1068)
int64_t rsi_11 = sx.q(rax_86[0x35].d)
int32_t rax_91 = (rsi_11 + 1).d
rax_86[0x35].d = rax_91

if (rax_91 s> *(rax_86 + 0x1ac))
    sub_1405a4d70(&rax_86[0x34])

*(rax_86[0x34] + (rsi_11 << 3)) = rax_90
void*** rax_93 = j_sub_140a82f30(0x2e0)
void*** rsi_12 = rax_93

if (rax_93 == 0)
    rsi_12 = nullptr
else
    rax_93[1].d = 1
    *(rax_93 + 0xc) = 1
    *rsi_12 = &data_142ecd308
    
    if (rsi_12 != -0x10)
        sub_140dde040(&rsi_12[2])

void* var_f60 = &rsi_12[2]
sub_140918950(&var_f60, &rsi_12[2])
int64_t var_10a8_7 = 0x2d0
void var_107e
void* var_f50 = &var_107e
void** rax_94 = sub_140de49c0(&var_f60, &var_fd0, rax_86, sub_140e23ed0(&rsi_12[2], "SOverlay"))
var_1090.q = *rax_94
void* rax_96 = rax_94[1]
void* var_1088_8 = rax_96

if (rax_96 != 0)
    *(rax_96 + 8) += 1

int64_t* rax_97 = sub_14068c940(&var_4c0)
rax_97[0xf].b = rbx_14
*(rax_97 + 0x79) = 1
sub_1407473e0(&rax_97[0x10], &var_f40)
void*** rax_98 = j_sub_140a82f30(0x3d8)
void*** rbx_15 = rax_98

if (rax_98 == 0)
    rbx_15 = nullptr
else
    rax_98[1].d = 1
    *(rax_98 + 0xc) = 1
    *rbx_15 = &data_142d8c570
    
    if (rbx_15 != -0x10)
        sub_140f20750(&rbx_15[2])

var_1068.q = &rbx_15[2]
sub_14065fa30(&var_1068, &rbx_15[2])
int64_t var_10a8_8 = 0x3c8
void var_107d
void* var_1058 = &var_107d
int128_t zmm1_10 = sub_140e23ed0(&rbx_15[2], "SBox")
void* rax_100 = &var_e50[0x76]

if (rbx_15 != 0)
    rbx_15[1].d += 1

if (rax_100 == &var_e50)
label_140e6eda8:
    
    if (rbx_15 != 0)
        rbx_15[1].d -= 1
        
        if (rbx_15[1].d == 1)
            (**rbx_15)(rbx_15)
            int32_t temp23_1 = *(rbx_15 + 0xc)
            *(rbx_15 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*rbx_15)[1](rbx_15, 1)
else
    *rax_100 = &rbx_15[2]
    void*** rdi_23 = *(rax_100 + 8)
    
    if (rbx_15 == rdi_23)
        goto label_140e6eda8
    
    *(rax_100 + 8) = rbx_15
    
    if (rdi_23 != 0)
        rdi_23[1].d -= 1
        
        if (rdi_23[1].d == 1)
            (**rdi_23)(rdi_23)
            int32_t temp26_1 = *(rdi_23 + 0xc)
            *(rdi_23 + 0xc) -= 1
            
            if (temp26_1 == 1)
                (*rdi_23)[1](rdi_23, 1)

void* rax_104
int128_t zmm1_11
rax_104, zmm1_11 = sub_1406937a0(rax_97, &var_1090, zmm1_10)
void** rax_105 = sub_140695d20(&var_1068, &var_f30, rax_104, zmm1_11)
*arg2 = *rax_105
void* rax_107 = rax_105[1]
arg2[1] = rax_107

if (rax_107 != 0)
    *(rax_107 + 8) += 1

if (var_f28 != 0)
    var_f28[1].d -= 1
    
    if (var_f28[1].d == 1)
        (**var_f28)(var_f28)
        int32_t temp28_1 = *(var_f28 + 0xc)
        *(var_f28 + 0xc) -= 1
        
        if (temp28_1 == 1)
            (*(*var_f28 + 8))(var_f28, 1)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t temp30_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*rbx_15)[1](rbx_15, 1)

sub_140690290(&var_4c0)
int64_t* rbx_18 = var_fc8

if (rbx_18 != 0)
    rbx_18[1].d -= 1
    
    if (rbx_18[1].d == 1)
        (**rbx_18)(rbx_18)
        int32_t temp32_1 = *(rbx_18 + 0xc)
        *(rbx_18 + 0xc) -= 1
        
        if (temp32_1 == 1)
            (*(*rbx_18 + 8))(rbx_18, 1)

if (rsi_12 != 0)
    rsi_12[1].d -= 1
    
    if (rsi_12[1].d == 1)
        (**rsi_12)(rsi_12)
        int32_t temp33_1 = *(rsi_12 + 0xc)
        *(rsi_12 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*rsi_12)[1](rsi_12, 1)

int64_t var_9f0

if (var_9f0 != 0)
    sub_140a74f90(var_9f0)

sub_140ddea30(&var_b90)
sub_140745b20(&var_f40)
sub_140745b20(&var_1048)

if (r14_5 != 0)
    r14_5[1].d -= 1
    
    if (r14_5[1].d == 1)
        (**r14_5)(r14_5)
        int32_t temp36_1 = *(r14_5 + 0xc)
        *(r14_5 + 0xc) -= 1
        
        if (temp36_1 == 1)
            (*(*r14_5 + 8))(r14_5, 1)

int64_t* rbx_20 = var_fb0

if (rbx_20 != 0)
    rbx_20[1].d -= 1
    
    if (rbx_20[1].d == 1)
        (**rbx_20)(rbx_20)
        int32_t temp38_1 = *(rbx_20 + 0xc)
        *(rbx_20 + 0xc) -= 1
        
        if (temp38_1 == 1)
            (*(*rbx_20 + 8))(rbx_20, 1)

if (rdi_18 != 0)
    rdi_18[1].d -= 1
    
    if (rdi_18[1].d == 1)
        (**rdi_18)(rdi_18)
        int32_t temp39_1 = *(rdi_18 + 0xc)
        *(rdi_18 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*rdi_18)[1](rdi_18, 1)

int64_t var_840

if (var_840 != 0)
    sub_140a74f90(var_840)

sub_140660250(&var_9e0)

if (var_f98 != 0)
    var_f98[1].d -= 1
    
    if (var_f98[1].d == 1)
        (**var_f98)(var_f98)
        int32_t temp42_1 = *(var_f98 + 0xc)
        *(var_f98 + 0xc) -= 1
        
        if (temp42_1 == 1)
            (*var_f98)[1](var_f98, 1)

if (rax_67 != 0)
    rax_67[1].d -= 1
    
    if (rax_67[1].d == 1)
        (**rax_67)(rax_67)
        int32_t temp44_1 = *(rax_67 + 0xc)
        *(rax_67 + 0xc) -= 1
        
        if (temp44_1 == 1)
            (*rax_67)[1](rax_67, 1)

void var_4d0
sub_140745b20(&var_4d0)
sub_140ddea30(&var_680)

if (var_fe0 != 0)
    var_fe0[1].d -= 1
    
    if (var_fe0[1].d == 1)
        (**var_fe0)(var_fe0)
        int32_t temp46_1 = *(var_fe0 + 0xc)
        *(var_fe0 + 0xc) -= 1
        
        if (temp46_1 == 1)
            (*var_fe0)[1](var_fe0, 1)

if (rax_52 != 0)
    rax_52[1].d -= 1
    
    if (rax_52[1].d == 1)
        (**rax_52)(rax_52)
        int32_t temp48_1 = *(rax_52 + 0xc)
        *(rax_52 + 0xc) -= 1
        
        if (temp48_1 == 1)
            (*rax_52)[1](rax_52, 1)

void var_c80
sub_140745b20(&var_c80)
sub_140ddea30(&var_e30)
sub_140745b20(&var_ed0)
sub_140745b20(&var_e60)
sub_140745b20(&var_1028)
sub_140745b20(&var_f78)

if (r15_2 != 0)
    r15_2[1].d -= 1
    
    if (r15_2[1].d == 1)
        (**r15_2)(r15_2)
        int32_t temp50_1 = *(r15_2 + 0xc)
        *(r15_2 + 0xc) -= 1
        
        if (temp50_1 == 1)
            (*(*r15_2 + 8))(r15_2, 1)

int64_t* var_e38

if (var_e38 != 0)
    var_e38[1].d -= 1
    
    if (var_e38[1].d == 1)
        (**var_e38)(var_e38)
        int32_t temp52_1 = *(var_e38 + 0xc)
        *(var_e38 + 0xc) -= 1
        
        if (temp52_1 == 1)
            (*(*var_e38 + 8))(var_e38, 1)

if (rdi_9 != 0)
    rdi_9[1].d -= 1
    
    if (rdi_9[1].d == 1)
        (**rdi_9)(rdi_9)
        int32_t temp53_1 = *(rdi_9 + 0xc)
        *(rdi_9 + 0xc) -= 1
        
        if (temp53_1 == 1)
            (*rdi_9)[1](rdi_9, 1)

int64_t var_690

if (var_690 != 0)
    sub_140a74f90(var_690)

sub_140660250(&var_830)
sub_140745b20(&var_e98)
sub_140745b20(&var_e80)
int64_t* rbx_28 = var_1010:8.q

if (rbx_28 != 0)
    rbx_28[1].d -= 1
    
    if (rbx_28[1].d == 1)
        (**rbx_28)(rbx_28)
        int32_t temp56_1 = *(rbx_28 + 0xc)
        *(rbx_28 + 0xc) -= 1
        
        if (temp56_1 == 1)
            (*(*rbx_28 + 8))(rbx_28, 1)

int64_t* rbx_29 = var_1000:8.q

if (rbx_29 != 0)
    rbx_29[1].d -= 1
    
    if (rbx_29[1].d == 1)
        (**rbx_29)(rbx_29)
        int32_t temp58_1 = *(rbx_29 + 0xc)
        *(rbx_29 + 0xc) -= 1
        
        if (temp58_1 == 1)
            (*(*rbx_29 + 8))(rbx_29, 1)

int64_t* rbx_31 = arg3[1]

if (rbx_31 != 0)
    rbx_31[1].d -= 1
    
    if (rbx_31[1].d == 1)
        (**rbx_31)(rbx_31)
        int32_t temp59_1 = *(rbx_31 + 0xc)
        *(rbx_31 + 0xc) -= 1
        
        if (temp59_1 == 1)
            int64_t r8_18 = *rbx_31
            (*(r8_18 + 8))(rbx_31, 1, r8_18)

__security_check_cookie(rax_1 ^ &var_10c8)
return arg2
