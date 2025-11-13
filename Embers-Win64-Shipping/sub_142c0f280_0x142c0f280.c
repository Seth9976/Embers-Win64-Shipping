// 函数: sub_142c0f280
// 地址: 0x142c0f280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) != 0xd)
    *(arg1 + 0x38) = 1
    return &__return_addr

bool cond:1 = *(arg1 + 0x24) u> 1
uint128_t var_88 = *(arg1 + 0xb0)

if (not(cond:1))
    *(arg1 + 0x20) = 1

int128_t* rdi = &data_144017550
int64_t* rsi

if (*(arg1 + 0x28) u> 1)
    rsi = *(arg1 + 0x30) + 0x20
else
    rsi = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi)

if (*(arg1 + 0x24) u<= 0)
    *(arg1 + 0x20) = 1

int128_t* r14

if (*(arg1 + 0x28) u> 0)
    r14 = *(arg1 + 0x30)
else
    r14 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, r14)
bool cond:3 = *(arg1 + 0x24) u> 3
uint128_t zmm6
zmm6.q = var_88.q f+ *r14
uint128_t zmm0_1
zmm0_1.q = var_88:8.q f+ *rsi
uint128_t zmm1 = _mm_unpacklo_pd(zmm6, zmm0_1.q)
var_88 = zmm1
uint128_t var_58 = zmm1

if (not(cond:3))
    *(arg1 + 0x20) = 1

int128_t* rsi_2

if (*(arg1 + 0x28) u> 3)
    rsi_2 = *(arg1 + 0x30) + 0x60
else
    rsi_2 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi_2)

if (*(arg1 + 0x24) u<= 2)
    *(arg1 + 0x20) = 1

int128_t* r14_1

if (*(arg1 + 0x28) u> 2)
    r14_1 = *(arg1 + 0x30) + 0x40
else
    r14_1 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

uint128_t zmm6_1 = sub_142c0e810(arg1, r14_1)
bool cond:4 = *(arg1 + 0x24) u> 5
zmm6_1.q = zmm6_1.q f+ *r14_1
uint128_t zmm0_2
zmm0_2.q = var_58:8.q f+ *rsi_2
zmm1 = _mm_unpacklo_pd(zmm6_1, zmm0_2.q)
var_58 = zmm1
uint128_t var_68 = zmm1

if (not(cond:4))
    *(arg1 + 0x20) = 1

int64_t* rsi_4

if (*(arg1 + 0x28) u> 5)
    rsi_4 = *(arg1 + 0x30) + 0xa0
else
    rsi_4 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi_4)

if (*(arg1 + 0x24) u<= 4)
    *(arg1 + 0x20) = 1

int64_t* r14_3

if (*(arg1 + 0x28) u> 4)
    r14_3 = *(arg1 + 0x30) + 0x80
else
    r14_3 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

uint128_t zmm6_2 = sub_142c0e810(arg1, r14_3)
bool cond:5 = *(arg1 + 0x24) u> 7
zmm6_2.q = zmm6_2.q f+ *r14_3
uint128_t zmm0_3
zmm0_3.q = var_68:8.q f+ *rsi_4
zmm1 = _mm_unpacklo_pd(zmm6_2, zmm0_3.q)
var_68 = zmm1
uint128_t var_38 = zmm1

if (not(cond:5))
    *(arg1 + 0x20) = 1

int64_t* rsi_6

if (*(arg1 + 0x28) u> 7)
    rsi_6 = *(arg1 + 0x30) + 0xe0
else
    rsi_6 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi_6)

if (*(arg1 + 0x24) u<= 6)
    *(arg1 + 0x20) = 1

int128_t* r14_5

if (*(arg1 + 0x28) u> 6)
    r14_5 = *(arg1 + 0x30) + 0xc0
else
    r14_5 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

uint128_t zmm6_3 = sub_142c0e810(arg1, r14_5)
bool cond:6 = *(arg1 + 0x24) u> 9
zmm6_3.q = zmm6_3.q f+ *r14_5
uint128_t zmm0_4
zmm0_4.q = var_38:8.q f+ *rsi_6
zmm1 = _mm_unpacklo_pd(zmm6_3, zmm0_4.q)
var_38 = zmm1
uint128_t var_48 = zmm1

if (not(cond:6))
    *(arg1 + 0x20) = 1

int64_t* rsi_8

if (*(arg1 + 0x28) u> 9)
    rsi_8 = *(arg1 + 0x30) + 0x120
else
    rsi_8 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi_8)

if (*(arg1 + 0x24) u<= 8)
    *(arg1 + 0x20) = 1

int128_t* r14_7

if (*(arg1 + 0x28) u> 8)
    r14_7 = *(arg1 + 0x30) + 0x100
else
    r14_7 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

uint128_t zmm6_4 = sub_142c0e810(arg1, r14_7)
bool cond:7 = *(arg1 + 0x24) u> 0xb
zmm6_4.q = zmm6_4.q f+ *r14_7
uint128_t zmm0_5
zmm0_5.q = var_48:8.q f+ *rsi_8
zmm1 = _mm_unpacklo_pd(zmm6_4, zmm0_5.q)
var_48 = zmm1
uint128_t var_78 = zmm1

if (not(cond:7))
    *(arg1 + 0x20) = 1

int128_t* rsi_10

if (*(arg1 + 0x28) u> 0xb)
    rsi_10 = *(arg1 + 0x30) + 0x160
else
    rsi_10 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi_10)

if (*(arg1 + 0x24) u<= 0xa)
    *(arg1 + 0x20) = 1

if (*(arg1 + 0x28) u> 0xa)
    rdi = *(arg1 + 0x30) + 0x140
else
    __builtin_memset(&data_144017550, 0, 0x20)

double zmm6_5 = sub_142c0e810(arg1, rdi)
var_78:8.q = var_78:8.q f+ *rsi_10
var_78.q = zmm6_5 f+ *rdi
sub_142c0ea90(arg1, arg2, &var_88, &var_58, &var_68)
return sub_142c0ea90(arg1, arg2, &var_38, &var_48, &var_78)
