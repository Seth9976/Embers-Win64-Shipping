// 函数: sub_1413f2e60
// 地址: 0x1413f2e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2

if (*(data_143ec8d48 + 4) != 0)
    return sub_1413a6290(arg1, arg2, arg3, arg4, arg7)

int32_t r12 = data_1439b6b2c
int32_t var_580 = *(data_143ec8548 + 4)

if (r12 s<= 0xffffffff)
    r12 = zx.d(*(arg4 + 0x12e5)) & 1

int32_t rax_5 = *(data_143ec8408 + 4)
int32_t rcx

if (arg4[0x2b3].d s> 0 || *(arg4 + 0x159c) s> 0)
    rcx.b = 1
else
    rcx.b = 0

int32_t rbx

if (rax_5 != 0)
    if (rcx.b != 0)
        rbx = 0
    else
        rbx = 1
else if (*(data_143ec8358 + 4) == 0 || rcx.b != 0)
    rbx = 0
else
    rbx = 1

int32_t rax_7 = sub_1422e5a30(arg4)
int32_t var_584_1
int64_t rax_8

if (data_143f0f220 != 0 && *(data_143ec8340 + 4) != 0)
    rax_8 = sx.q(rax_7)
    var_584_1 = 0xc

if (data_143f0f220 == 0 || *(data_143ec8340 + 4) == 0
        || ((*(rax_8 * 0x14 + &data_143f025fc) u>> 0x14).b & 1) == 0)
    var_584_1 = 0

uint64_t rax_11

if (*(data_143ec8b78 + 4) != 0)
    rax_11 = sub_1413faff0(*(*(arg1 + 8) + 0xf80))

char var_588

if (*(data_143ec8b78 + 4) == 0 || rax_11.b == 0)
    var_588 = 0
else
    var_588 = 1

*r14
uint128_t zmm0
zmm0.d = 1f f/ arg6
int32_t r8_1 = *(arg4 + 0x15a4) - *(arg4 + 0x159c)
void* rcx_7 = *(arg3 + 8)
int64_t* var_490 = &data_143ec4c60
int64_t rax_12 = arg4[1]
int16_t var_4e0 = 0
int32_t var_4f4 = 0x10000
int64_t var_4ec = 0xa
int32_t var_4e4 = 0x10009
char var_4ce = 0
int32_t r9 = int.d(zmm0.d)
int32_t temp0 = divs.dp.d(sx.q(arg4[0x2b4].d - arg4[0x2b3].d - 1 + r9), r9)
uint128_t var_518 = data_143f02308
int32_t temp0_1 = divs.dp.d(sx.q(r9 - 1 + r8_1), r9)
int64_t rax_23 = *(rcx_7 + 0x44)
int64_t var_538 = rax_23
int32_t temp0_2 = divs.dp.d(sx.q(rax_23.d), r9)
int32_t var_508 = data_143f02318
var_538.d = temp0_2
int32_t var_4f8 = 1
int16_t var_4f0 = 1
var_538:4.d = divs.dp.d(sx.q(var_538:4.d), r9)
int32_t var_4fc = 0
uint32_t var_500 = (var_538 u>> 0x20).d
int16_t var_4d0 = 1
int32_t var_504 = temp0_2
wchar16 const* const var_4d8 = u"UnknownTexture2D"
var_4ec.d = 0x15
*arg7 = sub_141188e50(r14, &var_518, u"RayTracingReflections", 0)
arg7[1] = sub_141188e50(r14, &var_518, u"RayTracingReflectionsHitDistance", 0)
arg7[2] = sub_141188e50(r14, &var_518, u"RayTracingReflectionsImaginaryDepth", 0)
int32_t var_55c = 2
int32_t var_560 = 0x209
int32_t var_568 = 0x1c
int32_t var_564 = var_538:4.d * temp0_2
void*** rax_34
int32_t zmm6
rax_34, zmm6 = sub_14081d830(0x48, r14[1], 1, 0)
void*** var_4a8 = rax_34
int128_t zmm0_1

if (rax_34 == 0)
    var_4a8 = nullptr
else
    zmm0_1 = var_568.o
    rax_34[1] = u"ImaginaryReflectionGBuffer"
    rax_34[2] = 0
    rax_34[3].b = 0
    *(rax_34 + 0x1c) = 0
    rax_34[4] = 0
    rax_34[5].w = 0x200
    *rax_34 = &data_142f285d0
    *(rax_34 + 0x30) = zmm0_1
    rax_34[8] = 0

