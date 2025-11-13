// 函数: sub_141b99e10
// 地址: 0x141b99e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_fa8
int64_t rax_1 = __security_cookie ^ &var_fa8
arg1[0x85] = *(arg2 + 0x1c0)
void* rax_3 = *(arg2 + 0x1b0)
void* rdx = *(arg2 + 0x1b8)
void* var_f18 = rdx

if (rdx == 0)
    var_f18 = rax_3 + 0x10

void* rcx_2 = arg2 + 0x288

if (*(arg2 + 0x2a0) == 0)
    rcx_2 = rax_3 + 0x3c0

void* rax_5 = arg2 + 0x2a8
*(arg1 + 0x3f8) = *rcx_2
arg1[0x81] = *(rcx_2 + 0x10)

if (*(rax_5 + 0x18) == 0)
    rax_5 = *(arg2 + 0x1b0) + 0x3d8

*(arg1 + 0x410) = *rax_5
arg1[0x84] = *(rax_5 + 0x10)
sub_1407473e0(&arg1[0x8d], arg2 + 0x258)
sub_1407473e0(&arg1[0x86], arg2 + 0x238)

if (arg2 + 0x248 != &arg1[0x8f])
    int64_t* rcx_6
    
    if (*(arg2 + 0x250) != 0)
        rcx_6 = *(arg2 + 0x248)
    
    if (*(arg2 + 0x250) != 0 && rcx_6 != 0)
        (*(*rcx_6 + 0x40))(rcx_6, &arg1[0x8f])
    else if (arg1[0x90].d != 0)
        int64_t* rcx_7 = arg1[0x8f]
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7, 0)
            int64_t rcx_8 = arg1[0x8f]
            
            if (rcx_8 != 0)
                arg1[0x8f] = sub_140a84c80(rcx_8, 0, 0)
            
            arg1[0x90].d = 0

arg1[0x91].b = *(arg2 + 0x2c9)
arg1[0x92] = *(arg2 + 0x230)
int64_t* rbx_1 = *(arg2 + 0x270)
int64_t var_f08 = *(arg2 + 0x268)

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_f08 != &arg1[0x8b])
    uint128_t zmm1 = var_f08.o
    uint128_t var_d30_1 = zmm1
    var_f08.o = *(arg1 + 0x458)
    *(arg1 + 0x458) = zmm1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rdi = *(arg2 + 0x270)
uint128_t zmm0_1 = *(arg2 + 0x284)
int64_t r14 = *(arg2 + 0x268)
void (* var_f68)(int64_t* arg1, int64_t arg2, int32_t arg3) = sub_141bc4100
void** (* var_f58)(void* arg1, void** arg2, int64_t arg3, int64_t arg4) = sub_141ba8d80
int32_t var_ed8 = zmm0_1.d
int32_t var_e48 = 1
char var_e44 = 1
int64_t var_e40 = 0
int32_t var_e38 = 0
int32_t var_f60 = 0
int32_t var_f50 = 0
char var_ed4 = 1
int64_t var_ed0 = 0
int32_t var_ec8 = 0

if (rdi != 0)
    rdi[1].d += 1

int64_t rbx_2 = *(arg2 + 0x230)
void var_7a8
int64_t* rax_15 = sub_140f1e240(&var_7a8)
int128_t var_d78 = var_f58.o
rax_15[0x3e] = rbx_2
int64_t* var_f48
sub_1407473e0(&rax_15[0x34], sub_140e90290(&var_f48, arg1, &var_d78))
int32_t var_f40
int64_t* rax_18

if (var_f40 == 0)
    rax_18 = var_f48
label_141b9a0ec:
    
    if (rax_18 != 0)
        sub_140a74f90(rax_18)
else
    int64_t* rcx_15 = var_f48
    
    if (rcx_15 != 0)
        (*(*rcx_15 + 0x38))(rcx_15, 0)
        rax_18 = var_f48
        
        if (rax_18 != 0)
            rax_18 = sub_140a84c80(rax_18, 0, 0)
            var_f48 = rax_18
        
        int32_t var_f40_1 = 0
        goto label_141b9a0ec
