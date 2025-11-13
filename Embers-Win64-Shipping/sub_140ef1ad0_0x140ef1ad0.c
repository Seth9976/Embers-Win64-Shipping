// 函数: sub_140ef1ad0
// 地址: 0x140ef1ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1010)
int128_t zmm6
int128_t var_48 = zmm6
void var_1048
int64_t rax_1 = __security_cookie ^ &var_1048
int64_t rcx = *(arg2 + 0x1a0)
*(arg1 + 0x4b8) = rcx
void var_d40

if (rcx == 0)
    sub_140e94440(&var_d40)
    int64_t var_ba0
    *(arg1 + 0x4b8) = var_ba0
    sub_140e97d60(&var_d40)
    rcx = *(arg1 + 0x4b8)

*(arg1 + 0x680) = rcx + 8
*(arg1 + 0x688) = rcx + 0x90
*(arg1 + 0x690) = rcx + 0x118
*(arg1 + 0x698) = rcx + 0x1a0
*(arg1 + 0x4e0) = *(arg2 + 0x4c0)
*(arg1 + 0x4f0) = *(arg2 + 0x4d0)
sub_140692f90(arg1 + 0x4f8, arg2 + 0x4d8)
sub_140d962e0(arg1 + 0x508, arg2 + 0x238)
*(arg1 + 0x558) = *(arg2 + 0x288)
sub_140692f90(arg1 + 0x560, arg2 + 0x290)
sub_140693390(arg1 + 0x570, arg2 + 0x2a0)
*(arg1 + 0x598) = *(arg2 + 0x2c8)
sub_140692f90(arg1 + 0x5a0, arg2 + 0x2d0)
sub_140693390(arg1 + 0x5b0, arg2 + 0x480)
*(arg1 + 0x5d8) = *(arg2 + 0x4a8)
sub_140692f90(arg1 + 0x5e0, arg2 + 0x4b0)
sub_140693390(arg1 + 0x5f0, arg2 + 0x2e0)
*(arg1 + 0x618) = *(arg2 + 0x308)
sub_140692f90(arg1 + 0x620, arg2 + 0x310)
sub_1407473e0(arg1 + 0x650, arg2 + 0x400)

if (arg2 + 0x420 != arg1 + 0x670)
    int64_t* rcx_14
    
    if (*(arg2 + 0x428) != 0)
        rcx_14 = *(arg2 + 0x420)
    
    if (*(arg2 + 0x428) != 0 && rcx_14 != 0)
        (*(*rcx_14 + 0x40))(rcx_14, arg1 + 0x670)
    else if (*(arg1 + 0x678) != 0)
        int64_t* rcx_15 = *(arg1 + 0x670)
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 0x38))(rcx_15, 0)
            int64_t rcx_16 = *(arg1 + 0x670)
            
            if (rcx_16 != 0)
                *(arg1 + 0x670) = sub_140a84c80(rcx_16, 0, 0)
            
            *(arg1 + 0x678) = 0

sub_1407473e0(arg1 + 0x660, arg2 + 0x410)
int64_t (* var_fc8)(void* arg1, int64_t arg2, int32_t arg3) = sub_140f0acf0
int64_t (* var_fb8)(void* arg1, int64_t arg2) = sub_140f0ac10
int64_t* (* var_1008)(void* arg1, int64_t* arg2) = sub_140efb570
int128_t* (* var_fd8)(void* arg1, int128_t* arg2) = sub_140efb720
int128_t* (* var_f38)(void* arg1, int128_t* arg2, int128_t arg3 @ zmm1) = sub_140efb600
int128_t* (* var_f48)(void* arg1, int128_t* arg2, int128_t arg3 @ zmm1) = sub_140efb510
int64_t (* var_f58)(void* arg1) = sub_140effda0
int32_t var_fc0 = 0
int32_t var_fb0 = 0
int32_t var_1000 = 0
int32_t var_fd0 = 0
int32_t var_ec0 = 0x3f800000
char var_ebc = 1
int64_t var_eb8 = 0
int32_t var_eb0 = 0
int128_t var_df0 = zx.o(0)
char var_de0 = 1
int64_t var_dd8 = 0
int32_t var_dd0 = 0
int32_t var_f30 = 0
int32_t var_f40 = 0
int32_t var_f50 = 0
char var_1018 = 0
char var_1016
char rax_15

