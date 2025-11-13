// 函数: sub_14144c1a0
// 地址: 0x14144c1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void*** var_328 = sub_1410fccd0(arg3, &data_1439b70c8, u"External", 0)
sub_1410fccd0(arg3, &data_1439b70c0, u"External", 0)
int64_t* rax_4 = sub_14081d830(0x210, arg3[1], 1, 0)
int64_t* var_298 = rax_4
int64_t* rsi = rax_4

if (rax_4 == 0)
    rsi = nullptr
    var_298 = nullptr
else
    void* rax_5 = &rax_4[2]
    int64_t i_2 = 4
    int64_t i
    
    do
        *(rax_5 - 0x10) = 0
        *(rax_5 - 8) = 0
        *rax_5 = 0
        *(rax_5 + 8) = 0
        rax_5 += 0x20
        i = i_2
        i_2 -= 1
    while (i != 1)
    __builtin_memset(&rsi[0x10], 0, 0x20)
    sub_141442300(&rsi[0x14])
    __builtin_memset(&rsi[0x3c], 0, 0x28)

memset(rsi, 0, 0x210)
void* r15 = &rsi[4]
int64_t* r14 = &arg7[1]
int32_t var_2b8 = 1
int32_t rbx = 2
*rsi = *arg7
rsi[1] = *r14
rsi[2] = arg7[6]
rsi[3] = arg7[7]
uint64_t rsi_1 = zx.q(var_2b8)
uint128_t var_308
uint128_t var_278
uint128_t var_1d8
int128_t var_1c8_1
uint128_t var_1b8
int32_t var_15c_1
int32_t var_158_1
uint128_t var_108
int128_t var_f8
void*** var_e8
int64_t var_d8_1
int64_t var_c8
uint128_t var_a8

do
    __builtin_memset(&var_308, 0, 0x20)
    sub_1414618c0(arg4, &var_308)
    int32_t rax_10 = arg4[0x2b3].d
    int32_t var_184_1 = *(arg4 + 0x159c)
    int32_t var_180_1 = arg4[0x2b4].d
    int32_t var_17c_1 = *(arg4 + 0x15a4)
    uint128_t var_148
    __builtin_memset(&var_148, 0, 0x40)
    int32_t var_174_1 = 1
    int32_t var_16c_1 = 1
    char var_160_1 = 1
    int32_t var_150_1 = 1
    int32_t var_178_1 = 1
    int32_t var_168_1 = 0x3f800000
    int32_t var_164_1 = 0x3f800000
    var_158_1 = 0
    int32_t var_14c_1 = 0x3f800000
    char var_154_1 = 0
    var_1c8_1 = zx.o(0)
    rsi_1 = zx.q(rsi_1.d + 1)
    int64_t var_88_1 = 0
    var_15c_1 = rbx * rbx
    void*** rax_16 = *r14
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rbx))
    var_e8 = rax_16
    int64_t var_e0_1 = arg7[rsi_1]
    var_d8_1 = r14[6]
    int32_t var_170_1 = zmm0_1.d
    int64_t rax_19 = arg7[rsi_1 + 6]
    var_1d8 = zx.o(0)
    var_c8 = 0
    var_a8 = var_88_1.o
    int64_t var_d0_1 = rax_19
    var_1b8 = var_c8.o
    var_278 = rax_10.o
    int128_t var_268_1 = var_178_1.o
    uint128_t var_258_1 = var_168_1.o
    int128_t var_248_1 = var_158_1.o
    int128_t var_238
    __builtin_memset(&var_238, 0, 0x40)
    uint128_t var_1f8_1 = var_108
    int128_t var_1e8_1 = var_f8
    sub_14144de80(arg3, arg4, arg6, &var_308, &var_e8, &var_278, &var_1b8, &var_a8, &var_1d8)
    int128_t var_2f8
    int64_t* rcx_7 = var_2f8:8.q
    *r15 = var_1d8
    *(r15 + 0x10) = var_1c8_1
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x38))(rcx_7)
    
    int64_t* rcx_8 = var_2f8.q
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x38))(rcx_8)
    
    int64_t* rcx_9 = var_308:8.q
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x38))(rcx_9)
    
    int64_t* rcx_10 = var_308.q
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x38))(rcx_10)
    
    rbx = rol.d(rbx, 1)
    r14 = &r14[1]
    r15 += 0x20
