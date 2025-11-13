// 函数: sub_1411d4470
// 地址: 0x1411d4470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408
char var_3d7 = arg1
int64_t* var_338 = arg8
void* rax_3

if (arg1 == 0)
    rax_3 = *(arg7 + 0x28)
else
    rax_3 = *(arg7 + 0x58)

int32_t rsi = *(rax_3 + 0x48)
int32_t r13 = *(rax_3 + 0x44)
int32_t var_248 = 1
wchar16 const* const var_228 = u"UnknownTexture"
int16_t var_220 = 1
int32_t var_290 = 0
int32_t var_254 = 1
int64_t var_250 = 1
int16_t var_240 = 1
int128_t var_268 = 2.o
int32_t var_3d0 = rsi
int32_t var_244 = 0x10000
int16_t var_230 = 0
char var_21e = 0
int64_t var_23c = 0x1c
int32_t var_234 = 0x10008
int32_t var_288
int32_t var_258 = var_288
*arg8 = sub_141188e50(arg3, &var_268, u"HairVisibilityCompactCounter", 0)
int32_t var_1f8 = 1
wchar16 const* const var_1d8 = u"UnknownTexture"
int16_t var_1d0 = 1
int32_t var_278 = 0
int32_t var_1fc = 0
int16_t var_1f0 = 1
int128_t var_218 = 2.o
int32_t var_1f4 = 0x10000
int16_t var_1e0 = 0
char var_1ce = 0
int32_t var_204 = r13
int32_t var_200 = rsi
int64_t var_1ec = 0x1c
int32_t var_1e4 = 0x10008
int32_t var_270
int32_t var_208 = var_270
*arg9 = sub_141188e50(arg3, &var_218, u"HairVisibilityCompactNodeIndex", 0)
int64_t var_2f8 = 1
int32_t var_2dc = 0
int16_t var_2c0 = 0
int32_t var_2d8 = 1
int16_t var_2d0 = 1
int16_t var_2b0 = 1
wchar16 const* const var_2b8 = u"UnknownTexture"
int64_t var_2f0 = 0
int32_t var_2e8 = 0
int32_t var_2d4 = 0x10000
int64_t var_2cc = 0x22
char var_2ae = 0
int32_t var_2e4 = r13
int32_t var_2e0 = rsi
int32_t var_2c4 = 0x10008
*arg12 = sub_141188e50(arg3, &var_2f8, u"CategorizationTexture", 0)
void*** rbx_1 = *arg8
int64_t* rdx_3 = arg3[1]
int64_t var_78 = 0
int64_t var_70 = 0
void*** var_3c8 = rbx_1
int16_t var_3c0 = 0
void*** rax_9 = sub_14081d830(0x28, rdx_3, 1, 0)
void*** rdx_4 = rax_9

if (rax_9 == 0)
    rdx_4 = nullptr
else
    int128_t zmm0_2 = var_3c8.o
    rdx_4[1] = rbx_1[1]
    rdx_4[2] = 0
    *(rdx_4 + 0x18) = zmm0_2
    *rdx_4 = &data_142f285c0

sub_141996630(arg3, rdx_4, &var_78)
void*** rbx_2 = *arg9
int64_t* rdx_5 = arg3[1]
var_3c8 = rbx_2
int16_t var_3c0_1 = 0
void*** rax_11 = sub_14081d830(0x28, rdx_5, 1, 0)
void*** rdx_6 = rax_11

if (rax_11 == 0)
    rdx_6 = nullptr
else
    int128_t zmm0_3 = var_3c8.o
    rdx_6[1] = rbx_2[1]
    *rdx_6 = &data_142f285c0
    rdx_6[2] = 0
    *(rdx_6 + 0x18) = zmm0_3

