// 函数: sub_141bce790
// 地址: 0x141bce790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6e8
int64_t rax_1 = __security_cookie ^ &var_6e8
int32_t rax_2 = sub_141ba8260(arg1, &arg1[0x23])
int64_t* var_6b0

if (rax_2 != 0xffffffff)
    int64_t* rcx_2 = (sx.q(rax_2) << 4) + arg1[0x1b5]
    int64_t* rbx_1 = rcx_2[1]
    var_6b0 = *rcx_2
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (&var_6b0 != &arg1[0x1bd])
        var_6b0.o = *(arg1 + 0xde8)
        *(arg1 + 0xde8) = var_6b0.o
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int128_t zmm0 = *(arg1 + 0xce0)
char var_638 = arg1[0x1ab].b
int64_t rax_7 = arg1[0x1ac]
int128_t var_678 = zmm0
int64_t var_630 = rax_7
int64_t* rax_8 = arg1[0x1ad]
char var_5f8 = 1
int64_t var_5f0 = 0
int32_t var_5e8 = 0
int128_t var_608 = zmm0
int128_t var_648 = *(arg1 + 0xd48)

if (rax_8 != 0)
    rax_8[1].d += 1

char var_620 = 1
int64_t var_618 = 0
int32_t var_610 = 0
void*** rax_9 = j_sub_140a82f30(0x3d8)
void*** rbx_2 = rax_9

if (rax_9 == 0)
    rbx_2 = nullptr
else
    rax_9[1].d = 1
    *(rax_9 + 0xc) = 1
    *rbx_2 = &data_142d8c570
    
    if (rbx_2 != -0x10)
        sub_140f20750(&rbx_2[2])

void* var_660 = &rbx_2[2]
sub_14065fa30(&var_660, &rbx_2[2])
int64_t var_6c8 = 0x3c8
void var_6b8
void* var_650 = &var_6b8
sub_140e23ed0(&rbx_2[2], "SBox")

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&arg1[0x1b9] == &var_6b0)
label_141bce978:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
else
    arg1[0x1b9] = &rbx_2[2]
    void*** rsi_1 = arg1[0x1ba]
    
    if (rbx_2 == rsi_1)
        goto label_141bce978
    
    arg1[0x1ba] = rbx_2
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp5_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rsi_1)[1](rsi_1, 1)

void var_5c0
int64_t* rax_14
int128_t zmm1_1
rax_14, zmm1_1 = sub_14068c940(&var_5c0)
void* var_5d0
void** rax_15 = sub_140695d20(&var_660, &var_5d0, rax_14, zmm1_1)
int64_t* rsi_2 = rax_15[1]
var_6b0 = *rax_15

if (rsi_2 != 0)
    rsi_2[1].d += 1

void*** rax_16 = sub_140a84c80(0, 0x30, 0)

if (rax_16 != 0)
    *rax_16 = &data_142d57800
    sub_140d3a3a0(&rax_16[1], arg1)
    rax_16[2] = sub_141b8bb10
    rax_16[4] = sub_140a387b0()
    *rax_16 = &data_142d57858

void*** rax_18 = sub_140a84c80(0, 0x30, 0)

if (rax_18 != 0)
    *rax_18 = &data_143083ac0
    sub_140d3a3a0(&rax_18[1], arg1)
    rax_18[2] = sub_141b8bb04
    rax_18[4] = sub_140a387b0()
    *rax_18 = &data_143083b18

void*** rax_20 = sub_140a84c80(0, 0x30, 0)

if (rax_20 != 0)
    *rax_20 = &data_143083a70
    sub_140d3a3a0(&rax_20[1], arg1)
    rax_20[2] = sub_141b8baf8
    rax_20[4] = sub_140a387b0()

int64_t* r14 = arg1[0x1be]
int64_t var_690 = arg1[0x1bd]

if (r14 != 0)
    r14[1].d += 1

