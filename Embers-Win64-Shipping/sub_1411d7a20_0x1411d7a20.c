// 函数: sub_1411d7a20
// 地址: 0x1411d7a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg5
bool cond:0 = data_1439b6158 s> 0
uint64_t var_230 = r14[3]
int32_t rax_1 = arg4[8]
uint32_t r12_1 = var_230.d * rax_1
uint32_t r13_1 = r14[4].d * rax_1
var_230:4.d *= rax_1
var_230.d = r12_1
uint32_t r15_1 = (var_230 u>> 0x20).d
int32_t rax_3 = r12_1 * r15_1
int32_t rcx_3 = r12_1 * r13_1
int32_t rdx_1 = r15_1 * r15_1
uint32_t var_238
int32_t var_200
int32_t var_1f8
int128_t* rax_4
int32_t* rcx_4
int32_t* rdx_2
uint32_t r8
int32_t* r9
int128_t* r10
int128_t* r11
float zmm5[0x4]
uint128_t zmm6
float zmm8[0x4]
float zmm10[0x4]
uint128_t zmm11
int32_t var_1fc_1

if (rax_3 u< rcx_3 || rax_3 u< rdx_1)
    var_238 = r12_1
    r8 = r12_1
    
    if (rcx_3 u< rax_3 || rcx_3 u< rdx_1)
        zmm6 = 0x3f800000
        rdx_2 = 4
        var_238 = r15_1
        r8 = r15_1
        var_200 = 0x3f800000
        zmm5 = 0x3f800000
        var_1f8 = 0
        r9 = 8
        zmm10 = zx.o(0)
        rax_4 = 0xc
        zmm11 = 0x3f800000
        r10 = 0x10
        r15_1 = r13_1
        r11 = 0x14
        rcx_4 = nullptr
        zmm8 = zx.o(0)
        var_1fc_1 = 0
    else
        zmm6 = 0x3f800000
        zmm5 = zx.o(0)
        int32_t var_1fc = 0xbf800000
        var_200 = 0
        zmm8 = 0xbf800000
        var_1f8 = 0
        zmm10 = zx.o(0)
        rcx_4 = 4
        zmm11 = 0x3f800000
        rax_4 = 0x10
        r15_1 = r13_1
        r9 = 8
        rdx_2 = nullptr
        r10 = 0xc
        r11 = 0x14
else
    zmm6 = 0x3f800000
    zmm5 = zx.o(0)
    var_1f8 = 0x3f800000
    var_200 = 0
    zmm10 = 0x3f800000
    zmm11 = zx.o(0)
    var_238 = r12_1
    rcx_4 = 8
    r8 = r12_1
    rax_4 = 0x14
    rdx_2 = nullptr
    r9 = 4
    r10 = 0xc
    r11 = 0x10
    zmm8 = zx.o(0)
    var_1fc_1 = 0
uint128_t zmm3
zmm3.d = (*(rax_4 + r14)).d f- *(rcx_4 + r14)
uint128_t zmm4
zmm4.d = (*(r10 + r14)).d f- *(rdx_2 + r14)
uint128_t zmm9
zmm9.d = (*(r11 + r14)).d f- *(r9 + r14)

if (cond:0 != 0)
    r8 = data_1439b6220
    r15_1 = data_1439b6224
    var_238 = r8

uint128_t zmm0 = zx.o(*r14)
uint128_t zmm1 = zx.o(*(r14 + 0xc))
uint128_t zmm14 = zmm0
int32_t rax_5 = r14[1].d
uint64_t var_1d8 = zmm0.q
uint128_t zmm13
zmm13.d = zmm1.d f+ zmm0.d
int32_t rax_6 = *(r14 + 0x14)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm14.d = _mm_shuffle_ps(zmm14, zmm14, 0x55).d f+ zmm0.d
uint64_t var_1cc = zmm1.q
zmm1 = zmm6
zmm0.d = rax_5.d f+ rax_6
zmm9.d = zmm9.d f* 0.5f
zmm13.d = zmm13.d f* 0.5f
uint32_t var_1a8 = r8
uint32_t var_1a4 = r15_1
var_1cc.d = 0x3f800000
zmm0.d = zmm0.d f* 0.5f
int32_t var_208 = zmm13.d
zmm14.d = zmm14.d f* 0.5f
int32_t var_1ec = zmm0.d
zmm0.d = data_1439b6110.d f* arg4[3]
zmm4.d = zmm4.d f* 0.5f
zmm0.d = zmm0.d f* 0.5f
var_1d8.d = zmm0.d
var_1d8:4.d = zmm0.d
int32_t var_1d0_1 = zmm0.d