sub_141996630(arg3, rdx_6, &var_78)
void*** rbx_3 = *arg12
int64_t* rdx_7 = arg3[1]
var_3c8 = rbx_3
int16_t var_3c0_2 = 0
void*** rax_13 = sub_14081d830(0x28, rdx_7, 1, 0)
void*** rdx_8 = rax_13

if (rax_13 == 0)
    rdx_8 = nullptr
else
    int128_t zmm0_4 = var_3c8.o
    rdx_8[1] = rbx_3[1]
    *rdx_8 = &data_142f285c0
    rdx_8[2] = 0
    *(rdx_8 + 0x18) = zmm0_4

sub_141996630(arg3, rdx_8, &var_78)
int32_t rcx_11 = data_143e75968
int32_t r15_1 = 8
int32_t r12_1

if (rcx_11 s> 0)
    r12_1 = 1
else
    r12_1 = 8
    
    if (data_1439b60cc s<= 4)
        r12_1 = 4

int32_t rax_15 = data_1439b60e4
int32_t rbx_4

if (rax_15 == 0)
    rbx_4 = 0
else if (rax_15 s> 8)
    rbx_4 = 0x20
    
    if (rax_15 s<= 0x10)
        rbx_4 = 0x10
else
    rbx_4 = 8

int32_t rdx_9 = rbx_4
int32_t var_39c = 2

if (rcx_11 s<= 0)
    rdx_9 = r12_1

int32_t var_3a0 = 0x209
int32_t rdx_11 = rdx_9 * r13 * rsi
int32_t var_3a4 = rdx_11
void*** rax_19 = sub_14081d830(0x48, arg3[1], 1, 0)
int32_t rsi_1 = 0

if (rax_19 == 0)
    rax_19 = nullptr
else
    rax_19[2] = 0
    rax_19[1] = u"HairVisibilityPrimitiveIdCompactNodeData"
    rax_19[3].b = 0
    *(rax_19 + 0x1c) = 0
    rax_19[4] = 0
    rax_19[5].w = 0x200
    *rax_19 = &data_142f285d0
    *(rax_19 + 0x30) = (((zx.q(arg2) ^ 1) << 2) + 0x10).d.o
    rax_19[8] = 0

int32_t var_39c_1 = 2
int32_t var_3a0_1 = 0x209
*arg10 = rax_19
int32_t var_3a8_1 = 4
int32_t var_3a4_1 = rdx_11
void*** rax_21
float zmm6_1[0x4]
rax_21, zmm6_1 = sub_14081d830(0x48, arg3[1], 1, 0)

if (rax_21 == 0)
    rax_21 = nullptr
else
    rax_21[2] = 0
    rax_21[1] = u"HairVisibilityPrimitiveIdCompactNodeCoord"
    rax_21[3].b = 0
    *(rax_21 + 0x1c) = 0
    rax_21[4] = 0
    rax_21[5].w = 0x200
    *rax_21 = &data_142f285d0
    *(rax_21 + 0x30) = var_3a8_1.o
    rax_21[8] = 0

*arg11 = rax_21
*arg3
int128_t var_198
__builtin_memset(&var_198, 0, 0x120)
sub_1413aab70(&data_143ec4c60, *(arg4 + 0x1548), 0xf, &var_198)
int64_t rax_23 = *arg13
var_3a8_1.q = rax_23

if (rax_23 != 0)
    int32_t rax_24 = data_1439b60d0
    
    if (rax_24 + 1 s>= 0)
        rsi_1 = 3
        
        if (rax_24 + 1 s< 3)
            rsi_1 = rax_24 + 1

int32_t rax_27

if (sub_1419767d0() == 0)
    int32_t rax_28 = sub_1419767f0()
    char temp3_1 = rax_28.b
    rax_28.b = neg.b(rax_28.b)
    rax_27 = sbb.d(rax_28, rax_28, temp3_1 != 0) + 2
else
    rax_27 = 0

