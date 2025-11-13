// 函数: sub_140eb0120
// 地址: 0x140eb0120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ed8
int64_t rax_1 = __security_cookie ^ &var_ed8
*(arg1 + 0x3e8) = *arg3
void* rbx = arg3[1]
int64_t* rcx = *(arg1 + 0x3f0)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x3f0)
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x3f0) = rbx

int64_t* rbx_1 = *(arg1 + 0x10)
char* (* rcx_1)(void* arg1, char* arg2) = nullptr

if (rbx_1 != 0)
    int32_t rax_4 = rbx_1[1].d
    
    if (rax_4 != 0)
        rbx_1[1].d = rax_4 + 1
        rax_4.b = 1
    
    if (rax_4.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rcx_1 = *(arg1 + 8)

char* (* var_ea8)(void* arg1, char* arg2) = rcx_1
int64_t* var_ea0 = rbx_1

if (rbx_1 != 0)
    int32_t rax_5 = rbx_1[1].d
    rbx_1[1].d = rax_5
    
    if (rax_5 == 0)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140ec7190(*(*arg3 + 0xd8), &var_ea8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

char* (* rcx_8)(void* arg1, char* arg2) = nullptr
*(arg1 + 0x3e0) = *(arg2 + 0x1b0)
*(arg1 + 0x3f8) = 0
int64_t* rbx_2 = *(arg1 + 0x10)
var_ea8 = sub_140edd060
var_ea0.d = 0
int128_t var_e88 = var_ea8.o

if (rbx_2 != 0)
    int32_t rax_11 = rbx_2[1].d
    
    if (rax_11 != 0)
        rbx_2[1].d = rax_11 + 1
        rax_11.b = 1
    
    if (rax_11.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rcx_8 = *(arg1 + 8)

var_ea8 = rcx_8
int64_t* var_ea0_1 = rbx_2

if (rbx_2 != 0)
    int32_t rax_12 = rbx_2[1].d
    rbx_2[1].d = rax_12
    
    if (rax_12 == 0)
        (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

char var_e00
sub_140e8e840(&var_e00, &var_ea8, &var_e88)
int64_t* rbx_3 = *(arg1 + 0x10)
var_ea8 = sub_140edd030
char* (* rcx_12)(void* arg1, char* arg2) = nullptr
var_ea0_1.d = 0
var_e88 = var_ea8.o

if (rbx_3 != 0)
    int32_t rax_15 = rbx_3[1].d
    
    if (rax_15 != 0)
        rbx_3[1].d = rax_15 + 1
        rax_15.b = 1
    
    if (rax_15.b == 0)
        rbx_3 = nullptr
    
    if (rbx_3 != 0)
        rcx_12 = *(arg1 + 8)

var_ea8 = rcx_12
int64_t* var_ea0_2 = rbx_3

if (rbx_3 != 0)
    int32_t rax_16 = rbx_3[1].d
    rbx_3[1].d = rax_16
    
    if (rax_16 == 0)
        (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

char var_d08
sub_140e8e840(&var_d08, &var_ea8, &var_e88)
int64_t* r12 = *(arg1 + 0x10)
char* (* rbx_4)(void* arg1, char* arg2) = nullptr

if (r12 != 0)
    int32_t rax_19 = r12[1].d
    
    if (rax_19 != 0)
        r12[1].d = rax_19 + 1
        rax_19.b = 1
    
    if (rax_19.b == 0)
        r12 = nullptr
    
    if (r12 != 0)
        int32_t rax_20 = r12[1].d
        rbx_4 = *(arg1 + 8)
        r12[1].d = rax_20
        
        if (rax_20 == 0)
            (**r12)(r12)
            int32_t temp6_1 = *(r12 + 0xc)
            *(r12 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*r12 + 8))(r12, 1)

var_ea8 = rbx_4
int64_t* var_ea0_3 = r12

if (r12 != 0)
    r12[1].d += 1

void var_3b8
int64_t* rax_23
int128_t zmm1
rax_23, zmm1 = sub_140e94300(&var_3b8)
rax_23[0xf].b = var_d08
char var_d07
*(rax_23 + 0x79) = var_d07
void var_d00
sub_1407473e0(&rax_23[0x10], &var_d00)
void* rax_24 = sub_140e99c30(rax_23, &var_ea8, zmm1)
*(rax_24 + 0x1b0) = 4
void*** rax_25 = sub_140e91d80()
void*** var_d18 = rax_25
void* var_d20 = &rax_25[2]
sub_140918950(&var_d20, &rax_25[2])
int64_t var_eb8 = 0x4e0
void var_e98
void* var_d10 = &var_e98
void* var_cc0
void** rax_26 =
    sub_140e9cbb0(&var_d20, &var_cc0, rax_24, sub_140e23ed0(&rax_25[2], "SDockingTarget"))
var_ea8 = *rax_26
int64_t* rcx_27 = rax_26[1]

if (rcx_27 != 0)
    rcx_27[1].d += 1

int64_t* rbx_7 = *(arg1 + 0x10)
int64_t rdi_2 = 0
int64_t* var_e08 = rbx_7

if (rbx_7 != 0)
    int32_t rax_27 = rbx_7[1].d
    
    if (rax_27 != 0)
        rbx_7[1].d = rax_27 + 1
        rax_27.b = 1
    
    if (rax_27.b == 0)
        rbx_7 = nullptr
    
    var_e08 = rbx_7
    
    if (rbx_7 != 0)
        int32_t rax_28 = rbx_7[1].d
        rdi_2 = *(arg1 + 8)
        rbx_7[1].d = rax_28
        
        if (rax_28 == 0)
            (**rbx_7)(rbx_7)
            int32_t temp7_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)

var_e88.q = rdi_2
var_e88:8.q = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1

void var_570
int64_t* rax_31
int128_t zmm1_2
rax_31, zmm1_2 = sub_140e94300(&var_570)
char rbx_8 = var_e00
rax_31[0xf].b = rbx_8
char var_dff
*(rax_31 + 0x79) = var_dff
void var_df8
sub_1407473e0(&rax_31[0x10], &var_df8)
void* rax_32 = sub_140e99c30(rax_31, &var_e88, zmm1_2)
*(rax_32 + 0x1b0) = 3
void*** rax_33 = sub_140e91d80()
void*** var_d30 = rax_33
void* var_d38 = &rax_33[2]
sub_140918950(&var_d38, &rax_33[2])
int64_t var_eb8_1 = 0x4e0
void var_e97
void* var_d28 = &var_e97
void* var_cd0
void** rax_34 =
    sub_140e9cbb0(&var_d38, &var_cd0, rax_32, sub_140e23ed0(&rax_33[2], "SDockingTarget"))
var_e88.q = *rax_34
void* rcx_37 = rax_34[1]
var_e88:8.q = rcx_37

if (rcx_37 != 0)
    *(rcx_37 + 8) += 1

int64_t* rdi_5 = *(arg1 + 0x10)
int64_t* var_e10 = rdi_5
void* rsi_2 = nullptr

if (rdi_5 != 0)
    int32_t rax_35 = rdi_5[1].d
    
    if (rax_35 != 0)
        rdi_5[1].d = rax_35 + 1
        rax_35.b = 1
    
    if (rax_35.b == 0)
        rdi_5 = nullptr
    
    var_e10 = rdi_5
    
    if (rdi_5 != 0)
        int32_t rax_36 = rdi_5[1].d
        rsi_2 = *(arg1 + 8)
        rdi_5[1].d = rax_36
        
        if (rax_36 == 0)
            (**rdi_5)(rdi_5)
            int32_t temp8_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)

void* var_e58 = rsi_2
int64_t* var_e50 = rdi_5

if (rdi_5 != 0)
    rdi_5[1].d += 1

void var_728
int64_t* rax_39
int128_t zmm1_4
rax_39, zmm1_4 = sub_140e94300(&var_728)
rax_39[0xf].b = rbx_8
*(rax_39 + 0x79) = var_dff
sub_1407473e0(&rax_39[0x10], &var_df8)
void* rax_40 = sub_140e99c30(rax_39, &var_e58, zmm1_4)
*(rax_40 + 0x1b0) = 1
void*** rax_41 = sub_140e91d80()
void*** var_d48 = rax_41
void* var_d50 = &rax_41[2]
sub_140918950(&var_d50, &rax_41[2])
int64_t var_eb8_2 = 0x4e0
void var_e96
void* var_d40 = &var_e96
void* var_ce0
void** rax_42 =
    sub_140e9cbb0(&var_d50, &var_ce0, rax_40, sub_140e23ed0(&rax_41[2], "SDockingTarget"))
var_e58 = *rax_42
int64_t* rcx_47 = rax_42[1]

if (rcx_47 != 0)
    rcx_47[1].d += 1

int64_t* rdi_8 = *(arg1 + 0x10)
int64_t* var_e18 = rdi_8
void* rsi_4 = nullptr

if (rdi_8 != 0)
    int32_t rax_43 = rdi_8[1].d
    
    if (rax_43 != 0)
        rdi_8[1].d = rax_43 + 1
        rax_43.b = 1
    
    if (rax_43.b == 0)
        rdi_8 = nullptr
    
    var_e18 = rdi_8
    
    if (rdi_8 != 0)
        int32_t rax_44 = rdi_8[1].d
        rsi_4 = *(arg1 + 8)
        rdi_8[1].d = rax_44
        
        if (rax_44 == 0)
            (**rdi_8)(rdi_8)
            int32_t temp9_1 = *(rdi_8 + 0xc)
            *(rdi_8 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rdi_8 + 8))(rdi_8, 1)

void* var_e68 = rsi_4
int64_t* var_e60 = rdi_8

if (rdi_8 != 0)
    rdi_8[1].d += 1

void var_8e0
int64_t* rax_47
int128_t zmm1_6
rax_47, zmm1_6 = sub_140e94300(&var_8e0)
rax_47[0xf].b = rbx_8
*(rax_47 + 0x79) = var_dff
sub_1407473e0(&rax_47[0x10], &var_df8)
void* rax_48 = sub_140e99c30(rax_47, &var_e68, zmm1_6)
*(rax_48 + 0x1b0) = 2
void*** rax_49 = sub_140e91d80()
void*** var_d60 = rax_49
void* var_d68 = &rax_49[2]
sub_140918950(&var_d68, &rax_49[2])
int64_t var_eb8_3 = 0x4e0
void var_e95
void* var_d58 = &var_e95
void* var_cf0
void** rax_50 =
    sub_140e9cbb0(&var_d68, &var_cf0, rax_48, sub_140e23ed0(&rax_49[2], "SDockingTarget"))
var_e68 = *rax_50
int64_t* rcx_57 = rax_50[1]

if (rcx_57 != 0)
    rcx_57[1].d += 1

int64_t* rdi_11 = *(arg1 + 0x10)
int64_t* var_e20 = rdi_11
void* rsi_6 = nullptr

if (rdi_11 != 0)
    int32_t rax_51 = rdi_11[1].d
    
    if (rax_51 != 0)
        rdi_11[1].d = rax_51 + 1
        rax_51.b = 1
    
    if (rax_51.b == 0)
        rdi_11 = nullptr
    
    var_e20 = rdi_11
    
    if (rdi_11 != 0)
        int32_t rax_52 = rdi_11[1].d
        rsi_6 = *(arg1 + 8)
        rdi_11[1].d = rax_52
        
        if (rax_52 == 0)
            (**rdi_11)(rdi_11)
            int32_t temp10_1 = *(rdi_11 + 0xc)
            *(rdi_11 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rdi_11 + 8))(rdi_11, 1)