int128_t var_dc8 = var_f68.o
int64_t* var_f38
sub_1407473e0(&rax_15[0x48], sub_140edf9f0(&var_f38, arg1, &var_dc8))
int32_t var_f30
int64_t* rax_21

if (var_f30 == 0)
    rax_21 = var_f38
label_141b9a16a:
    
    if (rax_21 != 0)
        sub_140a74f90(rax_21)
else
    int64_t* rcx_20 = var_f38
    
    if (rcx_20 != 0)
        (*(*rcx_20 + 0x38))(rcx_20, 0)
        rax_21 = var_f38
        
        if (rax_21 != 0)
            rax_21 = sub_140a84c80(rax_21, 0, 0)
            var_f38 = rax_21
        
        int32_t var_f30_1 = 0
        goto label_141b9a16a
rax_15[0x4c].d = 1
*(rax_15 + 0x264) = 1

if (&var_e40 != &rax_15[0x4d] && rax_15[0x4e].d != 0)
    int64_t* rcx_23 = rax_15[0x4d]
    
    if (rcx_23 != 0)
        (*(*rcx_23 + 0x38))(rcx_23, 0)
        int64_t rcx_24 = rax_15[0x4d]
        
        if (rcx_24 != 0)
            rax_15[0x4d] = sub_140a84c80(rcx_24, 0, 0)
        
        rax_15[0x4e].d = 0

int64_t var_ef8 = r14

if (rdi != 0)
    rdi[1].d += 1

if (&var_ef8 != &rax_15[0x52])
    int128_t zmm1_1 = var_ef8.o
    int128_t var_d40_1 = zmm1_1
    var_ef8.o = *(rax_15 + 0x290)
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

int64_t* rax_29 = j_sub_140a82f30(0x778)
int64_t* rbx_5 = rax_29

if (rax_29 == 0)
    rbx_5 = nullptr
else
    rax_29[1].d = 1
    *(rax_29 + 0xc) = 1
    *rbx_5 = &data_143084c50
    
    if (rbx_5 != -0x10)
        sub_141b790d0(&rbx_5[2], 0)

char* (* var_e60)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = &rbx_5[2]
sub_140918950(&var_e60, &rbx_5[2])
int64_t var_f88 = 0x768
void var_f78
void* var_e50 = &var_f78
int128_t zmm1_2 = sub_140e23ed0(&rbx_5[2], "SComboListType")

if (rbx_5 != 0)
    rbx_5[1].d += 1

void var_d50

if (&arg1[0x89] == &var_d50)
label_141b9a323:
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp8_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
else
    arg1[0x89] = &rbx_5[2]
    int64_t* rdi_2 = arg1[0x8a]
    
    if (rbx_5 == rdi_2)
        goto label_141b9a323
    
    arg1[0x8a] = rbx_5
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp10_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

char* (* var_da8)(void* arg1, char* arg2, int512_t arg3 @ zmm1)
char* (** rax_34)(void* arg1, char* arg2, int512_t arg3 @ zmm1) =
    sub_141b87ba0(&var_e60, &var_da8, rax_15, zmm1_2)
char* (* var_ee8)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = *rax_34
void* rcx_37 = rax_34[1]
void* var_ee0 = rcx_37

if (rcx_37 != 0)
    *(rcx_37 + 8) += 1

void var_d20
int64_t* rax_35 = sub_14068c940(&var_d20)
rax_35[0x4b].d = var_ed8
*(rax_35 + 0x25c) = 1

if (&var_ed0 != &rax_35[0x4c] && rax_35[0x4d].d != 0)
    int64_t* rcx_39 = rax_35[0x4c]
    
    if (rcx_39 != 0)
        (*(*rcx_39 + 0x38))(rcx_39, 0)
        int64_t rcx_40 = rax_35[0x4c]
        
        if (rcx_40 != 0)
            rax_35[0x4c] = sub_140a84c80(rcx_40, 0, 0)
        
        rax_35[0x4d].d = 0