int32_t var_374 = rsi_1
int32_t rcx_15 = 0
int32_t rax_30
rax_30.b = *(arg7 + 0x68) != 0
int32_t var_370 = rax_30
int32_t rax_31
rax_31.b = data_143e75958 != 0
int32_t var_36c = rax_31

if (var_3d7 != 0)
    rcx_15 = rbx_4

uint32_t var_364 = zx.d(arg2)
int32_t rax_33 = 8

if (r12_1 == 4)
    rax_33 = 4

float var_318[0x4] = rax_27.o
int32_t var_360 = rax_33
int96_t var_308 = rcx_15.o[0].12

if (rcx_15 != 0)
    var_318[2] = 0
    var_308:4.d = 0
    var_308:8.d = 4

float zmm1[0x4] = 0x3dcccccd
arg7[1] = var_3d0
*arg7 = r13
arg7[4] = rdx_11
int32_t rax_35
rax_35.b = data_143e75970 s> 0
arg7[5] = rax_35
float zmm0_7[0x4] = data_1439b60f8

if (not(zmm0_7[0] < 0.100000001f))
    zmm1 = _mm_min_ss(zmm0_7[0], 0x3f800000)

arg7[8] = zmm1[0]
zmm0_7 = data_1439b60c4

if (zmm0_7[0] >= zmm6_1[0])
    zmm0_7 = __minss_xmmss_memss(zmm0_7[0], 0x42c80000)
else
    zmm0_7 = zx.o(0)

arg7[6] = zmm0_7[0]
zmm1 = data_1439b60c8

if (not(zmm1[0] < zmm6_1[0]))
    zmm6_1 = __minss_xmmss_memss(zmm1[0], 0x42b40000)

zmm6_1[0] = zmm6_1[0] * 0.0174532924f
arg7[7] = cosf(zmm6_1[0])
int64_t* rcx_16 = data_143f0f180
int64_t* var_350
(*(*rcx_16 + 0xf8))(rcx_16, &var_350, &var_198, &data_143ec50d0, 0, 1, arg2)
int64_t* rax_37 = var_350
var_3d0.q = rax_37

if (rax_37 != 0)
    rax_37[1].d += 1
    int64_t* rsi_2 = var_350
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            char rax_39
            
            if (rsi_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_39 = sub_1405949a0()
            
            if (rsi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_39 != 0))
                (**rsi_2)(rsi_2, 1)
            else
                bool z_1
                
                if (0 == *(rsi_2 + 0xc))
                    *(rsi_2 + 0xc) = 1
                    z_1 = true
                else
                    *(rsi_2 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rsi_2)
    
    rax_37 = var_3d0.q

if (&arg7[0x2a] != &var_3d0)
    int64_t* rsi_3 = *(arg7 + 0xa8)
    *(arg7 + 0xa8) = rax_37
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            char rax_42
            
            if (rsi_3[2].b == 0 && data_143f0f1d0 == 0)
                rax_42 = sub_1405949a0()
            
            if (rsi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_42 != 0))
                (**rsi_3)(rsi_3, 1)
            else
                bool z_2
                
                if (0 == *(rsi_3 + 0xc))
                    *(rsi_3 + 0xc) = 1
                    z_2 = true
                else
                    *(rsi_3 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rsi_3)
else if (rax_37 != 0)
    rax_37[1].d -= 1
    
    if (rax_37[1].d == 1)
        int64_t* rbx_7 = var_3d0.q
        char rax_44
        
        if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
            rax_44 = sub_1405949a0()
        
        if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_44 != 0))
            (**rbx_7)(rbx_7, 1)
        else
            bool z_3
            
            if (0 == *(rbx_7 + 0xc))
                *(rbx_7 + 0xc) = 1
                z_3 = true
            else
                *(rbx_7 + 0xc)
                z_3 = false
            
            if (z_3)
                sub_1405dcc10(&data_143f02390, var_3d0.q)