void* var_e78 = rsi_6
int64_t* var_e70 = rdi_11

if (rdi_11 != 0)
    rdi_11[1].d += 1

void var_200
int64_t* rax_55
int128_t zmm1_8
rax_55, zmm1_8 = sub_140e94300(&var_200)
rax_55[0xf].b = rbx_8
*(rax_55 + 0x79) = var_dff
sub_1407473e0(&rax_55[0x10], &var_df8)
void* rax_56 = sub_140e99c30(rax_55, &var_e78, zmm1_8)
*(rax_56 + 0x1b0) = 0
void*** rax_57 = sub_140e91d80()
void* var_d80 = &rax_57[2]
sub_140918950(&var_d80, &rax_57[2])
int64_t var_eb8_4 = 0x4e0
void var_e94
void* var_d70 = &var_e94
void* var_c90
void** rax_58 =
    sub_140e9cbb0(&var_d80, &var_c90, rax_56, sub_140e23ed0(&rax_57[2], "SDockingTarget"))
var_e78 = *rax_58
int64_t* rcx_67 = rax_58[1]

if (rcx_67 != 0)
    rcx_67[1].d += 1

int32_t rbx_10 = *(*arg4 + 0x20)
void var_c80
int64_t* rax_60 = sub_140e95130(&var_c80)
rax_60[0x37].d = rbx_10
void*** rax_61 = j_sub_140a82f30(0x328)
void*** rbx_11 = rax_61

