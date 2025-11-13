// 函数: sub_1414840a0
// 地址: 0x1414840a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
void* rbx = arg1
int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
int64_t rcx = sx.q((*U"1111")[sx.q(*(*(arg1 + 8) + 8))])
int128_t zmm8
int128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
char rax_5

if ((rcx - 0x19).d u<= 1 || *(rcx * 0x14 + &data_143f025f0) == data_143f025d0 || rcx.d == 0x30)
    rax_5 = sub_1410a09e0(rcx.d)

uint64_t r12

if (((rcx - 0x19).d u> 1 && *(rcx * 0x14 + &data_143f025f0) != data_143f025d0 && rcx.d != 0x30)
        || rax_5 == 0)
    r12.b = 1
else
    r12.b = 0

char var_4b8 = r12.b
int32_t rax_6 = data_1439b6e18
int32_t r8

if (rax_6 s>= 1)
    r8 = 8
    
    if (rax_6 s< 8)
        r8 = rax_6
else
    r8 = 1

int64_t rcx_2 = data_143ec4fdc
int32_t temp0 = divs.dp.d(sx.q(rcx_2.d), r8)
int32_t temp0_1 = divs.dp.d(sx.q((rcx_2 u>> 0x20).d), r8)
void var_338
sub_1419928d0(&var_338, arg2)
void*** r14_1 = nullptr
int64_t* var_330

if (r12.b != 0)
    int32_t rax_13 = data_143ec5050
    data_143ec5040
    int32_t var_488_1 = 1
    int16_t var_480_1 = 1
    int16_t var_470_1 = 0
    int32_t var_494_1 = temp0
    int32_t var_490_1 = temp0_1
    int32_t var_48c_1 = 0
    int32_t var_484_1 = 0x10000
    int32_t var_47c_1 = sub_14139d630(&data_143ec4c60)
    int16_t var_460_1 = 1
    char var_45e_1 = 0
    wchar16 const* const var_468_1
    var_468_1.o = u"UnknownTexture2D".o
    int32_t var_474_1 = 9
    wchar16 const* const var_468_2 = u"SceneColorWithoutSingleLayerWater"
    void*** rax_15
    rax_15, zmm6 = sub_14081d830(0x88, var_330, 1, 0)
    r14_1 = rax_15
    
    if (rax_15 == 0)
        r14_1 = nullptr
    else
        r14_1[1] = u"SceneColorWithoutSingleLayerWater"
        r14_1[2] = 0
        r14_1[3].b = 0
        *(r14_1 + 0x1c) = 0
        r14_1[4] = 0
        r14_1[5].w = 0x200
        *(r14_1 + 0x30) = zmm6
        *r14_1 = &data_142f11960
        *(r14_1 + 0x40) = rax_13.o
        r14_1[0x10] = 0
        *(r14_1 + 0x50) = var_488_1.o
        *(r14_1 + 0x60) = 0.o
        *(r14_1 + 0x70) = var_468_2.o

data_143ec5040
int16_t var_460_2 = 1
int32_t rax_17 = 0x15

if (data_143ed9084 != 0)
    rax_17 = 0xd

int32_t var_47c_2 = rax_17
int16_t var_480_2 = 1
char var_45e_2 = 0
wchar16 const* const var_468_3
var_468_3.o = u"UnknownTexture2D".o
int16_t var_470_2 = 0
int32_t var_494_2 = temp0
int32_t var_490_2 = temp0_1
int32_t var_48c_2 = 0
zmm7 = data_143ec5050.o
int32_t var_484_2 = 0x10000
int32_t var_474_2 = 9
wchar16 const* const var_468_4 = u"SceneDepthWithoutSingleLayerWater"
void*** rax_18
int128_t zmm6_1
rax_18, zmm6_1 = sub_14081d830(0x88, var_330, 1, 0)
void*** r15 = rax_18

if (rax_18 == 0)
    r15 = nullptr
else
    r15[1] = u"SceneDepthWithoutSingleLayerWater"
    r15[2] = 0
    r15[3].b = 0
    *(r15 + 0x1c) = 0
    r15[4] = 0
    r15[5].w = 0x200
    *(r15 + 0x30) = zmm6_1
    *r15 = &data_142f11960
    *(r15 + 0x40) = zmm7
    r15[0x10] = 0
    *(r15 + 0x50) = 1.o
    *(r15 + 0x60) = 0.o
    *(r15 + 0x70) = var_468_4.o