if (not(zmm9.d f== 0f))
    zmm1.d = zmm1.d f/ zmm9.d

zmm0 = zmm6

if (not(zmm4.d f== 0f))
    zmm0.d = zmm0.d f/ zmm4.d

zmm4 = data_143dbb200
uint128_t zmm12
zmm12.d = -1f f/ zmm3.d
int64_t var_154 = 0
int64_t var_14c = 0
int64_t var_140 = 0
int64_t var_138 = 0
int32_t var_12c = 0
int32_t var_144 = zmm1.d
zmm1.d = zmm3.d f* zmm5[0]
int32_t var_158 = zmm0.d
zmm0.d = zmm3.d f* zmm8[0]
zmm8 = zmm1
zmm3.d = zmm3.d f* zmm10[0]
zmm1.d = zmm1.d f* zmm1.d
zmm9 = zmm0
int32_t var_130 = zmm12.d
zmm12 = zmm3
zmm3.d = zmm3.d f* zmm3.d
zmm0.d = zmm0.d f* zmm0.d
zmm8[0] = zmm8[0] * 0.5f
zmm1.d = zmm1.d f+ zmm0.d
zmm12.d = zmm12.d f* 0.5f
float var_218 = zmm8[0]
zmm9.d = zmm9.d f* 0.5f
zmm1.d = zmm1.d f+ zmm3.d
int32_t var_1f0 = zmm12.d
zmm3 = 0x322bcc77
zmm1.d = zmm1.d f* 0.25f
float zmm2[0x4]
float zmm15[0x4]

if (not(zmm1.d f!= zmm6.d))
    zmm15 = zmm8
    zmm5 = zmm9
    zmm13 = zmm12
else if (zmm1.d f>= 9.99999994e-09f)
    zmm5 = 0x3f000000
    zmm4 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
    zmm2 = 0x3f000000
    zmm3.d = zmm1.d f* 0.5f
    zmm0.d = zmm4.d f* zmm4.d
    zmm1.d = zmm3.d f* zmm0.d
    zmm2[0] = 0.5f f- zmm1.d
    zmm0.d = zmm4.d f* zmm2[0]
    zmm4.d = zmm4.d f+ zmm0.d
    zmm1.d = zmm4.d f* zmm4.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm5[0] = 0.5f f- zmm3.d
    zmm3 = 0x322bcc77
    zmm0.d = zmm4.d f* zmm5[0]
    zmm4.d = zmm4.d f+ zmm0.d
    zmm13 = zmm4
    arg5.d = zmm4.d
    zmm4 = data_143dbb200
    zmm15 = zmm13
    zmm5 = zmm13
    zmm15[0] = zmm15[0] * zmm8[0]
    zmm5[0] = zmm5[0] f* zmm9.d
    zmm13.d = zmm13.d f* zmm12.d
else
    zmm15 = data_143dbb1f8
    zmm13 = zmm4
    zmm5 = data_143dbb1fc

arg5.d = zmm5[0]
zmm12.d = zmm10.d f* zmm13.d
zmm0.d = zmm11.d f* zmm5[0]
zmm11.d = zmm11.d f* zmm15[0]
zmm12.d = zmm12.d f- zmm0.d
zmm10[0] = zmm10[0] * zmm15[0]
zmm2 = zmm11
zmm2[0] = zmm2[0] f* zmm11.d
zmm10 ^= data_142d3f780
zmm0.d = zmm12.d f* zmm12.d
zmm1.d = zmm10.d f* zmm10[0]
zmm2[0] = zmm2[0] f+ zmm0.d
zmm2[0] = zmm2[0] f+ zmm1.d

if (not(zmm2[0] f== zmm6.d))
    if (zmm2[0] f>= zmm3.d)
        zmm0 = zmm2
        float temp0_3[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0.d)
        zmm2 = 0x3f000000
        zmm3.d = zmm0.d f* 0.5f
        zmm0.d = temp0_3.d f* temp0_3[0]
        zmm1.d = zmm3.d f* zmm0.d
        zmm2[0] = 0.5f f- zmm1.d
        zmm0.d = temp0_3.d f* zmm2[0]
        temp0_3[0] = temp0_3[0] f+ zmm0.d
        zmm1.d = temp0_3.d f* temp0_3[0]
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = temp0_3.d f* zmm4.d
        temp0_3[0] = temp0_3[0] f+ zmm0.d
        int64_t var_1b8
        var_1b8.d = temp0_3[0]
        zmm0.d = temp0_3.d f* zmm12.d
        temp0_3[0] = temp0_3[0] * zmm10[0]
        zmm1.d = temp0_3.d f* zmm11.d
        zmm12 = zmm0
        zmm10 = temp0_3
        zmm5 = arg5.d
        zmm11 = zmm1
    else
        zmm12 = data_143dbb1f8
        zmm10 = zmm4
        zmm11 = data_143dbb1fc

