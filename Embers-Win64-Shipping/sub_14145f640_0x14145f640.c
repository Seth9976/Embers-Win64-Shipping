// 函数: sub_14145f640
// 地址: 0x14145f640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_18 = arg3
uint128_t var_58 = arg5
void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
void**** var_258 = arg8
void*** var_288 = arg3

if (arg6 != 0)
    int64_t* rdx = arg4 + 0x4e10
    
    if (*rdx != 0)
        var_288 = sub_1410fccd0(arg1, rdx, u"External", 0)
    else
        if (data_143ed551c != 0)
            rdx = arg4 + 0x4db8
        
        if (data_143ed551c != 0 && *rdx != 0)
            var_288 = sub_1410fccd0(arg1, rdx, u"External", 0)
        else
            rdx = arg4 + 0x4d90
            
            if (*rdx != 0)
                var_288 = sub_1410fccd0(arg1, rdx, u"External", 0)

int64_t r12

if (*(data_143ed6408 + 4) == 0 || arg6 == 0 || arg9 != 0)
    r12.b = 0
else
    r12.b = 1

arg5 = zx.o(0)
int32_t var_278 = 1
uint128_t var_274 = arg5
uint128_t zmm0 = var_278.o
uint128_t temp0 = _mm_bsrli_si128(arg5, 0xc)
int64_t rax_5 = data_143ec4fdc
int32_t var_174 = rax_5.d
int32_t var_170 = rax_5:4.d
wchar16 const* const var_148 = u"UnknownTexture2D"
int32_t var_158 = data_143ed33f8
int16_t var_150 = 0
uint128_t var_188 = zmm0
int32_t var_178 = temp0.d
int32_t var_16c = 0
int32_t var_168 = 1
int32_t var_164 = 0x10000
int16_t var_160 = 1
int32_t var_15c = 0xa
int32_t var_154 = 0x10009
int16_t var_13f = 0
char var_140 = 0
char r15 = arg7
*var_258 = sub_141188e50(arg1, &var_188, u"ScreenSpaceReflections", 0)

if (r15 != 0)
    int32_t var_15c_1 = 0x15
    var_258[1] = sub_141188e50(arg1, &var_188, u"ScreenSpaceReflectionsHitDistance", 0)

int128_t zmm1 = zx.o(0)
float zmm0_1[0x4] = *(arg4 + 0x12d4)
bool cond:0 = zmm0_1[0] >= 0.00999999978f
int64_t var_220
__builtin_memset(&var_220, 0, 0x90)

if (cond:0)
    zmm0_1 = _mm_min_ss(zmm0_1[0], 0x3f800000)
else
    zmm0_1 = 0x3c23d70a

float zmm6 = -2f / zmm0_1[0]

if (arg6 s< 3)
    zmm6 = zmm6 + zmm6

int64_t* rcx_4 = *(arg4 + 0x15a8)
float zmm7[0x4] = zx.o(0)

if (rcx_4 != 0)
    if (*(arg4 + 0x1520) != 2)
        zmm1.d = float.s(zx.q(rcx_4[0x99].d u% 7 * 0x60f))
    else
        zmm1.d = float.s(zx.q((*(*rcx_4 + 0x60))(rcx_4) * 0x60f))

zmm0_1 = *(arg4 + 0x12cc)
zmm0_1[0] = zmm0_1[0] * 0.00999999978f

if (not(zmm0_1[0] < 0f))
    zmm7 = _mm_min_ss(zmm0_1[0], 0x3f800000)

float var_238 = zmm7[0]
float var_234 = zmm6
int32_t var_22c = zmm1.d
int32_t var_230 = 0
void* var_198
sub_1405d16e0(&var_198, *(arg4 + 0x10))
int128_t var_228 = *arg2
int128_t var_208 = arg2[2]
int128_t zmm0_2 = arg2[4]
int128_t var_218 = arg2[1]
int128_t zmm1_1 = arg2[3]
int128_t var_1d8
sub_14142a1f0(&var_1d8)

if (var_288 == arg_18 || var_218.q == 0)
    var_218.q = sub_1410fccd0(arg1, &data_1439b7158, u"External", 0)

