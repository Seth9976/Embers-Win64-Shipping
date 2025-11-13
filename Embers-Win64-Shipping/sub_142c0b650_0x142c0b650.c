// 函数: sub_142c0b650
// 地址: 0x142c0b650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) != 9)
    *(arg1 + 0x38) = 1
    return 

bool cond:1_1 = *(arg1 + 0x24) u> 1
double var_68[0x2] = *(arg1 + 0xb0)

if (not(cond:1_1))
    *(arg1 + 0x20) = 1

int128_t* rcx = &data_144017550
int128_t* rdx

if (*(arg1 + 0x28) u> 1)
    rdx = *(arg1 + 0x30) + 8
else
    data_144017550.q = 0
    rdx = &data_144017550

if (*(arg1 + 0x24) u<= 0)
    *(arg1 + 0x20) = 1

int128_t* r8_1

if (*(arg1 + 0x28) u> 0)
    r8_1 = *(arg1 + 0x30)
else
    data_144017550.q = 0
    r8_1 = &data_144017550

bool cond:3_1 = *(arg1 + 0x24) u> 3
uint128_t zmm2
zmm2.q = var_68[0] f+ *r8_1
uint128_t zmm0
zmm0.q = var_68[1] f+ *rdx
double temp0_1[0x2] = _mm_unpacklo_pd(zmm2, zmm0.q)
var_68 = temp0_1
double var_48[0x2] = temp0_1

if (not(cond:3_1))
    *(arg1 + 0x20) = 1

int128_t* r8_2

if (*(arg1 + 0x28) u> 3)
    r8_2 = *(arg1 + 0x30) + 0x18
else
    data_144017550.q = 0
    r8_2 = &data_144017550

if (*(arg1 + 0x24) u<= 2)
    *(arg1 + 0x20) = 1

int128_t* rdx_2

if (*(arg1 + 0x28) u> 2)
    rdx_2 = *(arg1 + 0x30) + 0x10
else
    data_144017550.q = 0
    rdx_2 = &data_144017550

bool cond:4_1 = *(arg1 + 0x24) u> 4
zmm2.q = zmm2.q f+ *rdx_2
zmm0.q = var_48[1] f+ *r8_2
double temp0_2[0x2] = _mm_unpacklo_pd(zmm2, zmm0.q)
var_48 = temp0_2
uint128_t var_58 = temp0_2

if (not(cond:4_1))
    *(arg1 + 0x20) = 1

int128_t* rdx_4

if (*(arg1 + 0x28) u> 4)
    rdx_4 = *(arg1 + 0x30) + 0x20
else
    data_144017550.q = 0
    rdx_4 = &data_144017550

bool cond:5_1 = *(arg1 + 0x24) u> 5
zmm2.q = zmm2.q f+ *rdx_4
var_58.q = zmm2.q
uint128_t var_18 = var_58

if (not(cond:5_1))
    *(arg1 + 0x20) = 1

int128_t* rdx_6

if (*(arg1 + 0x28) u> 5)
    rdx_6 = *(arg1 + 0x30) + 0x28
else
    data_144017550.q = 0
    rdx_6 = &data_144017550

bool cond:6_1 = *(arg1 + 0x24) u> 7
zmm2.q = zmm2.q f+ *rdx_6
var_18.q = zmm2.q
double var_28[0x2] = var_18

if (not(cond:6_1))
    *(arg1 + 0x20) = 1

int128_t* r8_4

if (*(arg1 + 0x28) u> 7)
    r8_4 = *(arg1 + 0x30) + 0x38
else
    data_144017550.q = 0
    r8_4 = &data_144017550

if (*(arg1 + 0x24) u<= 6)
    *(arg1 + 0x20) = 1

int128_t* rdx_8

if (*(arg1 + 0x28) u> 6)
    rdx_8 = *(arg1 + 0x30) + 0x30
else
    data_144017550.q = 0
    rdx_8 = &data_144017550

bool cond:7_1 = *(arg1 + 0x24) u> 8
zmm2.q = zmm2.q f+ *rdx_8
zmm0.q = var_28[1] f+ *r8_4
double temp0_3[0x2] = _mm_unpacklo_pd(zmm2, zmm0.q)
var_28 = temp0_3
uint128_t var_38 = temp0_3

if (not(cond:7_1))
    *(arg1 + 0x20) = 1

if (*(arg1 + 0x28) u> 8)
    rcx = *(arg1 + 0x30) + 0x40
else
    data_144017550.q = 0

zmm2.q = zmm2.q f+ *rcx
var_38:8.q = *(arg1 + 0xb8)
var_38.q = zmm2.q
sub_142c0aa20(arg1, arg2, &var_68, &var_48, &var_58)
sub_142c0aa20(arg1, arg2, &var_18, &var_28, &var_38)