void var_320
int64_t* rax_23 = sub_140f1dd60(&var_320)
rax_23[0x36] = &arg1[0x25]
rax_23[0x38] = &arg1[0xa3]
sub_140693390(&rax_23[0x3e], &var_648)
rax_23[0x43].b = var_620
sub_140692f90(&rax_23[0x44], &var_618)
rax_23[0x46] = &arg1[0x1b5]
var_690 = var_690

if (r14 != 0)
    r14[1].d += 1

if (&var_690 != &rax_23[0x4f])
    var_690.o = *(rax_23 + 0x278)
    *(rax_23 + 0x278) = var_690.o

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp8_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*r14 + 8))(r14, 1)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp9_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*r14 + 8))(r14, 1)

rax_23[0x3b].b = 1
*(rax_23 + 0x1c8) = var_678
sub_140692f90(&rax_23[0x3c], &var_5f0)
*(rax_23 + 0x28c) = arg1[0x19e].d
rax_23[0x5a].b = *(arg1 + 0xcf4)
*(rax_23 + 0x2d1) = *(arg1 + 0xcf5)

if (&var_678 != &rax_23[0x49])
    if (rax_20 != 0)
        (*rax_20)[8](rax_20, &rax_23[0x49])
    else if (rax_23[0x4a].d != 0)
        int64_t* rcx_29 = rax_23[0x49]
        
        if (rcx_29 != 0)
            (*(*rcx_29 + 0x38))(rcx_29, 0)
            int64_t rcx_30 = rax_23[0x49]
            
            if (rcx_30 != 0)
                rax_23[0x49] = sub_140a84c80(rcx_30, 0, 0)
            
            rax_23[0x4a].d = 0

if (&var_678 != &rax_23[0x47])
    if (rax_18 != 0)
        (*rax_18)[8](rax_18, &rax_23[0x47])
    else if (rax_23[0x48].d != 0)
        int64_t* rcx_32 = rax_23[0x47]
        
        if (rcx_32 != 0)
            (*(*rcx_32 + 0x38))(rcx_32, 0)
            int64_t rcx_33 = rax_23[0x47]
            
            if (rcx_33 != 0)
                rax_23[0x47] = sub_140a84c80(rcx_33, 0, 0)
            
            rax_23[0x48].d = 0

if (&var_678 != &rax_23[0x4b])
    if (rax_16 != 0)
        (*rax_16)[8](rax_16, &rax_23[0x4b])
    else if (rax_23[0x4c].d != 0)
        int64_t* rcx_35 = rax_23[0x4b]
        
        if (rcx_35 != 0)
            (*(*rcx_35 + 0x38))(rcx_35, 0)
            int64_t rcx_36 = rax_23[0x4b]
            
            if (rcx_36 != 0)
                rax_23[0x4b] = sub_140a84c80(rcx_36, 0, 0)
            
            rax_23[0x4c].d = 0

int64_t* rcx_37 = var_6b0
*(rax_23 + 0x2d2) = arg1[0x1ae].b
var_6b0 = rcx_37

if (rsi_2 != 0)
    rsi_2[1].d += 1

if (&var_6b0 != &rax_23[0x34])
    var_6b0.o = *(rax_23 + 0x1a0)
    *(rax_23 + 0x1a0) = var_6b0.o

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t temp12_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t temp13_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)

int64_t* rax_51 = sub_140f1ca60()
var_6b0 = &rax_51[2]
sub_140918950(&var_6b0, &rax_51[2])
int64_t var_6c8_1 = 0x4a0
void var_6b7
void* var_6a0 = &var_6b7
int64_t* var_5e0
int64_t** rax_52 = sub_140f26150(&var_6b0, &var_5e0, rax_23, 
    sub_140e23ed0(&rax_51[2], "SComboBox< TSharedPtr<FString> >"))
int64_t* rbx_10 = rax_52[1]

if (rbx_10 != 0)
    rbx_10[1].d += 1