while (rsi_1.d s< 4)

__builtin_memset(&var_308, 0, 0x20)
sub_1414618c0(arg4, &var_308)
int32_t rax_24 = arg4[0x2b3].d
void*** rdx_5 = var_328
void*** rsi_2 = var_298
int32_t var_184_2 = *(arg4 + 0x159c)
int32_t var_180_2 = arg4[0x2b4].d
int32_t var_17c_2 = *(arg4 + 0x15a4)
uint128_t var_148_1
__builtin_memset(&var_148_1, 0, 0x40)
int32_t var_150_2 = 1
int32_t var_178_2
__builtin_memcpy(&var_178_2, 
    "\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x41\x01\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 
    0x19)
var_15c_1.q = 0x40
int32_t var_14c_2 = 0x3f800000
char var_154_2 = 0
int128_t var_b8
int128_t var_b8_1 = var_b8
var_1d8.q = *arg7
int128_t var_78
int128_t var_1a8_2 = var_78
var_1c8_1.q = arg7[6]
int128_t zmm1_1 = var_178_2.o
var_1b8.q = 0
var_a8.q = 0
var_1d8:8.q = rdx_5
var_c8.o = var_1b8
var_1c8_1:8.q = rdx_5
var_1b8 = var_a8
var_278 = rax_24.o
int128_t var_268_2 = zmm1_1
int32_t var_168_2
uint128_t var_258_2 = var_168_2.o
int128_t var_248_2 = var_158_1.o
int128_t var_238_1
__builtin_memset(&var_238_1, 0, 0x40)
uint128_t var_1f8_2 = var_108
int128_t var_1e8_2 = var_f8
sub_14144de80(arg3, arg4, arg6, &var_308, &var_1d8, &var_278, &var_1b8, &var_c8, &rsi_2[0x10])
int128_t var_2f8_1
int64_t* rcx_14 = var_2f8_1:8.q
int64_t i_3 = 4

if (rcx_14 != 0)
    (*(*rcx_14 + 0x38))(rcx_14)

int64_t* rcx_15 = var_2f8_1.q

if (rcx_15 != 0)
    (*(*rcx_15 + 0x38))(rcx_15)

int64_t* rcx_16 = var_308:8.q

if (rcx_16 != 0)
    (*(*rcx_16 + 0x38))(rcx_16)

int64_t* rcx_17 = var_308.q

if (rcx_17 != 0)
    (*(*rcx_17 + 0x38))(rcx_17)

var_2f8_1.d = data_1439c7ae8
var_d8_1.o = zx.o(0)
uint128_t zmm0_2 = data_1439c7ad8
void*** rbx_2 = *(*(arg6 + 8) + 0x44)
var_328 = rbx_2
var_2f8_1:8.d = var_328:4.d
int32_t var_2e8 = 1
int16_t var_2e0 = 1
wchar16 const* const var_2c8 = u"UnknownTexture2D"
int16_t var_2d0 = 0
var_308 = zmm0_2
var_2f8_1:4.d = rbx_2.d
var_2f8_1:0xc.d = 0
int32_t var_2e4 = 0x10000
int64_t var_2dc = 0xa
int32_t var_2d4 = 0x10008
int16_t var_2c0 = 1
char var_2be = 0
var_e8 = sub_141188e50(arg3, &var_308, u"PolychromaticPenumbraComposition0", 0)
void*** var_e0_2 = sub_141188e50(arg3, &var_308, u"PolychromaticPenumbraComposition1", 0)
sub_1405d16e0(&rsi_2[0x37], arg4[2])
*(rsi_2 + 0x150) = *arg6
*(rsi_2 + 0x160) = arg6[1]
*(rsi_2 + 0x170) = arg6[2]
*(rsi_2 + 0x180) = arg6[3]
*(rsi_2 + 0x190) = arg6[4]
rsi_2[0x14].d = arg4[0x2b3].d
*(rsi_2 + 0xa4) = *(arg4 + 0x159c)
rsi_2[0x15].d = arg4[0x2b4].d
*(rsi_2 + 0xac) = *(arg4 + 0x15a4)
uint128_t zmm3 = zx.o(*(arg4 + 0x159c))
uint128_t zmm4 = zx.o(arg4[0x2b4].d)
uint128_t zmm5 = zx.o(*(arg4 + 0x15a4))
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(arg4[0x2b3].d)).d f+ 0.5f
zmm3 = _mm_cvtepi32_ps(zmm3)
uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(rbx_2.d))
zmm4 = _mm_cvtepi32_ps(zmm4)
zmm6.d = zmm6.d f/ zmm1_2.d
zmm5 = _mm_cvtepi32_ps(zmm5)
zmm3.d = zmm3.d f+ 0.5f
uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o((rbx_2 u>> 0x20).d))
zmm4.d = zmm4.d f- 0.5f
_mm_shuffle_ps(zmm6, zmm6, 0xe1)
zmm3.d = zmm3.d f/ zmm0_3.d
zmm5.d = zmm5.d f- 0.5f
zmm6.d = zmm3.d
zmm4.d = zmm4.d f/ zmm1_2.d
zmm5.d = zmm5.d f/ zmm0_3.d
_mm_shuffle_ps(zmm6, zmm6, 0xc6)
zmm6.d = zmm4.d
var_1d8 = zx.o(0)
_mm_shuffle_ps(zmm6, zmm6, 0x27)
zmm6.d = zmm5.d
uint128_t var_1c8_2 = zx.o(0)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
int64_t rbx_4 = 0
var_328.o = zmm6
*(rsi_2 + 0xd0) = zmm6
int64_t i_1