void*** rax_38 = j_sub_140a82f30(0x3d8)
void*** rdi_3 = rax_38

if (rax_38 == 0)
    rdi_3 = nullptr
else
    rax_38[1].d = 1
    *(rax_38 + 0xc) = 1
    *rdi_3 = &data_142d8c570
    
    if (rdi_3 != -0x10)
        sub_140f20750(&rdi_3[2])

void* var_e78 = &rdi_3[2]
sub_14065fa30(&var_e78, &rdi_3[2])
int64_t var_f88_1 = 0x3c8
void var_f77
void* var_e68 = &var_f77
void* rax_39
int128_t zmm1_4
rax_39, zmm1_4 = sub_1406937a0(rax_35, &var_ee8, sub_140e23ed0(&rdi_3[2], "SBox"))
void* var_db8
void** rax_40 = sub_140695d20(&var_e78, &var_db8, rax_39, zmm1_4)
int64_t* r14_1 = rax_40[1]
void** (* rcx_46)(void* arg1, void** arg2, int64_t arg3, int64_t arg4) = *rax_40

if (r14_1 != 0)
    r14_1[1].d += 1

int64_t* var_db0

if (var_db0 != 0)
    var_db0[1].d -= 1
    
    if (var_db0[1].d == 1)
        (**var_db0)(var_db0)
        int32_t temp13_1 = *(var_db0 + 0xc)
        *(var_db0 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_db0 + 8))(var_db0, 1)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp15_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*rdi_3)[1](rdi_3, 1)

sub_140690290(&var_d20)
int64_t* var_da0

if (var_da0 != 0)
    var_da0[1].d -= 1
    
    if (var_da0[1].d == 1)
        (**var_da0)(var_da0)
        int32_t temp17_1 = *(var_da0 + 0xc)
        *(var_da0 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_da0 + 8))(var_da0, 1)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp18_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

sub_140f24060(&var_7a8)
sub_140745b20(&var_ed0)
sub_140745b20(&var_e40)
int64_t* rsi_2 = *(arg2 + 0x1a8)
void* rax_49 = *(arg2 + 0x1a0)
void* var_f10 = rax_49

if (rsi_2 != 0)
    rsi_2[1].d += 1
    rax_49 = *(arg2 + 0x1a0)