if (*(arg2 + 0x54b) == 0)
    rax_15 = var_1016
else
    rax_15 = *(arg2 + 0x54a)
    var_1018 = 1

int64_t r13
r13.b = 0
char r12

if (*(arg2 + 0x549) == 0)
    r12 = var_1016
else
    r12 = *(arg2 + 0x548)
    r13.b = 1

int64_t* rax_16 = sub_14068cff0(&var_d40)
sub_14065da90(&rax_16[0x34], arg2 + 0x1a8)
rax_16[0x37].b = *(arg2 + 0x1c0)
sub_140692f90(&rax_16[0x38], arg2 + 0x1c8)
sub_14065da90(&rax_16[0x3a], arg2 + 0x1d8)
rax_16[0x3d].b = *(arg2 + 0x1f0)
sub_140692f90(&rax_16[0x3e], arg2 + 0x1f8)
sub_14065da90(&rax_16[0x40], arg2 + 0x208)
rax_16[0x43].b = *(arg2 + 0x220)
sub_140692f90(&rax_16[0x44], arg2 + 0x228)
int128_t var_fe8 = var_1008.o
int64_t* var_fa8
int64_t* rax_19 = sub_140edfb20(&var_fa8, arg1, &var_fe8)
void var_da8
sub_140d93b50(&var_da8)
char var_d58 = 1
int64_t var_d50 = 0
int32_t var_d48 = 0
sub_140692f90(&var_d50, rax_19)
sub_140693420(&rax_16[0x47], &var_da8)
rax_16[0x51].b = var_d58
sub_1407473e0(&rax_16[0x52], &var_d50)
sub_140745b20(&var_d50)
int64_t* var_d70

if (var_d70 != 0)
    var_d70[1].d -= 1
    
    if (var_d70[1].d == 1)
        (**var_d70)(var_d70)
        int32_t temp1_1 = *(var_d70 + 0xc)
        *(var_d70 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_d70 + 8))(var_d70, 1)

int32_t var_fa0
int64_t* rax_24

if (var_fa0 == 0)
    rax_24 = var_fa8
label_140ef1f8f:
    
    if (rax_24 != 0)
        sub_140a74f90(rax_24)
else
    int64_t* rcx_34 = var_fa8
    
    if (rcx_34 != 0)
        (*(*rcx_34 + 0x38))(rcx_34, 0)
        rax_24 = var_fa8
        
        if (rax_24 != 0)
            rax_24 = sub_140a84c80(rax_24, 0, 0)
            var_fa8 = rax_24
        
        int32_t var_fa0_1 = 0
        goto label_140ef1f8f
rax_16[0x68].b = *(arg2 + 0x320)
*(rax_16 + 0x341) = *(arg2 + 0x321)
sub_140692f90(&rax_16[0x69], arg2 + 0x328)
rax_16[0x6b].b = *(arg2 + 0x338)
*(rax_16 + 0x359) = *(arg2 + 0x339)
sub_140692f90(&rax_16[0x6c], arg2 + 0x340)
rax_16[0x6e].b = *(arg2 + 0x350)
*(rax_16 + 0x371) = *(arg2 + 0x351)
sub_140692f90(&rax_16[0x6f], arg2 + 0x358)
rax_16[0x71].b = *(arg2 + 0x368)
*(rax_16 + 0x389) = *(arg2 + 0x369)
sub_140692f90(&rax_16[0x72], arg2 + 0x370)
rax_16[0x74].b = *(arg2 + 0x380)
*(rax_16 + 0x3a1) = *(arg2 + 0x381)
sub_140692f90(&rax_16[0x75], arg2 + 0x388)
rax_16[0x77].b = *(arg2 + 0x398)
*(rax_16 + 0x3b9) = *(arg2 + 0x399)
sub_140692f90(&rax_16[0x78], arg2 + 0x3a0)
rax_16[0x7a].d = *(arg2 + 0x3b0)
*(rax_16 + 0x3d4) = *(arg2 + 0x3b4)
sub_140692f90(&rax_16[0x7b], arg2 + 0x3b8)
rax_16[0x7d].b = *(arg2 + 0x3c8)
*(rax_16 + 0x3e9) = *(arg2 + 0x3c9)
sub_140692f90(&rax_16[0x7e], arg2 + 0x3d0)
sub_1407473e0(&rax_16[0x80], arg2 + 0x3e0)