int32_t i_1 = 0
void*** var_418

if (*(rbx + 0xa8) s> 0)
    int32_t rax_19
    rax_19.b = r8 s> 1
    int64_t rsi_1 = 0
    zmm9 = _mm_cvtepi32_ps(zx.o(r8))
    int32_t* var_430_1 = nullptr
    int64_t var_3e8_1 = 0
    uint128_t zmm11 = _mm_cvtepi32_ps(zx.o(temp0))
    uint128_t zmm12 = _mm_cvtepi32_ps(zx.o(temp0_1))
    int32_t i
    
    do
        int64_t rbx_1 = *(rbx + 0xa0)
        int64_t var_3d8 = rbx_1
        int64_t* rax_21 = sub_14081d830(0xc0, var_330, 1, 0)
        int64_t* rdi_1 = rax_21
        
        if (rax_21 == 0)
            rdi_1 = rax_21
        else
            __builtin_memset(rdi_1, 0, 0x28)
            sub_14117af20(&rdi_1[6])
        
        memset(rdi_1, 0, 0xc0)
        sub_1405d16e0(rdi_1, *(rsi_1 + rbx_1 + 0x10))
        int64_t* rax_22 = sub_14139d440(&data_143ec4c60)
        int64_t* rbx_2 = *rax_22
        int32_t var_440
        int64_t var_278
        sub_140865c40(&var_278, &var_440, rbx_2)
        int64_t rcx_10 = sx.q(var_440)
        void* const rdx_11
        
        if (rcx_10.d == 0xffffffff)
            rdx_11 = nullptr
        else
            rdx_11 = var_278 + rcx_10 * 0x18
        
        int64_t* rax_23 = rdx_11 + 8
        
        if (rdx_11 == 0)
            rax_23 = nullptr
        
        int64_t var_428
        void var_318
        void*** rcx_12
        
        if (rax_23 == 0)
            int128_t* rax_25 = (*(*rbx_2 + 0x10))(rbx_2)
            void*** rax_26 = sub_14081d830(0x88, var_330, 1, 0)
            void*** rcx_14 = rax_26
            
            if (rax_26 == 0)
                rcx_14 = rax_26
            else
                rcx_14[1] = u"External"
                rcx_14[2] = 0
                rcx_14[3].b = 0
                *(rcx_14 + 0x1c) = 0
                rcx_14[4] = 0
                rcx_14[5].w = 0x200
                *rcx_14 = &data_142f11960
                *(rcx_14 + 0x30) = *rax_25
                *(rcx_14 + 0x40) = rax_25[1]
                *(rcx_14 + 0x50) = rax_25[2]
                *(rcx_14 + 0x60) = rax_25[3]
                int128_t zmm0_4 = rax_25[4]
                rcx_14[0x10] = 0
                *(rcx_14 + 0x70) = zmm0_4
            
            int64_t rax_27 = *rax_22
            void*** var_458 = rcx_14
            rcx_14[0x10] = rax_27
            int64_t* var_390_1 = rax_22
            var_458[2] = *(*rax_22 + 0x10)
            void**** var_398 = &var_458
            void var_3a8
            sub_14107bc20(&var_318, &var_3a8, &var_398, nullptr)
            var_428 = *rax_22
            int64_t* var_388 = &var_428
            void**** var_380_1 = &var_458
            void var_3a4
            sub_14107baa0(&var_278, &var_3a4, &var_388, nullptr)
            rcx_12 = var_458
        else
            rcx_12 = *rax_23
        
        rdi_1[1] = rcx_12
        rdi_1[2] = data_14395f4d0
        int64_t* rbx_4 = data_143ec4ca0
        int32_t var_43c
        sub_140865c40(&var_278, &var_43c, rbx_4)
        int64_t rax_32 = sx.q(var_43c)
        void* const rcx_19
        
        if (rax_32.d == 0xffffffff)
            rcx_19 = nullptr
        else
            rcx_19 = var_278 + rax_32 * 0x18
        
        int64_t* rax_34 = rcx_19 + 8
        
        if (rcx_19 == 0)
            rax_34 = nullptr
        
        void*** rcx_20
        
        if (rax_34 == 0)
            int128_t* rax_36 = (*(*rbx_4 + 0x10))(rbx_4)
            void*** rax_37 = sub_14081d830(0x88, var_330, 1, 0)
            void*** rcx_22 = rax_37
            
            if (rax_37 == 0)
                rcx_22 = nullptr
            else
                rcx_22[2] = 0
                rcx_22[1] = u"External"
                rcx_22[3].b = 0
                *(rcx_22 + 0x1c) = 0
                rcx_22[4] = 0
                rcx_22[5].w = 0x200
                *rcx_22 = &data_142f11960
                *(rcx_22 + 0x30) = *rax_36
                *(rcx_22 + 0x40) = rax_36[1]
                *(rcx_22 + 0x50) = rax_36[2]
                *(rcx_22 + 0x60) = rax_36[3]
                int128_t zmm0_5 = rax_36[4]
                rcx_22[0x10] = 0
                *(rcx_22 + 0x70) = zmm0_5
            
            int64_t rax_38 = data_143ec4ca0
            void*** var_450 = rcx_22
            rcx_22[0x10] = rax_38
            int64_t* var_370_1 = &data_143ec4ca0
            var_450[2] = *(data_143ec4ca0 + 0x10)
            void**** var_378 = &var_450
            void var_3a0
            sub_14107bc20(&var_318, &var_3a0, &var_378, nullptr)
            var_428 = data_143ec4ca0
            int64_t* var_368 = &var_428
            void**** var_360_1 = &var_450
            void var_39c
            sub_14107baa0(&var_278, &var_39c, &var_368, nullptr)
            rcx_20 = var_450
        else
            rcx_20 = *rax_34
        
        rdi_1[3] = rcx_20
        rdi_1[4] = data_14395f4d0
        int64_t rax_43 = data_143ec4fdc
        int16_t var_3c0_1 = 0
        char var_3be_1 = 0
        int32_t var_3bc_1 = 0xffffffff
        float zmm2 = zmm9.d f/ _mm_cvtepi32_ps(zx.o(rax_43.d)).d
        uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o((rax_43 u>> 0x20).d))
        rdi_1[5].d = zmm2
        uint128_t zmm1_2
        zmm1_2.d = zmm9.d f/ zmm0_3.d
        *(rdi_1 + 0x2c) = zmm1_2.d
        *(rdi_1 + 0x30) = r15.o
        
        if (var_4b8 != 0)
            int16_t var_3b0_1 = 0
            char var_3ae_1 = 0
            int32_t var_3ac_1 = 0xffffffff
            *(rdi_1 + 0x40) = r14_1.o
        
        int64_t rbx_6 = var_3d8
        sub_1419a2ec0(*(var_3e8_1 + rbx_6 + 0x5150), &var_418, &data_143eda150, 
            rax_19 + (zx.d(var_4b8) << 1))
        int64_t rcx_27 = *(var_3e8_1 + rbx_6 + 0x15a0)
        int512_t zmm6_2
        zmm6_2.o = var_418.o
        int32_t temp0_7 = divs.dp.d(sx.q(rcx_27.d), r8)
        int64_t rcx_29 = *(var_3e8_1 + rbx_6 + 0x1598)
        int32_t var_3ec_1 = divs.dp.d(sx.q((rcx_27 u>> 0x20).d), r8)
        int32_t temp0_9 = divs.dp.d(sx.q(rcx_29.d), r8)
        int64_t rdx_25 = temp0_7.q
        int32_t var_3f4_1 = divs.dp.d(sx.q((rcx_29 u>> 0x20).d), r8)
        int64_t rcx_31 = temp0_9.q
        int64_t r8_10 = *(arg3 + 0x10)
        uint32_t rcx_32 = (rcx_31 u>> 0x20).d
        uint128_t zmm0_6 = _mm_cvtepi32_ps(zx.o(temp0_9))
        *(var_430_1 + r8_10) = temp0_9
        *(var_430_1 + r8_10 + 4) = rcx_32
        *(var_430_1 + r8_10 + 8) = temp0_7
        int64_t var_350_1 = rdx_25
        uint32_t rdx_26 = (rdx_25 u>> 0x20).d
        *(var_430_1 + r8_10 + 0xc) = rdx_26
        zmm0_6.d = zmm0_6.d f+ 0.5f
        zmm0_6.d = zmm0_6.d f/ zmm11.d
        zmm1_2.d = _mm_cvtepi32_ps(zx.o(rcx_32)).d f+ 0.5f
        *(*(arg3 + 0x10) + var_430_1 + 0x10) = zmm0_6.d
        int64_t rax_58 = *(arg3 + 0x10)
        zmm1_2.d = zmm1_2.d f/ zmm12.d
        zmm0_6.d = _mm_cvtepi32_ps(zx.o(temp0_7)).d f- 0.5f
        *(rax_58 + var_430_1 + 0x14) = zmm1_2.d
        int64_t rax_59 = *(arg3 + 0x10)
        zmm0_6.d = zmm0_6.d f/ zmm11.d
        zmm1_2.d = _mm_cvtepi32_ps(zx.o(rdx_26)).d f- 0.5f
        *(rax_59 + var_430_1 + 0x18) = zmm0_6.d
        zmm1_2.d = zmm1_2.d f/ zmm12.d
        *(*(arg3 + 0x10) + var_430_1 + 0x1c) = zmm1_2.d
        int64_t rbx_7 = *(var_3e8_1 + rbx_6 + 0x5150)
        void* zmm6_3 = sub_14148cdb0(rcx_32.b)
        var_3d8.o = zx.o(0)
        sub_141998c50(zmm6_3, &data_143ee2110, rdi_1)
        int64_t var_4a0_1 = rbx_7
        int64_t var_468_5 = 0
        var_460_2.d = 0
        void*** rax_61
        char rcx_34
        rax_61, rcx_34 = sub_14081d830(0x88, var_330, 1, 0)
        void*** rbx_8 = rax_61
        
        if (rax_61 == 0)
            rbx_8 = rax_61
        else
            int128_t zmm6_4 = sub_14148cdb0(rcx_34)
            void* var_340_1 = &data_143ee2140
            var_3d8.o = rdi_1.o
            void var_4b7
            sub_141992bd0(rbx_8, &var_4b7, &var_3d8, 1)
            *rbx_8 = &data_142f8e770
            *(rbx_8 + 0x38) = rdi_1.o
            *(rbx_8 + 0x48) = zmm6_4
            *(rbx_8 + 0x58) = rcx_31.o
            *(rbx_8 + 0x68) = zx.o(0)
            *(rbx_8 + 0x78) = var_468_5.o
        
        sub_1419968d0(&var_338, rbx_8)
        rsi_1 = var_3e8_1 + 0x5240
        i = i_1 + 1
        var_430_1 = &var_430_1[8]
        i_1 = i
        var_3e8_1 = rsi_1
        rbx = arg1
    while (i s< *(arg1 + 0xa8))
    r12 = zx.q(var_4b8)

