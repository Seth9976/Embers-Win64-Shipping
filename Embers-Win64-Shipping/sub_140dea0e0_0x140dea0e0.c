// 函数: sub_140dea0e0
// 地址: 0x140dea0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
*(arg1 + 0x734) = *(arg2 + 0x1a0)
arg1[0x113] = *(arg2 + 0x1a8)
arg1[0x114] = *(arg2 + 0x1a8) + 0xf48
uint128_t var_38 = arg3
sub_140de1350(&arg1[0xe7], arg2 + 0x1b0)
arg1[0xed].b = *(arg2 + 0x1e0)
*(arg1 + 0x774) = *(arg2 + 0x1f8)
*(arg1 + 0x76c) = *(arg2 + 0x1fc)
arg1[0xef].b ^= (*(arg2 + 0x200) << 4 ^ arg1[0xef].b) & 0x10
char rax_10 = arg1[0xef].b
char rcx_1 = ((*(arg2 + 0x201) << 5 ^ rax_10) & 0x20) ^ rax_10
arg1[0xef].b = rcx_1
arg1[0xee].b = *(arg2 + 0x202)
char rax_12 = (((*(arg2 + 0x203) * 2) ^ rcx_1) & 2) ^ rcx_1
arg1[0xef].b = rax_12
char rcx_2 = ((*(arg2 + 0x204) << 2 ^ rax_12) & 4) ^ rax_12
arg1[0xef].b = rcx_2
arg1[0xef].b = *(arg2 + 0x205) << 7 | (rcx_2 & 0x7f)
char rcx_3 = ((*(arg2 + 0x20c) ^ *(arg1 + 0x779)) & 1) ^ *(arg1 + 0x779)
*(arg1 + 0x779) = rcx_3
rcx_3 ^= (*(arg2 + 0x20d) << 2 ^ rcx_3) & 4
*(arg1 + 0x779) = rcx_3
rcx_3 ^= (*(arg2 + 0x20f) << 3 ^ rcx_3) & 8
*(arg1 + 0x779) = rcx_3
char rdx_1 = ((*(arg2 + 0x20e) << 4 ^ rcx_3) & 0x10) ^ rcx_3
*(arg1 + 0x779) = rdx_1
char rax_15

if (*(arg2 + 0x203) != 0 || *(arg2 + 0x202) != 2)
    rax_15 = 0
else
    rax_15 = 0x20

char r9 = 0
rdx_1 = (rdx_1 & 0xdf) | rax_15
*(arg1 + 0x779) = rdx_1
*(arg1 + 0x77a) ^= (*(arg2 + 0x210) ^ *(arg1 + 0x77a)) & 1
*(arg1 + 0x77c) = *(arg2 + 0x208)
int128_t zmm0 = *(arg2 + 0x238)
int64_t (* var_a8)(void* arg1)
__builtin_memset(&var_a8, 0, 0x20)
*(arg1 + 0xa40) = zmm0
zmm0 = *(arg2 + 0x248)
*(arg1 + 0x779) = rdx_1 & 0xfd
*(arg1 + 0xa50) = zmm0
float var_118
uint128_t zmm3

if (*(arg2 + 0x230) == 0)
    zmm3 = var_118
else
    zmm3 = *(arg2 + 0x22c)
    r9 = 1

rdx_1 = 0
uint128_t zmm2

if (*(arg2 + 0x228) == 0)
    zmm2 = var_118
else
    zmm2 = *(arg2 + 0x224)
    rdx_1 = 1

rcx_3 = 0
float zmm1

if (*(arg2 + 0x220) == 0)
    zmm1 = var_118
else
    zmm1 = *(arg2 + 0x21c)
    rcx_3 = 1

char rax_18 = *(arg2 + 0x218)
float var_120

if (rax_18 == 0)
    zmm0 = var_120
else
    zmm0 = *(arg2 + 0x214)

char r8 = 0
char r10 = 0
char r11 = 0
int64_t rsi
rsi.b = 0

if (rax_18 == 0)
    zmm0 = var_a8.d
else
    r8 = 1

int64_t* var_a0

if (rcx_3 == 0)
    zmm1 = var_a0.d
else
    r10 = 1

int64_t var_98

if (rdx_1 == 0)
    zmm2 = var_98.d