zmm2 = var_218
zmm9.d = zmm9.d f- zmm14.d
zmm2[0] = zmm2[0] f- var_208
zmm14.d = var_1f0.d f- var_1ec
zmm4.d = zmm12.d f* zmm13.d
int32_t var_18c = 0
zmm6 = zmm9.d
zmm0.d = zmm11.d f* zmm13.d
int32_t var_17c = 0
zmm9.d = zmm2.d f* zmm12.d
int32_t var_16c = 0
zmm1.d = zmm14.d f* zmm10[0]
int32_t var_15c = 0x3f800000
zmm3.d = zmm10.d f* zmm5[0]
uint128_t zmm7
zmm7.d = zmm11.d f* zmm15[0]
zmm3.d = zmm3.d f- zmm0.d
zmm0.d = zmm10.d f* zmm15[0]
zmm4.d = zmm4.d f- zmm0.d
zmm8 = zmm3
zmm8[0] = zmm8[0] * zmm2[0]
zmm2[0] = zmm2[0] * zmm15[0]
zmm0.d = zmm12.d f* zmm5[0]
zmm7.d = zmm7.d f- zmm0.d
zmm0.d = zmm6.d f* zmm11.d
zmm9.d = zmm9.d f+ zmm0.d
zmm0.d = zmm4.d f* zmm6.d
zmm6.d = zmm6.d f* zmm5[0]
zmm5 = var_158.o
zmm9.d = zmm9.d f+ zmm1.d
zmm8[0] = zmm8[0] f+ zmm0.d
zmm2[0] = zmm2[0] f+ zmm6.d
zmm1.d = zmm7.d f* zmm14.d
zmm6 = var_14c:4.o
zmm14.d = zmm14.d f* zmm13.d
zmm8[0] = zmm8[0] f+ zmm1.d
zmm2[0] = zmm2[0] f+ zmm14.d
zmm14 = data_142d5beb0
float var_218_1 = zmm2[0]
float var_198[0x4]
var_198[0] = zmm12.d
float temp0_4[0x4] = _mm_shuffle_ps(var_198, var_198, 0xe1)
temp0_4[0] = zmm3.d
zmm3 = var_138.o
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
temp0_5[0] = zmm15[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
zmm12 = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
zmm0 = _mm_shuffle_ps(temp0_6, temp0_6, 0)
zmm1 = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xff), zmm14)
zmm12 = _mm_mul_ps(zmm12, zmm6)
zmm0 = _mm_mul_ps(zmm0, zmm5)
zmm1 = _mm_mul_ps(zmm1, zmm3)
zmm12 = _mm_add_ps(zmm12, zmm0)
zmm0 = arg5.d
zmm12 = _mm_add_ps(_mm_add_ps(zmm12, zmm1), temp0_11)
float var_188[0x4]
var_188[0] = zmm11.d
float temp0_18[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
temp0_18[0] = zmm4.d
float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
temp0_19[0] = zmm0.d
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
zmm11 = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0x55), zmm6)
zmm0 = _mm_shuffle_ps(temp0_20, temp0_20, 0)
zmm1 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xff), zmm14)
zmm0 = _mm_mul_ps(zmm0, zmm5)
zmm1 = _mm_mul_ps(zmm1, zmm3)
*(r14 + 0x30) = zmm12
zmm11 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm11, zmm0), zmm1), temp0_26)
float var_178[0x4]
var_178[0] = zmm10[0]
float temp0_32[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
temp0_32[0] = zmm7.d
float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc6)
temp0_33[0] = zmm13.d
float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
zmm7 = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
zmm0 = _mm_shuffle_ps(temp0_34, temp0_34, 0)
zmm1 = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)
float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xff), zmm14)
zmm0 = _mm_mul_ps(zmm0, zmm5)
zmm1 = _mm_mul_ps(zmm1, zmm3)
zmm7 = _mm_mul_ps(zmm7, zmm6)
*(r14 + 0x40) = zmm11
zmm7 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm7, zmm0), zmm1), temp0_39)
float var_168[0x4]
var_168[0] = zmm9.d
float temp0_46[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
temp0_46[0] = zmm8[0]
float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xc6)
temp0_47[0] = var_218_1[0]
float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xc9)
float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0x55)
zmm0 = _mm_shuffle_ps(temp0_48, temp0_48, 0)
zmm1 = _mm_shuffle_ps(temp0_48, temp0_48, 0xaa)
float temp0_52[0x4] = _mm_mul_ps(temp0_49, zmm6)
zmm0 = _mm_mul_ps(zmm0, zmm5)
zmm1 = _mm_mul_ps(zmm1, zmm3)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xff)
float temp0_56[0x4] = _mm_add_ps(temp0_52, zmm0)
float temp0_57[0x4] = _mm_mul_ps(temp0_55, zmm14)
*(r14 + 0x50) = zmm7
float temp0_59[0x4] = _mm_add_ps(_mm_add_ps(temp0_56, zmm1), temp0_57)
*(r14 + 0x60) = temp0_59
arg5 = sub_141193740(arg1, &arg4[0x34], u"External", 0)
void*** rax_11 = sub_1410fccd0(arg1, &arg4[0x22], u"External", 0)

