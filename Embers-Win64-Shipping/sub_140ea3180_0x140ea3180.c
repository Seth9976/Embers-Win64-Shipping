// 函数: sub_140ea3180
// 地址: 0x140ea3180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6e8
int64_t rax_1 = __security_cookie ^ &var_6e8
int64_t* rcx = arg1[0x61]
int64_t rax_3 = (*(*rcx + 0x48))(rcx, arg1[0x62], ".Expand")
char var_628 = 1
int64_t var_630 = rax_3
int64_t var_620 = 0
int32_t var_618 = 0
void var_530
int64_t* rax_4 = sub_140e4fb70(&var_530)
rax_4[0x34] = rax_3
rax_4[0x35].b = 1
sub_140692f90(&rax_4[0x36], &var_620)
void*** rax_5 = sub_140e48c50()
void* var_658 = &rax_5[2]
sub_140918950(&var_658, &rax_5[2])
int64_t var_6c8 = 0x3a8
void var_6b8
void* var_648 = &var_6b8
void* var_598
void** rax_6 = sub_140e56930(&var_658, &var_598, rax_4, sub_140e23ed0(&rax_5[2], "SImage"))
int64_t* rdi_1 = rax_6[1]
void* r14 = *rax_6

if (rdi_1 != 0)
    rdi_1[1].d += 1

int32_t var_560 = 1
char var_55c = 1
char var_558 = 1
int64_t var_550 = 0
int32_t var_548 = 0
void var_588
int64_t* rax_7 = _vfprintf_p_l(&var_588, u"Click to expand toolbar", u"Slate")
int64_t var_6a0 = *rax_7
int64_t* rcx_8 = rax_7[1]

if (rcx_8 != 0)
    rcx_8[1].d += 1

int32_t var_690 = rax_7[2].d
int128_t var_610 = zx.o(0)
char var_688 = 1
int64_t var_680 = 0
int32_t var_678 = 0
char var_600 = 1
int64_t var_5f8 = 0
int32_t var_5f0 = 0
void var_318
int64_t* rax_9 = sub_140e936b0(&var_318)
*(rax_9 + 0x201) = 0
void var_5c0
int64_t* rax_10
int128_t zmm6
rax_10, zmm6 = sub_140e1ad30(&var_5c0, arg1[0x62], ".Button")
int64_t* rcx_11 = arg1[0x61]
int64_t r8_2 = *rax_10
int64_t r9_2 = *rcx_11
int64_t var_5b8 = r8_2
int64_t var_5b0 = r8_2
int64_t rax_11 = (*(r9_2 + 0x88))(rcx_11, data_143e243e8, r8_2, r9_2, var_6c8)

if (rax_11 == 0)
    rax_11, zmm6 = sub_140e13010()

rax_9[0x35] = rax_11
rax_9[0x53].b = 1
*(rax_9 + 0x288) = zmm6
sub_140692f90(&rax_9[0x54], &var_5f8)
sub_14065da90(rax_9, &var_6a0)
rax_9[3].b = var_688
sub_140692f90(&rax_9[4], &var_680)
sub_1407473e0(&rax_9[0x3a], &arg1[0x5e])

if (&var_560 != &rax_9[8])
    rax_9[8].d = 1
    *(rax_9 + 0x44) = 1

rax_9[9].b = 1

if (&var_550 != &rax_9[0xa] && rax_9[0xb].d != 0)
    int64_t* rcx_16 = rax_9[0xa]
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x38))(rcx_16, 0)
        int64_t rcx_17 = rax_9[0xa]
        
        if (rcx_17 != 0)
            rax_9[0xa] = sub_140a84c80(rcx_17, 0, 0)
        
        rax_9[0xb].d = 0

void* var_6b0 = r14

if (rdi_1 != 0)
    rdi_1[1].d += 1

if (&var_6b0 != &rax_9[0x36])
    int128_t zmm1_1 = var_6b0.o
    int128_t var_540_1 = zmm1_1
    var_6b0.o = *(rax_9 + 0x1b0)
    *(rax_9 + 0x1b0) = zmm1_1

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

void*** rax_18 = sub_140e91840()
int64_t* var_670 = &rax_18[2]
sub_140918950(&var_670, &rax_18[2])
int64_t var_6c8_1 = 0x3f8
void var_6b7
void* var_660 = &var_6b7
int64_t* var_5a8
int64_t** rax_19 =
    sub_140e9b4e0(&var_670, &var_5a8, rax_9, sub_140e23ed0(&rax_18[2], "SComboButton"))
