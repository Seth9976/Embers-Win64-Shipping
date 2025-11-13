// 函数: sub_1414d88e0
// 地址: 0x1414d88e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_618
int64_t rax_1 = __security_cookie ^ &var_618
int64_t* rcx = *(arg1 + 8)
int64_t* rax_3 = (*(*rcx + 0x1d0))(rcx)
int128_t zmm0 = data_142d3f660
int512_t zmm1
zmm1.o = zmm0
*(*rax_3 + 0x24)
*(data_143ee7418 + 4)
void* rdx_2 = *(arg1 + 8)
int64_t rax_4 = *(rdx_2 + 0xfc0)
int64_t rax_5 = data_1439b5ec0
int128_t var_3a8 = zmm0
int128_t var_378
__builtin_memcpy(&var_378, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
        3f", 
    0x30)
void var_3c8
float zmm8_1
float zmm9_1
zmm8_1, zmm9_1 = sub_1414df6b0(&var_3c8, rdx_2, rax_3)
int64_t* rcx_2 = data_143f0f180
void* var_540
(*(*rcx_2 + 0xf8))(rcx_2, &var_540, &var_3c8, &data_143ee7590, 1, 1)
void* rbx = var_540
void* var_4e8 = rbx

if (rbx != 0)
    *(rbx + 8) += 1
    rbx = var_4e8

sub_1405d1550(&var_540)
void var_328
sub_1419928d0(&var_328, arg2)
void*** rax_7 = sub_1410fccd0(&var_328, &rax_3[0x19], u"External", 0)
int16_t var_528 = 0
int64_t* var_320
void*** r14 = sub_14081d830(0x28, var_320, 1, 0)

if (r14 == 0)
    r14 = nullptr
else
    r14[1] = rax_7[1]
    r14[2] = 0
    *(r14 + 0x18) = rax_7.o
    *r14 = &data_142f285c0

void*** rax_9 = sub_1410fccd0(&var_328, &rax_3[0x1a], u"External", 0)
int16_t var_508 = 0
void*** rax_10 = sub_14081d830(0x28, var_320, 1, 0)
void*** r15 = rax_10

if (rax_10 == 0)
    r15 = nullptr
else
    rax_10[1] = rax_9[1]
    rax_10[2] = 0
    *r15 = &data_142f285c0
    *(r15 + 0x18) = rax_9.o

int64_t* rax_12 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
int128_t var_5b8
sub_1419a2ec0(rax_12, &var_5b8, &data_143ee7830, 0)
int128_t zmm7 = var_5b8
int64_t* rax_13 = sub_14081d830(0x20, var_320, 1, 0)
int64_t* rdi_3 = rax_13

if (rax_13 == 0)
    rdi_3 = nullptr
else
    __builtin_memset(rax_13, 0, 0x18)

__builtin_memset(rdi_3, 0, 0x20)
int64_t* rcx_12 = *(arg1 + 8)
sub_1405d16e0(rdi_3, *((*(*rcx_12 + 0x1d0))(rcx_12) + 0xc0))
sub_1405d16e0(&rdi_3[1], rbx)
int512_t zmm6
zmm6.o = zx.o(0)
rdi_3[2] = r14
int32_t rcx_16 = rax_7[9].d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(rax_7 + 0x44) + 7)
int32_t var_5a0 = (temp1 + (temp0 & 7)) s>> 3
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rcx_16 + 7)
int32_t var_59c = (temp3 + (temp2 & 7)) s>> 3
int128_t var_4b8 = sub_1414cc500(rcx_16.b)
sub_141998c50(var_5b8.q, &data_143ee9f90, rdi_3)
int32_t var_570 = 1
int64_t var_578 = var_5a0.q
void*** rax_25
char rcx_18
rax_25, rcx_18 = sub_14081d830(0x60, var_320, 1, 0)
void*** r14_1 = rax_25
char var_5e8
int128_t var_4c8

if (rax_25 == 0)
    r14_1 = nullptr
