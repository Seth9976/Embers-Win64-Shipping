// 函数: sub_140f30070
// 地址: 0x140f30070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_fe8
int64_t rax_1 = __security_cookie ^ &var_fe8
arg1[0x85] = *(arg2 + 0x1c0)
void* rax_3 = *(arg2 + 0x1b0)
void* rdx = *(arg2 + 0x1b8)
void* var_f58 = rdx

if (rdx == 0)
    var_f58 = rax_3 + 0x10

void* rcx_2 = arg2 + 0x290

if (*(arg2 + 0x2a8) == 0)
    rcx_2 = rax_3 + 0x3c0

void* rax_5 = arg2 + 0x2b0
*(arg1 + 0x3f8) = *rcx_2
arg1[0x81] = *(rcx_2 + 0x10)

if (*(rax_5 + 0x18) == 0)
    rax_5 = *(arg2 + 0x1b0) + 0x3d8

*(arg1 + 0x410) = *rax_5
arg1[0x84] = *(rax_5 + 0x10)
sub_1407473e0(&arg1[0x8e], arg2 + 0x258)
sub_1407473e0(&arg1[0x86], arg2 + 0x238)

if (arg2 + 0x248 != &arg1[0x90])
    int64_t* rcx_6
    
    if (*(arg2 + 0x250) != 0)
        rcx_6 = *(arg2 + 0x248)
    
    if (*(arg2 + 0x250) != 0 && rcx_6 != 0)
        (*(*rcx_6 + 0x40))(rcx_6, &arg1[0x90])
    else if (arg1[0x91].d != 0)
        int64_t* rcx_7 = arg1[0x90]
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7, 0)
            int64_t rcx_8 = arg1[0x90]
            
            if (rcx_8 != 0)
                arg1[0x90] = sub_140a84c80(rcx_8, 0, 0)
            
            arg1[0x91].d = 0

arg1[0x92].b = *(arg2 + 0x2d1)
arg1[0x93] = *(arg2 + 0x230)
int64_t* rbx_1 = *(arg2 + 0x270)
int64_t var_f30 = *(arg2 + 0x268)

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_f30 != &arg1[0x8c])
    uint128_t zmm1 = var_f30.o
    uint128_t var_d40_1 = zmm1
    var_f30.o = *(arg1 + 0x460)
    *(arg1 + 0x460) = zmm1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rdi = *(arg2 + 0x270)
uint128_t zmm0_1 = *(arg2 + 0x28c)
int64_t r15 = *(arg2 + 0x268)
void (* var_fa8)(int64_t* arg1, int64_t* arg2, int32_t arg3) = sub_140f59470
int64_t* (* var_f98)(void* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4) = sub_140f45a20
int32_t var_ef0 = zmm0_1.d
int32_t var_e60 = 1
char var_e5c = 1
int64_t var_e58 = 0
int32_t var_e50 = 0
int32_t var_fa0 = 0
int32_t var_f90 = 0
char var_eec = 1
int64_t var_ee8 = 0
int32_t var_ee0 = 0

if (rdi != 0)
    rdi[1].d += 1

int64_t rbx_2 = *(arg2 + 0x230)
void var_7a8
int64_t* rax_15 = sub_140f1e240(&var_7a8)
int128_t var_d78 = var_f98.o
rax_15[0x3e] = rbx_2
int64_t* var_f78
sub_1407473e0(&rax_15[0x34], sub_140e90170(&var_f78, arg1, &var_d78))
int32_t var_f70
int64_t* rax_18

if (var_f70 == 0)
    rax_18 = var_f78
label_140f30358:
    
    if (rax_18 != 0)
        sub_140a74f90(rax_18)
else
    int64_t* rcx_15 = var_f78
    
    if (rcx_15 != 0)
        (*(*rcx_15 + 0x38))(rcx_15, 0)
        rax_18 = var_f78
        
        if (rax_18 != 0)
            rax_18 = sub_140a84c80(rax_18, 0, 0)
            var_f78 = rax_18
        
        int32_t var_f70_1 = 0
        goto label_140f30358
int128_t var_da8 = var_fa8.o
int64_t* var_f88
sub_1407473e0(&rax_15[0x48], sub_140f1b730(&var_f88, arg1, &var_da8))
int32_t var_f80
int64_t* rax_21