else
    r11 = 1

int64_t var_90

if (r9 == 0)
    zmm3 = var_90.d
else
    rsi.b = 1

if (&var_a8 != arg1 + 0x8ec)
    if (arg1[0x11e].b != 0)
        arg1[0x11e].b = 0
    
    if (r8 != 0)
        *(arg1 + 0x8ec) = zmm0.d
        arg1[0x11e].b = 1

if (&var_a0 != arg1 + 0x8f4)
    if (arg1[0x11f].b != 0)
        arg1[0x11f].b = 0
    
    if (r10 != 0)
        *(arg1 + 0x8f4) = zmm1
        arg1[0x11f].b = 1

if (&var_98 != arg1 + 0x8fc)
    if (arg1[0x120].b != 0)
        arg1[0x120].b = 0
    
    if (r11 != 0)
        *(arg1 + 0x8fc) = zmm2.d
        arg1[0x120].b = 1

if (&var_90 != arg1 + 0x904)
    if (arg1[0x121].b != 0)
        arg1[0x121].b = 0
    
    if (rsi.b != 0)
        *(arg1 + 0x904) = zmm3.d
        arg1[0x121].b = 1

*(arg1 + 0x77a) ^= (*(arg2 + 0x258) << 2 ^ *(arg1 + 0x77a)) & 4
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

char rax_23

if (*(arg2 + 0x234) != 0)
    rax_23 = arg1[0xef].b

void* rcx_6

if (*(arg2 + 0x234) == 0 || (rax_23 & 2) != 0 || *(arg1 + 0x734) == 4 || (*(arg1 + 0x779) & 1) != 0)
    rax_23 = arg1[0xef].b
    rcx_6 = nullptr
else
    rcx_6.b = 1

arg1[0xef].b = (rax_23 & 0xfe) | rcx_6.b
bool cond:0 = *(arg2 + 0x1f4) == 0
zmm0 = *(arg2 + 0x1e4)
zmm1 = *(arg2 + 0x1e8)
var_120 = zmm0.d
float var_11c = zmm1

if (not(cond:0) && (zmm0.d f!= 0f || not(zmm1 == 0f)))
    zmm0, arg3 = sub_140d7ade0(zmm0.d, zmm1, arg3)
    zmm2.d = var_11c.d f* zmm0.d
    var_120 = var_120 f* zmm0.d
    var_11c = zmm2.d

*(arg1 + 0x771) = *(arg2 + 0x1e1)
void* rcx_8 = data_143e20d08
int64_t var_100 = 0
int64_t var_f8 = 0
int128_t var_c8
__builtin_memset(&var_c8, 0, 0x20)
int32_t var_108
sub_140da3dc0(rcx_8, &var_108)
int64_t* rax_25

if (*(arg1 + 0x771) != 1)
    rax_25 = sub_140d7b670(&var_108, &var_a8, &var_120)
else
    rax_25 = &var_a8
    uint128_t var_f0
    var_a8.o = var_f0

uint128_t zmm0_1 = *rax_25
int64_t (* r14)(void* arg1) = zmm0_1.q
var_a8.o = zmm0_1
uint128_t var_e0
int64_t* rsi_1

if (r14.d != 0 || (r14 u>> 0x20).d != 0)
    rsi_1 = var_a0
else
    rsi_1 = var_a0
    
    if (rsi_1.d == 0 && (rsi_1 u>> 0x20).d == 0)
        var_a8.o = var_e0
        r14 = var_a8
        rsi_1 = var_a0

if ((arg1[0xef].b & 2) != 0)
    if (arg1[0x120].b == 0)
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rsi_1.d - r14.d))
        
        if (&var_118 != arg1 + 0x8fc)
            *(arg1 + 0x8fc) = zmm0_1.d
            arg1[0x120].b = 1
    
    if (arg1[0x121].b == 0)
        zmm0_1 = _mm_cvtepi32_ps(zx.o((rsi_1 u>> 0x20).d - (r14 u>> 0x20).d))
        
        if (&var_118 != arg1 + 0x904)
            *(arg1 + 0x904) = zmm0_1.d
            arg1[0x121].b = 1

char rax_36 = *(arg1 + 0x771)
uint128_t zmm1_1 = var_11c
zmm2 = var_120

