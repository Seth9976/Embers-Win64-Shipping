// 函数: sub_142c10430
// 地址: 0x142c10430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) != 7)
    *(arg1 + 0x38) = 1
    return &__return_addr

bool cond:1 = *(arg1 + 0x24) u> 0
double var_88[0x2] = *(arg1 + 0xb0)

if (not(cond:1))
    *(arg1 + 0x20) = 1

int128_t* rdi = &data_144017550
int64_t* rsi

if (*(arg1 + 0x28) u> 0)
    rsi = *(arg1 + 0x30)
else
    rsi = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi)
bool cond:3 = *(arg1 + 0x24) u> 2
var_88[0] = var_88[0] f+ *rsi
double var_68[0x2] = var_88

if (not(cond:3))
    *(arg1 + 0x20) = 1

int128_t* rsi_1

if (*(arg1 + 0x28) u> 2)
    rsi_1 = *(arg1 + 0x30) + 0x40
else
    rsi_1 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi_1)

if (*(arg1 + 0x24) u<= 1)
    *(arg1 + 0x20) = 1

int128_t* r14

if (*(arg1 + 0x28) u> 1)
    r14 = *(arg1 + 0x30) + 0x20
else
    r14 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

double zmm6_1[0x2] = sub_142c0e810(arg1, r14)
bool cond:4 = *(arg1 + 0x24) u> 3
uint128_t zmm0_2 = zx.o(var_68[1])
zmm6_1[0] = zmm6_1[0] f+ *r14
zmm0_2.q = zmm0_2.q f+ *rsi_1
double temp0[0x2] = _mm_unpacklo_pd(zmm6_1, zmm0_2.q)
var_68 = temp0
uint128_t var_78 = temp0

if (not(cond:4))
    *(arg1 + 0x20) = 1

int128_t* rsi_3

if (*(arg1 + 0x28) u> 3)
    rsi_3 = *(arg1 + 0x30) + 0x60
else
    rsi_3 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

double zmm6_2 = sub_142c0e810(arg1, rsi_3)
bool cond:5 = *(arg1 + 0x24) u> 4
var_78.q = zmm6_2 f+ *rsi_3
uint128_t var_58 = var_78

if (not(cond:5))
    *(arg1 + 0x20) = 1

int128_t* rsi_5

if (*(arg1 + 0x28) u> 4)
    rsi_5 = *(arg1 + 0x30) + 0x80
else
    rsi_5 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

double zmm6_3 = sub_142c0e810(arg1, rsi_5)
bool cond:6 = *(arg1 + 0x24) u> 5
var_58.q = zmm6_3 f+ *rsi_5
uint128_t var_38 = var_58

if (not(cond:6))
    *(arg1 + 0x20) = 1

int128_t* rsi_7

if (*(arg1 + 0x28) u> 5)
    rsi_7 = *(arg1 + 0x30) + 0xa0
else
    rsi_7 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

double zmm6_4[0x2] = sub_142c0e810(arg1, rsi_7)
bool cond:7 = *(arg1 + 0x24) u> 6
zmm6_4[0] = zmm6_4[0] f+ *rsi_7
double temp0_1[0x2] = _mm_unpacklo_pd(zmm6_4, var_88[1])
var_38 = temp0_1
uint128_t var_48 = temp0_1

if (not(cond:7))
    *(arg1 + 0x20) = 1

if (*(arg1 + 0x28) u> 6)
    rdi = *(arg1 + 0x30) + 0xc0
else
    __builtin_memset(&data_144017550, 0, 0x20)

var_48.q = sub_142c0e810(arg1, rdi) f+ *rdi
sub_142c0ea90(arg1, arg2, &var_88, &var_68, &var_78)
return sub_142c0ea90(arg1, arg2, &var_58, &var_38, &var_48)