int64_t rsi_2 = temp0.q
int64_t rdi_2 = rsi_2
int32_t var_464 = rbx * 2
int32_t var_468 = rbx
void*** var_4b0 = nullptr
int64_t var_530 = rsi_2
int32_t rbx_3
int32_t r15_3

if (var_580 == 0)
    r15_3 = var_530:4.d
    rbx_3 = var_530.d
else
    int32_t rbx_2 = var_580 - 1 + temp0
    int32_t r15_2 = var_580 - 1 + (rsi_2 u>> 0x20).d
    rbx_3 = rbx_2 - mods.dp.d(sx.q(rbx_2), var_580)
    var_530.d = rbx_3
    r15_3 = r15_2 - mods.dp.d(sx.q(r15_2), var_580)
    var_530:4.d = r15_3
    rdi_2 = var_530

int32_t rax_45 = r15_3 * rbx_3
int32_t var_448
sub_1413bf130(&var_448)
var_448 = arg5
int32_t rax_47 = data_1439b6b1c

if (rax_47 s<= 0xffffffff)
    rax_47 = *(arg4 + 0x12dc)

if (rax_47 s<= 1)
    rax_47 = 1

int32_t rax_48 = data_1439b6b38
int32_t rax_49 = data_143ec8308
int32_t rax_50 = data_1439b6b24
uint32_t rax_51 = data_1439b6b28

if (rax_51 s<= 0xffffffff)
    rax_51 = zx.d(*(arg4 + 0x12e4))

float zmm1 = data_1439b6b30
zmm0_1 = data_1439b6b34
int32_t rax_52 = data_1439b6b20
float var_410

if (zmm1 f> zmm0_1.d)
    var_410 = zmm0_1.d
else
    var_410 = zmm1

zmm1 = data_1439b6b18
int32_t var_40c = zmm0_1.d

if (not(zmm1 >= 0f))
    zmm1 = arg4[0x25b].d

float var_408

if (not(zmm1 >= 0.00999999978f))
    var_408 = 0.00999999978f
else if (zmm1 f>= zmm6)
    var_408 = 1f
else
    var_408 = zmm1

zmm0_1 = data_1439b6af0
int32_t var_404

if (zmm0_1.d f> 0.00999999978f)
    var_404 = zmm0_1.d
else
    var_404 = 0x3c23d70a

int32_t rcx_15 = *(data_143ec8878 + 4)
int32_t var_3fc = (*(data_143ec89b8 + 4)).d
int32_t rcx_16 = *(data_143ec8a68 + 4)
int64_t var_3f4 = 0
int32_t rcx_17 = *(data_143ec9128 + 4)
int32_t var_3e4 = 0
int64_t rcx_18 = *(arg4[0xa3d] + 0x18)
void* var_2e8
sub_1405d16e0(&var_2e8, arg4[2])
void* var_2e0
sub_1405d16e0(&var_2e0, arg4[0xa45])
int64_t rax_61 = arg4[0xa46]
int128_t var_3b8 = *arg3
int128_t var_398 = arg3[2]
int128_t zmm0_2 = arg3[4]
int128_t var_3a8 = arg3[1]
int128_t zmm1_1 = arg3[3]
int128_t var_368
sub_14142a1f0(&var_368)
void*** var_308
sub_1413f9f40(r14, arg4, &var_308)
int64_t* rax_62

if (rax_5 == 0)
    rax_62 = &data_1439b70c8
else
    rax_62 = sub_14139d440(var_490)

void*** rax_63 = sub_1410fccd0(r14, rax_62, u"External", 0)
void*** rax_64 = sub_1410fccd0(r14, &arg4[0xa42], u"External", 0)
uint64_t i_1
int64_t* rax_65
int128_t zmm7
rax_65, zmm7 = sub_1412238e0(&i_1, arg4, 1)
void* var_2d8
sub_1405d1600(&var_2d8, rax_65)
sub_1405d1550(&i_1)
int32_t var_498
void* var_2d0
sub_1405d1600(&var_2d0, sub_1411235a0(&var_498, arg4, 1))
sub_1405d1550(&var_498)
int16_t var_548 = 0
void*** r15_4 = *arg7
void*** rax_67 = sub_14081d830(0x28, r14[1], 1, 0)

if (rax_67 != 0)
    rax_67[1] = r15_4[1]
    rax_67[2] = 0
    *(rax_67 + 0x18) = r15_4.o
    *rax_67 = &data_142f285c0

void* r15_5 = arg7[1]
int16_t var_548_1 = 0
void*** rax_68 = sub_14081d830(0x28, r14[1], 1, 0)