if (rax_49 == data_143e244b0)
    int128_t zmm0_6 = data_14399f5f0
    char var_df8_1 = 0
    char var_de0_1 = 1
    int64_t var_dd8 = 0
    int32_t var_dd0_1 = 0
    int128_t var_e08 = zmm0_6
    int128_t var_df0_1 = zx.o(0)
    void var_d68
    int64_t* rax_50 = _vfprintf_p_l(&var_d68, u"No Content Provided", u"SComboBox")
    int64_t var_ec0 = *rax_50
    int64_t* rcx_61 = rax_50[1]
    
    if (rcx_61 != 0)
        rcx_61[1].d += 1
    
    int32_t var_eb0_1 = rax_50[2].d
    char var_ea8_1 = 1
    int64_t var_ea0 = 0
    int32_t var_e98_1 = 0
    void var_488
    int64_t* rax_52 = sub_14068d9d0(&var_488)
    sub_14065da90(&rax_52[0x34], &var_ec0)
    rax_52[0x37].b = var_ea8_1
    sub_140692f90(&rax_52[0x38], &var_ea0)
    sub_140693390(&rax_52[0x4c], &var_e08)
    rax_52[0x51].b = var_de0_1
    sub_140692f90(&rax_52[0x52], &var_dd8)
    void*** rax_53 = j_sub_140a82f30(0x7a8)
    void*** rbx_12 = rax_53
    
    if (rax_53 == 0)
        rbx_12 = nullptr
    else
        rax_53[1].d = 1
        *(rax_53 + 0xc) = 1
        *rbx_12 = &data_142d8b060
        
        if (rbx_12 != -0x10)
            sub_140f66da0(&rbx_12[2])
    
    var_f10 = &rbx_12[2]
    void* var_e30 = &rbx_12[2]
    sub_14065fa30(&var_e30, &rbx_12[2])
    var_f88_1 = 0x798
    void var_f76
    void* var_e20_1 = &var_f76
    int128_t zmm1_5 = sub_140e23ed0(&rbx_12[2], "STextBlock")
    
    if (rbx_12 != 0)
        rbx_12[1].d += 1
    
    void*** rdi_5 = rsi_2
    
    if (rbx_12 != rsi_2)
        rsi_2 = rbx_12
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp24_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp24_1 == 1)
                    (*rdi_5)[1](rdi_5, 1)
    else if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12)
            int32_t temp23_1 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*rbx_12)[1](rbx_12, 1)
    
    void* var_d98
    sub_140697520(&var_e30, &var_d98, rax_52, zmm1_5)
    int64_t* var_d90
    
    if (var_d90 != 0)
        var_d90[1].d -= 1
        
        if (var_d90[1].d == 1)
            (**var_d90)(var_d90)
            int32_t temp27_1 = *(var_d90 + 0xc)
            *(var_d90 + 0xc) -= 1
            
            if (temp27_1 == 1)
                (*(*var_d90 + 8))(var_d90, 1)
    
    if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12)
            int32_t temp28_1 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (temp28_1 == 1)
                (*rbx_12)[1](rbx_12, 1)
    
    sub_1406913d0(&var_488)
    sub_140745b20(&var_ea0)
    
    if (rcx_61 != 0)
        rcx_61[1].d -= 1
        
        if (rcx_61[1].d == 1)
            (**rcx_61)(rcx_61)
            int32_t rax_63 = *(rcx_61 + 0xc)
            *(rcx_61 + 0xc) -= 1
            
            if (rax_63 == 1)
                (*(*rcx_61 + 8))(rcx_61, 1)
    
    int64_t* var_d60
    
    if (var_d60 != 0)
        var_d60[1].d -= 1
        
        if (var_d60[1].d == 1)
            (**var_d60)(var_d60)
            int32_t rdi_6 = *(var_d60 + 0xc)
            *(var_d60 + 0xc) -= 1
            
            if (rdi_6 == 1)
                (*(*var_d60 + 8))(var_d60, zx.q(rdi_6))
    
    sub_140745b20(&var_dd8)
    int64_t* rbx_17 = var_df0_1:8.q
    
    if (rbx_17 != 0)
        rbx_17[1].d -= 1
        
        if (rbx_17[1].d == 1)
            (**rbx_17)(rbx_17)
            int32_t temp33_1 = *(rbx_17 + 0xc)
            *(rbx_17 + 0xc) -= 1
            
            if (temp33_1 == 1)
                (*(*rbx_17 + 8))(rbx_17, 1)

var_ee0.d = 0
var_ee8 = sub_141bc0210

if (rsi_2 != 0)
    rsi_2[1].d += 1

char rdi_8 = *(arg2 + 0x281)
char var_f74
char rbx_18

if (rdi_8 == 0)
    rbx_18 = var_f74
else
    rbx_18 = *(arg2 + 0x280)

void var_a80
int64_t* rax_70 = sub_140e936b0(&var_a80)
rax_70[0x34] = rax_3 + 8
rax_70[0x35] = var_f18

if (&var_f74 != &rax_70[0x5a])
    if (*(rax_70 + 0x2d1) != 0)
        *(rax_70 + 0x2d1) = 0
    
    if (rdi_8 != 0)
        rax_70[0x5a].b = rbx_18
        *(rax_70 + 0x2d1) = 1

int64_t* rbx_19 = rsi_2
var_f68 = var_f10
var_f60.q = rbx_19

if (rsi_2 != 0)
    rsi_2[1].d += 1

