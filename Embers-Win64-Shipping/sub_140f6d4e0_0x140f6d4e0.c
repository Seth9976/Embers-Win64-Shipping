// 函数: sub_140f6d4e0
// 地址: 0x140f6d4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7c8
int64_t rax_1 = __security_cookie ^ &var_7c8
*(arg1 + 0x390) = *arg3
void* rbx = arg3[1]
int64_t* rcx = *(arg1 + 0x398)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x398)
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x398) = rbx

*(arg1 + 0x3b0) = *(arg2 + 0x1a0)
*(arg1 + 0x3b8) = *(arg2 + 0x1a8)
*(arg1 + 0x3bc) = *(arg2 + 0x1ac)
sub_140692f90(arg1 + 0x3c0, arg2 + 0x1b0)
*(arg1 + 0x3d0) = *(arg2 + 0x1c0)
*(arg1 + 0x3d4) = *(arg2 + 0x1c4)
sub_1407473e0(arg1 + 0x3d8, arg2 + 0x1c8)
*(arg1 + 0x3e8) = *(arg2 + 0x1d8)
*(arg1 + 0x3e9) = *(arg2 + 0x1d9)
sub_140692f90(arg1 + 0x3f0, arg2 + 0x1e0)
int64_t (* var_788)(void* arg1) = sub_140f757f0
int128_t var_680
__builtin_memcpy(&var_680, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
char* (* var_758)(void* arg1, char* arg2) = sub_140f7e2b0
int128_t var_668 = zx.o(0)
char var_658 = 1
int128_t var_6c0
__builtin_memcpy(&var_6c0, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
int64_t var_650 = 0
int32_t var_648 = 0
int32_t var_780 = 0
int128_t var_6a8 = zx.o(0)
char var_698 = 1
int64_t var_690 = 0
int32_t var_688 = 0
int128_t var_640 = zx.o(0)
char var_630 = 1
int64_t var_628 = 0
int32_t var_620 = 0
int32_t var_750 = 0
char* (* var_778)(void* arg1, char* arg2) = sub_140f75b70
int32_t var_770 = 0
int64_t var_6f8
sub_140b58170(&var_6f8, "NoBorder", 1)
void var_5f0
int64_t* rax_11 = sub_140e4fb70(&var_5f0)
int128_t var_768 = var_788.o
int64_t* var_748
int64_t* rax_12 = sub_140e45b90(&var_748, arg1, &var_768)
int64_t var_738 = 0
char var_730 = 1
int64_t var_728 = 0
int32_t var_720 = 0
sub_140692f90(&var_728, rax_12)
rax_11[0x34] = var_738
rax_11[0x35].b = var_730
sub_1407473e0(&rax_11[0x36], &var_728)
sub_140745b20(&var_728)
int32_t var_740
int64_t* rax_16

if (var_740 == 0)
    rax_16 = var_748
label_140f6d75b:
    
    if (rax_16 != 0)
        sub_140a74f90(rax_16)
else
    int64_t* rcx_10 = var_748
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x38))(rcx_10, 0)
        rax_16 = var_748
        
        if (rax_16 != 0)
            rax_16 = sub_140a84c80(rax_16, 0, 0)
            var_748 = rax_16
        
        int32_t var_740_1 = 0
        goto label_140f6d75b
sub_140693390(&rax_11[0x38], &var_680)
rax_11[0x3d].b = var_658
sub_140692f90(&rax_11[0x3e], &var_650)
void*** rax_18 = sub_140e48c50()
void* var_6d8 = &rax_18[2]
sub_140918950(&var_6d8, &rax_18[2])
int64_t var_7a8 = 0x3a8
void var_798
void* var_6c8 = &var_798
void* var_600
void** rax_19 = sub_140e56930(&var_6d8, &var_600, rax_11, sub_140e23ed0(&rax_18[2], "SImage"))
var_768.q = *rax_19
void* rcx_19 = rax_19[1]
var_768:8.q = rcx_19

if (rcx_19 != 0)
    *(rcx_19 + 8) += 1

int64_t* rbx_2 = data_143e243c8
void var_3d8
int64_t* rax_20
int128_t zmm6
rax_20, zmm6 = sub_14068cc20(&var_3d8)
int64_t r8_3 = var_6f8
int64_t r9_1 = *rbx_2
int64_t var_618 = r8_3
int64_t rax_21 = (*(r9_1 + 0x88))(rbx_2, data_143e243e8, r8_3, r9_1, var_7a8)

if (rax_21 == 0)
    rax_21, zmm6 = sub_140e13010()

var_788.o = var_778.o
rax_20[0x36] = rax_21
*(rax_20 + 0x1c4) = 2
rax_20[0x38].d = 2
int64_t* rax_22 = sub_140e45cb0(&var_778, arg1, &var_788)
int16_t var_710 = 0x119
int64_t var_708 = 0
int32_t var_700 = 0
sub_1407473e0(&var_708, rax_22)
rax_20[0xf].b = var_710.b
*(rax_20 + 0x79) = var_710:1.b
sub_1407473e0(&rax_20[0x10], &var_708)
sub_140745b20(&var_708)
char* (* rax_26)(void* arg1, char* arg2)

if (var_770 == 0)
    rax_26 = var_778
label_140f6d902:
    
    if (rax_26 != 0)
        sub_140a74f90(rax_26)