if (arg2 + 0x3f0 != &rax_16[0x92])
    int64_t* rcx_47
    
    if (*(arg2 + 0x3f8) != 0)
        rcx_47 = *(arg2 + 0x3f0)
    
    if (*(arg2 + 0x3f8) != 0 && rcx_47 != 0)
        (*(*rcx_47 + 0x40))(rcx_47, &rax_16[0x92])
    else if (rax_16[0x93].d != 0)
        int64_t* rcx_48 = rax_16[0x92]
        
        if (rcx_48 != 0)
            (*(*rcx_48 + 0x38))(rcx_48, 0)
            int64_t rcx_49 = rax_16[0x92]
            
            if (rcx_49 != 0)
                rax_16[0x92] = sub_140a84c80(rcx_49, 0, 0)
            
            rax_16[0x93].d = 0

var_fe8 = var_fb8.o
int64_t* var_f98
sub_140692f90(&rax_16[0x84], sub_140dd1ec0(&var_f98, arg1, &var_fe8))
int32_t var_f90
int64_t* rax_46

if (var_f90 == 0)
    rax_46 = var_f98
label_140ef21e1:
    
    if (rax_46 != 0)
        sub_140a74f90(rax_46)
else
    int64_t* rcx_52 = var_f98
    
    if (rcx_52 != 0)
        (*(*rcx_52 + 0x38))(rcx_52, 0)
        rax_46 = var_f98
        
        if (rax_46 != 0)
            rax_46 = sub_140a84c80(rax_46, 0, 0)
            var_f98 = rax_46
        
        int32_t var_f90_1 = 0
        goto label_140ef21e1
var_fe8 = var_fc8.o
int64_t* var_f88
sub_140692f90(&rax_16[0x86], sub_140edf9f0(&var_f88, arg1, &var_fe8))
int32_t var_f80
int64_t* rax_49

if (var_f80 == 0)
    rax_49 = var_f88
label_140ef2251:
    
    if (rax_49 != 0)
        sub_140a74f90(rax_49)
else
    int64_t* rcx_57 = var_f88
    
    if (rcx_57 != 0)
        (*(*rcx_57 + 0x38))(rcx_57, 0)
        rax_49 = var_f88
        
        if (rax_49 != 0)
            rax_49 = sub_140a84c80(rax_49, 0, 0)
            var_f88 = rax_49
        
        int32_t var_f80_1 = 0
        goto label_140ef2251
rax_16[0x88].d = *(arg2 + 0x430)
*(rax_16 + 0x444) = *(arg2 + 0x434)
sub_140692f90(&rax_16[0x89], arg2 + 0x438)
rax_16[0x8b].b = *(arg2 + 0x448)
*(rax_16 + 0x459) = *(arg2 + 0x449)
sub_140692f90(&rax_16[0x8c], arg2 + 0x450)
sub_1407473e0(&rax_16[0x8e], arg2 + 0x460)
sub_1407473e0(&rax_16[0x90], arg2 + 0x470)
rax_16[0x94].d = *(arg2 + 0x4f8)
*(rax_16 + 0x4a4) = *(arg2 + 0x4fc)
sub_1407473e0(&rax_16[0x95], arg2 + 0x500)
rax_16[0x97].b = *(arg2 + 0x510)
rax_16[0x98].b = *(arg2 + 0x518)
*(rax_16 + 0x4c1) = *(arg2 + 0x519)
sub_1407473e0(&rax_16[0x99], arg2 + 0x520)
rax_16[0x9b].b = *(arg2 + 0x530)
*(rax_16 + 0x4d9) = *(arg2 + 0x531)
sub_1407473e0(&rax_16[0x9c], arg2 + 0x538)