if (var_f80 == 0)
    rax_21 = var_f88
label_140f303d6:
    
    if (rax_21 != 0)
        sub_140a74f90(rax_21)
else
    int64_t* rcx_20 = var_f88
    
    if (rcx_20 != 0)
        (*(*rcx_20 + 0x38))(rcx_20, 0)
        rax_21 = var_f88
        
        if (rax_21 != 0)
            rax_21 = sub_140a84c80(rax_21, 0, 0)
            var_f88 = rax_21
        
        int32_t var_f80_1 = 0
        goto label_140f303d6
rax_15[0x4c].d = 1
*(rax_15 + 0x264) = 1

if (&var_e58 != &rax_15[0x4d] && rax_15[0x4e].d != 0)
    int64_t* rcx_23 = rax_15[0x4d]
    
    if (rcx_23 != 0)
        (*(*rcx_23 + 0x38))(rcx_23, 0)
        int64_t rcx_24 = rax_15[0x4d]
        
        if (rcx_24 != 0)
            rax_15[0x4d] = sub_140a84c80(rcx_24, 0, 0)
        
        rax_15[0x4e].d = 0

int64_t var_f20 = r15

if (rdi != 0)
    rdi[1].d += 1

if (&var_f20 != &rax_15[0x52])
    int128_t zmm1_1 = var_f20.o
    int128_t var_d30_1 = zmm1_1
    var_f20.o = *(rax_15 + 0x290)
    *(rax_15 + 0x290) = zmm1_1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp5_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp6_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rax_29 = j_sub_140a82f30(0x788)
int64_t* rbx_5 = rax_29

if (rax_29 == 0)
    rbx_5 = nullptr
else
    rax_29[1].d = 1
    *(rax_29 + 0xc) = 1
    *rbx_5 = &data_142ee74b8
    
    if (rbx_5 != -0x10)
        sub_140f1d7d0(&rbx_5[2], 0)

char* (* var_e78)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = &rbx_5[2]
sub_140918950(&var_e78, &rbx_5[2])
int64_t var_fc8 = 0x778
void var_fb8
void* var_e68 = &var_fb8
int128_t zmm1_2 = sub_140e23ed0(&rbx_5[2], "SComboListType")

if (rbx_5 != 0)
    rbx_5[1].d += 1

void var_d50

if (&arg1[0x8a] == &var_d50)
label_140f30595:
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp8_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
else
    arg1[0x8a] = &rbx_5[2]
    int64_t* rdi_2 = arg1[0x8b]
    
    if (rbx_5 == rdi_2)
        goto label_140f30595
    
    arg1[0x8b] = rbx_5
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp10_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

char* (* var_d88)(void* arg1, char* arg2, int512_t arg3 @ zmm1)
char* (** rax_34)(void* arg1, char* arg2, int512_t arg3 @ zmm1) =
    sub_140f267a0(&var_e78, &var_d88, rax_15, zmm1_2)
void* rdx_10 = rax_34[1]
char* (* var_f48)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = *rax_34
void* var_f40 = rdx_10

if (rdx_10 != 0)
    *(rdx_10 + 8) += 1

void var_d20
int64_t* rax_35 = sub_14068c940(&var_d20)
rax_35[0x4b].d = var_ef0
*(rax_35 + 0x25c) = 1
sub_1407473e0(&rax_35[0x4c], &var_ee8)
void*** rax_36 = j_sub_140a82f30(0x3d8)
void*** rdi_3 = rax_36

if (rax_36 == 0)
    rdi_3 = nullptr
else
    rax_36[1].d = 1
    *(rax_36 + 0xc) = 1
    *rdi_3 = &data_142d8c570
    
    if (rdi_3 != -0x10)
        sub_140f20750(&rdi_3[2])

void* var_e90 = &rdi_3[2]
sub_14065fa30(&var_e90, &rdi_3[2])
int64_t var_fc8_1 = 0x3c8
void var_fb7
void* var_e80 = &var_fb7
void* rax_37
int128_t zmm1_4
rax_37, zmm1_4 = sub_1406937a0(rax_35, &var_f48, sub_140e23ed0(&rdi_3[2], "SBox"))
void* var_d98
void** rax_38 = sub_140695d20(&var_e90, &var_d98, rax_37, zmm1_4)
int64_t* r15_1 = rax_38[1]
void* rcx_44 = *rax_38