if (rax_61 == 0)
    rbx_11 = nullptr
else
    rax_61[1].d = 1
    *(rax_61 + 0xc) = 1
    *rbx_11 = &data_142edf0e0
    
    if (rbx_11 != -0x10)
        sub_140f21070(&rbx_11[2])

void* var_d98 = &rbx_11[2]
sub_140918950(&var_d98, &rbx_11[2])
int64_t var_eb8_5 = 0x318
void var_e93
void* var_d88 = &var_e93
int128_t zmm1_10 = sub_140e23ed0(&rbx_11[2], "SSplitter")

if (rbx_11 != 0)
    rbx_11[1].d += 1

void* var_de8

if (arg1 + 0x3a8 == &var_de8)
label_140eb0a52:
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t temp12_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*rbx_11)[1](rbx_11, 1)
else
    *(arg1 + 0x3a8) = &rbx_11[2]
    void*** rdi_15 = *(arg1 + 0x3b0)
    
    if (rbx_11 == rdi_15)
        goto label_140eb0a52
    
    *(arg1 + 0x3b0) = rbx_11
    
    if (rdi_15 != 0)
        rdi_15[1].d -= 1
        
        if (rdi_15[1].d == 1)
            (**rdi_15)(rdi_15)
            int32_t temp14_1 = *(rdi_15 + 0xc)
            *(rdi_15 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*rdi_15)[1](rdi_15, 1)

