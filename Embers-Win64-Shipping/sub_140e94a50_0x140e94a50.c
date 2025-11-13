// 函数: sub_140e94a50
// 地址: 0x140e94a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_518
int64_t rax_1 = __security_cookie ^ &var_518
sub_140a96170(arg1)
arg1[3].b = 0
arg1[4] = 0
arg1[5].d = 0
arg1[6] = 0
arg1[7] = 0
*(arg1 + 0x44) = 0
arg1[9].b = 1
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc].w = 0x101
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf].b = data_1439ae51c
*(arg1 + 0x79) = 1
arg1[0x10] = 0
arg1[0x11].d = 0
arg1[0x12].d = 0x3f800000
*(arg1 + 0x94) = 0
*(arg1 + 0x96) = 0
arg1[0x16].b = 0
*(arg1 + 0xb4) = 0
arg1[0x17] = 0
arg1[0x18].d = 0
uint128_t zmm2 = zx.o(data_143dbb1f0)
arg1[0x19].d = data_143dbb1f0.d
arg1[0x1a].b = 1
*(arg1 + 0xcc) = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = 0
arg1[0x2b].b = 0
uint64_t var_498 = zmm2.q
sub_140a96170(&arg1[0x2c])
arg1[0x2f].b = 0
arg1[0x30] = 0
arg1[0x31].d = 0
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = data_143e244b0
void* rax_4 = data_143e244b8
arg1[0x35] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg1[0x36] = 0
arg1[0x37] = 0
void var_488
int64_t* rax_5 = _vfprintf_p_l(&var_488, No Menu Content Assigned; use .MenuContent", SMenuAnchor")
int64_t var_4e0 = *rax_5
int64_t* rax_7 = rax_5[1]

if (rax_7 != 0)
    rax_7[1].d += 1

int32_t var_4d0 = rax_5[2].d
char var_4c8 = 1
int64_t var_4c0 = 0
int32_t var_4b8 = 0
void var_470
int64_t* rax_9 = sub_14068d9d0(&var_470)
sub_14065da90(&rax_9[0x34], &var_4e0)
rax_9[0x37].b = var_4c8
sub_140692f90(&rax_9[0x38], &var_4c0)
void*** rax_11 = j_sub_140a82f30(0x7a8)
void*** rsi = rax_11

if (rax_11 == 0)
    rsi = nullptr
else
    rax_11[1].d = 1
    *(rax_11 + 0xc) = 1
    *rsi = &data_142d8b060
    
    if (rsi != -0x10)
        sub_140f66da0(&rsi[2])

void* var_4b0 = &rsi[2]
sub_14065fa30(&var_4b0, &rsi[2])
int64_t var_4f8 = 0x798
void var_4e8
void* var_4a0 = &var_4e8
void** rax_12 = sub_140697520(&var_4b0, &var_498, rax_9, sub_140e23ed0(&rsi[2], "STextBlock"))
arg1[0x38] = *rax_12
void* rax_14 = rax_12[1]
arg1[0x39] = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

int64_t* var_490

if (var_490 != 0)
    var_490[1].d -= 1
    
    if (var_490[1].d == 1)
        (**var_490)(var_490)
        int32_t temp3_1 = *(var_490 + 0xc)
        *(var_490 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_490 + 8))(var_490, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp4_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rsi)[1](rsi, 1)

sub_1406913d0(&var_470)
sub_140745b20(&var_4c0)

if (rax_7 != 0)
    rax_7[1].d -= 1
    
    if (rax_7[1].d == 1)
        (**rax_7)(rax_7)
        int32_t rax_21 = *(rax_7 + 0xc)
        *(rax_7 + 0xc) -= 1
        
        if (rax_21 == 1)
            (*(*rax_7 + 8))(rax_7, 1)

int64_t* var_480

if (var_480 != 0)
    var_480[1].d -= 1
    
    if (var_480[1].d == 1)
        (**var_480)(var_480)
        int32_t rsi_1 = *(var_480 + 0xc)
        *(var_480 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_480 + 8))(var_480, zx.q(rsi_1))

arg1[0x3a] = 0
arg1[0x3b].d = 0
arg1[0x3c] = 0
arg1[0x3d].d = 0
arg1[0x3e].d = 0
*(arg1 + 0x1f4) = 1
arg1[0x3f] = 0
arg1[0x40].d = 0
arg1[0x41].b = 1
*(arg1 + 0x20a) = 0x10100
*(arg1 + 0x20e) = 1
__security_check_cookie(rax_1 ^ &var_518)
return arg1