if (rax_36 == 0 && *(arg2 + 0x235) != rax_36)
    if (zmm2.d f< _mm_cvtepi32_ps(zx.o(var_e0.d)).d)
        *(arg1 + 0x771) = 2
        rax_36 = 2
    else if (zmm2.d f>= _mm_cvtepi32_ps(zx.o(var_e0:8.d)).d)
        *(arg1 + 0x771) = 2
        rax_36 = 2
    else if (zmm1_1.d f< _mm_cvtepi32_ps(zx.o(var_e0:4.d)).d)
        *(arg1 + 0x771) = 2
        rax_36 = 2
    else if (not(zmm1_1.d f< _mm_cvtepi32_ps(zx.o(var_e0:0xc.d)).d))
        *(arg1 + 0x771) = 2
        rax_36 = 2

int32_t r15 = var_a0:4.d
var_118.o = zx.o(0)
int32_t var_114
uint128_t zmm0_2
uint128_t zmm8
uint128_t zmm9

if (rax_36 == 0)
    int512_t zmm6
    zmm0_2, zmm6 = sub_140d7ade0(zmm2.d, zmm1_1.d, arg3)
    int32_t var_10c
    zmm6.o = var_10c
    zmm8 = var_114
    zmm9 = var_118
else if (rax_36 == 2)
    int64_t* rcx_13 = data_143e20d08
    zmm1_1 = *(*(*rcx_13 + 0xd8))(rcx_13, &var_118)
    var_118.o = zmm1_1
    zmm8 = var_114
    zmm9 = var_118
    zmm0_2 = sub_140d7ade0(zmm9.d, zmm8.d, _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff))
else
    zmm8 = zx.o(var_a8:4.d)
    zmm9 = _mm_cvtepi32_ps(zx.o(r14.d))
    zmm8 = _mm_cvtepi32_ps(zmm8)
    _mm_cvtepi32_ps(zx.o(rsi_1.d))
    zmm0_2 = sub_140d7ade0(zmm9.d, zmm8.d, _mm_cvtepi32_ps(zx.o(r15)))

zmm2 = zmm0_2
uint64_t var_128

if (*(arg2 + 0x1f4) == 0)
    var_128 = *(arg2 + 0x1ec)
else
    zmm0_2.d = zmm0_2.d f* *(arg2 + 0x1ec)
    zmm1_1.d = zmm2.d f* *(arg2 + 0x1f0)
    var_128.d = zmm0_2.d
    var_128:4.d = zmm1_1.d

zmm1_1 = var_128:4.d
zmm0_2 = _mm_unpacklo_ps(var_128.d, zmm1_1.q)
var_118 = zmm2.d
var_114.b = 1
uint128_t zmm6_1
uint128_t zmm7_1
zmm6_1, zmm7_1 = sub_140e19290(arg1, &var_128, zmm0_2.q, &var_118, zmm0_2, zmm1_1.d)
char rax_39 = *(arg2 + 0x235)
uint128_t zmm0_3
uint128_t zmm1_2
uint128_t zmm2_1

if (*(arg1 + 0x771) != 0)
    zmm0_3 = var_128.d
    
    if (rax_39 == 0)
        zmm1_2 = var_128:4.d
    else
        zmm1_2.d = zmm7_1.d f- zmm9.d
        
        if (not(zmm0_3.d f<= zmm1_2.d))
            var_128.d = zmm1_2.d
            zmm0_3 = zmm1_2
        
        zmm1_2 = var_128:4.d
        zmm2_1.d = zmm6_1.d f- zmm8.d
        
        if (not(zmm1_2.d f<= zmm2_1.d))
            var_128:4.d = zmm2_1.d
            zmm1_2 = zmm2_1
    
    zmm7_1.d = zmm7_1.d f- zmm9.d
    zmm6_1.d = zmm6_1.d f- zmm8.d
    zmm7_1.d = zmm7_1.d f- zmm0_3.d
    zmm6_1.d = zmm6_1.d f- zmm1_2.d
    zmm7_1.d = zmm7_1.d f* 0.5f
    zmm6_1.d = zmm6_1.d f* 0.5f
    zmm7_1.d = zmm7_1.d f+ zmm9.d
    zmm6_1.d = zmm6_1.d f+ zmm8.d
    var_120 = zmm7_1.d
    var_11c = zmm6_1.d
    
    if (not(zmm7_1.d f>= zmm9.d))
        var_120 = zmm9.d
    
    if (not(zmm6_1.d f>= zmm8.d))
        var_11c = zmm8.d
