// 函数: sub_142c0abd0
// 地址: 0x142c0abd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) != 0xb)
    *(arg1 + 0x38) = 1
    return 

int128_t* r9_1 = &data_144017550
uint128_t var_18 = zx.o(0)
uint64_t r8_1 = 0
uint128_t zmm3 = zx.o(var_18:8.q)
uint128_t zmm4 = zx.o(var_18.q)

do
    int32_t rax_1 = (r8_1 + 1).d
    
    if (rax_1 u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int128_t* rdx
    
    if (rax_1 u< *(arg1 + 0x28))
        rdx = *(arg1 + 0x30) + (zx.q(rax_1) << 3)
    else
        rdx = &data_144017550
        data_144017550.q = 0
    
    if (r8_1.d u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int64_t* rax_3
    
    if (r8_1.d u< *(arg1 + 0x28))
        rax_3 = *(arg1 + 0x30) + (r8_1 << 3)
    else
        data_144017550.q = 0
        rax_3 = &data_144017550
    
    zmm4.q = zmm4.q f+ *rax_3
    zmm3.q = zmm3.q f+ *rdx
    r8_1 = zx.q(r8_1.d + 2)
while (r8_1.d u< 0xa)

bool cond:1_1 = *(arg1 + 0x24) u> 1
uint128_t var_58 = *(arg1 + 0xb0)

if (not(cond:1_1))
    *(arg1 + 0x20) = 1

int128_t* rcx_1

if (*(arg1 + 0x28) u> 1)
    rcx_1 = *(arg1 + 0x30) + 8
else
    rcx_1 = &data_144017550
    data_144017550.q = 0

if (*(arg1 + 0x24) u<= 0)
    *(arg1 + 0x20) = 1

int128_t* rax_5

if (*(arg1 + 0x28) u> 0)
    rax_5 = *(arg1 + 0x30)
else
    data_144017550.q = 0
    rax_5 = &data_144017550

bool cond:2_1 = *(arg1 + 0x24) u> 3
uint128_t zmm2
zmm2.q = var_58.q f+ *rax_5
uint128_t zmm0
zmm0.q = var_58:8.q f+ *rcx_1
uint128_t zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_58 = zmm1
uint128_t var_38 = zmm1

if (not(cond:2_1))
    *(arg1 + 0x20) = 1

int128_t* rcx_3

if (*(arg1 + 0x28) u> 3)
    rcx_3 = *(arg1 + 0x30) + 0x18
else
    rcx_3 = &data_144017550
    data_144017550.q = 0

if (*(arg1 + 0x24) u<= 2)
    *(arg1 + 0x20) = 1

int128_t* rax_6

if (*(arg1 + 0x28) u> 2)
    rax_6 = *(arg1 + 0x30) + 0x10
else
    data_144017550.q = 0
    rax_6 = &data_144017550

bool cond:3_1 = *(arg1 + 0x24) u> 5
zmm2.q = zmm2.q f+ *rax_6
zmm0.q = var_38:8.q f+ *rcx_3
zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_38 = zmm1
uint128_t var_48 = zmm1

if (not(cond:3_1))
    *(arg1 + 0x20) = 1

int128_t* rcx_5

if (*(arg1 + 0x28) u> 5)
    rcx_5 = *(arg1 + 0x30) + 0x28
else
    rcx_5 = &data_144017550
    data_144017550.q = 0

if (*(arg1 + 0x24) u<= 4)
    *(arg1 + 0x20) = 1

int128_t* rax_8

if (*(arg1 + 0x28) u> 4)
    rax_8 = *(arg1 + 0x30) + 0x20
else
    data_144017550.q = 0
    rax_8 = &data_144017550

bool cond:4_1 = *(arg1 + 0x24) u> 7
zmm2.q = zmm2.q f+ *rax_8
zmm0.q = var_48:8.q f+ *rcx_5
zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_48 = zmm1
var_18 = zmm1

if (not(cond:4_1))
    *(arg1 + 0x20) = 1

int128_t* rcx_7

if (*(arg1 + 0x28) u> 7)
    rcx_7 = *(arg1 + 0x30) + 0x38
else
    rcx_7 = &data_144017550
    data_144017550.q = 0

if (*(arg1 + 0x24) u<= 6)
    *(arg1 + 0x20) = 1

int128_t* rax_10

if (*(arg1 + 0x28) u> 6)
    rax_10 = *(arg1 + 0x30) + 0x30
else
    data_144017550.q = 0
    rax_10 = &data_144017550

bool cond:5_1 = *(arg1 + 0x24) u> 9
zmm2.q = zmm2.q f+ *rax_10
zmm0.q = var_18:8.q f+ *rcx_7
zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_18 = zmm1
uint128_t var_28 = zmm1

if (not(cond:5_1))
    *(arg1 + 0x20) = 1

int128_t* rcx_9

if (*(arg1 + 0x28) u> 9)
    rcx_9 = *(arg1 + 0x30) + 0x48
else
    rcx_9 = &data_144017550
    data_144017550.q = 0

if (*(arg1 + 0x24) u<= 8)
    *(arg1 + 0x20) = 1

int64_t* rax_12

if (*(arg1 + 0x28) u> 8)
    rax_12 = *(arg1 + 0x30) + 0x40
else
    data_144017550.q = 0
    rax_12 = &data_144017550

zmm2.q = zmm2.q f+ *rax_12
zmm0.q = var_28:8.q f+ *rcx_9
bool cond:7_1 =
    __andps_xmmxud_memxud(zmm4, data_142d57d00).q f<= __andps_xmmxud_memxud(zmm3, data_142d57d00).q
zmm1 = _mm_unpacklo_pd(zmm2, zmm0.q)
var_28 = zmm1
uint128_t var_68 = zmm1

if (cond:7_1)
    var_68.q = *(arg1 + 0xb0)
    
    if (*(arg1 + 0x24) u<= 0xa)
        *(arg1 + 0x20) = 1
    
    if (*(arg1 + 0x28) u> 0xa)
        r9_1 = *(arg1 + 0x30) + 0x50
    else
        data_144017550.q = 0
    
    zmm0.q = var_68:8.q f+ *r9_1
    var_68:8.q = zmm0.q
else
    if (*(arg1 + 0x24) u<= 0xa)
        *(arg1 + 0x20) = 1
    
    if (*(arg1 + 0x28) u> 0xa)
        r9_1 = *(arg1 + 0x30) + 0x50
    else
        data_144017550.q = 0
    
    zmm2.q = zmm2.q f+ *r9_1
    var_68:8.q = *(arg1 + 0xb8)
    var_68.q = zmm2.q

sub_142c0aa20(arg1, arg2, &var_58, &var_38, &var_48)
sub_142c0aa20(arg1, arg2, &var_18, &var_28, &var_68)