if (&var_f68 != &rax_70[0x36])
    var_f68.o = *(rax_70 + 0x1b0)
    rbx_19 = var_f60.q
    *(rax_70 + 0x1b0) = var_f68.o

if (rbx_19 != 0)
    rbx_19[1].d -= 1
    
    if (rbx_19[1].d == 1)
        (**rbx_19)(rbx_19)
        int32_t temp25_1 = *(rbx_19 + 0xc)
        *(rbx_19 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*rbx_19 + 8))(rbx_19, 1)

int64_t* rbx_20 = r14_1
var_f58 = rcx_46
var_f50.q = rbx_20

if (r14_1 != 0)
    r14_1[1].d += 1

if (&var_f58 != &rax_70[0x38])
    var_f58.o = *(rax_70 + 0x1c0)
    rbx_20 = var_f50.q
    *(rax_70 + 0x1c0) = var_f58.o

if (rbx_20 != 0)
    rbx_20[1].d -= 1
    
    if (rbx_20[1].d == 1)
        (**rbx_20)(rbx_20)
        int32_t temp30_1 = *(rbx_20 + 0xc)
        *(rbx_20 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*(*rbx_20 + 8))(rbx_20, 1)

*(rax_70 + 0x201) = *(arg2 + 0x2c8)
*(rax_70 + 0x288) = *(arg2 + 0x1c8)
rax_70[0x53].b = *(arg2 + 0x1d8)
sub_140692f90(&rax_70[0x54], arg2 + 0x1e0)
sub_140693390(&rax_70[0x41], arg2 + 0x1f0)
rax_70[0x46].b = *(arg2 + 0x218)
sub_140692f90(&rax_70[0x47], arg2 + 0x220)
int128_t var_d88 = var_ee8.o
int64_t* var_f28
sub_1407473e0(&rax_70[0x3c], sub_140dd1ec0(&var_f28, arg1, &var_d88))
int32_t var_f20
int64_t* rax_85

if (var_f20 == 0)
    rax_85 = var_f28
label_141b9aad2:
    
    if (rax_85 != 0)
        sub_140a74f90(rax_85)
else
    int64_t* rcx_102 = var_f28
    
    if (rcx_102 != 0)
        (*(*rcx_102 + 0x38))(rcx_102, 0)
        rax_85 = var_f28
        
        if (rax_85 != 0)
            rax_85 = sub_140a84c80(rax_85, 0, 0)
            var_f28 = rax_85
        
        int32_t var_f20_1 = 0
        goto label_141b9aad2
rax_70[0x40].b = *(arg2 + 0x2ca)
sub_140eedf70(arg1, rax_70)
sub_140e979e0(&var_a80)

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t temp35_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)

int64_t var_e18 = arg1[0x89]
void* rax_90 = arg1[0x8a]
void* var_e10 = rax_90

if (rax_90 != 0)
    *(rax_90 + 0xc) += 1

int64_t* result
int64_t r8_9
result, r8_9 = sub_141be3ff0(arg1, &var_e18)
int64_t rbx_21 = *(arg2 + 0x278)
arg1[0x88] = rbx_21

if (rbx_21 != 0)
    int64_t* rcx_111 = arg1[0x89] + 0x4f8
    r8_9.b = 1
    (*(*rcx_111 + 0x28))(rcx_111, rbx_21, r8_9, 0, var_f88_1)
    int64_t* rcx_112 = arg1[0x89]
    rcx_112[0xdd] = rbx_21
    rcx_112[0xde].d = 0
    result = sub_140f89930(rcx_112)

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        result = (**rsi_2)(rsi_2)
        int32_t temp38_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp38_1 == 1)
            result = (*(*rsi_2 + 8))(rsi_2, 1)

if (r14_1 != 0)
    r14_1[1].d -= 1
    
    if (r14_1[1].d == 1)
        result = (**r14_1)(r14_1)
        int32_t temp39_1 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (temp39_1 == 1)
            result = (*(*r14_1 + 8))(r14_1, 1)

__security_check_cookie(rax_1 ^ &var_fa8)
return result