else if (rax_39 != 0)
    int32_t var_104
    zmm3 = _mm_cvtepi32_ps(zx.o(var_104 - r15 + var_a8:4.d))
    zmm1_2 = _mm_cvtepi32_ps(zx.o(var_e0:0xc.d - var_e0:4.d))
    zmm2_1.d = _mm_cvtepi32_ps(zx.o(var_e0:8.d - var_e0.d)).d
        f- _mm_cvtepi32_ps(zx.o(var_108 - rsi_1.d + r14.d)).d
    zmm0_3 = var_128.d
    
    if (not(zmm0_3.d f>= 0f))
        var_128.d = 0
    else if (not(zmm0_3.d f< zmm2_1.d))
        var_128.d = zmm2_1.d
    
    zmm0_3 = var_128:4.d
    zmm1_2.d = zmm1_2.d f- zmm3.d
    
    if (not(zmm0_3.d f>= 0f))
        var_128:4.d = 0
    else if (not(zmm0_3.d f< zmm1_2.d))
        var_128:4.d = zmm1_2.d
zmm6_1 = zx.o(var_128)
arg1[0xf0].d = var_120.d
*(arg1 + 0x784) = var_11c.d
arg1[0xf1] = zmm6_1.q
void* r14_1 = data_143e20d08
var_a8 = sub_140e1daf0
var_a0.d = 0
var_118.o = var_a8.o
int64_t* rax_50
double zmm0_4
rax_50, zmm0_4 = sub_140dd1ec0(&var_a8, arg1, &var_118)

if (rax_50[1].d != 0 && *rax_50 != 0)
    zmm0_4 = sub_140599630(r14_1 + 0xd0, 1)
    
    if (rax_50[1].d != 0)
        int64_t* rcx_17 = *rax_50
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x30))(rcx_17, &var_118)
    
    int64_t r15_1 = sx.q(*(r14_1 + 0xd8))
    int32_t rax_52 = (r15_1 + 1).d
    *(r14_1 + 0xd8) = rax_52
    
    if (rax_52 s> *(r14_1 + 0xdc))
        zmm0_4 = sub_1405a4f90(r14_1 + 0xd0)
    
    int64_t* rcx_21 = (r15_1 << 4) + *(r14_1 + 0xd0)
    *rcx_21 = 0
    *rcx_21 = *rax_50
    *rax_50 = 0
    rcx_21[1].d = rax_50[1].d
    rax_50[1].d = 0

int64_t (* rax_56)(void* arg1)

if (var_a0.d == 0)
    rax_56 = var_a8
label_140deaa2d:
    
    if (rax_56 != 0)
        zmm0_4 = sub_140a74f90(rax_56)
else
    int64_t (* rcx_22)(void* arg1) = var_a8
    
    if (rcx_22 != 0)
        (*(*rcx_22 + 0x38))(rcx_22, 0)
        rax_56 = var_a8
        
        if (rax_56 != 0)
            rax_56, zmm0_4 = sub_140a84c80(rax_56, 0, 0)
            var_a8 = rax_56
        
        var_a0.d = 0
        goto label_140deaa2d
sub_140e21e80(arg1, zmm6_1.q, zmm0_4)
sub_140deab20(arg1)
int64_t (* rax_57)(void* arg1) = *(arg2 + 0x260)
int64_t* rdi_1 = *(arg2 + 0x268)
int512_t zmm6_2
zmm6_2.o = var_38
var_a8 = rax_57
var_a0 = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

if ((arg1[0xef].b & 2) != 0 || *(arg1 + 0x734) == 4)
    sub_140de1b90(&arg1[0x57], &var_a8)
else
    var_a8 = rax_57
    var_a0 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    sub_140693860(arg1[0x10e], &var_a8)

sub_140e19ef0(arg1, 8)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t result = sub_140d72800(&var_100)
__security_check_cookie(rax_1 ^ &var_148)
return result