void* var_ca0
void** rax_66 = sub_140e9e2f0(&var_d98, &var_ca0, rax_60, zmm1_10)
var_de8 = *rax_66
int64_t* rcx_77 = rax_66[1]

if (rcx_77 != 0)
    rcx_77[1].d += 1

char rbx_12 = data_1439ae520
char var_db0 = rbx_12
char var_daf = 1
int64_t var_da8 = 0
int32_t var_da0 = 0
void*** rax_67 = j_sub_140a82f30(0x50)
void*** rsi_8 = rax_67

if (rax_67 == 0)
    rsi_8 = nullptr
else
    sub_140ddb700(rax_67)
    *rsi_8 = &data_142ec8fc8
    rsi_8[4].d = 0
    *(rsi_8 + 0x24) = 0
    rsi_8[5] = 0
    rsi_8[6] = 0
    rsi_8[7].b = 1
    rsi_8[8] = 0
    rsi_8[9].d = 0

void*** rax_68 = j_sub_140a82f30(0x50)
void*** rdi_16 = rax_68

if (rax_68 == 0)
    rdi_16 = nullptr
else
    sub_140ddb700(rax_68)
    *rdi_16 = &data_142ec8fc8
    rdi_16[4].d = 0
    rdi_16[5] = 0
    rdi_16[6] = 0
    rdi_16[7].b = 1
    rdi_16[8] = 0
    rdi_16[9].d = 0

*(rdi_16 + 0x24) = 0x300
void*** rax_69 = j_sub_140a82f30(0x50)
void*** var_e48 = rax_69
void*** r15_1 = rax_69

if (rax_69 == 0)
    r15_1 = nullptr
    var_e48 = nullptr
else
    sub_140ddb700(rax_69)
    r15_1[4].d = 0
    *r15_1 = &data_142ec8fc8
    r15_1[5] = 0
    r15_1[6] = 0
    r15_1[7].b = 1
    r15_1[8] = 0
    r15_1[9].d = 0

*(r15_1 + 0x24) = 0x100
void*** rax_70 = j_sub_140a82f30(0x50)
void*** var_e40 = rax_70
void*** r15_2 = rax_70

if (rax_70 == 0)
    r15_2 = nullptr
    var_e40 = nullptr
else
    sub_140ddb700(rax_70)
    r15_2[4].d = 0
    *r15_2 = &data_142ec8fc8
    r15_2[5] = 0
    r15_2[6] = 0
    r15_2[7].b = 1
    r15_2[8] = 0
    r15_2[9].d = 0