if (r15_1 != 0)
    r15_1[1].d += 1

int64_t* var_d90

if (var_d90 != 0)
    var_d90[1].d -= 1
    
    if (var_d90[1].d == 1)
        (**var_d90)(var_d90)
        int32_t temp13_1 = *(var_d90 + 0xc)
        *(var_d90 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_d90 + 8))(var_d90, 1)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp15_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*rdi_3)[1](rdi_3, 1)

sub_140690290(&var_d20)
int64_t* var_d80

if (var_d80 != 0)
    var_d80[1].d -= 1
    
    if (var_d80[1].d == 1)
        (**var_d80)(var_d80)
        int32_t temp17_1 = *(var_d80 + 0xc)
        *(var_d80 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_d80 + 8))(var_d80, 1)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp18_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

sub_140f24060(&var_7a8)
sub_140745b20(&var_ee8)
sub_140745b20(&var_e58)
int64_t* rsi_2 = *(arg2 + 0x1a8)
void* rax_47 = *(arg2 + 0x1a0)
void* var_f38 = rax_47

if (rsi_2 != 0)
    rsi_2[1].d += 1
    rax_47 = *(arg2 + 0x1a0)

if (rax_47 == data_143e244b0)
    int128_t zmm0_6 = data_14399f5f0
    char var_e00_1 = 0
    char var_de8_1 = 1
    int64_t var_de0 = 0
    int32_t var_dd8_1 = 0
    int128_t var_e10 = zmm0_6
    int128_t var_df8_1 = zx.o(0)
    void var_d68
    int64_t* rax_48 = _vfprintf_p_l(&var_d68, u"No Content Provided", u"SComboBox")
    int64_t var_ed8 = *rax_48
    int64_t* rcx_59 = rax_48[1]
    
    if (rcx_59 != 0)
        rcx_59[1].d += 1
    
    int32_t var_ec8_1 = rax_48[2].d
    char var_ec0_1 = 1
    int64_t var_eb8 = 0
    int32_t var_eb0_1 = 0
    void var_488
    int64_t* rax_50 = sub_14068d9d0(&var_488)
    sub_14065da90(&rax_50[0x34], &var_ed8)
    rax_50[0x37].b = var_ec0_1
    sub_140692f90(&rax_50[0x38], &var_eb8)
    sub_140693390(&rax_50[0x4c], &var_e10)
    rax_50[0x51].b = var_de8_1
    sub_140692f90(&rax_50[0x52], &var_de0)
    void*** rax_51 = j_sub_140a82f30(0x7a8)
    void*** rbx_11 = rax_51
    
    if (rax_51 == 0)
        rbx_11 = nullptr
    else
        rax_51[1].d = 1
        *(rax_51 + 0xc) = 1
        *rbx_11 = &data_142d8b060
        
        if (rbx_11 != -0x10)
            sub_140f66da0(&rbx_11[2])
    
    var_f38 = &rbx_11[2]
    void* var_e48 = &rbx_11[2]
    sub_14065fa30(&var_e48, &rbx_11[2])
    var_fc8_1 = 0x798
    void var_fb6
    void* var_e38_1 = &var_fb6
    int128_t zmm1_5 = sub_140e23ed0(&rbx_11[2], "STextBlock")
    
    if (rbx_11 != 0)
        rbx_11[1].d += 1
    
    void*** rdi_5 = rsi_2
    
    if (rbx_11 != rsi_2)
        rsi_2 = rbx_11
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp24_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp24_1 == 1)
                    (*rdi_5)[1](rdi_5, 1)
    else if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t temp23_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*rbx_11)[1](rbx_11, 1)
    
    void* var_dd0
    sub_140697520(&var_e48, &var_dd0, rax_50, zmm1_5)
    int64_t* var_dc8
    
    if (var_dc8 != 0)
        var_dc8[1].d -= 1
        
        if (var_dc8[1].d == 1)
            (**var_dc8)(var_dc8)
            int32_t temp27_1 = *(var_dc8 + 0xc)
            *(var_dc8 + 0xc) -= 1
            
            if (temp27_1 == 1)
                (*(*var_dc8 + 8))(var_dc8, 1)
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t temp28_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (temp28_1 == 1)
                (*rbx_11)[1](rbx_11, 1)
    
    sub_1406913d0(&var_488)
    sub_140745b20(&var_eb8)
    
    if (rcx_59 != 0)
        rcx_59[1].d -= 1
        
        if (rcx_59[1].d == 1)
            (**rcx_59)(rcx_59)
            int32_t rax_61 = *(rcx_59 + 0xc)
            *(rcx_59 + 0xc) -= 1
            
            if (rax_61 == 1)
                (*(*rcx_59 + 8))(rcx_59, 1)
    
    int64_t* var_d60
    
    if (var_d60 != 0)
        var_d60[1].d -= 1
        
        if (var_d60[1].d == 1)
            (**var_d60)(var_d60)
            int32_t rdi_6 = *(var_d60 + 0xc)
            *(var_d60 + 0xc) -= 1
            
            if (rdi_6 == 1)
                (*(*var_d60 + 8))(var_d60, zx.q(rdi_6))
    
    sub_140745b20(&var_de0)
    int64_t* rbx_16 = var_df8_1:8.q
    
    if (rbx_16 != 0)
        rbx_16[1].d -= 1
        
        if (rbx_16[1].d == 1)
            (**rbx_16)(rbx_16)
            int32_t temp33_1 = *(rbx_16 + 0xc)
            *(rbx_16 + 0xc) -= 1
            
            if (temp33_1 == 1)
                (*(*rbx_16 + 8))(rbx_16, 1)

