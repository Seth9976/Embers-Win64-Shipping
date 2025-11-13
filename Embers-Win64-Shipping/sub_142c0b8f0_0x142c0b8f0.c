// 函数: sub_142c0b8f0
// 地址: 0x142c0b8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) != 7)
    *(arg1 + 0x38) = 1
    return 

bool cond:1_1 = *(arg1 + 0x24) u> 0
uint128_t var_68 = *(arg1 + 0xb0)

if (not(cond:1_1))
    *(arg1 + 0x20) = 1

int128_t* rcx = &data_144017550
int128_t* rdx

if (*(arg1 + 0x28) u> 0)
    rdx = *(arg1 + 0x30)
else
    data_144017550.q = 0
    rdx = &data_144017550

bool cond:3_1 = *(arg1 + 0x24) u> 2
uint128_t zmm2
zmm2.q = var_68.q f+ *rdx
var_68.q = zmm2.q
uint128_t var_48 = var_68

if (not(cond:3_1))
    *(arg1 + 0x20) = 1

int128_t* r8_1

if (*(arg1 + 0x28) u> 2)
    r8_1 = *(arg1 + 0x30) + 0x10
else
    data_144017550.q = 0
    r8_1 = &data_144017550

if (*(arg1 + 0x24) u<= 1)
    *(arg1 + 0x20) = 1

int128_t* rdx_1

if (*(arg1 + 0x28) u> 1)
    rdx_1 = *(arg1 + 0x30) + 8
else
    data_144017550.q = 0
    rdx_1 = &data_144017550

bool cond:4_1 = *(arg1 + 0x24) u> 3
zmm2.q = zmm2.q f+ *rdx_1
uint128_t zmm0
zmm0.q = var_48:8.q f+ *r8_1
uint128_t zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_48 = zmm1
uint128_t var_58 = zmm1

if (not(cond:4_1))
    *(arg1 + 0x20) = 1

int128_t* rdx_3

if (*(arg1 + 0x28) u> 3)
    rdx_3 = *(arg1 + 0x30) + 0x18
else
    data_144017550.q = 0
    rdx_3 = &data_144017550

bool cond:5_1 = *(arg1 + 0x24) u> 4
zmm2.q = zmm2.q f+ *rdx_3
var_58.q = zmm2.q
uint128_t var_38 = var_58

if (not(cond:5_1))
    *(arg1 + 0x20) = 1

int128_t* rdx_5

if (*(arg1 + 0x28) u> 4)
    rdx_5 = *(arg1 + 0x30) + 0x20
else
    data_144017550.q = 0
    rdx_5 = &data_144017550

bool cond:6_1 = *(arg1 + 0x24) u> 5
zmm2.q = zmm2.q f+ *rdx_5
var_38.q = zmm2.q
uint128_t var_18 = var_38

if (not(cond:6_1))
    *(arg1 + 0x20) = 1

int128_t* rdx_7

if (*(arg1 + 0x28) u> 5)
    rdx_7 = *(arg1 + 0x30) + 0x28
else
    data_144017550.q = 0
    rdx_7 = &data_144017550

bool cond:7_1 = *(arg1 + 0x24) u> 6
zmm2.q = zmm2.q f+ *rdx_7
zmm1 = _mm_unpacklo_pd(zmm2, var_68:8.q)
var_18 = zmm1
uint128_t var_28 = zmm1

if (not(cond:7_1))
    *(arg1 + 0x20) = 1

if (*(arg1 + 0x28) u> 6)
    rcx = *(arg1 + 0x30) + 0x30
else
    data_144017550.q = 0

zmm2.q = zmm2.q f+ *rcx
var_28.q = zmm2.q
sub_142c0aa20(arg1, arg2, &var_68, &var_48, &var_58)
sub_142c0aa20(arg1, arg2, &var_38, &var_18, &var_28)