if (cond:0 != 0 && data_1439b6168 s> 0)
    return sub_1411d74d0(arg1, arg3, arg4, r14)

int128_t* rax_13 = sub_14081d830(0x190, *(arg1 + 8), 1, 0)
int128_t* rbx_1 = rax_13

if (rax_13 == 0)
    rbx_1 = nullptr
else
    __builtin_memset(&rax_13[4], 0, 0x28)
    *(rax_13 + 0xe8) = 0
    rax_13[0xf].q = 0
    sub_14117af20(&rax_13[0x10])

memset(rbx_1, 0, 0x190)
*rbx_1 = *arg4
*(rbx_1 + 4) = arg4[1]
*(rbx_1 + 8) = arg4[2]
*(rbx_1 + 0xc) = arg4[3]
rbx_1[1].d = arg4[4]
*(rbx_1 + 0x14) = arg4[5]
*(rbx_1 + 0x18) = arg4[6]
*(rbx_1 + 0x1c) = arg4[7]
rbx_1[2].d = arg4[8]
*(rbx_1 + 0x24) = arg4[9]
*(rbx_1 + 0x28) = arg4[0xa]
*(rbx_1 + 0x2c) = arg4[0xb]
rbx_1[3].d = arg4[0xc]
*(rbx_1 + 0x34) = arg4[0xd]
*(rbx_1 + 0x38) = arg4[0xe]
*(rbx_1 + 0x3c) = arg4[0xf]
rbx_1[4].q = *(arg4 + 0x40)
*(rbx_1 + 0x48) = *(arg4 + 0x48)
rbx_1[5].q = *(arg4 + 0x50)
*(rbx_1 + 0x58) = *(arg4 + 0x58)
rbx_1[6].q = *(arg4 + 0x60)
rbx_1[7] = zmm12
int64_t var_228_1 = 1
rbx_1[8] = zmm11
rbx_1[9] = zmm7
rbx_1[0xa] = temp0_59
rbx_1[0xb].q = *r14
*(rbx_1 + 0xb8) = r14[1].d
rbx_1[0xc].q = *(r14 + 0xc)
*(rbx_1 + 0xc8) = *(r14 + 0x14)
*(rbx_1 + 0xd4) = var_230:4.d
rbx_1[0xd].d = r12_1
*(rbx_1 + 0xd8) = r13_1
void*** r14_1 = arg5
*(rbx_1 + 0xdc) = *(r14 + 0xcc)
rbx_1[0xe].d = var_238
*(rbx_1 + 0xe4) = r15_1

if ((r14_1[7].d & 0x100) != 0)
    var_228_1.d = 4
    var_228_1:4.d = 0x1c

void*** rax_40 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_40 == 0)
    rax_40 = nullptr
else
    rax_40[1] = r14_1[1]
    *rax_40 = &data_142f285c0
    rax_40[2] = 0
    *(rax_40 + 0x18) = r14_1.o

*(rbx_1 + 0xe8) = rax_40
var_228_1.w = 0
void*** rax_41 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_41 == 0)
    rax_41 = nullptr
else
    rax_41[1] = rax_11[1]
    *rax_41 = &data_142f285c0
    rax_41[2] = 0
    *(rax_41 + 0x18) = rax_11.o

rbx_1[0xf].q = rax_41
var_154 = arg2
var_14c = arg3
void* var_138_1 = &r14[0x10]
int32_t var_108_1 = (zx.d(cond:0) * 2) | 1
int32_t var_fc_1 = var_1f8
var_130.o = 0.o
var_158.q = rbx_1
var_140.b = 2
int128_t var_118_1 = var_1d8.o
uint64_t var_104_1 = var_200.q
return sub_1411b2570(arg1, &arg5, rbx_1, 1, &var_158)