var_f40.d = 0
var_f48 = sub_140f51a30

if (rsi_2 != 0)
    rsi_2[1].d += 1

char rdi_8 = *(arg2 + 0x289)
char var_fb4
char rbx_17

if (rdi_8 == 0)
    rbx_17 = var_fb4
else
    rbx_17 = *(arg2 + 0x288)

void var_a80
int64_t* rax_68 = sub_140e936b0(&var_a80)
rax_68[0x34] = rax_3 + 8
rax_68[0x35] = var_f58

if (&var_fb4 != &rax_68[0x5a])
    if (*(rax_68 + 0x2d1) != 0)
        *(rax_68 + 0x2d1) = 0
    
    if (rdi_8 != 0)
        rax_68[0x5a].b = rbx_17
        *(rax_68 + 0x2d1) = 1

void* var_f10 = var_f38

if (rsi_2 != 0)
    rsi_2[1].d += 1

if (&var_f10 != &rax_68[0x36])
    var_f10.o = *(rax_68 + 0x1b0)
    *(rax_68 + 0x1b0) = var_f10.o

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t temp25_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)

void* var_f00 = rcx_44

if (r15_1 != 0)
    r15_1[1].d += 1

if (&var_f00 != &rax_68[0x38])
    var_f00.o = *(rax_68 + 0x1c0)
    *(rax_68 + 0x1c0) = var_f00.o

if (r15_1 != 0)
    r15_1[1].d -= 1
    
    if (r15_1[1].d == 1)
        (**r15_1)(r15_1)
        int32_t temp30_1 = *(r15_1 + 0xc)
        *(r15_1 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*(*r15_1 + 8))(r15_1, 1)

*(rax_68 + 0x201) = *(arg2 + 0x2d0)
*(rax_68 + 0x288) = *(arg2 + 0x1c8)
rax_68[0x53].b = *(arg2 + 0x1d8)
sub_140692f90(&rax_68[0x54], arg2 + 0x1e0)
sub_140693390(&rax_68[0x41], arg2 + 0x1f0)
rax_68[0x46].b = *(arg2 + 0x218)
sub_140692f90(&rax_68[0x47], arg2 + 0x220)
int128_t var_db8 = var_f48.o
int64_t* var_f68
sub_1407473e0(&rax_68[0x3c], sub_140dd1ec0(&var_f68, arg1, &var_db8))
int32_t var_f60
int64_t* rax_83

if (var_f60 == 0)
    rax_83 = var_f68
label_140f30d15:
    
    if (rax_83 != 0)
        sub_140a74f90(rax_83)
else
    int64_t* rcx_100 = var_f68
    
    if (rcx_100 != 0)
        (*(*rcx_100 + 0x38))(rcx_100, 0)
        rax_83 = var_f68
        
        if (rax_83 != 0)
            rax_83 = sub_140a84c80(rax_83, 0, 0)
            var_f68 = rax_83
        
        int32_t var_f60_1 = 0
        goto label_140f30d15