else
    var_5b8.q = rdi_3
    sub_1414cc500(rcx_18)
    var_5b8:8.q = &data_143ee9fc0
    var_4c8 = var_5b8
    sub_141992bd0(r14_1, &var_5e8, &var_4c8, 2)
    *r14_1 = &data_142fb8250
    *(r14_1 + 0x38) = rdi_3.o
    *(r14_1 + 0x48) = zmm7
    r14_1[0xb] = var_570.q

sub_1419968d0(&var_328, r14_1)
int32_t r9_2
r9_2.b = zmm8_1 > 0f
int128_t var_4f8
sub_1419a2ec0(rax_12, &var_4f8, &data_143ee7940, r9_2)
zmm7 = var_4f8
int64_t* rax_26 = sub_14081d830(0x40, var_320, 1, 0)
int64_t* rdi_4 = rax_26

if (rax_26 == 0)
    rdi_4 = nullptr
else
    __builtin_memset(rax_26, 0, 0x30)

__builtin_memset(rdi_4, 0, 0x40)
int64_t* rcx_22 = *(arg1 + 8)
sub_1405d16e0(rdi_4, *((*(*rcx_22 + 0x1d0))(rcx_22) + 0xc0))
sub_1405d16e0(&rdi_4[1], rbx)
rdi_4[5] = rax_5
rdi_4[3] = rax_7
rdi_4[4] = data_1439b71a0
rdi_4[6].d = 8
rdi_4[2] = r15
int32_t rcx_26 = rax_9[9].d
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(*(rax_9 + 0x44) + 7)
var_5a0 = (temp5 + (temp4 & 7)) s>> 3
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rcx_26 + 7)
int32_t var_59c_1 = (temp7 + (temp6 & 7)) s>> 3
float var_5d8[0x4] = sub_1414cbf40(rcx_26.b)
sub_141998c50(var_4f8.q, &data_143eea0a0, rdi_4)
int32_t var_570_1 = 1
int64_t var_578_1 = var_5a0.q
void*** rax_42
char rcx_28
rax_42, rcx_28 = sub_14081d830(0x60, var_320, 1, 0)
void*** r14_2 = rax_42
int128_t var_4a8

if (rax_42 == 0)
    r14_2 = nullptr
else
    var_5b8.q = rdi_4
    sub_1414cbf40(rcx_28)
    var_5b8:8.q = &data_143eea0d0
    var_4a8 = var_5b8
    void var_5c8
    sub_141992bd0(r14_2, &var_5c8, &var_4a8, 2)
    *r14_2 = &data_142fb8260
    *(r14_2 + 0x38) = rdi_4.o
    *(r14_2 + 0x48) = zmm7
    r14_2[0xb] = var_570_1.q

sub_1419968d0(&var_328, r14_2)
int128_t var_4d8
void* r13_2
int64_t r15_1

if (*(data_143ee7460 + 4) s<= 0)
    r15_1 = rax_4
    r13_2 = arg1