if (rax_68 != 0)
    rax_68[1] = *(r15_5 + 8)
    rax_68[2] = 0
    *(rax_68 + 0x18) = r15_5.o
    *rax_68 = &data_142f285c0

void* rbx_6 = arg7[2]
int16_t var_548_2 = 0
void*** rax_69 = sub_14081d830(0x28, r14[1], 1, 0)

if (rax_69 != 0)
    rax_69[1] = *(rbx_6 + 8)
    rax_69[2] = 0
    *(rax_69 + 0x18) = rbx_6.o
    *rax_69 = &data_142f285c0

int32_t rax_70 = 0
var_568.q = var_4a8
var_55c.w = 0

if ((var_4a8[7].d & 0x100) != 0)
    rax_70 = 0x1c

int32_t var_560_1 = rax_70
void*** rax_71 = sub_14081d830(0x28, r14[1], 1, 0)

if (rax_71 != 0)
    int128_t zmm0_6 = var_568.o
    rax_71[1] = var_4a8[1]
    rax_71[2] = 0
    *(rax_71 + 0x18) = zmm0_6
    *rax_71 = &data_142f285c0

int64_t* r15_6 = arg4
void* var_2c8
sub_1405d16e0(&var_2c8, r15_6[0xa0a])
void* var_2c0
sub_1405d16e0(&var_2c0, *(r15_6[0x2a8] + 0x280))
char rax_72 = var_588
int64_t* var_528
int64_t* var_4c0
void* var_328
int64_t* var_2b8