if (&arg1[0x1b7] == &var_678)
label_141bcee61:
    
    if (rbx_10 != 0)
        rbx_10[1].d -= 1
        
        if (rbx_10[1].d == 1)
            (**rbx_10)(rbx_10)
            int32_t temp16_1 = *(rbx_10 + 0xc)
            *(rbx_10 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_10 + 8))(rbx_10, 1)
else
    arg1[0x1b7] = *rax_52
    int64_t* rsi_3 = arg1[0x1b8]
    
    if (rbx_10 == rsi_3)
        goto label_141bcee61
    
    arg1[0x1b8] = rbx_10
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t temp20_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)

int64_t* var_5d8

if (var_5d8 != 0)
    var_5d8[1].d -= 1
    
    if (var_5d8[1].d == 1)
        (**var_5d8)(var_5d8)
        int32_t temp19_1 = *(var_5d8 + 0xc)
        *(var_5d8 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*var_5d8 + 8))(var_5d8, 1)

if (rax_51 != 0)
    rax_51[1].d -= 1
    
    if (rax_51[1].d == 1)
        (**rax_51)(rax_51)
        int32_t temp21_1 = *(rax_51 + 0xc)
        *(rax_51 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*rax_51 + 8))(rax_51, 1)

sub_140f23f10(&var_320)

if (rax_20 != 0)
    (*rax_20)[7](rax_20, 0)
    int64_t rax_61 = sub_140a84c80(rax_20, 0, 0)
    
    if (rax_61 != 0)
        sub_140a74f90(rax_61)

if (rax_18 != 0)
    (*rax_18)[7](rax_18, 0)
    int64_t rax_63 = sub_140a84c80(rax_18, 0, 0)
    
    if (rax_63 != 0)
        sub_140a74f90(rax_63)

if (rax_16 != 0)
    (*rax_16)[7](rax_16, 0)
    int64_t rax_65 = sub_140a84c80(rax_16, 0, 0)
    
    if (rax_65 != 0)
        sub_140a74f90(rax_65)

int64_t* var_5c8

if (var_5c8 != 0)
    var_5c8[1].d -= 1
    
    if (var_5c8[1].d == 1)
        (**var_5c8)(var_5c8)
        int32_t temp24_1 = *(var_5c8 + 0xc)
        *(var_5c8 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*(*var_5c8 + 8))(var_5c8, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp26_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*rbx_2)[1](rbx_2, 1)

sub_140690290(&var_5c0)
sub_140745b20(&var_618)

if (rax_8 != 0)
    rax_8[1].d -= 1
    
    if (rax_8[1].d == 1)
        (**rax_8)(rax_8)
        int32_t temp27_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*(*rax_8 + 8))(rax_8, 1)

sub_140745b20(&var_5f0)

if (rax_2 != 0xffffffff)
    var_6b0 = arg1[0x1bd]
    void* rax_73 = arg1[0x1be]
    void* var_6a8_4 = rax_73
    
    if (rax_73 != 0)
        *(rax_73 + 8) += 1
    
    sub_141bf4de0(arg1, &var_6b0)

int64_t* rbx_16 = arg1[0x1b8]

if (rbx_16 != 0)
    rbx_16[1].d += 1

*arg2 = arg1[0x1b7]
arg2[1] = rbx_16

if (rbx_16 != 0)
    rbx_16[1].d += 1
    
    if (rbx_16 != 0)
        rbx_16[1].d -= 1
        
        if (rbx_16[1].d == 1)
            (**rbx_16)(rbx_16)
            int32_t temp29_1 = *(rbx_16 + 0xc)
            *(rbx_16 + 0xc) -= 1
            
            if (temp29_1 == 1)
                int64_t r8_5 = *rbx_16
                (*(r8_5 + 8))(rbx_16, 1, r8_5)

__security_check_cookie(rax_1 ^ &var_6e8)
return arg2