sub_1405d16e0(&arg7[0x28], *(arg4 + 0x10))
int16_t var_390 = 0
void* rbx_8 = *var_338
void*** rax_48 = sub_14081d830(0x28, arg3[1], 1, 0)

if (rax_48 == 0)
    rax_48 = nullptr
else
    rax_48[1] = *(rbx_8 + 8)
    *rax_48 = &data_142f285c0
    rax_48[2] = 0
    *(rax_48 + 0x18) = rbx_8.o

*(arg7 + 0x70) = rax_48
int16_t var_3b0 = 0
void*** rbx_10 = *arg9
void*** rax_49 = sub_14081d830(0x28, arg3[1], 1, 0)

if (rax_49 == 0)
    rax_49 = nullptr
else
    rax_49[1] = rbx_10[1]
    *rax_49 = &data_142f285c0
    rax_49[2] = 0
    *(rax_49 + 0x18) = rbx_10.o

*(arg7 + 0x78) = rax_49
int16_t var_3ac = 0
void* rbx_11 = *arg10
int32_t rax_51 = 0

if ((*(rbx_11 + 0x38) & 0x100) != 0)
    rax_51 = 0x1c

var_3b0.d = rax_51
void*** rax_52 = sub_14081d830(0x28, arg3[1], 1, 0)

if (rax_52 == 0)
    rax_52 = nullptr
else
    rax_52[1] = *(rbx_11 + 8)
    rax_52[2] = 0
    *(rax_52 + 0x18) = rbx_11.o
    *rax_52 = &data_142f285c0

*(arg7 + 0x88) = rax_52
int16_t var_3ac_1 = 0
void* rbx_12 = *arg11
int32_t rax_54 = 0

if ((*(rbx_12 + 0x38) & 0x100) != 0)
    rax_54 = 0x1c

var_3b0.d = rax_54
void*** rax_55 = sub_14081d830(0x28, arg3[1], 1, 0)

if (rax_55 == 0)
    rax_55 = nullptr
else
    rax_55[1] = *(rbx_12 + 8)
    *rax_55 = &data_142f285c0
    rax_55[2] = 0
    *(rax_55 + 0x18) = rbx_12.o

*(arg7 + 0x90) = rax_55
int16_t var_328 = 0
void*** rbx_14 = *arg12
void*** rax_56
int512_t zmm6_2
rax_56, zmm6_2 = sub_14081d830(0x28, arg3[1], 1, 0)

if (rax_56 == 0)
    rax_56 = nullptr
else
    rax_56[1] = rbx_14[1]
    *rax_56 = &data_142f285c0
    rax_56[2] = 0
    *(rax_56 + 0x18) = rbx_14.o

*(arg7 + 0x80) = rax_56

if (var_3a8_1.q != 0)
    var_3a0_1.w = 0
    void* rbx_15 = *arg13
    var_3a8_1.q = rbx_15
    void*** rax_58
    rax_58, zmm6_2 = sub_14081d830(0x28, arg3[1], 1, 0)
    
    if (rax_58 == 0)
        rax_58 = nullptr
    else
        rax_58[1] = *(rbx_15 + 8)
        *rax_58 = &data_142f285c0
        rax_58[2] = 0
        *(rax_58 + 0x18) = var_3a8_1.o
    
    *(arg7 + 0x98) = rax_58

sub_1411dc520(&var_3c8, arg4 + 0x1598, arg5)
int32_t rcx_28

if (sub_1419767d0() == 0)
    rcx_28 = sbb.d(&var_3c8, &var_3c8, sub_1419767f0() != 0) + 2
else
    rcx_28 = 0

if (rcx_28 != 0 && rcx_28 == 1)
    r15_1 = rcx_28 + 3