*(r15_2 + 0x24) = 3
void*** rax_71 = j_sub_140a82f30(0x50)
void*** var_e38 = rax_71
void*** r15_3 = rax_71

if (rax_71 == 0)
    r15_3 = nullptr
    var_e38 = nullptr
else
    sub_140ddb700(rax_71)
    r15_3[4].d = 0
    *r15_3 = &data_142ec8fc8
    r15_3[5] = 0
    r15_3[6] = 0
    r15_3[7].b = 1
    r15_3[8] = 0
    r15_3[9].d = 0

*(r15_3 + 0x24) = 1
void*** rax_72 = j_sub_140a82f30(0x50)
void*** var_e30 = rax_72
void*** r15_4 = rax_72

if (rax_72 == 0)
    r15_4 = nullptr
    var_e30 = nullptr
else
    sub_140ddb700(rax_72)
    r15_4[4].d = 0
    *r15_4 = &data_142ec8fc8
    r15_4[5] = 0
    r15_4[6] = 0
    r15_4[7].b = 1
    r15_4[8] = 0
    r15_4[9].d = 0

*(arg1 + 0x3d8) = r15_4
*(r15_4 + 0x24) = 0x100
void var_a90
int64_t* rax_73 = sub_140dd5d30(&var_a90)
rax_73[0xf].b = rbx_12
*(rax_73 + 0x79) = 1
sub_1407473e0(&rax_73[0x10], &var_da8)
void*** rax_74 = sub_140dd3900()
void* var_dc8 = &rax_74[2]
sub_140918950(&var_dc8, &rax_74[2])
int64_t var_eb8_6 = 0x2d0
void var_e92
void* var_db8 = &var_e92
sub_140e23ed0(&rax_74[2], "SOverlay")
void* rax_75 = sub_140de1aa0(rsi_8, &var_ea8)
void* rax_76 = sub_140de1aa0(rdi_16, &var_e88)
void* rax_77 = sub_140de1aa0(var_e48, &var_e58)
void* rax_78 = sub_140de1aa0(var_e40, &var_e68)
void* rax_79 = sub_140de1aa0(var_e38, &var_e78)
void* rax_81
int128_t zmm1_11
rax_81, zmm1_11 = sub_140de1aa0(sub_140e258e0(), &var_de8)
void* var_cb0
void** rax_89 = sub_140de49c0(&var_dc8, &var_cb0, 
    sub_140de1c90(
        sub_140de1c90(
            sub_140de1c90(
                sub_140de1c90(
                    sub_140de1c90(sub_140de1c90(sub_140de1c90(rax_73, rax_81), var_e30), rax_79), 
                    rax_78), 
                rax_77), 
            rax_76), 
        rax_75), 
    zmm1_11)
int64_t* rbx_15 = rax_89[1]
var_e30 = *rax_89
int64_t* var_e28 = rbx_15

if (rbx_15 != 0)
    rbx_15[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_e30)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t temp17_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*rbx_15 + 8))(rbx_15, 1)

int64_t* var_ca8

if (var_ca8 != 0)
    var_ca8[1].d -= 1
    
    if (var_ca8[1].d == 1)
        (**var_ca8)(var_ca8)
        int32_t temp19_1 = *(var_ca8 + 0xc)
        *(var_ca8 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*var_ca8 + 8))(var_ca8, 1)

if (rax_74 != 0)
    rax_74[1].d -= 1
    
    if (rax_74[1].d == 1)
        (**rax_74)(rax_74)
        int32_t temp20_1 = *(rax_74 + 0xc)
        *(rax_74 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*rax_74)[1](rax_74, 1)

int64_t var_8f0

if (var_8f0 != 0)
    sub_140a74f90(var_8f0)

sub_140ddea30(&var_a90)
sub_140745b20(&var_da8)

if (rcx_77 != 0)
    rcx_77[1].d -= 1
    
    if (rcx_77[1].d == 1)
        (**rcx_77)(rcx_77)
        int32_t temp23_1 = *(rcx_77 + 0xc)
        *(rcx_77 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*(*rcx_77 + 8))(rcx_77, 1)

int64_t* var_c98