rax_68[0x40].b = *(arg2 + 0x2d2)
sub_140eedf70(arg1, rax_68)
sub_140e979e0(&var_a80)

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t temp35_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)

int64_t* rbx_20 = arg1[0x8b]
void (* rcx_107)(int64_t* arg1, int64_t* arg2, int32_t arg3) = arg1[0x8a]

if (rbx_20 != 0)
    *(rbx_20 + 0xc) += 1

var_fa8 = rcx_107
int64_t* rcx_108 = rbx_20
var_fa0.q = rbx_20

if (rbx_20 != 0)
    *(rbx_20 + 0xc) += 1

if (&var_fa8 != &arg1[0x77])
    var_fa8.o = *(arg1 + 0x3b8)
    rcx_108 = var_fa0.q
    *(arg1 + 0x3b8) = var_fa8.o

if (rcx_108 != 0)
    int32_t temp36_1 = *(rcx_108 + 0xc)
    *(rcx_108 + 0xc) -= 1
    
    if (temp36_1 == 1)
        (*(*rcx_108 + 8))(rcx_108, 1)

if (rbx_20 != 0)
    int32_t temp37_1 = *(rbx_20 + 0xc)
    *(rbx_20 + 0xc) -= 1
    
    if (temp37_1 == 1)
        (*(*rbx_20 + 8))(rbx_20, 1)

int64_t* rbx_21 = *(arg2 + 0x280)
var_f98 = *(arg2 + 0x278)
var_f90.q = rbx_21

if (rbx_21 != 0)
    rbx_21[1].d += 1

int64_t* (** result)(void* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4) = &var_f98

if (&var_f98 != &arg1[0x88])
    var_f98.o = *(arg1 + 0x440)
    rbx_21 = var_f90.q
    *(arg1 + 0x440) = var_f98.o

int64_t r8_9

if (rbx_21 != 0)
    rbx_21[1].d -= 1
    
    if (rbx_21[1].d == 1)
        result, r8_9 = (**rbx_21)(rbx_21)
        int32_t temp39_1 = *(rbx_21 + 0xc)
        *(rbx_21 + 0xc) -= 1
        
        if (temp39_1 == 1)
            result, r8_9 = (*(*rbx_21 + 8))(rbx_21, 1)

int64_t rdi_10 = arg1[0x88]

if (rdi_10 != 0)
    int64_t* rbx_22 = arg1[0x89]
    
    if (rbx_22 != 0)
        rbx_22[1].d += 1
    
    int64_t* rcx_113 = arg1[0x8a] + 0x4e8
    int64_t var_e20 = rdi_10
    int64_t* var_e18_1 = rbx_22
    
    if (rbx_22 != 0)
        rbx_22[1].d += 1
    
    r8_9.b = 1
    (*(*rcx_113 + 0x28))(rcx_113, &var_e20, r8_9, 0, var_fc8_1)
    int64_t var_e30 = rdi_10
    int64_t* var_e28_1 = rbx_22
    
    if (rbx_22 != 0)
        rbx_22[1].d += 1
    
    result = sub_140ed5b90(arg1[0x8a], &var_e30, 0)
    
    if (rbx_22 != 0)
        rbx_22[1].d -= 1
        
        if (rbx_22[1].d == 1)
            result = (**rbx_22)(rbx_22)
            int32_t temp45_1 = *(rbx_22 + 0xc)
            *(rbx_22 + 0xc) -= 1
            
            if (temp45_1 == 1)
                result = (*(*rbx_22 + 8))(rbx_22, 1)

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        result = (**rsi_2)(rsi_2)
        int32_t temp42_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp42_1 == 1)
            result = (*(*rsi_2 + 8))(rsi_2, 1)

if (r15_1 != 0)
    r15_1[1].d -= 1
    
    if (r15_1[1].d == 1)
        result = (**r15_1)(r15_1)
        int32_t temp43_1 = *(r15_1 + 0xc)
        *(r15_1 + 0xc) -= 1
        
        if (temp43_1 == 1)
            result = (*(*r15_1 + 8))(r15_1, 1)

__security_check_cookie(rax_1 ^ &var_fe8)
return result
