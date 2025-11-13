// 函数: sub_140f3cb90
// 地址: 0x140f3cb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20e0)
void var_2118
int64_t rax_1 = __security_cookie ^ &var_2118
void var_1b78
int64_t* rax_2 = _vfprintf_p_l(&var_1b78, u"Minimize", u"WindowTitleBar")
int64_t* rcx_1 = rax_2[1]
int64_t var_2040 = *rax_2

if (rcx_1 != 0)
    rcx_1[1].d += 1

int32_t var_2030 = rax_2[2].d
char var_2028 = 1
int64_t var_2020 = 0
int32_t var_2018 = 0
void* (* var_1ff8)(void* arg1) = sub_140f47b60
int32_t var_1ff0 = 0
void*** var_20d0
sub_140b58170(&var_20d0, "NoBorder", 1)
char rsi = *(arg1 + 0x328)
char* (* var_2098)(void* arg1, char* arg2) = sub_140f4a950
int128_t var_1bd8 = var_1ff8.o
int32_t var_1b10 = 1
char var_1b0c = 1
char var_1b08 = 1
int64_t var_1b00 = 0
int32_t var_1af8 = 0
int32_t var_2090 = 0
int128_t var_1d40 = zx.o(0)
char var_1d30 = 1
int64_t var_1d28 = 0
int32_t var_1d20 = 0
char var_1f60 = rsi
char var_1f5f = 1
int64_t var_1f58 = 0
int32_t var_1f50 = 0
void var_1ab0
void* rax_5 = sub_140e48870(sub_140e4fb70(&var_1ab0), arg1, &var_1bd8)
sub_14065da90(rax_5 + 0x160, &var_2040)
*(rax_5 + 0x178) = var_2028
sub_140692f90(rax_5 + 0x180, &var_2020)
void*** rax_6 = sub_140e48c50()
void* var_1f90 = &rax_6[2]
sub_140918950(&var_1f90, &rax_6[2])
int64_t var_20f8 = 0x3a8
void var_20e8
void* var_1f80 = &var_20e8
void* var_1bb8
void** rax_7 = sub_140e56930(&var_1f90, &var_1bb8, rax_5, sub_140e23ed0(&rax_6[2], "SImage"))
char* (* var_2088)(void* arg1, char* arg2) = *rax_7
void* rcx_12 = rax_7[1]
void* var_2080 = rcx_12

if (rcx_12 != 0)
    *(rcx_12 + 8) += 1

int64_t* rbx_1 = data_143e243c8
void var_b08
int64_t* rax_8
int128_t zmm6
rax_8, zmm6 = sub_14068cc20(&var_b08)
rax_8[0x68].b = 0
rax_8[0xc].b = rsi
*(rax_8 + 0x61) = 1
sub_140692f90(&rax_8[0xd], &var_1f58)
rax_8[0x3b].b = 1
*(rax_8 + 0x1c8) = zmm6
sub_140692f90(&rax_8[0x3c], &var_1d28)
int128_t var_1bc8 = var_2098.o
int64_t* var_20c8
sub_140692f90(&rax_8[0x44], sub_140e45ef0(&var_20c8, arg1, &var_1bc8))
int32_t var_20c0
int64_t* rax_11

if (var_20c0 == 0)
    rax_11 = var_20c8
label_140f3ce63:
    
    if (rax_11 != 0)
        sub_140a74f90(rax_11)
else
    int64_t* rcx_18 = var_20c8
    
    if (rcx_18 != 0)
        (*(*rcx_18 + 0x38))(rcx_18, 0)
        rax_11 = var_20c8
        
        if (rax_11 != 0)
            rax_11 = sub_140a84c80(rax_11, 0, 0)
            var_20c8 = rax_11
        
        int32_t var_20c0_1 = 0
        goto label_140f3ce63

if (&var_1b10 != &rax_8[8])
    rax_8[8].d = 1
    *(rax_8 + 0x44) = 1

rax_8[9].b = 1
sub_1407473e0(&rax_8[0xa], &var_1b00)
void*** r8_4 = var_20d0
void*** var_1ff8_1 = r8_4
int64_t rax_13 = (*(*rbx_1 + 0x88))(rbx_1, data_143e243e8, r8_4)

if (rax_13 == 0)
    rax_13 = sub_140e13010()

rax_8[0x36] = rax_13
void*** rsi_1 = j_sub_140a82f30(0x5c8)

if (rsi_1 == 0)
    rsi_1 = nullptr