if (var_c98 != 0)
    var_c98[1].d -= 1
    
    if (var_c98[1].d == 1)
        (**var_c98)(var_c98)
        int32_t temp25_1 = *(var_c98 + 0xc)
        *(var_c98 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*var_c98 + 8))(var_c98, 1)

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        (**rbx_11)(rbx_11)
        int32_t temp26_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*rbx_11)[1](rbx_11, 1)

void var_aa0
sub_140745b20(&var_aa0)
void var_ab0
sub_140745b20(&var_ab0)
int64_t var_ae0

if (var_ae0 != 0)
    sub_140a74f90(var_ae0)

sub_140ddea30(&var_c80)

if (rcx_67 != 0)
    rcx_67[1].d -= 1
    
    if (rcx_67[1].d == 1)
        (**rcx_67)(rcx_67)
        int32_t temp29_1 = *(rcx_67 + 0xc)
        *(rcx_67 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*rcx_67 + 8))(rcx_67, 1)

int64_t* var_c88

if (var_c88 != 0)
    var_c88[1].d -= 1
    
    if (var_c88[1].d == 1)
        (**var_c88)(var_c88)
        int32_t temp31_1 = *(var_c88 + 0xc)
        *(var_c88 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*var_c88 + 8))(var_c88, 1)

if (rax_57 != 0)
    rax_57[1].d -= 1
    
    if (rax_57[1].d == 1)
        (**rax_57)(rax_57)
        int32_t temp33_1 = *(rax_57 + 0xc)
        *(rax_57 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*rax_57)[1](rax_57, 1)

void var_60
sub_140597060(&var_60)
sub_140ddea30(&var_200)

if (var_e20 != 0)
    var_e20[1].d -= 1
    
    if (var_e20[1].d == 1)
        (**var_e20)(var_e20)
        int32_t temp35_1 = *(var_e20 + 0xc)
        *(var_e20 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*(*var_e20 + 8))(var_e20, 1)

if (rcx_57 != 0)
    rcx_57[1].d -= 1
    
    if (rcx_57[1].d == 1)
        (**rcx_57)(rcx_57)
        int32_t temp37_1 = *(rcx_57 + 0xc)
        *(rcx_57 + 0xc) -= 1
        
        if (temp37_1 == 1)
            (*(*rcx_57 + 8))(rcx_57, 1)

int64_t* var_ce8

if (var_ce8 != 0)
    var_ce8[1].d -= 1
    
    if (var_ce8[1].d == 1)
        (**var_ce8)(var_ce8)
        int32_t temp39_1 = *(var_ce8 + 0xc)
        *(var_ce8 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*(*var_ce8 + 8))(var_ce8, 1)

sub_140597060(&var_d68)
void var_740
sub_140597060(&var_740)
sub_140ddea30(&var_8e0)

if (var_e18 != 0)
    var_e18[1].d -= 1
    
    if (var_e18[1].d == 1)
        (**var_e18)(var_e18)
        int32_t temp41_1 = *(var_e18 + 0xc)
        *(var_e18 + 0xc) -= 1
        
        if (temp41_1 == 1)
            (*(*var_e18 + 8))(var_e18, 1)

if (rcx_47 != 0)
    rcx_47[1].d -= 1
    
    if (rcx_47[1].d == 1)
        (**rcx_47)(rcx_47)
        int32_t temp43_1 = *(rcx_47 + 0xc)
        *(rcx_47 + 0xc) -= 1
        
        if (temp43_1 == 1)
            (*(*rcx_47 + 8))(rcx_47, 1)

int64_t* var_cd8

if (var_cd8 != 0)
    var_cd8[1].d -= 1
    
    if (var_cd8[1].d == 1)
        (**var_cd8)(var_cd8)
        int32_t temp45_1 = *(var_cd8 + 0xc)
        *(var_cd8 + 0xc) -= 1
        
        if (temp45_1 == 1)
            (*(*var_cd8 + 8))(var_cd8, 1)

sub_140597060(&var_d50)
void var_588
sub_140597060(&var_588)
sub_140ddea30(&var_728)

if (var_e10 != 0)
    var_e10[1].d -= 1
    
    if (var_e10[1].d == 1)
        (**var_e10)(var_e10)
        int32_t temp47_1 = *(var_e10 + 0xc)
        *(var_e10 + 0xc) -= 1
        
        if (temp47_1 == 1)
            (*(*var_e10 + 8))(var_e10, 1)