int64_t* rbx_6 = rax_19[1]

if (rbx_6 != 0)
    rbx_6[1].d += 1

void var_570

if (&arg1[0x5b] == &var_570)
label_140ea3531:
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp5_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
else
    arg1[0x5b] = *rax_19
    int64_t* rsi_1 = arg1[0x5c]
    
    if (rbx_6 == rsi_1)
        goto label_140ea3531
    
    arg1[0x5c] = rbx_6
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp9_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* var_5a0

if (var_5a0 != 0)
    var_5a0[1].d -= 1
    
    if (var_5a0[1].d == 1)
        (**var_5a0)(var_5a0)
        int32_t temp8_1 = *(var_5a0 + 0xc)
        *(var_5a0 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_5a0 + 8))(var_5a0, 1)

if (rax_18 != 0)
    rax_18[1].d -= 1
    
    if (rax_18[1].d == 1)
        (**rax_18)(rax_18)
        int32_t temp10_1 = *(rax_18 + 0xc)
        *(rax_18 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*rax_18)[1](rax_18, 1)

sub_140e979e0(&var_318)
sub_140745b20(&var_5f8)
sub_140745b20(&var_680)

if (rcx_8 != 0)
    rcx_8[1].d -= 1
    
    if (rcx_8[1].d == 1)
        (**rcx_8)(rcx_8)
        int32_t rax_29 = *(rcx_8 + 0xc)
        *(rcx_8 + 0xc) -= 1
        
        if (rax_29 == 1)
            (*(*rcx_8 + 8))(rcx_8, 1)

int64_t* var_580

if (var_580 != 0)
    var_580[1].d -= 1
    
    if (var_580[1].d == 1)
        (**var_580)(var_580)
        int32_t rsi_2 = *(var_580 + 0xc)
        *(var_580 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*var_580 + 8))(var_580, zx.q(rsi_2))

sub_140745b20(&var_550)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp13_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_590

if (var_590 != 0)
    var_590[1].d -= 1
    
    if (var_590[1].d == 1)
        (**var_590)(var_590)
        int32_t temp15_1 = *(var_590 + 0xc)
        *(var_590 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*var_590 + 8))(var_590, 1)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp17_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*rax_5)[1](rax_5, 1)

void var_328
sub_140745b20(&var_328)
void var_340
sub_140745b20(&var_340)
int64_t* var_350

if (var_350 != 0)
    var_350[1].d -= 1
    
    if (var_350[1].d == 1)
        (**var_350)(var_350)
        int32_t temp18_1 = *(var_350 + 0xc)
        *(var_350 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_350 + 8))(var_350, 1)

void var_380
sub_140745b20(&var_380)
sub_140ddea30(&var_530)
sub_140745b20(&var_620)
int64_t* rdi_2 = arg1[0x5c]

if (rdi_2 != 0)
    rdi_2[1].d += 1

int64_t* var_640 = arg1[0x5b]
int64_t* var_638 = rdi_2

if (rdi_2 != 0)
    rdi_2[1].d += 1

void*** rax_43 = j_sub_140a82f30(0x88)
void*** rbx_14 = rax_43

if (rax_43 == 0)
    rbx_14 = nullptr
else
    sub_14068e490(rax_43)
    *rbx_14 = &data_142d8add0

sub_140de6520(&arg1[0x55], rbx_14)
sub_140e19ef0(arg1, 1)
void* rax_44 = sub_140698b50(rbx_14)
char var_5d8 = 1
int64_t var_5d0 = 0
int32_t var_5c8 = 0
*(rax_44 + 0x58) = 1
int128_t var_5e8 = zx.o(0)
*(rax_44 + 0x48) = zx.o(0)
sub_1407473e0(rax_44 + 0x60, &var_5d0)
sub_140745b20(&var_5d0)
void* result = sub_140693600(rax_44, &var_640)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        result = (**rdi_2)(rdi_2)
        int32_t temp20_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp20_1 == 1)
            result = (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            result = (**rdi_2)(rdi_2)
            int32_t temp22_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp22_1 == 1)
                result = (*(*rdi_2 + 8))(rdi_2, 1)

__security_check_cookie(rax_1 ^ &var_6e8)
return result