else
    rsi_1[1].d = 1
    *(rsi_1 + 0xc) = 1
    *rsi_1 = &data_142d8c580
    
    if (rsi_1 != -0x10)
        sub_140ee2d30(&rsi_1[2])

int64_t* var_1f78 = &rsi_1[2]
sub_14065fa30(&var_1f78, &rsi_1[2])
int64_t var_20f8_1 = 0x5b8
void var_20e7
void* var_1f68 = &var_20e7
void* rax_15
int128_t zmm1_2
rax_15, zmm1_2 = sub_1406936e0(rax_8, &var_2088, sub_140e23ed0(&rsi_1[2], "SButton"))
int64_t* var_1c28
int64_t** rax_16 = sub_140696120(&var_1f78, &var_1c28, rax_15, zmm1_2)
int64_t* rbx_3 = rax_16[1]

if (rbx_3 != 0)
    rbx_3[1].d += 1

void var_1b30

if (arg1 + 0x330 == &var_1b30)
label_140f3cfcf:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    *(arg1 + 0x330) = *rax_16
    int64_t* rdi_2 = *(arg1 + 0x338)
    
    if (rbx_3 == rdi_2)
        goto label_140f3cfcf
    
    *(arg1 + 0x338) = rbx_3
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp7_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* var_1c20

if (var_1c20 != 0)
    var_1c20[1].d -= 1
    
    if (var_1c20[1].d == 1)
        (**var_1c20)(var_1c20)
        int32_t temp6_1 = *(var_1c20 + 0xc)
        *(var_1c20 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_1c20 + 8))(var_1c20, 1)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp9_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rsi_1)[1](rsi_1, 1)

sub_1406905f0(&var_b08)
int64_t* var_1bb0

if (var_1bb0 != 0)
    var_1bb0[1].d -= 1
    
    if (var_1bb0[1].d == 1)
        (**var_1bb0)(var_1bb0)
        int32_t temp11_1 = *(var_1bb0 + 0xc)
        *(var_1bb0 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_1bb0 + 8))(var_1bb0, 1)

if (rax_6 != 0)
    rax_6[1].d -= 1
    
    if (rax_6[1].d == 1)
        (**rax_6)(rax_6)
        int32_t temp13_1 = *(rax_6 + 0xc)
        *(rax_6 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*rax_6)[1](rax_6, 1)

void var_18a8
sub_140745b20(&var_18a8)
void var_18c0
sub_140745b20(&var_18c0)
int64_t* var_18d0

if (var_18d0 != 0)
    var_18d0[1].d -= 1
    
    if (var_18d0[1].d == 1)
        (**var_18d0)(var_18d0)
        int32_t temp14_1 = *(var_18d0 + 0xc)
        *(var_18d0 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_18d0 + 8))(var_18d0, 1)

void var_1900
sub_140745b20(&var_1900)
sub_140ddea30(&var_1ab0)
sub_140745b20(&var_1f58)
sub_140745b20(&var_1d28)
sub_140745b20(&var_1b00)
sub_140745b20(&var_2020)

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        (**rcx_1)(rcx_1)
        int32_t rax_32 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (rax_32 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)

int64_t* var_1b70

if (var_1b70 != 0)
    var_1b70[1].d -= 1
    
    if (var_1b70[1].d == 1)
        (**var_1b70)(var_1b70)
        int32_t rdi_3 = *(var_1b70 + 0xc)
        *(var_1b70 + 0xc) -= 1
        
        if (rdi_3 == 1)
            (*(*var_1b70 + 8))(var_1b70, zx.q(rdi_3))

void var_1b60
int64_t* rax_37 = _vfprintf_p_l(&var_1b60, u"Maximize", u"WindowTitleBar")
int64_t var_1e40 = *rax_37
void* rcx_59 = rax_37[1]
void* var_1e38 = rcx_59

if (rcx_59 != 0)
    *(rcx_59 + 8) += 1