int32_t var_1d0
int64_t rbx_10 = sx.q(var_1d0)
void* rdx_30 = arg3
void* var_410 = rdx_30 + 8
int32_t rax_63 = (rbx_10 + 1).d
var_418 = r15
char var_408 = 1
int64_t var_1d8
int32_t var_1cc

if (rax_63 s> var_1cc)
    sub_14119a720(&var_1d8, rbx_10.d)
    rdx_30 = arg3

int64_t rax_64 = var_1d8
int64_t rcx_39 = rbx_10 * 3
*(rax_64 + (rcx_39 << 3)) = var_418.o
*(rax_64 + (rcx_39 << 3) + 0x10) = var_408.q

if (r12.b != 0)
    int64_t rbx_11 = sx.q(rax_63)
    var_418 = r14_1
    void* var_410_1 = rdx_30
    char var_408_1 = 1
    int32_t rax_65 = (rbx_11 + 1).d
    int32_t var_1d0_2 = rax_65
    
    if (rax_65 s> var_1cc)
        sub_14119a720(&var_1d8, rbx_11.d)
    
    int64_t rax_66 = var_1d8
    int64_t rcx_41 = rbx_11 * 3
    *(rax_66 + (rcx_41 << 3)) = var_418.o
    *(rax_66 + (rcx_41 << 3) + 0x10) = var_408_1.q

sub_14199ef00(&var_338)
int64_t result = sub_1410eb9e0(&var_338)
__security_check_cookie(rax_1 ^ &var_4d8)
return result