else
    void*** rax_44 = sub_1410fccd0(&var_328, &rax_3[0x1b], u"External", 0)
    var_5d8[0].q = rax_44
    var_5d8[2].w = 0
    void*** rax_45
    int64_t rcx_32
    rax_45, rcx_32 = sub_14081d830(0x28, var_320, 1, 0)
    void*** r14_3 = rax_45
    
    if (rax_45 == 0)
        r14_3 = nullptr
    else
        rcx_32 = rax_44[1]
        rax_45[1] = rcx_32
        rax_45[2] = 0
        *r14_3 = &data_142f285c0
        *(r14_3 + 0x18) = var_5d8
    
    r15_1 = rax_4
    int32_t r9_4
    r9_4.b = zmm9_1 > 0f
    sub_1419a2ec0(rax_12, &var_4d8, &data_143ee7a50, 
        r9_4 + (sbb.d(rcx_32.d, rcx_32.d, r15_1 != 0) & 2))
    zmm7 = var_4d8
    int64_t* rax_48 = sub_14081d830(0x90, var_320, 1, 0)
    int64_t* rdi_6 = rax_48
    
    if (rax_48 == 0)
        rdi_6 = nullptr
    else
        __builtin_memset(rax_48, 0, 0x4c)
        *(rax_48 + 0x4c) = 0x3f800000
        *(rax_48 + 0x54) = 0
        *(rax_48 + 0x5c) = 0x3f800000
    
    memset(rdi_6, 0, 0x90)
    r13_2 = arg1
    int64_t* rcx_37 = *(r13_2 + 8)
    sub_1405d16e0(rdi_6, *((*(*rcx_37 + 0x1d0))(rcx_37) + 0xc0))
    sub_1405d16e0(&rdi_6[1], rbx)
    rdi_6[5] = rax_5
    rdi_6[6] = rax_5
    rdi_6[3] = rax_7
    rdi_6[4] = rax_9
    rdi_6[7] = data_1439b71a0
    rdi_6[2] = r14_3
    void* rax_55 = *(r13_2 + 8)
    void* rdx_37 = *(rax_55 + 0xfb8)
    void* rcx_40 = *(rax_55 + 0xfc0)
    int128_t zmm1_3
    float zmm2_1[0x4]
    int128_t zmm3_1
    
    if (rdx_37 != 0)
        void* rax_56 = *(rdx_37 + 0x20)
        var_5d8[3] = 0x3f800000
        zmm1_3 = *(rax_56 + 0x50)
        zmm3_1 = *(rax_56 + 0x60)
        var_5d8[0] = (*(rax_56 + 0x40) ^ 0x80000000).d
        zmm2_1 = _mm_shuffle_ps(var_5d8, var_5d8, 0xe1)
        zmm2_1[0] = (zmm1_3 ^ 0x80000000).d
        zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
        zmm2_1[0] = (zmm3_1 ^ 0x80000000).d
        zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
        *(rdi_6 + 0x40) = zmm2_1
        var_5d8 = zmm2_1
        *(rdi_6 + 0x60) = *(*(rdx_37 + 0x20) + 0x30)
    
    if (rcx_40 != 0)
        void* rax_58 = *(rcx_40 + 0x20)
        var_5d8[3] = 0x3f800000
        zmm1_3 = *(rax_58 + 0x50)
        zmm3_1 = *(rax_58 + 0x60)
        var_5d8[0] = (*(rax_58 + 0x40) ^ 0x80000000).d
        zmm2_1 = _mm_shuffle_ps(var_5d8, var_5d8, 0xe1)
        zmm2_1[0] = (zmm1_3 ^ 0x80000000).d
        zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
        zmm2_1[0] = (zmm3_1 ^ 0x80000000).d
        zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
        *(rdi_6 + 0x50) = zmm2_1
        var_5d8 = zmm2_1
        *(rdi_6 + 0x70) = *(*(rcx_40 + 0x20) + 0x30)
    
    int64_t r14_4 = data_143ee7478
    int64_t rcx_41
    
    if (data_143de5480 == 0)
        rcx_41 = 0
    else
        rcx_41.b = GetCurrentThreadId() != data_143de5470
    
    rdi_6[0x10].d = *(r14_4 + (rcx_41 << 2))
    var_5a0 = 1
    int32_t var_59c_2 = 1
    int128_t var_428_1 = sub_1414cbdd0(rcx_41.b)
    sub_141998c50(var_4d8.q, &data_143eea1b0, rdi_6)
    int32_t var_570_2 = 1
    int64_t var_578_2 = var_5a0.q
    void*** rax_62
    char rcx_43
    rax_62, rcx_43 = sub_14081d830(0x60, var_320, 1, 0)
    
    if (rax_62 == 0)
        sub_1419968d0(&var_328, nullptr)
    else
        var_5b8.q = rdi_6
        sub_1414cbdd0(rcx_43)
        var_5b8:8.q = &data_143eea1e0
        int128_t var_418 = var_5b8
        void var_5c7
        sub_141992bd0(rax_62, &var_5c7, &var_418, 2)
        *rax_62 = &data_142fb8270
        *(rax_62 + 0x38) = rdi_6.o
        *(rax_62 + 0x48) = zmm7
        rax_62[0xb] = var_570_2.q
        sub_1419968d0(&var_328, rax_62)

int32_t i_1 = 0