int32_t var_1e30 = rax_37[2].d
char var_1e28 = 1
void* (* var_2098_1)(void* arg1) = sub_140f47780
int64_t var_1e20 = 0
int32_t var_1e18 = 0
int32_t var_2090_1 = 0
void*** var_20d8
int128_t zmm6_1 = sub_140b58170(&var_20d8, "NoBorder", 1)
char r12 = *(arg1 + 0x329)
char* (* var_1fe8)(void* arg1, char* arg2) = sub_140f4a7f0
int128_t var_1ba8 = var_2098_1.o
int32_t var_1af0 = 1
char var_1aec = 1
char var_1ae8 = 1
int64_t var_1ae0 = 0
int32_t var_1ad8 = 0
int32_t var_1fe0 = 0
int128_t var_1d18 = zmm6_1
char var_1d08 = 1
int64_t var_1d00 = 0
int32_t var_1cf8 = 0
char var_1f30 = r12
char var_1f2f = 1
int64_t var_1f28 = 0
int32_t var_1f20 = 0
void var_11d8
void* rax_40 = sub_140e48870(sub_140e4fb70(&var_11d8), arg1, &var_1ba8)
sub_14065da90(rax_40 + 0x160, &var_1e40)
*(rax_40 + 0x178) = var_1e28
sub_140692f90(rax_40 + 0x180, &var_1e20)
void*** rax_41 = sub_140e48c50()
void* var_1fd8 = &rax_41[2]
sub_140918950(&var_1fd8, &rax_41[2])
int64_t var_20f8_2 = 0x3a8
void var_20e6
void* var_1fc8 = &var_20e6
void* var_1c90
void** rax_42 = sub_140e56930(&var_1fd8, &var_1c90, rax_40, sub_140e23ed0(&rax_41[2], "SImage"))
void* (* var_2078)(void* arg1) = *rax_42
void* rcx_70 = rax_42[1]
void* var_2070 = rcx_70

if (rcx_70 != 0)
    *(rcx_70 + 8) += 1

int64_t* rbx_12 = data_143e243c8
void var_778
int64_t* rax_43
int128_t zmm6_2
rax_43, zmm6_2 = sub_14068cc20(&var_778)
rax_43[0x68].b = 0
rax_43[0xc].b = r12
*(rax_43 + 0x61) = 1
sub_140692f90(&rax_43[0xd], &var_1f28)
rax_43[0x3b].b = 1
*(rax_43 + 0x1c8) = zmm6_2
sub_140692f90(&rax_43[0x3c], &var_1d00)
int128_t var_1b88 = var_1fe8.o
int64_t* var_20b8
sub_140692f90(&rax_43[0x44], sub_140e45ef0(&var_20b8, arg1, &var_1b88))
int32_t var_20b0
int64_t* rax_46

if (var_20b0 == 0)
    rax_46 = var_20b8
label_140f3d44c:
    
    if (rax_46 != 0)
        sub_140a74f90(rax_46)
else
    int64_t* rcx_76 = var_20b8
    
    if (rcx_76 != 0)
        (*(*rcx_76 + 0x38))(rcx_76, 0)
        rax_46 = var_20b8
        
        if (rax_46 != 0)
            rax_46 = sub_140a84c80(rax_46, 0, 0)
            var_20b8 = rax_46
        
        int32_t var_20b0_1 = 0
        goto label_140f3d44c

if (&var_1af0 != &rax_43[8])
    rax_43[8].d = 1
    *(rax_43 + 0x44) = 1

rax_43[9].b = 1
sub_1407473e0(&rax_43[0xa], &var_1ae0)
void*** r8_11 = var_20d8
void*** var_1fe8_1 = r8_11
int64_t rax_48 = (*(*rbx_12 + 0x88))(rbx_12, data_143e243e8, r8_11)

if (rax_48 == 0)
    rax_48 = sub_140e13010()

rax_43[0x36] = rax_48
void*** rax_49 = j_sub_140a82f30(0x5c8)
void*** rdi_5 = rax_49

if (rax_49 == 0)
    rdi_5 = nullptr
else
    rax_49[1].d = 1
    *(rax_49 + 0xc) = 1
    *rdi_5 = &data_142d8c580
    
    if (rdi_5 != -0x10)
        sub_140ee2d30(&rdi_5[2])

int64_t* var_1f48 = &rdi_5[2]
sub_14065fa30(&var_1f48, &rdi_5[2])
int64_t var_20f8_3 = 0x5b8
void var_20e5
void* var_1f38 = &var_20e5
void* rax_50
int128_t zmm1_5
rax_50, zmm1_5 = sub_1406936e0(rax_43, &var_2078, sub_140e23ed0(&rdi_5[2], "SButton"))
int64_t* var_1ca0
int64_t** rax_51 = sub_140696120(&var_1f48, &var_1ca0, rax_50, zmm1_5)
int64_t* rbx_14 = rax_51[1]

if (rbx_14 != 0)
    rbx_14[1].d += 1

void var_1b20