if (&var_1016 != &rax_16[0x9e])
    if (*(rax_16 + 0x4f1) != 0)
        *(rax_16 + 0x4f1) = 0
    
    if (r13.b != 0)
        rax_16[0x9e].b = r12
        *(rax_16 + 0x4f1) = 1

if (&var_1016 != rax_16 + 0x4f2)
    if (*(rax_16 + 0x4f3) != 0)
        *(rax_16 + 0x4f3) = 0
    
    if (var_1018 != 0)
        *(rax_16 + 0x4f2) = rax_15
        *(rax_16 + 0x4f3) = 1

void*** rax_63 = j_sub_140a82f30(0x558)
void*** rbx_4 = rax_63

if (rax_63 == 0)
    rbx_4 = nullptr
else
    rax_63[1].d = 1
    *(rax_63 + 0xc) = 1
    *rbx_4 = &data_142d8c5b0
    
    if (rbx_4 != -0x10)
        sub_140ee3400(&rbx_4[2])

void* var_ed8 = &rbx_4[2]
sub_14065fa30(&var_ed8, &rbx_4[2])
int64_t var_1028 = 0x548
void var_ff8
void* var_ec8 = &var_ff8
int128_t zmm1 = sub_140e23ed0(&rbx_4[2], "SEditableText")

if (rbx_4 != 0)
    rbx_4[1].d += 1

if (arg1 + 0x4d0 == &var_fe8)
label_140ef24a5:
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp3_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rbx_4)[1](rbx_4, 1)
else
    *(arg1 + 0x4d0) = &rbx_4[2]
    void*** rdi_1 = *(arg1 + 0x4d8)
    
    if (rbx_4 == rdi_1)
        goto label_140ef24a5
    
    *(arg1 + 0x4d8) = rbx_4
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

void* var_e80
void** rax_68 = sub_140696520(&var_ed8, &var_e80, rax_16, zmm1)
var_1008 = *rax_68
void* rcx_76 = rax_68[1]
var_1000.q = rcx_76

if (rcx_76 != 0)
    *(rcx_76 + 8) += 1

void var_640
int64_t* rax_69 = sub_14068c940(&var_640)
var_fe8 = var_fd8.o
int64_t* rax_70 = sub_140e8eef0(&var_fd8, arg1, &var_fe8)
char var_e98 = 1
int64_t var_e90 = 0
int32_t var_e88 = 0
int128_t var_ea8 = zx.o(0)
sub_140692f90(&var_e90, rax_70)
rax_69[0x37].b = var_e98
*(rax_69 + 0x1a8) = var_ea8
sub_1407473e0(&rax_69[0x38], &var_e90)
sub_140745b20(&var_e90)
int128_t* (* rax_73)(void* arg1, int128_t* arg2)

if (var_fd0 == 0)
    rax_73 = var_fd8
label_140ef25cf:
    
    if (rax_73 != 0)
        sub_140a74f90(rax_73)
else
    int128_t* (* rcx_82)(void* arg1, int128_t* arg2) = var_fd8
    
    if (rcx_82 != 0)
        (*(*rcx_82 + 0x38))(rcx_82, 0)
        rax_73 = var_fd8
        
        if (rax_73 != 0)
            rax_73 = sub_140a84c80(rax_73, 0, 0)
            var_fd8 = rax_73
        
        int32_t var_fd0_1 = 0
        goto label_140ef25cf