do
    void*** r14_2 = *(&var_e8 + rbx_4)
    
    if (r14_2 != 0)
        int64_t* rdx_10 = arg3[1]
        var_328 = r14_2
        int16_t var_320_1 = 0
        void*** rax_43 = sub_14081d830(0x28, rdx_10, 1, 0)
        void*** rcx_21 = rax_43
        
        if (rax_43 == 0)
            rcx_21 = nullptr
        else
            zmm0_3 = var_328.o
            rcx_21[1] = r14_2[1]
            *rcx_21 = &data_142f285c0
            rcx_21[2] = 0
            *(rcx_21 + 0x18) = zmm0_3
        
        *(&var_1d8 + rbx_4) = rcx_21
    
    rbx_4 += 8
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
*(rsi_2 + 0x1e0) = var_1d8
int16_t var_2d0_1 = i_3.w
*(rsi_2 + 0x1f0) = var_1c8_2
zmm0_3 = data_1439c7ad8
var_2f8_1.d = data_1439c7ae8
var_2f8_1:0xc.d = 0
void*** rax_46 = *(*(arg6 + 8) + 0x44)
var_328 = rax_46
var_2f8_1:4.d = rax_46.d
var_2f8_1:8.d = var_328:4.d
wchar16 const* const var_2c8_1 = u"UnknownTexture2D"
var_308 = zmm0_3
int32_t var_2e8_1 = 1
int32_t var_2e4_1 = 0x10000
int16_t var_2e0_1 = 1
int64_t var_2dc_1 = 0xa
int32_t var_2d4_1 = 0x10008
int16_t var_2c0_1 = 1
char var_2be_1 = 0
void*** rax_48 = sub_141188e50(arg3, &var_308, u"DebugHarmonicComposition", 0)
int64_t* rdx_12 = arg3[1]
var_328 = rax_48
int16_t var_320_2 = 0
void*** rax_49
int512_t zmm6_1
rax_49, zmm6_1 = sub_14081d830(0x28, rdx_12, 1, 0)
void*** rcx_24 = rax_49

if (rax_49 == 0)
    rcx_24 = nullptr
else
    int128_t zmm0_4 = var_328.o
    rcx_24[1] = rax_48[1]
    *rcx_24 = &data_142f285c0
    rcx_24[2] = 0
    *(rcx_24 + 0x18) = zmm0_4