if (arg1 + 0x340 == &var_1b20)
label_140f3d5bb:
    
    if (rbx_14 != 0)
        rbx_14[1].d -= 1
        
        if (rbx_14[1].d == 1)
            (**rbx_14)(rbx_14)
            int32_t temp17_1 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*rbx_14 + 8))(rbx_14, 1)
else
    *(arg1 + 0x340) = *rax_51
    int64_t* rdi_6 = *(arg1 + 0x348)
    
    if (rbx_14 == rdi_6)
        goto label_140f3d5bb
    
    *(arg1 + 0x348) = rbx_14
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t temp21_1 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*rdi_6 + 8))(rdi_6, 1)

int64_t* var_1c98

if (var_1c98 != 0)
    var_1c98[1].d -= 1
    
    if (var_1c98[1].d == 1)
        (**var_1c98)(var_1c98)
        int32_t temp20_1 = *(var_1c98 + 0xc)
        *(var_1c98 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*var_1c98 + 8))(var_1c98, 1)

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t temp23_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*rdi_5)[1](rdi_5, 1)

sub_1406905f0(&var_778)
int64_t* var_1c88

if (var_1c88 != 0)
    var_1c88[1].d -= 1
    
    if (var_1c88[1].d == 1)
        (**var_1c88)(var_1c88)
        int32_t temp25_1 = *(var_1c88 + 0xc)
        *(var_1c88 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*var_1c88 + 8))(var_1c88, 1)

if (rax_41 != 0)
    rax_41[1].d -= 1
    
    if (rax_41[1].d == 1)
        (**rax_41)(rax_41)
        int32_t temp26_1 = *(rax_41 + 0xc)
        *(rax_41 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*rax_41)[1](rax_41, 1)

sub_140e536f0(&var_11d8)
sub_140745b20(&var_1f28)
sub_140745b20(&var_1d00)
sub_140745b20(&var_1ae0)
sub_140745b20(&var_1e20)
sub_1405970a0(&var_1e40)
sub_1405970a0(&var_1b60)
void var_1b48
int64_t* rax_63 = _vfprintf_p_l(&var_1b48, u"Close", u"WindowTitleBar")
int64_t var_1e70 = *rax_63
void* rcx_109 = rax_63[1]
void* var_1e68 = rcx_109

if (rcx_109 != 0)
    *(rcx_109 + 8) += 1

int32_t var_1e60 = rax_63[2].d
char var_1e58 = 1
var_2078 = sub_140f46e80
int64_t var_1e50 = 0
int32_t var_1e48 = 0
var_2070.d = 0
int64_t var_2010
int128_t zmm6_3 = sub_140b58170(&var_2010, "NoBorder", 1)
int128_t zmm0_4 = var_2078.o
var_2088 = sub_140f2d6d0
var_2080.d = 0
int128_t zmm1_6 = var_2088.o
int64_t var_1ac0 = 0
int32_t var_1ab8 = 0
int64_t var_1cd8 = 0
int32_t var_1cd0 = 0
char r13 = *(arg1 + 0x32a)
int64_t var_1ee0 = 0
int32_t var_1ed8 = 0
int128_t var_1c68 = zmm1_6
int32_t var_1ad0 = 1
char var_1acc = 1
char var_1ac8 = 1
int128_t var_1cf0 = zmm6_3
char var_1ce0 = 1
char var_1ee8 = r13
char var_1ee7 = 1
int128_t var_1c78 = zmm0_4
void var_fc0
void* rax_66 = sub_140e48870(sub_140e4fb70(&var_fc0), arg1, &var_1c78)
sub_14065da90(rax_66 + 0x160, &var_1e70)
*(rax_66 + 0x178) = var_1e58
sub_140692f90(rax_66 + 0x180, &var_1e50)
void*** rax_67 = sub_140e48c50()
void*** var_1ef8 = rax_67
void* var_1f00 = &rax_67[2]
sub_140918950(&var_1f00, &rax_67[2])
int64_t var_20f8_4 = 0x3a8
void var_20e4
void* var_1ef0 = &var_20e4
void* var_1c48
void** rax_68 = sub_140e56930(&var_1f00, &var_1c48, rax_66, sub_140e23ed0(&rax_67[2], "SImage"))
void* var_1dd0 = *rax_68
void* rcx_120 = rax_68[1]
void* var_1dc8 = rcx_120

if (rcx_120 != 0)
    *(rcx_120 + 8) += 1