*(rax_69 + 0x1a4) = 2
void*** rax_74 = j_sub_140a82f30(0x3d8)
void*** rbx_5 = rax_74

if (rax_74 == 0)
    rbx_5 = nullptr
else
    rax_74[1].d = 1
    *(rax_74 + 0xc) = 1
    *rbx_5 = &data_142d8c570
    
    if (rbx_5 != -0x10)
        sub_140f20750(&rbx_5[2])

void* var_ef0 = &rbx_5[2]
sub_14065fa30(&var_ef0, &rbx_5[2])
int64_t var_1028_1 = 0x3c8
void var_ff7
void* var_ee0 = &var_ff7
int128_t zmm1_1 = sub_140e23ed0(&rbx_5[2], "SBox")

if (rbx_5 != 0)
    rbx_5[1].d += 1

if (arg1 + 0x4c0 == &var_fe8)
label_140ef26b4:
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp7_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*rbx_5)[1](rbx_5, 1)
else
    *(arg1 + 0x4c0) = &rbx_5[2]
    void*** rdi_3 = *(arg1 + 0x4c8)
    
    if (rbx_5 == rdi_3)
        goto label_140ef26b4
    
    *(arg1 + 0x4c8) = rbx_5
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp9_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*rdi_3)[1](rdi_3, 1)

void* rax_79
int128_t zmm1_2
rax_79, zmm1_2 = sub_1406937a0(rax_69, &var_1008, zmm1_1)
void* var_dc8
void** rax_80 = sub_140695d20(&var_ef0, &var_dc8, rax_79, zmm1_2)
int64_t* rbx_6 = rax_80[1]
var_1008 = *rax_80
var_1000.q = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d += 1

void*** rax_81 = j_sub_140a82f30(0x88)
void*** rdi_4 = rax_81

if (rax_81 == 0)
    rdi_4 = nullptr
else
    sub_14068e490(rax_81)
    *rdi_4 = &data_142d8add0

rdi_4[4].w = 0
int32_t var_f78 = 1
int32_t var_f70 = 0x3f800000
char var_f6c = 1
int64_t var_f68 = 0
int32_t var_f60 = 0
sub_140692f90(&var_f68, &var_eb8)
rdi_4[5].d = var_f78
*(rdi_4 + 0x34) = var_f6c
rdi_4[6].d = var_f70
sub_140692f90(&rdi_4[7], &var_f68)
sub_140745b20(&var_f68)
sub_140693600(rdi_4, &var_1008)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp11_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

void var_7f0
int64_t* rax_86 = sub_14068d420(&var_7f0)
int64_t r15_2 = sx.q(rax_86[0x35].d)
int32_t rcx_102 = (r15_2 + 1).d
rax_86[0x35].d = rcx_102

if (rcx_102 s> *(rax_86 + 0x1ac))
    sub_140638870(&rax_86[0x34])

*(rax_86[0x34] + (r15_2 << 3)) = rdi_4
void*** rax_88 = j_sub_140a82f30(0x2e8)
void*** rbx_7 = rax_88

if (rax_88 == 0)
    rbx_7 = nullptr
else
    rax_88[1].d = 1
    *(rax_88 + 0xc) = 1
    *rbx_7 = &data_142d8c590
    
    if (rbx_7 != -0x10)
        sub_14068e500(&rbx_7[2])

void* var_f08 = &rbx_7[2]
sub_14065fa30(&var_f08, &rbx_7[2])
int64_t var_1028_2 = 0x2d8
void var_ff6
void* var_ef8 = &var_ff6
int128_t zmm1_3 = sub_140e23ed0(&rbx_7[2], "SHorizontalBox")

if (rbx_7 != 0)
    rbx_7[1].d += 1

if (arg1 + 0x630 == &var_fe8)
label_140ef28dd:
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp13_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*rbx_7)[1](rbx_7, 1)
else
    *(arg1 + 0x630) = &rbx_7[2]
    void*** rdi_6 = *(arg1 + 0x638)
    
    if (rbx_7 == rdi_6)
        goto label_140ef28dd
    
    *(arg1 + 0x638) = rbx_7
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t temp15_1 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*rdi_6)[1](rdi_6, 1)