rsi_2[0x40] = rcx_24
char rcx_26 = sub_1419a2ec0(arg4[0xa2a], &var_298, &data_143ed6630, 0)
zmm6_1.o = zx.o(0)
int128_t zmm7 = var_298.o
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg4[0x2b4].d - arg4[0x2b3].d + 7)
var_328.d = (temp3 + (temp2 & 7)) s>> 3
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(*(arg4 + 0x15a4) - *(arg4 + 0x159c) + 7)
var_328:4.d = (temp5 + (temp4 & 7)) s>> 3
int64_t* var_2a8
var_2a8.o = sub_141456650(rcx_26)
sub_141998c50(zmm7.q, &data_143ed5b90, rsi_2)
void*** zmm0_5 = var_328
int64_t* rdx_18 = arg3[1]
var_1b8.q = rsi_2
var_1b8 = zmm7
int32_t var_198 = 1
var_1a8_2:8.q = zmm0_5
void*** rax_63
char rcx_28
rax_63, rcx_28 = sub_14081d830(0x60, rdx_18, 1, 0)
void*** rbx_6 = rax_63

if (rax_63 == 0)
    rbx_6 = nullptr
else
    var_328 = rsi_2
    sub_141456650(rcx_28)
    var_320_2.q = &data_143ed5bc0
    var_328.o = var_328.o
    void var_318
    sub_141992bd0(rbx_6, &var_318, &var_328, 2)
    uint128_t zmm0_7 = var_1b8
    *rbx_6 = &data_142f860f0
    *(rbx_6 + 0x38) = zmm0_7
    *(rbx_6 + 0x48) = var_1a8_2
    rbx_6[0xb] = var_198.q

sub_1419968d0(arg3, rbx_6)
__builtin_memset(&var_308, 0, 0x20)
*arg2 = 0
arg2[1] = 0
sub_1414618c0(arg4, &var_308)
int32_t rax_64 = arg4[0x2b3].d
int32_t var_184_3 = *(arg4 + 0x159c)
int32_t var_180_3 = arg4[0x2b4].d
int32_t var_17c_3 = *(arg4 + 0x15a4)
int64_t rax_68 = data_143ed5fa0
uint128_t var_148_2
__builtin_memset(&var_148_2, 0, 0x40)
bool var_154_3 = *(rax_68 + 4) != 0
var_15c_1.q = 1
int32_t var_150_3 = 1
int32_t var_14c_3 = 0x3f800000
int32_t var_178_3
__builtin_memcpy(&var_178_3, 
    "\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x80\x3f\x01\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x19)
var_1d8 = zx.o(0)
int128_t var_1c8_3 = zx.o(0)
var_a8.q = arg5 + 0x610
int64_t rax_71 = arg4[0x2b5]
int128_t var_b8_2 = var_1a8_2
int64_t rcx_32 = rax_71 + 0xae0
int128_t var_1a8_3 = var_78
int128_t zmm1_4 = var_178_3.o

if (rax_71 == 0)
    rcx_32 = 0

var_1b8.q = rcx_32
var_c8.o = var_1b8
var_1b8 = var_a8
var_278 = rax_64.o
int128_t var_268_3 = zmm1_4
int32_t var_168_3
uint128_t var_258_3 = var_168_3.o
int128_t var_248_3 = var_158_1.o
uint128_t var_238_2 = var_148_2
int128_t var_228
__builtin_memset(&var_228, 0, 0x30)
uint128_t var_1f8_3 = var_108
int128_t var_1e8_3 = var_f8
sub_14144de80(arg3, arg4, arg6, &var_308, &var_e8, &var_278, &var_1b8, &var_c8, &var_1d8)
int128_t var_2f8_2
int64_t* rcx_34 = var_2f8_2:8.q
*arg2 = var_1d8.q
arg2[1] = var_1d8:8.q

if (rcx_34 != 0)
    (*(*rcx_34 + 0x38))(rcx_34)

int64_t* rcx_35 = var_2f8_2.q

if (rcx_35 != 0)
    (*(*rcx_35 + 0x38))(rcx_35)

int64_t* rcx_36 = var_308:8.q

if (rcx_36 != 0)
    int64_t rdx_23 = *rcx_36
    (*(rdx_23 + 0x38))(rcx_36, rdx_23)

int64_t* rcx_37 = var_308.q

if (rcx_37 != 0)
    int64_t rdx_24 = *rcx_37
    (*(rdx_24 + 0x38))(rcx_37, rdx_24)

__security_check_cookie(rax_1 ^ &var_378)
return arg2