int64_t* rsi_3 = data_143e243c8
void var_3e8
int64_t* rax_69
int128_t zmm6_4
rax_69, zmm6_4 = sub_14068cc20(&var_3e8)
rax_69[0x68].b = 0
rax_69[0xc].b = r13
*(rax_69 + 0x61) = 1
sub_140692f90(&rax_69[0xd], &var_1ee0)
rax_69[0x3b].b = 1
*(rax_69 + 0x1c8) = zmm6_4
sub_140692f90(&rax_69[0x3c], &var_1cd8)
void* rax_70 = sub_140e49330(rax_69, arg1, &var_1c68)

if (&var_1ad0 != rax_70 + 0x40)
    *(rax_70 + 0x40) = 1
    *(rax_70 + 0x44) = 1

*(rax_70 + 0x48) = 1
sub_1407473e0(rax_70 + 0x50, &var_1ac0)
int64_t rbx_21 = *rsi_3
void var_1be8
int64_t* rax_71 = sub_140e1ad30(&var_1be8, var_2010, nullptr)
int64_t rax_72 = (*(rbx_21 + 0x88))(rsi_3, data_143e243e8, *rax_71)

if (rax_72 == 0)
    rax_72 = sub_140e13010()

*(rax_70 + 0x1b0) = rax_72
void*** rax_73 = sub_140688970()
void*** var_1f10 = rax_73
int64_t* var_1f18 = &rax_73[2]
sub_14065fa30(&var_1f18, &rax_73[2])
int64_t var_20f8_5 = 0x5b8
void var_20e3
void* var_1f08 = &var_20e3
void* rax_74
int128_t zmm1_9
rax_74, zmm1_9 = sub_1406936e0(rax_70, &var_1dd0, sub_140e23ed0(&rax_73[2], "SButton"))
int64_t* var_1c58
int64_t** rax_75
int128_t zmm6_5
rax_75, zmm6_5 = sub_140696120(&var_1f18, &var_1c58, rax_74, zmm1_9)
int64_t* rbx_23 = rax_75[1]
int64_t* rcx_133 = *rax_75
int64_t* var_2068 = rcx_133
int64_t* var_2060 = rbx_23

if (rbx_23 != 0)
    rbx_23[1].d += 1

if (arg1 + 0x350 != &var_2068)
    *(arg1 + 0x350) = rcx_133
    var_2068 = nullptr
    sub_14066a200(arg1 + 0x358, &var_2060)
    rbx_23 = var_2060

if (rbx_23 != 0)
    rbx_23[1].d -= 1
    
    if (rbx_23[1].d == 1)
        (**rbx_23)(rbx_23)
        int32_t temp29_1 = *(rbx_23 + 0xc)
        *(rbx_23 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*rbx_23 + 8))(rbx_23, 1)

int64_t* var_1c50

if (var_1c50 != 0)
    var_1c50[1].d -= 1
    
    if (var_1c50[1].d == 1)
        (**var_1c50)(var_1c50)
        int32_t temp31_1 = *(var_1c50 + 0xc)
        *(var_1c50 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*var_1c50 + 8))(var_1c50, 1)

sub_140669d70(&var_1f18)
sub_1406905f0(&var_3e8)
int64_t* var_1c40

if (var_1c40 != 0)
    var_1c40[1].d -= 1
    
    if (var_1c40[1].d == 1)
        (**var_1c40)(var_1c40)
        int32_t temp32_1 = *(var_1c40 + 0xc)
        *(var_1c40 + 0xc) -= 1
        
        if (temp32_1 == 1)
            (*(*var_1c40 + 8))(var_1c40, 1)

sub_140597060(&var_1f00)
sub_140e536f0(&var_fc0)
sub_140745b20(&var_1ee0)
sub_140745b20(&var_1cd8)
sub_140745b20(&var_1ac0)
sub_140745b20(&var_1e50)
sub_1405970a0(&var_1e70)
sub_1405970a0(&var_1b48)
char rbx_26 = data_1439ae520
int64_t* r13_1 = *(arg1 + 0x358)
int64_t rax_82 = *(arg1 + 0x350)
char var_1fa8 = rbx_26
char var_1fa7 = 1
int64_t var_1fa0 = 0
int32_t var_1f98 = 0
char var_1cb8 = 1
int64_t var_1cb0 = 0
int32_t var_1ca8 = 0
char var_1fc0 = rbx_26
char var_1fbf = 1
int64_t var_1fb8 = 0
int32_t var_1fb0 = 0
int128_t var_1cc8 = zmm6_5

if (r13_1 != 0)
    r13_1[1].d += 1

int64_t var_1dc0 = rax_82
int64_t* var_1db8 = r13_1

if (r13_1 != 0)
    r13_1[1].d += 1

