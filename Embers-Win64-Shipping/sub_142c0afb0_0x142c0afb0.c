// 函数: sub_142c0afb0
// 地址: 0x142c0afb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) != 0xd)
    *(arg1 + 0x38) = 1
    return 

bool cond:1_1 = *(arg1 + 0x24) u> 1
uint128_t var_68 = *(arg1 + 0xb0)

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
zmm2.q = var_68.q f+ *r8_1
uint128_t zmm0
zmm0.q = var_68:8.q f+ *rdx
uint128_t zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_68 = zmm1
uint128_t var_38 = zmm1

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

bool cond:4_1 = *(arg1 + 0x24) u> 5
zmm2.q = zmm2.q f+ *rdx_2
zmm0.q = var_38:8.q f+ *r8_2
zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_38 = zmm1
uint128_t var_48 = zmm1

if (not(cond:4_1))
    *(arg1 + 0x20) = 1

int128_t* r8_4

if (*(arg1 + 0x28) u> 5)
    r8_4 = *(arg1 + 0x30) + 0x28
else
    data_144017550.q = 0
    r8_4 = &data_144017550

if (*(arg1 + 0x24) u<= 4)
    *(arg1 + 0x20) = 1

int128_t* rdx_4

if (*(arg1 + 0x28) u> 4)
    rdx_4 = *(arg1 + 0x30) + 0x20
else
    data_144017550.q = 0
    rdx_4 = &data_144017550

bool cond:5_1 = *(arg1 + 0x24) u> 7
zmm2.q = zmm2.q f+ *rdx_4
zmm0.q = var_48:8.q f+ *r8_4
zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_48 = zmm1
uint128_t var_18 = zmm1

if (not(cond:5_1))
    *(arg1 + 0x20) = 1

int128_t* r8_6

if (*(arg1 + 0x28) u> 7)
    r8_6 = *(arg1 + 0x30) + 0x38
else
    data_144017550.q = 0
    r8_6 = &data_144017550

if (*(arg1 + 0x24) u<= 6)
    *(arg1 + 0x20) = 1

int128_t* rdx_6

if (*(arg1 + 0x28) u> 6)
    rdx_6 = *(arg1 + 0x30) + 0x30
else
    data_144017550.q = 0
    rdx_6 = &data_144017550

bool cond:6_1 = *(arg1 + 0x24) u> 9
zmm2.q = zmm2.q f+ *rdx_6
zmm0.q = var_18:8.q f+ *r8_6
zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_18 = zmm1
uint128_t var_28 = zmm1

if (not(cond:6_1))
    *(arg1 + 0x20) = 1

int128_t* r8_8

if (*(arg1 + 0x28) u> 9)
    r8_8 = *(arg1 + 0x30) + 0x48
else
    data_144017550.q = 0
    r8_8 = &data_144017550

if (*(arg1 + 0x24) u<= 8)
    *(arg1 + 0x20) = 1

int128_t* rdx_8

if (*(arg1 + 0x28) u> 8)
    rdx_8 = *(arg1 + 0x30) + 0x40
else
    data_144017550.q = 0
    rdx_8 = &data_144017550

bool cond:7_1 = *(arg1 + 0x24) u> 0xb
zmm2.q = zmm2.q f+ *rdx_8
zmm0.q = var_28:8.q f+ *r8_8
zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_28 = zmm1
uint128_t var_58 = zmm1

if (not(cond:7_1))
    *(arg1 + 0x20) = 1

int64_t* rdx_10

if (*(arg1 + 0x28) u> 0xb)
    rdx_10 = *(arg1 + 0x30) + 0x58
else
    data_144017550.q = 0
    rdx_10 = &data_144017550

if (*(arg1 + 0x24) u<= 0xa)
    *(arg1 + 0x20) = 1

if (*(arg1 + 0x28) u> 0xa)
    rcx = *(arg1 + 0x30) + 0x50
else
    data_144017550.q = 0

zmm0.q = var_58:8.q f+ *rdx_10
zmm2.q = zmm2.q f+ *rcx
var_58:8.q = zmm0.q
var_58.q = zmm2.q
sub_142c0aa20(arg1, arg2, &var_68, &var_38, &var_48)
sub_142c0aa20(arg1, arg2, &var_18, &var_28, &var_58)
