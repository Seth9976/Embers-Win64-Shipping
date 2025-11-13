// 函数: sub_141349300
// 地址: 0x141349300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_568
int64_t rax_1 = __security_cookie ^ &var_568
uint128_t zmm2 = *arg4
uint64_t var_4f8 = arg4[1].q
int32_t rsi = var_4f8.d
uint64_t var_518 = *(arg4 + 0x28)
int32_t r12 = var_518.d
int32_t var_410 = _mm_bsrli_si128(zmm2, 8).d
uint128_t zmm1 = *(arg4 + 0x18)
uint32_t rbx_1 = (var_518 u>> 0x20).d
uint128_t temp0_1 = _mm_bsrli_si128(zmm2, 8)
void* rcx = zmm1.q
int32_t var_528 = 1
uint128_t temp0_2 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_3 = _mm_bsrli_si128(zmm1, 8)
uint32_t var_40c = (temp0_1.q u>> 0x20).d
uint32_t rax_5 = (var_4f8 u>> 0x20).d
uint32_t var_404 = rax_5
int32_t var_508 = *(rcx + 0x44)
int32_t var_504 = *(rcx + 0x48)
int32_t rax_8 = temp0_2.d
var_4f8.d = r12
var_4f8:4.d = rbx_1
int32_t var_500 = rax_8
int32_t r12_1 = r12 - rax_8
int64_t rax_9 = data_1439b57b8
void* rax_10 = data_14395f4d0
void* rax_11 = *(arg4 + 0x18)
uint32_t rcx_2 = (temp0_3.q u>> 0x20).d
uint32_t var_4fc = rcx_2
uint32_t rbx_2 = rbx_1 - rcx_2
uint128_t var_498 = *(rax_11 + 0x50)
var_498:8.w = 1
uint128_t var_4a8 = *(rax_11 + 0x40)
var_498:0xc.d = 0xa
uint128_t var_478 = *(rax_11 + 0x70)
var_478:8.b = 1
int64_t var_488
var_488:8.w = 0
uint128_t var_524 = data_143dbb1e0
var_488:4.d = ((*(rax_11 + 0x60)).q:4.d & 0xfffeffff) | 1
uint128_t var_4b8 = var_528.o
var_4a8.d = var_518.d
void*** rax_16 = sub_141188e50(arg2, &var_4b8, u"LensFlareBlur", 0)
int64_t* rdx_1 = *(arg2 + 8)
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(r12_1)).d f* arg4[6].d
uint128_t zmm7
zmm7.d = zmm6.d f* 0.00999999978f
int64_t* rax_17 = sub_14081d830(0xa0, rdx_1, 1, 0)
int64_t* rdi = rax_17

if (rax_17 == 0)
    rdi = nullptr
else
    *rax_17 = 0
    sub_14117af20(&rax_17[2])

memset(rdi, 0, 0xa0)
*rdi = *(arg4 + 0x18)
int16_t var_4e0 = 2
char var_4de = 0
int32_t var_4dc = 0xffffffff
*(rdi + 0x10) = rax_16.o
uint128_t var_228
sub_14117af20(&var_228)
uint128_t zmm1_1 = *(rdi + 0x10)
int128_t var_238 = *rdi
int128_t zmm0_1 = *(rdi + 0x20)
var_228 = zmm1_1
int128_t var_218 = zmm0_1
uint128_t var_208 = *(rdi + 0x30)
int128_t var_1f8 = *(rdi + 0x40)
uint128_t var_1e8 = *(rdi + 0x50)
int128_t var_1d8 = *(rdi + 0x60)
int128_t var_1c8 = *(rdi + 0x70)
uint128_t var_1b8 = *(rdi + 0x80)
int128_t var_1a8 = *(rdi + 0x90)
int32_t* rax_20
float zmm6_1[0x4]
uint128_t zmm7_1
int128_t zmm9
rax_20, zmm6_1, zmm7_1, zmm9 = sub_141455b70(&var_4b8, &var_508)
int128_t zmm12 = 0x3f000000
zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
int32_t var_118 = r12_1
int128_t zmm0_2 = *rax_20
uint32_t var_114 = rbx_2
zmm6_1[0] = zmm6_1[0] * 9.99999975e-05f
int32_t var_110 = 1
int128_t var_188 = zmm0_2
int32_t var_168 = rax_20[8]
int128_t var_178 = *(rax_20 + 0x10)
int32_t var_164 = rax_20[9]
int128_t var_158 = *(rax_20 + 0x30)
int32_t var_160 = rax_20[0xa]
int128_t var_148 = *(rax_20 + 0x40)
int32_t var_15c = rax_20[0xb]
int64_t* rax_25 = arg4[3].q
int128_t var_138 = *(rax_20 + 0x50)
int32_t var_10c = zmm7_1.d
int128_t var_128 = *(rax_20 + 0x60)
int32_t var_104 = (*(arg4 + 0x68)).d
float temp0_5[0x4] = _mm_max_ss(zmm6_1[0], 0x3f800000)
void* var_198 = rax_10
int32_t var_100 = 0x3f000000
int64_t* var_538 = rax_25
void* var_530 = rax_10
zmm0_2.d = 1f / temp0_5[0]
int32_t var_108 = zmm0_2.d
float var_4d8[0x4]
sub_1419a2ec0(*(arg3 + 0x5150), &var_4d8, &data_143eba350, 0)
zmm6_1 = var_4d8
sub_1419a2ec0(*(arg3 + 0x5150), &var_4d8, &data_143eba460, 0)
void var_3b8
void* rax_26 = &var_3b8
float var_3c8[0x4] = var_4d8
int128_t* rcx_12 = &var_238
float var_3d8[0x4] = zmm6_1
int64_t i_3 = 2
float zmm0_3[0x4]
int128_t zmm1_2
int64_t i