void*** rax_83 = j_sub_140a82f30(0x88)
void*** rsi_4 = rax_83

if (rax_83 == 0)
    rsi_4 = nullptr
else
    sub_14068e490(rax_83)
    *rsi_4 = &data_142d8add0

int64_t* r12_2 = *(arg1 + 0x348)

if (r12_2 != 0)
    r12_2[1].d += 1

int64_t* var_1d50 = *(arg1 + 0x340)
int64_t* var_1d48 = r12_2

if (r12_2 != 0)
    r12_2[1].d += 1

void*** rax_85 = j_sub_140a82f30(0x88)
var_20d8 = rax_85

if (rax_85 == 0)
    var_20d8 = nullptr
else
    sub_14068e490(rax_85)
    *rax_85 = &data_142d8add0

int64_t* r15_1 = *(arg1 + 0x338)

if (r15_1 != 0)
    r15_1[1].d += 1

int64_t* var_1d80 = *(arg1 + 0x330)
int64_t* var_1d78 = r15_1

if (r15_1 != 0)
    r15_1[1].d += 1

void*** rax_87 = j_sub_140a82f30(0x88)
var_20d0 = rax_87

if (rax_87 == 0)
    var_20d0 = nullptr
else
    sub_14068e490(rax_87)
    *rax_87 = &data_142d8add0

void var_1388
int64_t* rax_88 = sub_14068d420(&var_1388)
rax_88[0xf].b = rbx_26
*(rax_88 + 0x79) = 1
sub_1407473e0(&rax_88[0x10], &var_1fa0)
void*** rax_89 = sub_140e91f70()
void*** var_1e80 = rax_89
void* var_1e88 = &rax_89[2]
sub_14065fa30(&var_1e88, &rax_89[2])
int64_t var_20f8_6 = 0x2d8
void var_20e2
void* var_1e78 = &var_20e2
int128_t zmm6_6 = sub_140e23ed0(&rax_89[2], "SHorizontalBox")
void* rax_91 = sub_140693860(sub_140698b50(rsi_4), &var_1dc0)
void* rax_93 = sub_140693860(sub_140698b50(var_20d8), &var_1d50)
void* rax_95
int128_t zmm1_10
rax_95, zmm1_10 = sub_140693860(sub_140698b50(var_20d0), &var_1d80)
void* var_1bf8
void** rax_99 = sub_140696920(&var_1e88, &var_1bf8, 
    sub_1406938c0(sub_1406938c0(sub_1406938c0(rax_88, rax_95), rax_93), rax_91), zmm1_10)
void* var_1d60 = *rax_99
void* rcx_169 = rax_99[1]
void* var_1d58 = rcx_169

if (rcx_169 != 0)
    *(rcx_169 + 8) += 1

void var_da8
int64_t* rax_100 = sub_14068c940(&var_da8)
rax_100[0xf].b = rbx_26
*(rax_100 + 0x79) = 1
sub_1407473e0(&rax_100[0x10], &var_1fb8)
rax_100[0x37].b = 1
*(rax_100 + 0x1a8) = zmm6_6
sub_140692f90(&rax_100[0x38], &var_1cb0)
void*** rax_101 = sub_140688920()
void*** var_1e98 = rax_101
void* var_1ea0 = &rax_101[2]
sub_14065fa30(&var_1ea0, &rax_101[2])
int64_t var_20f8_7 = 0x3c8
void var_20e1
void* var_1e90 = &var_20e1
void* rax_102
int128_t zmm1_12
rax_102, zmm1_12 = sub_1406937a0(rax_100, &var_1d60, sub_140e23ed0(&rax_101[2], "SBox"))
void* var_1c08
void** rax_103 = sub_140695d20(&var_1ea0, &var_1c08, rax_102, zmm1_12)
void* var_1d70 = *rax_103
void* rcx_178 = rax_103[1]
void* var_1d68 = rcx_178

if (rcx_178 != 0)
    *(rcx_178 + 8) += 1

void*** rax_104 = j_sub_140a82f30(0x88)
void*** rdi_14 = rax_104

if (rax_104 == 0)
    rdi_14 = nullptr
else
    sub_14068e490(rax_104)
    *rdi_14 = &data_142d8add0