if (rax_72 != 0)
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x68)
    void var_128
    sub_1413f9890(*(arg1 + 8), &var_128)
    int64_t* rcx_40 = data_143f0f180
    (*(*rcx_40 + 0xf8))(rcx_40, &var_528, &var_128, &data_143ec9190, 0, 1, var_588, var_580, temp0, 
        rax_45)
    int64_t* rbx_8 = var_528
    var_4c0 = rbx_8
    
    if (rbx_8 != 0)
        rbx_8[1].d += 1
        rbx_8 = var_4c0
    
    sub_1405d1550(&var_528)
    int64_t* r15_7 = var_2b8
    var_2b8 = rbx_8
    var_4c0 = nullptr
    
    if (r15_7 != 0)
        int32_t rax_74 = r15_7[1].d
        r15_7[1].d -= 1
        
        if (rax_74 == 1)
            char rax_76
            
            if (r15_7[2].b == rax_74.b - 1 && data_143f0f1d0 == rax_74.b - 1)
                rax_76 = sub_1405949a0()
            
            if (r15_7[2].b != rax_74.b - 1 || (data_143f0f1d0 == rax_74.b - 1 && rax_76 != 0))
                (**r15_7)(r15_7, 1)
            else
                bool z_1
                
                if (0 == *(r15_7 + 0xc))
                    *(r15_7 + 0xc) = 1
                    z_1 = true
                else
                    *(r15_7 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_78 = sub_140a20af0()
                    uint64_t rdx_33 = zx.q(rax_78)
                    void* const rax_79
                    
                    if (rax_78 != 0)
                        rax_79 = *((rdx_33 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_33.d) & 0x3fff) * 0x18
                    else
                        rax_79 = nullptr
                    
                    *(rax_79 + 8) = r15_7
                    sub_1405a42f0(&data_143f02390, rdx_33.d)
    
    sub_1405d1550(&var_4c0)
    r15_6 = arg4
    sub_1413f9c70(*(arg1 + 8), r15_6, &var_568, &var_328)
    rax_72 = var_588

int32_t r8_5 = arg5
int32_t rdx_35 = 0
int128_t var_58 = zmm7
int32_t var_558_1 = 0
int128_t var_458
void* var_320
void* var_318

if (r8_5 s> 0)
    uint64_t i_2 = zx.q(rbx + 1)
    int32_t r12_3 = rax_45
    zmm7 = zx.o(0)
    int32_t rax_86 = var_584_1 + ((zx.q(rax_72) * 3).d << 3)
    var_498 = rax_86
    var_4c0.d = sbb.d(rax_86, rax_86, rax_5 != 0) & 3
    
    do
        if (r8_5 s> 1)
            int32_t rcx_49
            rcx_49.b = rdx_35 != 0
            int32_t rcx_50 = rcx_49 + 1
            
            if (rdx_35 == r8_5 - 1)
                rcx_50 = 3
            
            var_3e4 = rcx_50
        
        var_528 = &var_468
        i_1 = i_2
        uint64_t i
        
        do
            void* rax_90 = sub_14081d830(0x1c0, r14[1], 1, 0)
            int32_t* r13_2
            
            if (rax_90 == 0)
                r13_2 = nullptr
            else
                r13_2 = sub_1413bf130(rax_90)
            
            memset(r13_2, 0, 0x1c0)
            *r13_2 = var_448
            r13_2[1] = rax_47
            r13_2[2] = rax_48
            r13_2[3] = rax_49
            r13_2[4] = rax_50
            r13_2[5] = rax_51
            r13_2[6] = rax_52
            r13_2[7] = r9
            r13_2[8] = var_580
            r13_2[0xa] = temp0
            r13_2[0xb] = temp0_1
            r13_2[0xc] = rbx_3
            r13_2[0xd] = r15_3
            r13_2[0xe] = var_410.d
            r13_2[0xf] = var_40c.d
            r13_2[0x10] = var_408.d
            r13_2[0x11] = var_404.d
            r13_2[0x12] = rcx_15
            r13_2[0x13] = var_3fc.d
            r13_2[0x14] = rcx_16
            r13_2[0x15] = var_3f4.d
            r13_2[0x16] = var_3f4:4.d
            r13_2[0x17] = r12
            r13_2[0x18] = rcx_17
            r13_2[0x19] = var_3e4
            r13_2[0x1a] = rdx_35
            *(r13_2 + 0x70) = rcx_18
            *(r13_2 + 0x78) = rax_63
            *(r13_2 + 0x80) = rax_64
            *(r13_2 + 0x88) = rax_61
            *(r13_2 + 0x90) = var_3b8
            *(r13_2 + 0xa0) = var_3a8
            *(r13_2 + 0xb0) = var_398
            *(r13_2 + 0xc0) = zmm1_1
            *(r13_2 + 0xd0) = zmm0_2
            *(r13_2 + 0xe0) = var_368
            int128_t var_358
            *(r13_2 + 0xf0) = var_358
            int128_t var_348
            *(r13_2 + 0x100) = var_348
            int128_t var_338
            *(r13_2 + 0x110) = var_338
            sub_1405d16e0(&r13_2[0x48], var_328)
            sub_1405d16e0(&r13_2[0x4a], var_320)
            sub_1405d16e0(&r13_2[0x4c], var_318)
            *(r13_2 + 0x140) = var_308
            int32_t var_2f8
            r13_2[0x54] = var_2f8
            int32_t var_2f4
            r13_2[0x55] = var_2f4
            int32_t var_2f0
            r13_2[0x56] = var_2f0
            sub_1405d16e0(&r13_2[0x58], var_2e8)
            sub_1405d16e0(&r13_2[0x5a], var_2e0)
            sub_1405d16e0(&r13_2[0x5c], var_2d8)
            sub_1405d16e0(&r13_2[0x5e], var_2d0)
            sub_1405d16e0(&r13_2[0x60], var_2c8)
            sub_1405d16e0(&r13_2[0x62], var_2c0)
            int32_t r9_2
            int512_t zmm6_1
            r9_2, zmm6_1 = sub_1405d16e0(&r13_2[0x64], var_2b8)
            int64_t var_2b0
            *(r13_2 + 0x198) = var_2b0
            *(r13_2 + 0x1a0) = rax_67
            *(r13_2 + 0x1a8) = rax_68
            *(r13_2 + 0x1b0) = rax_69
            *(r13_2 + 0x1b8) = rax_71
            int32_t rbx_9 = *var_528
            int32_t var_584_2 = rbx_9
            
            if (rbx_9 != 0)
                if (rbx_9 == 1)
                    int64_t* rdx_47 = r14[1]
                    int32_t var_55c_1 = 2
                    var_560_1 = 0x209
                    var_568 = 0xc
                    int32_t var_564_1 = r12_3
                    void*** rax_127 = sub_14081d830(rbx_9 + 0x47, rdx_47, rbx_9, 0)
                    var_4b0 = rax_127
                    
                    if (rax_127 == 0)
                        var_4b0 = nullptr
                    else
                        int128_t zmm0_9 = var_568.o
                        rax_127[1] = u"RayTracingReflectionsMaterialBuffer"
                        rax_127[2] = 0
                        rax_127[3].b = 0
                        *(rax_127 + 0x1c) = 0
                        rax_127[4] = 0
                        rax_127[5].w = 0x200
                        *rax_127 = &data_142f285d0
                        *(rax_127 + 0x30) = zmm0_9
                        rax_127[8] = 0
                
                int16_t var_544_1 = 0
                int32_t rax_129 = 0
                
                if ((var_4b0[7].d & 0x100) != 0)
                    rax_129 = 0x1c
                
                var_548_2.d = rax_129
                void*** rax_130
                rax_130, r9_2, zmm6_1 = sub_14081d830(0x28, r14[1], 1, 0)
                
                if (rax_130 != 0)
                    rax_130[1] = var_4b0[1]
                    *rax_130 = &data_142f285c0
                    rax_130[2] = 0
                    *(rax_130 + 0x18) = var_4b0.o
                
                *(r13_2 + 0x198) = rax_130
            
            int128_t var_188
            char rcx_68 = sub_1419a2ec0(r15_6[0xa2a], &var_188, &data_143ec8d50, 
                ((sbb.d(r9_2, r9_2, *(data_143ec8e58 + 4) != 0) & 6) + var_498 + var_4c0.d + rbx_9)
                    * 2)
            zmm6_1.o = var_188
            int128_t zmm6_2 = sub_1413eaf60(rcx_68)
            int128_t var_138_1 = zmm7
            sub_141998c50(zmm6_2.q, &data_143ecc950, r13_2)
            
            if (rbx_9 != 1)
                int32_t rcx_75 = *(data_143ec8658 + 4)
                
                if (rbx + 1 u> 1 || rcx_75 s<= 0)
                    var_518:8.q = arg1
                    var_518.q = r13_2
                    var_508.q = r15_6
                    var_500.o = zmm6_2
                    var_4f0.q = rsi_2
                    var_4ec:4.d = rax_45
                    int32_t var_4e4_2 = rbx_9
                    void*** rax_202
                    char rcx_101
                    rax_202, rcx_101 = sub_14081d830(0x70, r14[1], 1, 0)
                    
                    if (rax_202 == 0)
                        sub_1419968d0(r14, nullptr)
                        r12_3 = rax_45
                    else
                        int128_t var_478
                        var_478.q = r13_2
                        sub_1413eaf60(rcx_101)
                        var_478:8.q = &data_143ecc980
                        int128_t var_158 = var_478
                        void var_53e
                        sub_141992bd0(rax_202, &var_53e, &var_158, 2)
                        uint128_t zmm0_19 = var_518
                        *rax_202 = &data_142f78ee8
                        *(rax_202 + 0x38) = zmm0_19
                        *(rax_202 + 0x48) = var_508.o
                        *(rax_202 + 0x58) = var_4f8.o
                        rax_202[0xd] = var_4ec
                        sub_1419968d0(r14, rax_202)
                        r12_3 = rax_45
                else
                    int32_t r15_8 = 0x20
                    
                    if (rcx_75 s>= 0x20)
                        r15_8 = rcx_75
                    
                    int32_t temp0_6 = divs.dp.d(sx.q(temp0 - 1 + r15_8), r15_8)
                    int32_t rcx_76 = temp0_6
                    int32_t temp0_7 = divs.dp.d(sx.q(temp0_1 - 1 + r15_8), r15_8)
                    
                    if (temp0_7 s> 0)
                        int32_t rax_147 = 0
                        int32_t rdx_57 = temp0_7
                        int32_t rdi_3 = 0
                        int32_t var_580_1 = 0
                        
                        do
                            int32_t r12_4 = 0
                            int32_t* r14_1 = r13_2
                            
                            if (rcx_76 s> 0)
                                int32_t var_57c_1 = 0
                                
                                do
                                    if (r12_4 s> 0 || rdi_3 s> 0)
                                        void* rax_148 = sub_14081d830(0x1c0, arg2[1], 1, 0)
                                        
                                        if (rax_148 == 0)
                                            r14_1 = nullptr
                                        else
                                            r14_1 = sub_1413bf130(rax_148)
                                        
                                        memset(r14_1, 0, 0x1c0)
                                        *r14_1 = *r13_2
                                        r14_1[1] = r13_2[1]
                                        r14_1[2] = r13_2[2]
                                        r14_1[3] = r13_2[3]
                                        r14_1[4] = r13_2[4]
                                        r14_1[5] = r13_2[5]
                                        r14_1[6] = r13_2[6]
                                        r14_1[7] = r13_2[7]
                                        r14_1[8] = r13_2[8]
                                        r14_1[0xa] = r13_2[0xa]
                                        r14_1[0xb] = r13_2[0xb]
                                        r14_1[0xc] = r13_2[0xc]
                                        r14_1[0xd] = r13_2[0xd]
                                        r14_1[0xe] = r13_2[0xe]
                                        r14_1[0xf] = r13_2[0xf]
                                        r14_1[0x10] = r13_2[0x10]
                                        r14_1[0x11] = r13_2[0x11]
                                        r14_1[0x12] = r13_2[0x12]
                                        r14_1[0x13] = r13_2[0x13]
                                        r14_1[0x14] = r13_2[0x14]
                                        r14_1[0x15] = r13_2[0x15]
                                        r14_1[0x16] = r13_2[0x16]
                                        r14_1[0x17] = r13_2[0x17]
                                        r14_1[0x18] = r13_2[0x18]
                                        r14_1[0x19] = r13_2[0x19]
                                        r14_1[0x1a] = r13_2[0x1a]
                                        *(r14_1 + 0x70) = *(r13_2 + 0x70)
                                        *(r14_1 + 0x78) = *(r13_2 + 0x78)
                                        *(r14_1 + 0x80) = *(r13_2 + 0x80)
                                        *(r14_1 + 0x88) = *(r13_2 + 0x88)
                                        *(r14_1 + 0x90) = *(r13_2 + 0x90)
                                        *(r14_1 + 0xa0) = *(r13_2 + 0xa0)
                                        *(r14_1 + 0xb0) = *(r13_2 + 0xb0)
                                        *(r14_1 + 0xc0) = *(r13_2 + 0xc0)
                                        *(r14_1 + 0xd0) = *(r13_2 + 0xd0)
                                        *(r14_1 + 0xe0) = *(r13_2 + 0xe0)
                                        *(r14_1 + 0xf0) = *(r13_2 + 0xf0)
                                        *(r14_1 + 0x100) = *(r13_2 + 0x100)
                                        *(r14_1 + 0x110) = *(r13_2 + 0x110)
                                        sub_1405d16e0(&r14_1[0x48], *(r13_2 + 0x120))
                                        sub_1405d16e0(&r14_1[0x4a], *(r13_2 + 0x128))
                                        sub_1405d16e0(&r14_1[0x4c], *(r13_2 + 0x130))
                                        *(r14_1 + 0x140) = *(r13_2 + 0x140)
                                        r14_1[0x54] = r13_2[0x54]
                                        r14_1[0x55] = r13_2[0x55]
                                        r14_1[0x56] = r13_2[0x56]
                                        sub_1405d16e0(&r14_1[0x58], *(r13_2 + 0x160))
                                        sub_1405d16e0(&r14_1[0x5a], *(r13_2 + 0x168))
                                        sub_1405d16e0(&r14_1[0x5c], *(r13_2 + 0x170))
                                        sub_1405d16e0(&r14_1[0x5e], *(r13_2 + 0x178))
                                        sub_1405d16e0(&r14_1[0x60], *(r13_2 + 0x180))
                                        sub_1405d16e0(&r14_1[0x62], *(r13_2 + 0x188))
                                        zmm6_2 = sub_1405d16e0(&r14_1[0x64], *(r13_2 + 0x190))
                                        rbx_9 = var_584_2
                                        *(r14_1 + 0x198) = *(r13_2 + 0x198)
                                        *(r14_1 + 0x1a0) = *(r13_2 + 0x1a0)
                                        *(r14_1 + 0x1a8) = *(r13_2 + 0x1a8)
                                        *(r14_1 + 0x1b0) = *(r13_2 + 0x1b0)
                                        *(r14_1 + 0x1b8) = *(r13_2 + 0x1b8)
                                        r14_1[0x15] = var_57c_1
                                        r14_1[0x16] = var_580_1
                                    
                                    int32_t rax_192 = temp0 - r14_1[0x15]
                                    int32_t rcx_90 = temp0_1 - r14_1[0x16]
                                    var_518:8.q = arg1
                                    
                                    if (r15_8 s<= rax_192)
                                        rax_192 = r15_8
                                    
                                    var_508.q = arg4
                                    
                                    if (r15_8 s<= rcx_90)
                                        rcx_90 = r15_8
                                    
                                    var_4f0.d = rax_192
                                    var_4ec.d = rcx_90
                                    var_518.q = r14_1
                                    var_500.o = zmm6_2
                                    var_4ec:4.d = rax_45
                                    int32_t var_4e4_1 = rbx_9
                                    void*** rax_194
                                    char rcx_91
                                    rax_194, rcx_91 = sub_14081d830(0x70, arg2[1], 1, 0)
                                    void*** rbx_11 = rax_194
                                    
                                    if (rax_194 == 0)
                                        rbx_11 = nullptr
                                    else
                                        var_458.q = r14_1
                                        sub_1413eaf60(rcx_91)
                                        var_458:8.q = &data_143ecc980
                                        int128_t var_168 = var_458
                                        void var_53f
                                        sub_141992bd0(rbx_11, &var_53f, &var_168, 2)
                                        uint128_t zmm0_15 = var_518
                                        *rbx_11 = &data_142f78ef8
                                        *(rbx_11 + 0x38) = zmm0_15
                                        *(rbx_11 + 0x48) = var_508.o
                                        *(rbx_11 + 0x58) = var_4f8.o
                                        rbx_11[0xd] = var_4ec
                                    
                                    zmm6_2 = sub_1419968d0(arg2, rbx_11)
                                    var_57c_1 += r15_8
                                    r12_4 += 1
                                    rcx_76 = temp0_6
                                    rbx_9 = var_584_2
                                while (r12_4 s< rcx_76)
                                
                                rax_147 = var_580_1
                                rdx_57 = temp0_7
                            
                            rax_147 += r15_8
                            rdi_3 += 1
                            var_580_1 = rax_147
                        while (rdi_3 s< rdx_57)
                        
                        rdi_2 = var_530
                        rsi_2 = temp0.q
                        r14 = arg2
                        r12_3 = rax_45
                    
                    r15_6 = arg4
            else
                var_518:8.q = arg1
                var_518.q = r13_2
                var_508.q = r15_6
                var_500.o = zmm6_2
                var_4f0.q = rdi_2
                void*** rax_133
                char rcx_71
                rax_133, rcx_71 = sub_14081d830(rbx_9 + 0x67, r14[1], rbx_9, 0)
                void*** rbx_10 = rax_133
                
                if (rax_133 == 0)
                    rbx_10 = nullptr
                else
                    sub_1413eaf60(rcx_71)
                    void* var_190_1 = &data_143ecc980
                    int128_t var_178 = r13_2.o
                    void var_540
                    sub_141992bd0(rbx_10, &var_540, &var_178, 2)
                    uint128_t zmm0_12 = var_518
                    *rbx_10 = &data_142f78ed8
                    *(rbx_10 + 0x38) = zmm0_12
                    *(rbx_10 + 0x48) = var_508.o
                    *(rbx_10 + 0x58) = var_4f8.o
                
                sub_1419968d0(r14, rbx_10)
                int32_t r8_10 = *(data_143ec8768 + 4)
                
                if (r8_10 != 0)
                    zmm7 = sub_1413ab4b0(r14, r15_6, r8_10, r12_3, var_4b0)
            
            var_528 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        r8_5 = arg5
        rdx_35 = var_558_1 + 1
        i_2 = zx.q(rbx + 1)
        var_558_1 = rdx_35
    while (rdx_35 s< r8_5)

if (var_588 != 0 && rax_12 != 0)
    int32_t rax_195 = sub_14139ccf0(var_490)
    int32_t rbx_12 = var_538.d
    int32_t rdi_4 = var_538:4.d
    int32_t var_278_1 = data_1439c7b30
    int128_t var_288 = data_1439c7b20
    int16_t var_250_1 = 0
    int32_t var_274_1 = rbx_12
    int32_t var_270_1 = rdi_4
    int32_t var_26c_1 = 0
    int32_t var_268_1 = 1
    int32_t var_264_1 = 0x10000
    int16_t var_260_1 = 1
    int32_t var_25c_1 = rax_195
    int32_t var_258_1 = 0
    int32_t var_254_1 = 0x10008
    wchar16 const* const var_248_1 = u"UnknownTexture2D"
    int16_t var_240_1 = 1
    char var_23e_1 = 0
    void*** rax_196 = sub_141188e50(r14, &var_288, u"ImaginaryReflectionGBufferA", 0)
    int32_t var_228_1 = *(var_490 + 0x404)
    int16_t var_200_1 = 0
    int128_t var_238 = *(var_490 + 0x3f4)
    int32_t var_224_1 = rbx_12
    int32_t var_220_1 = rdi_4
    int32_t var_21c_1 = 0
    int32_t var_218_1 = 1
    int32_t var_214_1 = 0x10000
    int16_t var_210_1 = 1
    int64_t var_20c_1 = 0xd
    int32_t var_204_1 = 0x10008
    wchar16 const* const var_1f8_1 = u"UnknownTexture2D"
    int16_t var_1f0_1 = 1
    char var_1ee_1 = 0
    void*** rax_197 = sub_141188e50(r14, &var_238, u"ImaginaryReflectionDepthZ", 0)
    int32_t var_1d8_1 = data_1439c7b30
    int16_t var_1b0_1 = 0
    int128_t var_1e8 = data_1439c7b20
    int32_t var_1d4_1 = rbx_12
    int32_t var_1d0_1 = rdi_4
    int32_t var_1cc_1 = 0
    int32_t var_1c8_1 = 1
    int32_t var_1c4_1 = 0x10000
    int16_t var_1c0_1 = 1
    int32_t var_1bc_1 = 0xe
    int32_t var_1b8_1 = 0
    int32_t var_1b4_1 = 0x10008
    wchar16 const* const var_1a8_1 = u"UnknownTexture2D"
    int16_t var_1a0_1 = 1
    char var_19e_1 = 0
    void*** rax_198 = sub_141188e50(r14, &var_1e8, u"ImaginaryReflectionGBufferVelocity", 0)
    int64_t* rax_199 = sub_14081d830(0x40, r14[1], 1, 0)
    int64_t* rbx_13 = rax_199
    
    if (rax_199 == 0)
        rbx_13 = nullptr
    else
        *rax_199 = 0
        __builtin_memset(&rax_199[3], 0, 0x20)
    
    __builtin_memset(rbx_13, 0, 0x40)
    sub_1405d16e0(rbx_13, arg4[2])
    rbx_13[1].d = r9
    rbx_13[2].d = temp0
    *(rbx_13 + 0x14) = temp0_1
    var_568.q = var_4a8
    var_560_1.q = 1
    
    if ((var_4a8[7].d & 0x100) != 0)
        int32_t var_560_2 = 4
        int32_t var_55c_2 = 0x1c
    
    void*** rax_206 = sub_14081d830(0x28, r14[1], 1, 0)
    
    if (rax_206 != 0)
        int128_t zmm0_20 = var_568.o
        rax_206[1] = var_4a8[1]
        *rax_206 = &data_142f285c0
        rax_206[2] = 0
        *(rax_206 + 0x18) = zmm0_20
    
    rbx_13[3] = rax_206
    rbx_13[4] = sub_1411e0390(r14, rax_196)
    rbx_13[5] = sub_1411e0390(r14, rax_197)
    void*** rax_209
    int512_t zmm6_3
    rax_209, zmm6_3 = sub_1411e0390(r14, rax_198)
    rbx_13[6] = rax_209
    int128_t var_148
    char rcx_113 = sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x3b0))]), 
        &var_148, &data_143ec8e60, 0)
    zmm7 = var_148
    int32_t temp40_1
    int32_t temp41_1
    temp40_1:temp41_1 = sx.q(temp0 + 7)
    zmm6_3.o = zx.o(0)
    var_490.d = (temp41_1 + (temp40_1 & 7)) s>> 3
    int32_t temp42_1
    int32_t temp43_1
    temp42_1:temp43_1 = sx.q(temp0_1 + 7)
    var_490:4.d = (temp43_1 + (temp42_1 & 7)) s>> 3
    int128_t var_478_1 = sub_1413eb240(rcx_113)
    sub_141998c50(zmm7.q, &data_143ecca60, rbx_13)
    int64_t* rdx_92 = r14[1]
    var_518.q = rbx_13
    var_518 = zmm7
    int32_t var_4f8_1 = 1
    var_500.q = var_490
    void*** rax_221
    char rcx_115
    rax_221, rcx_115 = sub_14081d830(0x60, rdx_92, 1, 0)
    void*** rdi_6 = rax_221
    
    if (rax_221 == 0)
        rdi_6 = nullptr
    else
        var_478_1.q = rbx_13
        sub_1413eb240(rcx_115)
        var_478_1:8.q = &data_143ecca90
        var_458 = var_478_1
        void var_53d
        sub_141992bd0(rdi_6, &var_53d, &var_458, 2)
        uint128_t zmm0_23 = var_518
        *rdi_6 = &data_142f79408
        *(rdi_6 + 0x38) = zmm0_23
        *(rdi_6 + 0x48) = var_508.o
        rdi_6[0xb] = var_4f8_1.q
    
    sub_1419968d0(r14, rdi_6)
    sub_14131f2d0(r14, rax_196, rax_12 + 0xc98, 1)
    sub_14131f2d0(r14, rax_197, rax_12 + 0xca0, 1)
    sub_14131f2d0(r14, rax_198, rax_12 + 0xca8, 1)

sub_1405d1550(&var_2b8)
sub_1405d1550(&var_2c0)
sub_1405d1550(&var_2c8)
sub_1405d1550(&var_2d0)
sub_1405d1550(&var_2d8)
sub_1405d1550(&var_2e0)
sub_1405d1550(&var_2e8)
sub_1405d1550(&var_318)
sub_1405d1550(&var_320)
return sub_1405d1550(&var_328)