do
    rax_26 += 0x80
    zmm0_3 = *rcx_12
    zmm1_2 = rcx_12[1]
    rcx_12 = &rcx_12[8]
    *(rax_26 - 0x80) = zmm0_3
    zmm0_3 = rcx_12[-6]
    *(rax_26 - 0x70) = zmm1_2
    zmm1_2 = rcx_12[-5]
    *(rax_26 - 0x60) = zmm0_3
    zmm0_3 = rcx_12[-4]
    *(rax_26 - 0x50) = zmm1_2
    zmm1_2 = rcx_12[-3]
    *(rax_26 - 0x40) = zmm0_3
    zmm0_3 = rcx_12[-2]
    *(rax_26 - 0x30) = zmm1_2
    zmm1_2 = rcx_12[-1]
    *(rax_26 - 0x20) = zmm0_3
    *(rax_26 - 0x10) = zmm1_2
    i = i_3
    i_3 -= 1
while (i != 1)
int64_t* rdx_5 = *(arg2 + 8)
zmm1_2 = rcx_12[1]
*rax_26 = *rcx_12
zmm0_3 = rcx_12[2]
*(rax_26 + 0x10) = zmm1_2
zmm1_2 = rcx_12[3]
*(rax_26 + 0x20) = zmm0_3
zmm0_3 = var_538.o
*(rax_26 + 0x30) = zmm1_2
int64_t var_268 = rax_9
float var_278[0x4] = zmm0_3
int64_t var_248 = r12_1.q
int128_t var_260 = var_508.o
int64_t var_250 = var_4f8
void*** rax_29
char rcx_13
rax_29, rcx_13 = sub_14081d830(0x1e0, rdx_5, 1, 0)
void*** rbx_4 = rax_29
void var_548

if (rax_29 == 0)
    rbx_4 = nullptr
else
    var_538 = rdi
    sub_141357ef0(rcx_13)
    var_530 = &data_143ebe010
    var_4d8 = var_538.o
    sub_141992bd0(rbx_4, &var_548, &var_4d8, 1)
    int64_t i_4 = 3
    *rbx_4 = &data_142f64bf0
    float (* rcx_15)[0x4] = &var_3d8
    float (* rax_30)[0x4] = &rbx_4[8]
    int128_t zmm1_3
    int64_t i_1
    
    do
        rax_30 = &rax_30[8]
        float zmm0_5[0x4] = *rcx_15
        zmm1_3 = rcx_15[1]
        rcx_15 = &rcx_15[8]
        rax_30[-8] = zmm0_5
        zmm0_5 = rcx_15[-6]
        rax_30[-7] = zmm1_3
        zmm1_3 = rcx_15[-5]
        rax_30[-6] = zmm0_5
        zmm0_5 = rcx_15[-4]
        rax_30[-5] = zmm1_3
        zmm1_3 = rcx_15[-3]
        rax_30[-4] = zmm0_5
        zmm0_5 = rcx_15[-2]
        rax_30[-3] = zmm1_3
        zmm1_3 = rcx_15[-1]
        rax_30[-2] = zmm0_5
        rax_30[-1] = zmm1_3
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    zmm1_3 = rcx_15[1]
    *rax_30 = *rcx_15
    rax_30[1] = zmm1_3