rdi_14[4].w = 0x103
void*** rax_105 = sub_140e91f70()
void*** var_1eb0 = rax_105
void* var_1eb8 = &rax_105[2]
sub_14065fa30(&var_1eb8, &rax_105[2])
int64_t var_20f8_8 = 0x2d8
void var_20e0
void* var_1ea8 = &var_20e0
sub_140e23ed0(&rax_105[2], "SHorizontalBox")
void* rax_107 = sub_140693860(sub_140698b50(rdi_14), &var_1d70)
void var_1538
int64_t* rax_108
int128_t zmm1_13
rax_108, zmm1_13 = sub_14068d420(&var_1538)
void* var_1c18
void** rax_110 = sub_140696920(&var_1eb8, &var_1c18, sub_1406938c0(rax_108, rax_107), zmm1_13)
void* var_1db0 = *rax_110
void* rdx_64 = rax_110[1]
void* var_1da8 = rdx_64

if (rdx_64 != 0)
    *(rdx_64 + 8) += 1

void*** rax_111 = j_sub_140a82f30(0x88)
void*** rbx_30 = rax_111

if (rax_111 == 0)
    rbx_30 = nullptr
else
    sub_14068e490(rax_111)
    *rbx_30 = &data_142d8add0

void*** rax_112 = sub_140e92390()
void*** var_2050 = rax_112
void* var_2058 = &rax_112[2]
sub_14065fa30(&var_2058, &rax_112[2])
void var_20df
void* var_2048 = &var_20df
int64_t var_20f8_9 = 0x2d8
sub_140e23ed0(var_2058, "SVerticalBox")
void* rax_114 = sub_140693860(sub_140698b50(rbx_30), &var_1db0)
void var_16e8
int64_t* rax_115
int128_t zmm1_14
rax_115, zmm1_14 = sub_14068d420(&var_16e8)
void* rax_116 = sub_1406938c0(rax_115, rax_114)
void* var_1b98
void** rax_118 = sub_140696920(sub_140dd3250(&var_2058, arg1 + 0x360), &var_1b98, rax_116, zmm1_14)
int64_t* rsi_6 = rax_118[1]
void* var_1da0 = *rax_118
int64_t* var_1d98 = rsi_6

if (rsi_6 != 0)
    rsi_6[1].d += 1

void*** rax_119 = sub_140e258e0()
*(rax_119 + 0x24) = 0x103
void*** rax_120 = sub_140dd3900()
void*** var_1ec8 = rax_120
void* var_1ed0 = &rax_120[2]
sub_140918950(&var_1ed0, &rax_120[2])
int64_t var_20f8_10 = 0x2d0
void var_20de
void* var_1ec0 = &var_20de
sub_140e23ed0(&rax_120[2], "SOverlay")
void* rax_121 = sub_140de1aa0(rax_119, &var_1da0)
void* rax_123 = sub_140de1aa0(sub_140e258e0(), arg2 + 0x1d0)
void var_1898
int64_t* rax_124
int128_t zmm1_15
rax_124, zmm1_15 = sub_140dd5d30(&var_1898)
void* var_1c38
void** rax_127 = sub_140de49c0(&var_1ed0, &var_1c38, 
    sub_140de1c90(sub_140de1c90(rax_124, rax_123), rax_121), zmm1_15)
int64_t* rbx_36 = rax_127[1]
void* var_1d90 = *rax_127
int64_t* var_1d88 = rbx_36

if (rbx_36 != 0)
    rbx_36[1].d += 1

char rax_128 = *(arg2 + 0x1b8)
int128_t zmm0_5 = *(arg2 + 0x1a8)
int64_t var_1df8 = 0
int32_t var_1df0 = 0
sub_140692f90(&var_1df8, arg2 + 0x1c0)
*(arg1 + 0x2d8) = *(arg2 + 0x1a0)
*(arg1 + 0x2dc) = *(arg2 + 0x1a4)
*(arg1 + 0x2f0) = rax_128
*(arg1 + 0x2e0) = zmm0_5
sub_140692f90(arg1 + 0x2f8, &var_1df8)
sub_140745b20(&var_1df8)
sub_140f25b20(arg1 + 0x2b8, &var_1d90)

if (rbx_36 != 0)
    rbx_36[1].d -= 1
    
    if (rbx_36[1].d == 1)
        (**rbx_36)(rbx_36)
        int32_t temp35_1 = *(rbx_36 + 0xc)
        *(rbx_36 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*(*rbx_36 + 8))(rbx_36, 1)

int64_t* var_1c30

if (var_1c30 != 0)
    var_1c30[1].d -= 1
    
    if (var_1c30[1].d == 1)
        (**var_1c30)(var_1c30)
        int32_t temp36_1 = *(var_1c30 + 0xc)
        *(var_1c30 + 0xc) -= 1
        
        if (temp36_1 == 1)
            (*(*var_1c30 + 8))(var_1c30, 1)

