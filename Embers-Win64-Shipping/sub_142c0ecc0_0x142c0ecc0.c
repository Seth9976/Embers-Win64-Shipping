// 函数: sub_142c0ecc0
// 地址: 0x142c0ecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) != 0xb)
    *(arg1 + 0x38) = 1
    return &__return_addr

int32_t i = 0
int128_t* r15 = &data_144017550
double var_58[0x2] = zx.o(0)
uint128_t zmm7 = zx.o(var_58[1])
uint128_t zmm8 = zx.o(var_58[0])

do
    if (i + 1 u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int128_t* rsi_1
    
    if (i + 1 u< *(arg1 + 0x28))
        rsi_1 = (zx.q(i + 1) << 5) + *(arg1 + 0x30)
    else
        rsi_1 = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x20)
    
    sub_142c0e810(arg1, rsi_1)
    
    if (i u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int64_t* rdi_1
    
    if (i u< *(arg1 + 0x28))
        rdi_1 = (zx.q(i) << 5) + *(arg1 + 0x30)
    else
        rdi_1 = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x20)
    
    sub_142c0e810(arg1, rdi_1)
    zmm8.q = zmm8.q f+ *rdi_1
    zmm7.q = zmm7.q f+ *rsi_1
    i += 2
while (i u< 0xa)

bool cond:1 = *(arg1 + 0x24) u> 1
double var_98[0x2] = *(arg1 + 0xb0)

if (not(cond:1))
    *(arg1 + 0x20) = 1

int128_t* rdi_4

if (*(arg1 + 0x28) u> 1)
    rdi_4 = *(arg1 + 0x30) + 0x20
else
    rdi_4 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rdi_4)

if (*(arg1 + 0x24) u<= 0)
    *(arg1 + 0x20) = 1

int128_t* rsi_4

if (*(arg1 + 0x28) u> 0)
    rsi_4 = *(arg1 + 0x30)
else
    rsi_4 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rsi_4)
bool cond:2 = *(arg1 + 0x24) u> 3
uint128_t zmm6
zmm6.q = var_98[0] f+ *rsi_4
uint128_t zmm0_1
zmm0_1.q = var_98[1] f+ *rdi_4
double temp0[0x2] = _mm_unpacklo_pd(zmm6, zmm0_1.q)
var_98 = temp0
double var_78[0x2] = temp0

if (not(cond:2))
    *(arg1 + 0x20) = 1

int64_t* rdi_6

if (*(arg1 + 0x28) u> 3)
    rdi_6 = *(arg1 + 0x30) + 0x60
else
    rdi_6 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rdi_6)

if (*(arg1 + 0x24) u<= 2)
    *(arg1 + 0x20) = 1

int128_t* rsi_5

if (*(arg1 + 0x28) u> 2)
    rsi_5 = *(arg1 + 0x30) + 0x40
else
    rsi_5 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

double zmm6_1[0x2] = sub_142c0e810(arg1, rsi_5)
bool cond:3 = *(arg1 + 0x24) u> 5
uint128_t zmm0_2 = zx.o(var_78[1])
zmm6_1[0] = zmm6_1[0] f+ *rsi_5
zmm0_2.q = zmm0_2.q f+ *rdi_6
double temp0_1[0x2] = _mm_unpacklo_pd(zmm6_1, zmm0_2.q)
var_78 = temp0_1
uint128_t var_88 = temp0_1

if (not(cond:3))
    *(arg1 + 0x20) = 1

int128_t* rdi_8

if (*(arg1 + 0x28) u> 5)
    rdi_8 = *(arg1 + 0x30) + 0xa0
else
    rdi_8 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rdi_8)

if (*(arg1 + 0x24) u<= 4)
    *(arg1 + 0x20) = 1

int128_t* rsi_7

if (*(arg1 + 0x28) u> 4)
    rsi_7 = *(arg1 + 0x30) + 0x80
else
    rsi_7 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