sub_1419968d0(arg2, rbx_4)
void* rax_31 = *arg4
var_528 = 1
int128_t var_4a8_1 = *(rax_31 + 0x40)
int128_t zmm1_4 = *(rax_31 + 0x60)
float var_498_1 = (*(rax_31 + 0x50)).d
var_498_1:8.w = 1
int64_t var_488_1 = zmm1_4.q
uint128_t var_478_1 = *(rax_31 + 0x70)
var_488_1:8.w = 0
uint128_t var_524_1 = data_143dbb1e0
var_478_1:8.b = 1
var_488_1.d = zmm1_4.d | 0x8000
var_4b8 = var_528.o
var_488_1:4.d = (var_488_1:4.d & 0xfffeffff) | 1
var_4a8_1.d = var_518.d
void*** rax_38 = sub_141188e50(arg2, &var_4b8, u"LensFlareTexture", 0)
void*** rdi_1 = 1

if (*(arg4 + 0x6c) == 0)
    rdi_1.b = 2
else
    int64_t rax_39 = *(arg4 + 8)
    float rcx_18 = data_143dbb190
    uint128_t zmm0_7 = zx.o(data_143dbb188.q)
    int32_t r9_1 = arg4[1].d - *(arg4 + 8)
    int32_t r8_2 = *(arg4 + 0x14) - *(arg4 + 0xc)
    var_4b8:8.d = rcx_18
    var_4a8_1:4.d = rcx_18
    var_498_1 = rcx_18
    var_4b8:0xc.q = zmm0_7.q
    var_4a8_1:8.q = zmm0_7.q
    var_4b8:0xc.d = rax_39.d
    var_4a8_1:8.d = rax_39.d
    var_4b8.q = zmm0_7.q
    var_498_1:4.q = 0
    var_498_1:0xc.q = 1
    var_488_1:4.d = 0
    var_488_1:8.d = 1
    var_4a8_1.d = (rax_39 u>> 0x20).d
    var_4a8_1:0xc.d = (rax_39 u>> 0x20).d
    
    if (r9_1 != data_143dbb180.d || r8_2 != data_143dbb180:4.d)
        var_4b8.d = r9_1
        var_4b8:4.d = r8_2
        var_4b8:8.d = 1
    
    sub_141996750(arg2, *arg4, rax_38, &var_4b8)

int128_t zmm11 = *(arg4 + 0x64)
int32_t rdx_11 = *(arg4 + 0x38)
int32_t i_2 = 0
int64_t rbx_5 = var_410.q
int128_t zmm13
zmm13.d = zmm11.d f* arg4[5].d
int32_t rcx_22 = rsi + var_410
int128_t zmm14
zmm14.d = zmm11.d f* *(arg4 + 0x54)
int32_t var_540
var_540.q = rbx_5
uint32_t var_53c_1 = rbx_2 + (rsi.q u>> 0x20).d
int128_t zmm15
zmm15.d = zmm11.d f* *(arg4 + 0x58)
zmm11.d = zmm11.d f* *(arg4 + 0x5c)
zmm13.d = zmm13.d f* 0.25f
zmm14.d = zmm14.d f* 0.25f
zmm15.d = zmm15.d f* 0.25f
zmm11.d = zmm11.d f* 0.25f
uint128_t zmm10
zmm10.d = _mm_cvtepi32_ps(zx.o((rcx_22.q u>> 0x20).d)).d f* 0.5f
zmm7_1.d = _mm_cvtepi32_ps(zx.o(rcx_22)).d f* 0.5f
int32_t var_4bc = zmm10.d
uint128_t zmm8
zmm8.d = float.s(zx.q(rdx_11 - 1))
int32_t var_4c0 = zmm7_1.d
int32_t var_540_2 = zmm8.d