void* var_db8
void** rax_92 = sub_140696920(&var_f08, &var_db8, rax_86, zmm1_3)
var_fe8.q = *rax_92
void* rcx_112 = rax_92[1]
var_fe8:8.q = rcx_112

if (rcx_112 != 0)
    *(rcx_112 + 8) += 1

void var_3a0
int64_t* rax_93
int128_t zmm6_1
rax_93, zmm6_1 = sub_14068c640(&var_3a0)
var_f58.o = var_f58.o
int64_t* rax_94 = sub_140e45b90(&var_fc8, arg1, &var_f58)
int64_t var_f28 = 0
char var_f20 = 1
int64_t var_f18 = 0
int32_t var_f10 = 0
sub_140692f90(&var_f18, rax_94)
rax_93[0x44] = var_f28
rax_93[0x45].b = var_f20
sub_1407473e0(&rax_93[0x46], &var_f18)
sub_140745b20(&var_f18)
int64_t (* rax_98)(void* arg1, int64_t arg2, int32_t arg3)

if (var_fc0 == 0)
    rax_98 = var_fc8
label_140ef29dd:
    
    if (rax_98 != 0)
        sub_140a74f90(rax_98)
else
    int64_t (* rcx_118)(void* arg1, int64_t arg2, int32_t arg3) = var_fc8
    
    if (rcx_118 != 0)
        (*(*rcx_118 + 0x38))(rcx_118, 0)
        rax_98 = var_fc8
        
        if (rax_98 != 0)
            rax_98 = sub_140a84c80(rax_98, 0, 0)
            var_fc8 = rax_98
        
        int32_t var_fc0_1 = 0
        goto label_140ef29dd
var_f48.o = var_f48.o
int64_t* rax_99 = sub_140e45dd0(&var_fb8, arg1, &var_f48)
char var_e48 = 1
int128_t var_e70
__builtin_memcpy(&var_e70, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
int64_t var_e40 = 0
int32_t var_e38 = 0
sub_140692f90(&var_e40, rax_99)
sub_140693390(&rax_93[0x55], &var_e70)
rax_93[0x5a].b = var_e48
sub_1407473e0(&rax_93[0x5b], &var_e40)
sub_140745b20(&var_e40)
int64_t* rbx_8 = zx.o(0):8.q

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t temp17_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*rbx_8 + 8))(rbx_8, 1)

int64_t (* rax_104)(void* arg1, int64_t arg2)

if (var_fb0 == 0)
    rax_104 = var_fb8
label_140ef2aef:
    
    if (rax_104 != 0)
        sub_140a74f90(rax_104)
else
    int64_t (* rcx_128)(void* arg1, int64_t arg2) = var_fb8
    
    if (rcx_128 != 0)
        (*(*rcx_128 + 0x38))(rcx_128, 0)
        rax_104 = var_fb8
        
        if (rax_104 != 0)
            rax_104 = sub_140a84c80(rax_104, 0, 0)
            var_fb8 = rax_104
        
        int32_t var_fb0_1 = 0
        goto label_140ef2aef
var_f38.o = var_f38.o
int64_t* rax_105 = sub_140e45dd0(&var_1008, arg1, &var_f38)
char var_e08 = 1
int128_t var_e30
__builtin_memcpy(&var_e30, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
int64_t var_e00 = 0
int32_t var_df8 = 0
sub_140692f90(&var_e00, rax_105)
sub_140693390(&rax_93[0x5d], &var_e30)
rax_93[0x62].b = var_e08
sub_1407473e0(&rax_93[0x63], &var_e00)
int128_t zmm1_6 = sub_140745b20(&var_e00)
int64_t* rbx_9 = zx.o(0):8.q

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        (**rbx_9)(rbx_9)
        int32_t temp19_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rbx_9 + 8))(rbx_9, 1)