else
    char* (* rcx_26)(void* arg1, char* arg2) = var_778
    
    if (rcx_26 != 0)
        (*(*rcx_26 + 0x38))(rcx_26, 0)
        rax_26 = var_778
        
        if (rax_26 != 0)
            rax_26 = sub_140a84c80(rax_26, 0, 0)
            var_778 = rax_26
        
        int32_t var_770_1 = 0
        goto label_140f6d902
var_758.o = var_758.o
rax_20[0x4e].d = 1
sub_140692f90(&rax_20[0x44], sub_140e45ef0(&var_788, arg1, &var_758))
int64_t (* rax_29)(void* arg1)

if (var_780 == 0)
    rax_29 = var_788
label_140f6d986:
    
    if (rax_29 != 0)
        sub_140a74f90(rax_29)
else
    int64_t (* rcx_31)(void* arg1) = var_788
    
    if (rcx_31 != 0)
        (*(*rcx_31 + 0x38))(rcx_31, 0)
        rax_29 = var_788
        
        if (rax_29 != 0)
            rax_29 = sub_140a84c80(rax_29, 0, 0)
            var_788 = rax_29
        
        int32_t var_780_1 = 0
        goto label_140f6d986
rax_20[0x3b].b = 1
*(rax_20 + 0x1c8) = zmm6
sub_140692f90(&rax_20[0x3c], &var_628)
sub_140693390(&rax_20[0x60], &var_6c0)
rax_20[0x65].b = var_698
sub_140692f90(&rax_20[0x66], &var_690)
rax_20[0x68].b = 0
void*** rax_31 = j_sub_140a82f30(0x5c8)
void*** rbx_3 = rax_31

if (rax_31 == 0)
    rbx_3 = nullptr
else
    rax_31[1].d = 1
    *(rax_31 + 0xc) = 1
    *rbx_3 = &data_142d8c580
    
    if (rbx_3 != -0x10)
        sub_140ee2d30(&rbx_3[2])

int64_t* var_6f0 = &rbx_3[2]
sub_14065fa30(&var_6f0, &rbx_3[2])
int64_t var_7a8_1 = 0x5b8
void var_797
void* var_6e0 = &var_797
int128_t zmm1_1 = sub_140e23ed0(&rbx_3[2], "SButton")

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (arg1 + 0x3a0 == &var_758)
label_140f6dab2:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp2_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rbx_3)[1](rbx_3, 1)
else
    *(arg1 + 0x3a0) = &rbx_3[2]
    void*** rsi_1 = *(arg1 + 0x3a8)
    
    if (rbx_3 == rsi_1)
        goto label_140f6dab2
    
    *(arg1 + 0x3a8) = rbx_3
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp5_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rsi_1)[1](rsi_1, 1)

void* rax_36
int128_t zmm1_2
rax_36, zmm1_2 = sub_1406936e0(rax_20, &var_768, zmm1_1)
int64_t* var_610
int64_t** rax_37 = sub_140696120(&var_6f0, &var_610, rax_36, zmm1_2)
int64_t* rbx_4 = rax_37[1]
var_758 = *rax_37
var_750.q = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d += 1

var_768:8.d = 0
var_728.b = 1
var_768.q = sub_140f75a00
var_738.o = zx.o(0)
var_768 = var_768
sub_140e8eef0(&var_720, arg1, &var_768)
*(arg1 + 0x2f0) = var_728.b
*(arg1 + 0x2e0) = var_738.o
sub_140692f90(arg1 + 0x2f8, &var_720)
sub_140745b20(&var_720)
sub_140de1b90(arg1 + 0x2b8, &var_758)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_608

if (var_608 != 0)
    var_608[1].d -= 1
    
    if (var_608[1].d == 1)
        (**var_608)(var_608)
        int32_t temp9_1 = *(var_608 + 0xc)
        *(var_608 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_608 + 8))(var_608, 1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp11_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*rbx_3)[1](rbx_3, 1)

sub_1406905f0(&var_3d8)
int64_t* var_5f8

if (var_5f8 != 0)
    var_5f8[1].d -= 1
    
    if (var_5f8[1].d == 1)
        (**var_5f8)(var_5f8)
        int32_t temp13_1 = *(var_5f8 + 0xc)
        *(var_5f8 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_5f8 + 8))(var_5f8, 1)

if (rax_18 != 0)
    rax_18[1].d -= 1
    
    if (rax_18[1].d == 1)
        (**rax_18)(rax_18)
        int32_t temp15_1 = *(rax_18 + 0xc)
        *(rax_18 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*rax_18)[1](rax_18, 1)

void var_3e8
sub_140745b20(&var_3e8)
void var_400
sub_140745b20(&var_400)
int64_t* var_410

if (var_410 != 0)
    var_410[1].d -= 1
    
    if (var_410[1].d == 1)
        (**var_410)(var_410)
        int32_t temp17_1 = *(var_410 + 0xc)
        *(var_410 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_410 + 8))(var_410, 1)

void var_440
sub_140745b20(&var_440)
sub_140ddea30(&var_5f0)
sub_140745b20(&var_628)
sub_140745b20(&var_690)
int64_t* rbx_10 = var_6a8:8.q

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t temp19_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rbx_10 + 8))(rbx_10, 1)

uint64_t result = sub_140745b20(&var_650)
int64_t* rbx_11 = var_668:8.q

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        result = (**rbx_11)(rbx_11)
        int32_t temp20_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp20_1 == 1)
            result = (*(*rbx_11 + 8))(rbx_11, 1)

__security_check_cookie(rax_1 ^ &var_7c8)
return result