double zmm6_2[0x2] = sub_142c0e810(arg1, rsi_7)
bool cond:4 = *(arg1 + 0x24) u> 7
uint128_t zmm0_3 = zx.o(var_88:8.q)
zmm6_2[0] = zmm6_2[0] f+ *rsi_7
zmm0_3.q = zmm0_3.q f+ *rdi_8
double temp0_2[0x2] = _mm_unpacklo_pd(zmm6_2, zmm0_3.q)
var_88 = temp0_2
var_58 = temp0_2

if (not(cond:4))
    *(arg1 + 0x20) = 1

int64_t* rdi_10

if (*(arg1 + 0x28) u> 7)
    rdi_10 = *(arg1 + 0x30) + 0xe0
else
    rdi_10 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rdi_10)

if (*(arg1 + 0x24) u<= 6)
    *(arg1 + 0x20) = 1

int128_t* rsi_9

if (*(arg1 + 0x28) u> 6)
    rsi_9 = *(arg1 + 0x30) + 0xc0
else
    rsi_9 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

double zmm6_3[0x2] = sub_142c0e810(arg1, rsi_9)
bool cond:5 = *(arg1 + 0x24) u> 9
uint128_t zmm0_4 = zx.o(var_58[1])
zmm6_3[0] = zmm6_3[0] f+ *rsi_9
zmm0_4.q = zmm0_4.q f+ *rdi_10
double temp0_3[0x2] = _mm_unpacklo_pd(zmm6_3, zmm0_4.q)
var_58 = temp0_3
double var_68[0x2] = temp0_3

if (not(cond:5))
    *(arg1 + 0x20) = 1

int128_t* rdi_12

if (*(arg1 + 0x28) u> 9)
    rdi_12 = *(arg1 + 0x30) + 0x120
else
    rdi_12 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

sub_142c0e810(arg1, rdi_12)

if (*(arg1 + 0x24) u<= 8)
    *(arg1 + 0x20) = 1

int128_t* rsi_11

if (*(arg1 + 0x28) u> 8)
    rsi_11 = *(arg1 + 0x30) + 0x100
else
    rsi_11 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)

double zmm6_4[0x2] = sub_142c0e810(arg1, rsi_11)
uint128_t zmm0_5 = zx.o(var_68[1])
zmm6_4[0] = zmm6_4[0] f+ *rsi_11
zmm0_5.q = zmm0_5.q f+ *rdi_12
zmm8 = __andps_xmmxud_memxud(zmm8, data_142d57d00)
zmm7 = __andps_xmmxud_memxud(zmm7, data_142d57d00)
double temp0_6[0x2] = _mm_unpacklo_pd(zmm6_4, zmm0_5.q)
var_68 = temp0_6
uint128_t var_a8 = temp0_6

if (zmm8.q f<= zmm7.q)
    var_a8.q = *(arg1 + 0xb0)
    
    if (*(arg1 + 0x24) u<= 0xa)
        *(arg1 + 0x20) = 1
    
    if (*(arg1 + 0x28) u> 0xa)
        r15 = *(arg1 + 0x30) + 0x140
    else
        __builtin_memset(&data_144017550, 0, 0x20)
    
    sub_142c0e810(arg1, r15)
    var_a8:8.q = var_a8:8.q f+ *r15
else
    if (*(arg1 + 0x24) u<= 0xa)
        *(arg1 + 0x20) = 1
    
    if (*(arg1 + 0x28) u> 0xa)
        r15 = *(arg1 + 0x30) + 0x140
    else
        __builtin_memset(&data_144017550, 0, 0x20)
    
    double zmm6_5 = sub_142c0e810(arg1, r15) f+ *r15
    var_a8:8.q = *(arg1 + 0xb8)
    var_a8.q = zmm6_5

sub_142c0ea90(arg1, arg2, &var_98, &var_78, &var_88)
return sub_142c0ea90(arg1, arg2, &var_58, &var_68, &var_a8)