uint128_t zmm1_1
zmm1_1.d = _mm_cvtepi32_ps(zx.o(var_3c8.d)).d f* 0.125f
zmm1_1.d = zmm1_1.d f+ zmm1_1.d
int128_t zmm7
zmm7.d = 1f f/ _mm_cvtepi32_ps(zx.o(r15_1)).d
zmm1_1.d = zmm1_1.d f- 0.5f
int32_t var_3bc
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(var_3bc))
int32_t rdx_28 = int.d(zmm1_1.d)
zmm1_1 = _mm_cvtepi32_ps(zx.o(var_3c8:4.d))
int32_t rdx_30 = rdx_28 s>> 1 << 3
arg7[2] = rdx_30
zmm3.d = zmm3.d f* zmm7.d
zmm1_1.d = zmm1_1.d f* zmm7.d
zmm3.d = zmm3.d f+ zmm3.d
zmm1_1.d = zmm1_1.d f+ zmm1_1.d
zmm1_1.d = zmm1_1.d f- 0.5f
int32_t rcx_33 = (int.d(zmm1_1.d) s>> 1) * r15_1
zmm1_1.d = _mm_cvtepi32_ps(zx.o(var_3c0_2.d)).d f* 0.125f
arg7[3] = rcx_33
zmm1_1.d = zmm1_1.d f+ zmm1_1.d
uint128_t zmm0_13
zmm0_13.d = -0.5f f- zmm1_1.d
int32_t rax_64 = var_308.d
int32_t r8_5

if (rax_64 == 0)
    r8_5 = rax_64 + 3
else if (rax_64 != 8)
    int32_t rcx_34
    rcx_34.b = rax_64 == 0x10
    int32_t var_3d4_1 = rcx_34
    r8_5 = rcx_34
else
    r8_5 = rax_64 - 6

int32_t rcx_35 = 0

if (var_308:8.d == 4)
    rcx_35 = 2

uint64_t r9_1 = zx.q(var_318[1]
    i+ ((var_318[2] i+ ((var_318[3] i+ ((r8_5 + ((var_308:4.d + rcx_35) << 2)) << 1)) << 1)) << 2))
int128_t var_1c8
char rcx_37 =
    sub_1419a2ec0(*(arg4 + 0x5150), &var_1c8, &data_143e77bc0, r9_1.d + var_318[0] i+ (r9_1 << 1).d)
zmm7 = var_1c8
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(neg.d(rdx_30) - (int.d(zmm0_13.d) s>> 1 << 3) + 7)
zmm6_2.o = zx.o(0)
int64_t* var_388
var_388.d = (temp7 + (temp6 & 7)) s>> 3
var_388:4.d =
    divs.dp.d(sx.q(neg.d((int.d(-0.5f f- zmm3.d) s>> 1) * r15_1 + rcx_33) - 1 + r15_1), r15_1)
int128_t var_1b8 = sub_1411e3570(rcx_37)
sub_141998c50(zmm7.q, &data_143e7d650, arg7)
int32_t var_378
var_378.q = arg7
var_370.o = zmm7
int32_t var_358 = 1
var_360.q = var_388
void*** rax_77
char rcx_39
rax_77, rcx_39 = sub_14081d830(0x60, arg3[1], 1, 0)
void*** rbx_21 = rax_77

if (rax_77 == 0)
    rbx_21 = nullptr
else
    var_3c8 = arg7
    sub_1411e3570(rcx_39)
    var_3c0_2.q = &data_143e7d680
    int128_t var_1a8 = var_3c8.o
    sub_141992bd0(rbx_21, &var_3d7, &var_1a8, 2)
    *rbx_21 = &data_142f38a58
    *(rbx_21 + 0x38) = var_378.o
    *(rbx_21 + 0x48) = rcx_15.o
    rbx_21[0xb] = var_358.q

sub_1419968d0(arg3, rbx_21)
int32_t var_3e8
var_3e8.q = *var_338
*arg14 = sub_1411cfa80(arg3, arg4, arg6, 1, var_3e8)
*arg15 = rdx_11
__security_check_cookie(rax_1 ^ &var_408)
return arg15