void**** rcx_11 = var_258
var_178.q = 0
var_170.w = 0
var_170:2.b = 0
void*** rax_21 = *rcx_11
int32_t var_16c_1 = 0xffffffff
var_168.q = 0
int16_t var_160_1 = 0
char var_15e = 0
int32_t var_15c_2 = 0xffffffff
var_158.q = 0
int16_t var_150_1 = 0
char var_14e = 0
int32_t var_14c = 0xffffffff
int64_t var_148_1 = 0
var_140.w = 0
var_13f:1.b = 0
int32_t var_13c = 0xffffffff
int64_t var_138 = 0
int16_t var_130 = 0
char var_12e = 0
int32_t var_12c = 0xffffffff
int64_t var_128 = 0
int16_t var_120 = 0
char var_11e = 0
int32_t var_11c = 0xffffffff
int64_t var_118 = 0
int16_t var_110 = 0
char var_10e = 0
int32_t var_10c = 0xffffffff
int64_t var_108 = 0
int16_t var_100 = 0
char var_fe = 0
int32_t var_fc = 0
int16_t var_240 = 0
char var_23e = 0
int32_t var_23c = 0xffffffff
int128_t* var_298
int16_t var_290

if (r15 == 0)
    zmm7 = var_178.o
else
    var_298 = rcx_11[1]
    var_290 = 0
    char var_28e_1 = 0
    int32_t var_28c_1 = 0xffffffff
    zmm7 = var_298.o

int128_t zmm9 = var_118.o
int128_t zmm10 = var_128.o
int128_t zmm11 = var_138.o
int128_t zmm12 = var_148_1.o
int128_t zmm13 = var_158.o
int128_t zmm14 = var_168.o
void var_2a8

if (r12.b != 0)
    int64_t* rdx_5 = *(arg1 + 8)
    var_298 = *(arg2 + 8)
    var_290 = 0x100
    char var_28e_2 = 0
    int32_t var_28c_2 = 0x20
    int128_t zmm8 = var_298.o
    int128_t* rax_24 = sub_14081d830(0x140, rdx_5, 1, 0)
    int128_t* rbx_1 = rax_24
    
    if (rax_24 == 0)
        rbx_1 = nullptr
    else
        __builtin_memset(rbx_1 + 0x18, 0, 0x90)
        sub_14117af20(&rbx_1[0xb])
    
    memset(rbx_1, 0, 0x140)
    *rbx_1 = var_238.o
    rbx_1[1] = var_228
    rbx_1[2] = var_218
    rbx_1[3] = var_208
    rbx_1[4] = zmm1_1
    rbx_1[5] = zmm0_2
    rbx_1[6] = var_1d8
    __builtin_memset(&rbx_1[7], 0, 0x30)
    sub_1405d16e0(&rbx_1[0xa], var_198)
    rbx_1[0xb] = rax_21.o
    rbx_1[0xc] = zmm7
    rbx_1[0xd] = zmm14
    rbx_1[0xe] = zmm13
    rbx_1[0xf] = zmm12
    rbx_1[0x10] = zmm11
    rbx_1[0x11] = zmm10
    rbx_1[0x12] = zmm9
    rbx_1[0x13] = zmm8
    char rcx_16 = sub_1419a2ec0(*(arg4 + 0x5150), &var_298, &data_143ed6ba0, zx.d(r15))
    int128_t zmm15 = var_298.o
    int512_t zmm6_1
    zmm6_1.o = zx.o(0)
    var_278.o = sub_1414574b0(rcx_16)
    sub_141998c50(zmm15.q, &data_143ed7e10, rbx_1)
    var_188.q = rbx_1
    var_188:8.q = arg4
    void*** rax_25
    char rcx_18
    rax_25, rcx_18 = sub_14081d830(0x58, *(arg1 + 8), 1, 0)
    void*** r15_1 = rax_25
    
    if (rax_25 == 0)
        r15_1 = nullptr
    else
        var_298 = rbx_1
        sub_1414574b0(rcx_18)
        var_290.q = &data_143ed7e40
        var_278.o = var_298.o
        sub_141992bd0(r15_1, &var_2a8, &var_278, 1)
        uint128_t zmm0_6 = var_188
        *r15_1 = &data_142f86050
        *(r15_1 + 0x38) = zmm0_6
        *(r15_1 + 0x48) = zmm15
    
    sub_1419968d0(arg1, r15_1)
    r15 = arg7

var_170.q = &var_258
var_188.q = arg4
var_168.q = &var_288
var_188:8.q = arg2
var_160_1.q = &arg_18
var_178.q = arg1
int128_t* rax_26 = sub_14081d830(0x1a0, *(arg1 + 8), 1, 0)
int128_t* rbx_2 = rax_26

