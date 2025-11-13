// 函数: sub_140ec3bf0
// 地址: 0x140ec3bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8a8
int64_t rax_1 = __security_cookie ^ &var_8a8
int64_t var_840
sub_140b58170(&var_840, "EmbossedText", 1)
void var_7d0
int64_t* rax_2 = _vfprintf_p_l(&var_7d0, u"Document Area", u"DockTabStack")
int64_t var_870 = *rax_2
int64_t* rax_4 = rax_2[1]

if (rax_4 != 0)
    rax_4[1].d += 1

int64_t* rdi = data_143e243c8
int32_t var_860 = rax_2[2].d
char var_858 = 1
int64_t var_850 = 0
int32_t var_848 = 0
void var_470
int64_t* rax_6 = sub_14068d9d0(&var_470)
sub_14065da90(&rax_6[0x34], &var_870)
rax_6[0x37].b = var_858
sub_140692f90(&rax_6[0x38], &var_850)
int64_t r8 = var_840
int64_t var_7f8 = r8
int64_t rax_9 = (*(*rdi + 0x88))(rdi, data_143e243e0, r8)

if (rax_9 == 0)
    rax_9 = sub_140e13900()

rax_6[0x3a] = rax_9
void*** rax_10 = j_sub_140a82f30(0x7a8)
void*** rdi_1 = rax_10

if (rax_10 == 0)
    rdi_1 = nullptr
else
    rax_10[1].d = 1
    *(rax_10 + 0xc) = 1
    *rdi_1 = &data_142d8b060
    
    if (rdi_1 != -0x10)
        sub_140f66da0(&rdi_1[2])

void* var_820 = &rdi_1[2]
sub_14065fa30(&var_820, &rdi_1[2])
int64_t var_888 = 0x798
void var_878
void* var_810 = &var_878
void* var_7e0
void** rax_11 = sub_140697520(&var_820, &var_7e0, rax_6, sub_140e23ed0(&rdi_1[2], "STextBlock"))
void* var_808 = *rax_11
void* rax_13 = rax_11[1]
void* var_800 = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

void var_7b8
int64_t* rax_14 = sub_14068c640(&var_7b8)
rax_14[0x36].d = 2
*(rax_14 + 0x1b4) = 2
void*** rax_15 = j_sub_140a82f30(0x4c8)
void*** rdi_2 = rax_15

if (rax_15 == 0)
    rdi_2 = nullptr
else
    rax_15[1].d = 1
    *(rax_15 + 0xc) = 1
    *rdi_2 = &data_142d8c5a0
    
    if (rdi_2 != -0x10)
        sub_140f20640(&rdi_2[2])

void* var_838 = &rdi_2[2]
sub_14065fa30(&var_838, &rdi_2[2])
int64_t var_888_1 = 0x4b8
void var_877
void* var_828 = &var_877
void* rax_16
int128_t zmm1_2
rax_16, zmm1_2 = sub_1406936e0(rax_14, &var_808, sub_140e23ed0(&rdi_2[2], "SBorder"))
void* var_7f0
void** rax_17 = sub_140695920(&var_838, &var_7f0, rax_16, zmm1_2)
*arg1 = *rax_17
void* rax_19 = rax_17[1]
arg1[1] = rax_19

if (rax_19 != 0)
    *(rax_19 + 8) += 1

int64_t* var_7e8

if (var_7e8 != 0)
    var_7e8[1].d -= 1
    
    if (var_7e8[1].d == 1)
        (**var_7e8)(var_7e8)
        int32_t temp3_1 = *(var_7e8 + 0xc)
        *(var_7e8 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_7e8 + 8))(var_7e8, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*rdi_2)[1](rdi_2, 1)

sub_14068fed0(&var_7b8)
int64_t* var_7d8

if (var_7d8 != 0)
    var_7d8[1].d -= 1
    
    if (var_7d8[1].d == 1)
        (**var_7d8)(var_7d8)
        int32_t temp7_1 = *(var_7d8 + 0xc)
        *(var_7d8 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_7d8 + 8))(var_7d8, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp8_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_1406913d0(&var_470)
sub_140745b20(&var_850)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t rax_30 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (rax_30 == 1)
            (*(*rax_4 + 8))(rax_4, 1)

int64_t* var_7c8

if (var_7c8 != 0)
    var_7c8[1].d -= 1
    
    if (var_7c8[1].d == 1)
        (**var_7c8)(var_7c8)
        int32_t rdi_3 = *(var_7c8 + 0xc)
        *(var_7c8 + 0xc) -= 1
        
        if (rdi_3 == 1)
            int64_t r8_6 = *var_7c8
            (*(r8_6 + 8))(var_7c8, zx.q(rdi_3), r8_6)

__security_check_cookie(rax_1 ^ &var_8a8)
return arg1