int64_t* rbx_31 = var_e88:8.q

if (rbx_31 != 0)
    rbx_31[1].d -= 1
    
    if (rbx_31[1].d == 1)
        (**rbx_31)(rbx_31)
        int32_t temp49_1 = *(rbx_31 + 0xc)
        *(rbx_31 + 0xc) -= 1
        
        if (temp49_1 == 1)
            (*(*rbx_31 + 8))(rbx_31, 1)

int64_t* var_cc8

if (var_cc8 != 0)
    var_cc8[1].d -= 1
    
    if (var_cc8[1].d == 1)
        (**var_cc8)(var_cc8)
        int32_t temp51_1 = *(var_cc8 + 0xc)
        *(var_cc8 + 0xc) -= 1
        
        if (temp51_1 == 1)
            (*(*var_cc8 + 8))(var_cc8, 1)

sub_140597060(&var_d38)
void var_3d0
sub_140597060(&var_3d0)
sub_140ddea30(&var_570)

if (var_e08 != 0)
    var_e08[1].d -= 1
    
    if (var_e08[1].d == 1)
        (**var_e08)(var_e08)
        int32_t temp53_1 = *(var_e08 + 0xc)
        *(var_e08 + 0xc) -= 1
        
        if (temp53_1 == 1)
            (*(*var_e08 + 8))(var_e08, 1)

if (rcx_27 != 0)
    rcx_27[1].d -= 1
    
    if (rcx_27[1].d == 1)
        (**rcx_27)(rcx_27)
        int32_t temp55_1 = *(rcx_27 + 0xc)
        *(rcx_27 + 0xc) -= 1
        
        if (temp55_1 == 1)
            (*(*rcx_27 + 8))(rcx_27, 1)

int64_t* var_cb8

if (var_cb8 != 0)
    var_cb8[1].d -= 1
    
    if (var_cb8[1].d == 1)
        (**var_cb8)(var_cb8)
        int32_t temp57_1 = *(var_cb8 + 0xc)
        *(var_cb8 + 0xc) -= 1
        
        if (temp57_1 == 1)
            (*(*var_cb8 + 8))(var_cb8, 1)

sub_140597060(&var_d20)
void var_218
sub_140597060(&var_218)
sub_140ddea30(&var_3b8)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        (**r12)(r12)
        int32_t temp58_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp58_1 == 1)
            (*(*r12 + 8))(r12, 1)

*(arg1 + 0x3fa) = 0
char* (* rax_134)(void* arg1, char* arg2) = *(arg2 + 0x1a0)

if (rax_134 != 0)
    var_ea8 = rax_134
    int64_t* rax_135 = *(arg2 + 0x1a8)
    
    if (rax_135 != 0)
        rax_135[1].d += 1
    
    sub_140eda8e0(arg1, &var_ea8)
    
    if (rax_135 != 0)
        rax_135[1].d -= 1
        
        if (rax_135[1].d == 1)
            (**rax_135)(rax_135)
            int32_t temp61_1 = *(rax_135 + 0xc)
            *(rax_135 + 0xc) -= 1
            
            if (temp61_1 == 1)
                (*(*rax_135 + 8))(rax_135, 1)

char* (* rax_138)(void* arg1, char* arg2) = *(arg2 + 0x1b8)

if (rax_138 != 0)
    int64_t* rbx_37 = *(arg2 + 0x1c0)
    var_ea8 = rax_138
    int64_t* var_ea0_6 = rbx_37
    
    if (rbx_37 != 0)
        rbx_37[1].d += 1
    
    sub_140ea15b0(arg1, &var_ea8, 0xffffffff)
    
    if (rbx_37 != 0)
        rbx_37[1].d -= 1
        
        if (rbx_37[1].d == 1)
            (**rbx_37)(rbx_37)
            int32_t temp62_1 = *(rbx_37 + 0xc)
            *(rbx_37 + 0xc) -= 1
            
            if (temp62_1 == 1)
                (*(*rbx_37 + 8))(rbx_37, 1)

sub_140745b20(&var_d00)
uint64_t result = sub_140745b20(&var_df8)
__security_check_cookie(rax_1 ^ &var_ed8)
return result