if (rax_26 == 0)
    rbx_2 = nullptr
else
    *(rbx_2 + 0xbc) = 0x3f800000
    __builtin_memset(rbx_2 + 0x18, 0, 0x90)
    __builtin_memset(rbx_2 + 0xd8, 0, 0x38)
    rbx_2[0xb].q = 0
    *(rbx_2 + 0xb8) = 0
    *(rbx_2 + 0xc4) = 0
    *(rbx_2 + 0xcc) = 0x3f800000
    sub_14117af20(&rbx_2[0x11])

memset(rbx_2, 0, 0x1a0)
*rbx_2 = var_238.o
rbx_2[1] = var_228
rbx_2[2] = var_218
rbx_2[3] = var_208
rbx_2[4] = zmm1_1
rbx_2[5] = zmm0_2
rbx_2[6] = var_1d8
__builtin_memset(&rbx_2[7], 0, 0x30)
sub_1405d16e0(&rbx_2[0xa], var_198)
int512_t zmm6_3
int128_t zmm7_1
int128_t zmm8_1
zmm6_3, zmm7_1, zmm8_1 = sub_1414340d0(&var_188, &rbx_2[0xb])
rbx_2[0x11] = rax_21.o
uint64_t r9_2 = zx.q(r15)
rbx_2[0x12] = zmm7_1
rbx_2[0x13] = zmm14
rbx_2[0x14] = zmm13
rbx_2[0x15] = zmm12
rbx_2[0x16] = zmm11
rbx_2[0x17] = zmm10
rbx_2[0x18] = zmm9
rbx_2[0x19] = zmm8_1
char rcx_26 =
    sub_1419a2ec0(*(arg4 + 0x5150), &var_298, &data_143ed6980, r9_2.d + (r9_2 << 2).d + arg6)
zmm7_1 = var_298.o
void*** rsi_1

if (arg9 != 0)
    char rcx_32 = sub_1419a2ec0(*(arg4 + 0x5150), &var_278, &data_143ed6a90, 0)
    zmm6_3.o = var_278.o
    *(rbx_2 + 0x108) = *(arg9 + 0x20)
    rbx_2[0x10].q = *(arg9 + 8)
    sub_141457340(sub_141457340(rcx_32))
    var_188.q = rbx_2
    var_188:8.q = arg4
    var_158.b = r12.b
    void*** rax_32
    char rcx_34
    rax_32, rcx_34 = sub_14081d830(0x70, *(arg1 + 8), 1, 0)
    rsi_1 = rax_32
    
    if (rax_32 == 0)
        rsi_1 = nullptr
    else
        var_298 = rbx_2
        int128_t zmm6_5 = sub_141457340(rcx_34)
        var_290.q = &data_143ed7ee0
        var_278.o = var_298.o
        sub_141992bd0(rsi_1, &var_2a8, &var_278, 1)
        uint128_t zmm0_12 = var_188
        *rsi_1 = &data_142f86070
        *(rsi_1 + 0x38) = zmm0_12
        *(rsi_1 + 0x48) = zmm6_5
        *(rsi_1 + 0x58) = zmm7_1
        rsi_1[0xd] = var_158.q
else
    zmm6_3.o = zx.o(0)
    var_278.o = sub_141457340(rcx_26)
    sub_141998c50(var_298, &data_143ed7eb0, rbx_2)
    var_188.q = rbx_2
    var_188:8.q = arg4
    var_168.b = r12.b
    void*** rax_29
    char rcx_29
    rax_29, rcx_29 = sub_14081d830((arg9 + 0x60).d, *(arg1 + 8), (arg9 + 1).d, 0)
    rsi_1 = rax_29
    
    if (rax_29 == 0)
        rsi_1 = nullptr
    else
        var_298 = rbx_2
        sub_141457340(rcx_29)
        var_290.q = &data_143ed7ee0
        var_278.o = var_298.o
        sub_141992bd0(rsi_1, &var_2a8, &var_278, 1)
        uint128_t zmm0_10 = var_188
        *rsi_1 = &data_142f86060
        *(rsi_1 + 0x38) = zmm0_10
        *(rsi_1 + 0x48) = zmm7_1
        rsi_1[0xb] = var_168.q

sub_1419968d0(arg1, rsi_1)
int64_t result
int512_t zmm6_6
result, zmm6_6 = sub_1405d1550(&var_198)
__security_check_cookie(rax_1 ^ &var_2c8)
zmm6_6.o = var_58
return result