if (rdx_11 != 0)
    float zmm6_2 = zmm8.d * -1f
    int128_t var_88_1 = zmm9
    int32_t var_4c8_1 = _mm_cvtepi32_ps(zx.o(rsi - var_410)).d
    
    do
        var_538.o = *(arg4[4].q + sx.q(i_2) * 0x10)
        void**** rax_46
        float zmm6_3
        rax_46, zmm6_3 = sub_14081d830(0xc0, *(arg2 + 8), 1, 0)
        void**** rsi_2 = rax_46
        
        if (rax_46 == 0)
            rsi_2 = nullptr
        else
            sub_14117af20(&rax_46[2])
        
        rsi_2[1] = 0
        memset(&rsi_2[4], 0, 0x80)
        int128_t zmm4_1 = var_530:4.d
        float zmm3_1[0x4] = var_538.d
        rsi_2[0x15] = 0
        zmm3_1[0] = zmm3_1[0] f* zmm13.d
        *rsi_2 = rax_16
        float temp0_9[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
        float zmm2_1 = zmm11.d f* zmm4_1.d
        char var_420_1 = rdi_1.b
        zmm4_1.d = zmm4_1.d f* zmm8.d
        int16_t var_41f_1 = 0
        uint64_t zmm1_5
        zmm1_5.d = var_530.d.d f* zmm15.d
        int32_t var_41c_1 = 0xffffffff
        zmm4_1.d = zmm4_1.d f+ zmm4_1.d
        *(rsi_2 + 0x10) = rax_38.o
        int128_t zmm0_8 = var_538:4.d
        rsi_2[0x14] = rax_10
        zmm4_1.d = zmm4_1.d f+ zmm6_3
        zmm0_8.d = zmm0_8.d f* zmm14.d
        temp0_9[0] = zmm0_8.d
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
        zmm9.d = zmm4_1.d f* var_4c8_1
        temp0_10[0] = zmm1_5.d
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
        temp0_11[0] = zmm2_1
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
        zmm0_8.d = zmm9.d f* zmm12.d
        zmm8.d = _mm_cvtepi32_ps(zx.o(rax_5 - (rbx_5 u>> 0x20).d)).d f* zmm4_1.d
        *(rsi_2 + 0xb0) = temp0_12
        zmm7_1.d = zmm7_1.d f- zmm0_8.d
        zmm1_5.d = zmm8.q.d f* zmm12.d
        var_538.o = temp0_12
        zmm6_3 = zmm10.d f- zmm1_5.d
        sub_1419a2ec0(*(arg3 + 0x5150), &var_528, &data_143ed5e80, 0)
        uint128_t var_3e8
        sub_1419a2ec0(*(arg3 + 0x5150), &var_3e8, &data_143eba570, 0)
        zmm10 = var_3e8
        zmm12 = var_528.o
        var_498_1 = rax_9.d
        int64_t rax_53 = data_14395d9e8
        var_228 = var_410.o
        var_498_1:8.q = rax_53
        int128_t zmm0_9 = var_508.o
        int64_t rax_54 = data_1439c9210
        var_1f8.d = zmm9.d
        var_228.q = rsi_2
        var_208:8.q = var_4f8
        var_1f8:0xc.d = zmm6_3
        var_1f8:4.d = zmm8.d
        var_1f8:8.d = zmm7_1.d
        void*** rax_55
        char rcx_30
        rax_55, rcx_30 = sub_14081d830(0xc0, *(arg2 + 8), 1, 0)
        rdi_1 = rax_55
        
        if (rax_55 == 0)
            rdi_1 = nullptr
        else
            var_4d8[0].q = rsi_2
            int128_t zmm6_4 = sub_141358ec0(rcx_30)
            var_4d8[2].q = &data_143ebe180
            var_538.o = var_4d8
            sub_141992bd0(rdi_1, &var_548, &var_538, 1)
            uint128_t zmm0_11 = var_228
            *rdi_1 = &data_142f64c00
            *(rdi_1 + 0x38) = zmm10
            *(rdi_1 + 0x48) = zmm0_11
            *(rdi_1 + 0x58) = zmm0_9
            *(rdi_1 + 0x68) = var_208
            *(rdi_1 + 0x78) = var_1f8
            *(rdi_1 + 0x88) = zmm12
            *(rdi_1 + 0x98) = zmm10
            *(rdi_1 + 0xa8) = zmm6_4
            rdi_1[0x17] = rax_54
        
        sub_1419968d0(arg2, rdi_1)
        int512_t zmm6_5
        zmm6_5.o = zmm6_2
        i_2 += 1
        rdi_1.b = 1
        zmm7_1 = var_4c0
        zmm10 = var_4bc
        zmm8 = var_540_2
        zmm12 = 0x3f000000
    while (i_2 u< *(arg4 + 0x38))

*arg1 = rax_38
*(arg1 + 8) = var_410.o
__security_check_cookie(rax_1 ^ &var_568)
return arg1