if (*(r13_2 + 0xa8) s> 0)
    int32_t rax_64 = (neg.q(r15_1)).d
    int32_t rax_66 = sbb.d(rax_64, rax_64, r15_1 != 0) & 4
    int64_t r12_1 = 0
    int32_t rcx_47
    rcx_47.b = zmm9_1 > 0f
    int64_t var_548
    var_548.d = rcx_47
    var_540.d = (sbb.d(rax_66, rax_66, r15_1 != 0) & 2) + rcx_47
    int32_t i
    
    do
        void* r13_3 = *(r13_2 + 0xa0)
        char rax_71 = *(r12_1 + r13_3 + 0xd74)
        float zmm6_3 = _mm_max_ss(*(data_143ee72e0 + 4), 0)
        var_5e8 = rax_71
        int64_t* r14_8 = r13_3 + 0x5060 + r12_1
        int64_t* rdi_7 = *r14_8
        __maxss_xmmss_memss(zmm6_3 * 100000f, *(r12_1 + r13_3 + 0xd30))
        int32_t var_520
        int64_t var_268
        sub_140865c40(&var_268, &var_520, rdi_7)
        int64_t rax_72 = sx.q(var_520)
        void* const rcx_49
        
        if (rax_72.d == 0xffffffff)
            rcx_49 = nullptr
        else
            rcx_49 = var_268 + rax_72 * 0x18
        
        int64_t* rax_74 = rcx_49 + 8
        
        if (rcx_49 == 0)
            rax_74 = nullptr
        
        void*** var_558
        void var_308
        void*** rdi_8
        
        if (rax_74 == 0)
            int128_t* rax_76 = (*(*rdi_7 + 0x10))(rdi_7)
            void*** rax_77 = sub_14081d830(0x88, var_320, 1, 0)
            void*** rcx_51 = rax_77
            
            if (rax_77 == 0)
                rcx_51 = nullptr
            else
                rcx_51[2] = 0
                rcx_51[1] = u"External"
                rcx_51[3].b = 0
                *(rcx_51 + 0x1c) = 0
                rcx_51[4] = 0
                rcx_51[5].w = 0x200
                *rcx_51 = &data_142f11960
                *(rcx_51 + 0x30) = *rax_76
                *(rcx_51 + 0x40) = rax_76[1]
                *(rcx_51 + 0x50) = rax_76[2]
                *(rcx_51 + 0x60) = rax_76[3]
                int128_t zmm0_14 = rax_76[4]
                rcx_51[0x10] = 0
                *(rcx_51 + 0x70) = zmm0_14
            
            int64_t rax_78 = *r14_8
            void*** var_538 = rcx_51
            rcx_51[0x10] = rax_78
            int64_t* var_480_1 = r14_8
            var_538[2] = *(*r14_8 + 0x10)
            void**** var_488 = &var_538
            void var_498
            sub_14107bc20(&var_308, &var_498, &var_488, nullptr)
            var_558 = *r14_8
            void** var_478 = &var_558
            void** var_470_1 = &var_538
            void var_494
            sub_14107baa0(&var_268, &var_494, &var_478, nullptr)
            rdi_8 = var_538
        else
            rdi_8 = *rax_74
        
        var_4a8.q = rdi_8
        var_4f8.q = rdi_8
        var_4f8:8.w = 0
        void*** rax_82 = sub_14081d830(0x28, var_320, 1, 0)
        void*** r14_9 = rax_82
        
        if (rax_82 == 0)
            r14_9 = nullptr
        else
            int128_t zmm0_15 = var_4f8
            rax_82[1] = rdi_8[1]
            rax_82[2] = 0
            *r14_9 = &data_142f285c0
            *(r14_9 + 0x18) = zmm0_15
        
        void* r15_3 = r13_3 + 0x5058 + r12_1
        int64_t* rdi_10 = *r15_3
        int32_t var_51c
        sub_140865c40(&var_268, &var_51c, rdi_10)
        int64_t rax_83 = sx.q(var_51c)
        void* const rcx_57
        
        if (rax_83.d == 0xffffffff)
            rcx_57 = nullptr
        else
            rcx_57 = var_268 + rax_83 * 0x18
        
        int64_t* rax_85 = rcx_57 + 8
        
        if (rcx_57 == 0)
            rax_85 = nullptr
        
        void*** rdi_11
        
        if (rax_85 == 0)
            int128_t* rax_87 = (*(*rdi_10 + 0x10))(rdi_10)
            void*** rax_88 = sub_14081d830(0x88, var_320, 1, 0)
            void*** rcx_59 = rax_88
            
            if (rax_88 == 0)
                rcx_59 = nullptr
            else
                rcx_59[2] = 0
                rcx_59[1] = u"External"
                rcx_59[3].b = 0
                *(rcx_59 + 0x1c) = 0
                rcx_59[4] = 0
                rcx_59[5].w = 0x200
                *rcx_59 = &data_142f11960
                *(rcx_59 + 0x30) = *rax_87
                *(rcx_59 + 0x40) = rax_87[1]
                *(rcx_59 + 0x50) = rax_87[2]
                *(rcx_59 + 0x60) = rax_87[3]
                int128_t zmm0_16 = rax_87[4]
                rcx_59[0x10] = 0
                *(rcx_59 + 0x70) = zmm0_16
            
            int64_t rax_89 = *r15_3
            void*** var_560 = rcx_59
            rcx_59[0x10] = rax_89
            void* var_460_1 = r15_3
            var_560[2] = *(*r15_3 + 0x10)
            void** var_468 = &var_560
            void var_490
            sub_14107bc20(&var_308, &var_490, &var_468, nullptr)
            var_5a0.q = *r15_3
            int32_t* var_458 = &var_5a0
            void** var_450_1 = &var_560
            void var_48c
            sub_14107baa0(&var_268, &var_48c, &var_458, nullptr)
            rdi_11 = var_560
        else
            rdi_11 = *rax_85
        
        var_558 = rdi_11
        var_5b8.q = rdi_11
        var_5b8:8.w = 0
        void*** rax_93 = sub_14081d830(0x28, var_320, 1, 0)
        void*** r15_4 = rax_93
        
        if (rax_93 == 0)
            r15_4 = nullptr
        else
            int128_t zmm0_17 = var_5b8
            rax_93[1] = rdi_11[1]
            rax_93[2] = 0
            *r15_4 = &data_142f285c0
            *(r15_4 + 0x18) = zmm0_17
        
        int32_t r9_7 = 0
        
        if (var_5e8 == 0)
            r9_7 = 2
        
        int128_t var_448
        sub_1419a2ec0(*(r12_1 + r13_3 + 0x5150), &var_448, &data_143ee7b60, 
            r9_7 + rax_66 + var_548.d)
        zmm7 = var_448
        int64_t* rax_94 = sub_14081d830(0x40, var_320, 1, 0)
        int64_t* rdi_13 = rax_94
        
        if (rax_94 == 0)
            rdi_13 = nullptr
        else
            __builtin_memset(rax_94, 0, 0x40)
        
        __builtin_memset(rdi_13, 0, 0x40)
        int64_t* rcx_65 = *(arg1 + 8)
        sub_1405d16e0(rdi_13, *((*(*rcx_65 + 0x1d0))(rcx_65) + 0xc0))
        sub_1405d16e0(&rdi_13[1], rbx)
        sub_1405d16e0(&rdi_13[2], *(r12_1 + r13_3 + 0x10))
        void* rcx_69 = var_4a8.q
        rdi_13[6] = rax_5
        rdi_13[7] = rax_5
        rdi_13[4] = rax_7
        rdi_13[5] = rax_9
        rdi_13[3] = r14_9
        int32_t rcx_70 = *(rcx_69 + 0x48)
        int32_t temp11_1
        int32_t temp12_1
        temp11_1:temp12_1 = sx.q(*(rcx_69 + 0x44) + 7)
        var_4d8.d = (temp12_1 + (temp11_1 & 7)) s>> 3
        int32_t temp13_1
        int32_t temp14_1
        temp13_1:temp14_1 = sx.q(rcx_70 + 7)
        var_4d8:4.d = (temp14_1 + (temp13_1 & 7)) s>> 3
        sub_1414cc390(rcx_70.b)
        int128_t var_408_1 = zx.o(0)
        sub_141998c50(var_448.q, &data_143eea2c0, rdi_13)
        int32_t var_570_3 = 1
        int64_t var_578_3 = var_4d8.q
        void*** rax_110
        char rcx_72
        rax_110, rcx_72 = sub_14081d830(0x60, var_320, 1, 0)
        void*** r14_10 = rax_110
        
        if (rax_110 == 0)
            r14_10 = nullptr
        else
            var_4c8.q = rdi_13
            sub_1414cc390(rcx_72)
            var_4c8:8.q = &data_143eea2f0
            int128_t var_3f8 = var_4c8
            void var_5c6
            sub_141992bd0(r14_10, &var_5c6, &var_3f8, 2)
            *r14_10 = &data_142fb8280
            *(r14_10 + 0x38) = rdi_13.o
            *(r14_10 + 0x48) = zmm7
            r14_10[0xb] = var_570_3.q
        
        sub_1419968d0(&var_328, r14_10)
        int128_t var_438
        sub_1419a2ec0(*(r12_1 + r13_3 + 0x5150), &var_438, &data_143ee7c70, var_540.d)
        zmm7 = var_438
        int64_t* rax_111 = sub_14081d830(0x50, var_320, 1, 0)
        int64_t* r14_11 = rax_111
        
        if (rax_111 == 0)
            r14_11 = nullptr
        else
            __builtin_memset(rax_111, 0, 0x40)
        
        memset(r14_11, 0, 0x50)
        int64_t* rcx_77 = *(arg1 + 8)
        sub_1405d16e0(r14_11, *((*(*rcx_77 + 0x1d0))(rcx_77) + 0xc0))
        sub_1405d16e0(&r14_11[1], rbx)
        float zmm6_5 = sub_1405d16e0(&r14_11[2], *(r12_1 + r13_3 + 0x10))
        void*** rdx_70 = var_558
        r14_11[6] = rax_5
        r14_11[7] = rax_5
        r14_11[4] = rax_7
        r14_11[5] = rax_9
        r14_11[3] = r15_4
        r14_11[8].d = zmm6_5 * 9.99999975e-06f
        int32_t rcx_81 = rdx_70[9].d
        int32_t r8_16 = *(rdx_70 + 0x4c)
        int32_t temp15_1
        int32_t temp16_1
        temp15_1:temp16_1 = sx.q(*(rdx_70 + 0x44) + 3)
        var_5d8[0] = (temp16_1 + (temp15_1 & 3)) s>> 2
        int32_t temp17_1
        int32_t temp18_1
        temp17_1:temp18_1 = sx.q(rcx_81 + 3)
        var_5d8[1] = (temp18_1 + (temp17_1 & 3)) s>> 2
        int32_t temp19_1
        int32_t temp20_1
        temp19_1:temp20_1 = sx.q(r8_16 + 3)
        sub_1414cbaf0(rcx_81.b)
        int128_t var_3e8_1 = zx.o(0)
        sub_141998c50(var_438.q, &data_143eea3d0, r14_11)
        int64_t var_578_4 = var_5d8[0].q
        void*** rax_129
        char rcx_83
        rax_129, rcx_83 = sub_14081d830(0x60, var_320, 1, 0)
        void*** rdi_16 = rax_129
        
        if (rax_129 == 0)
            rdi_16 = nullptr
        else
            var_4b8.q = r14_11
            sub_1414cbaf0(rcx_83)
            var_4b8:8.q = &data_143eea400
            int128_t var_3d8 = var_4b8
            void var_5c5
            sub_141992bd0(rdi_16, &var_5c5, &var_3d8, 2)
            *rdi_16 = &data_142fb8290
            *(rdi_16 + 0x38) = r14_11.o
            *(rdi_16 + 0x48) = zmm7
            rdi_16[0xb] = (((temp19_1 & 3) + temp20_1) s>> 2).q
        
        sub_1419968d0(&var_328, rdi_16)
        r13_2 = arg1
        i = i_1 + 1
        r12_1 += 0x5240
        i_1 = i
    while (i s< *(r13_2 + 0xa8))

sub_14199ef00(&var_328)
sub_1410eb9e0(&var_328)
int64_t result = sub_1405d1550(&var_4e8)
__security_check_cookie(rax_1 ^ &var_618)
return result