int64_t* (* rax_110)(void* arg1, int64_t* arg2)

if (var_1000 == 0)
    rax_110 = var_1008
label_140ef2c08:
    
    if (rax_110 != 0)
        zmm1_6 = sub_140a74f90(rax_110)
else
    int64_t* (* rcx_138)(void* arg1, int64_t* arg2) = var_1008
    
    if (rcx_138 != 0)
        (*(*rcx_138 + 0x38))(rcx_138, 0)
        rax_110 = var_1008
        
        if (rax_110 != 0)
            rax_110 = sub_140a84c80(rax_110, 0, 0)
            var_1008 = rax_110
        
        var_1000 = 0
        goto label_140ef2c08
rax_93[0x39].b = 1
*(rax_93 + 0x1b8) = zmm6_1
sub_140692f90(&rax_93[0x3a], &var_dd8)
sub_140f33710(arg1, sub_1406936e0(rax_93, &var_fe8, zmm1_6))
sub_14068fed0(&var_3a0)
int64_t* var_db0

if (var_db0 != 0)
    var_db0[1].d -= 1
    
    if (var_db0[1].d == 1)
        (**var_db0)(var_db0)
        int32_t temp22_1 = *(var_db0 + 0xc)
        *(var_db0 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*(*var_db0 + 8))(var_db0, 1)

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp23_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*rbx_7)[1](rbx_7, 1)

int64_t var_650

if (var_650 != 0)
    sub_140a74f90(var_650)

sub_140660250(&var_7f0)
int64_t* var_dc0

if (var_dc0 != 0)
    var_dc0[1].d -= 1
    
    if (var_dc0[1].d == 1)
        (**var_dc0)(var_dc0)
        int32_t temp26_1 = *(var_dc0 + 0xc)
        *(var_dc0 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*(*var_dc0 + 8))(var_dc0, 1)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp28_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp28_1 == 1)
            (*rbx_5)[1](rbx_5, 1)

sub_140690290(&var_640)
int64_t* var_e78

if (var_e78 != 0)
    var_e78[1].d -= 1
    
    if (var_e78[1].d == 1)
        (**var_e78)(var_e78)
        int32_t temp30_1 = *(var_e78 + 0xc)
        *(var_e78 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*(*var_e78 + 8))(var_e78, 1)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp31_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*rbx_4)[1](rbx_4, 1)

sub_140690950(&var_d40)
sub_140745b20(&var_dd8)
sub_140745b20(&var_eb8)
int64_t* rbx_16 = *(arg2 + 0x4f0)
var_1008 = *(arg2 + 0x4e8)
var_1000.q = rbx_16

if (rbx_16 != 0)
    rbx_16[1].d += 1

int64_t* (** result)(void* arg1, int64_t* arg2) = &var_1008

if (&var_1008 != arg1 + 0x640)
    var_1008.o = *(arg1 + 0x640)
    rbx_16 = var_1000.q
    *(arg1 + 0x640) = var_1008.o

if (rbx_16 != 0)
    rbx_16[1].d -= 1
    
    if (rbx_16[1].d == 1)
        result = (**rbx_16)(rbx_16)
        int32_t temp33_1 = *(rbx_16 + 0xc)
        *(rbx_16 + 0xc) -= 1
        
        if (temp33_1 == 1)
            result = (*(*rbx_16 + 8))(rbx_16, 1)

int64_t* rcx_165 = *(arg1 + 0x640)

if (rcx_165 != 0)
    void* rbx_17 = *(arg1 + 0x630)
    int64_t* rax_128 = (*(*rcx_165 + 0x18))(rcx_165, &var_e80)
    result = sub_140693860(
        sub_140f12c60(sub_140698b50(sub_140ea2880(rbx_17)), 0x40400000, (zx.o(0)).d), rax_128)

__security_check_cookie(rax_1 ^ &var_1048)
return result