sub_140597060(&var_1ed0)
int64_t var_16f8

if (var_16f8 != 0)
    sub_140a74f90(var_16f8)

sub_140ddea30(&var_1898)

if (rsi_6 != 0)
    rsi_6[1].d -= 1
    
    if (rsi_6[1].d == 1)
        (**rsi_6)(rsi_6)
        int32_t temp39_1 = *(rsi_6 + 0xc)
        *(rsi_6 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*(*rsi_6 + 8))(rsi_6, 1)

int64_t* var_1b90

if (var_1b90 != 0)
    var_1b90[1].d -= 1
    
    if (var_1b90[1].d == 1)
        (**var_1b90)(var_1b90)
        int32_t temp40_1 = *(var_1b90 + 0xc)
        *(var_1b90 + 0xc) -= 1
        
        if (temp40_1 == 1)
            (*(*var_1b90 + 8))(var_1b90, 1)

sub_140669d70(&var_2058)
int64_t var_1548

if (var_1548 != 0)
    sub_140a74f90(var_1548)

sub_140660250(&var_16e8)
int64_t* var_1c10

if (var_1c10 != 0)
    var_1c10[1].d -= 1
    
    if (var_1c10[1].d == 1)
        (**var_1c10)(var_1c10)
        int32_t temp42_1 = *(var_1c10 + 0xc)
        *(var_1c10 + 0xc) -= 1
        
        if (temp42_1 == 1)
            (*(*var_1c10 + 8))(var_1c10, 1)

sub_140669d70(&var_1eb8)
int64_t var_1398

if (var_1398 != 0)
    sub_140a74f90(var_1398)

sub_140660250(&var_1538)
int64_t* var_1c00

if (var_1c00 != 0)
    var_1c00[1].d -= 1
    
    if (var_1c00[1].d == 1)
        (**var_1c00)(var_1c00)
        int32_t temp45_1 = *(var_1c00 + 0xc)
        *(var_1c00 + 0xc) -= 1
        
        if (temp45_1 == 1)
            (*(*var_1c00 + 8))(var_1c00, 1)

sub_140669d70(&var_1ea0)
sub_140690290(&var_da8)
int64_t* var_1bf0

if (var_1bf0 != 0)
    var_1bf0[1].d -= 1
    
    if (var_1bf0[1].d == 1)
        (**var_1bf0)(var_1bf0)
        int32_t temp46_1 = *(var_1bf0 + 0xc)
        *(var_1bf0 + 0xc) -= 1
        
        if (temp46_1 == 1)
            (*(*var_1bf0 + 8))(var_1bf0, 1)

sub_140669d70(&var_1e88)
int64_t var_11e8

if (var_11e8 != 0)
    sub_140a74f90(var_11e8)

sub_140660250(&var_1388)

if (r15_1 != 0)
    r15_1[1].d -= 1
    
    if (r15_1[1].d == 1)
        (**r15_1)(r15_1)
        int32_t temp49_1 = *(r15_1 + 0xc)
        *(r15_1 + 0xc) -= 1
        
        if (temp49_1 == 1)
            (*(*r15_1 + 8))(r15_1, 1)

if (r12_2 != 0)
    r12_2[1].d -= 1
    
    if (r12_2[1].d == 1)
        (**r12_2)(r12_2)
        int32_t temp51_1 = *(r12_2 + 0xc)
        *(r12_2 + 0xc) -= 1
        
        if (temp51_1 == 1)
            (*(*r12_2 + 8))(r12_2, 1)

if (r13_1 != 0)
    r13_1[1].d -= 1
    
    if (r13_1[1].d == 1)
        (**r13_1)(r13_1)
        int32_t temp52_1 = *(r13_1 + 0xc)
        *(r13_1 + 0xc) -= 1
        
        if (temp52_1 == 1)
            (*(*r13_1 + 8))(r13_1, 1)

sub_140745b20(&var_1fb8)
sub_140745b20(&var_1cb0)
sub_140745b20(&var_1fa0)
int64_t* rcx_247 = *(arg1 + 0x360)
char var_1de8 = data_1439ae51d
int64_t var_1de0 = 0
int32_t var_1dd8 = 0
char var_1de7 = 1
sub_140e253b0(rcx_247, &var_1de8)
int64_t* result = sub_1407473e0(arg1 + 0x318, arg2 + 0x1e0)
__security_check_cookie(rax_1 ^ &var_2118)
return result
