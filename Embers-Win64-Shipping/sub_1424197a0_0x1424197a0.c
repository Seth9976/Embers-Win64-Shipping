// 函数: sub_1424197a0
// 地址: 0x1424197a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_588
int64_t rax_1 = __security_cookie ^ &var_588
void* var_548 = arg2
float var_520 = 0f
int16_t* const r12 = &data_142d40450

if (*(arg1 + 0x80) != 0)
    *(arg1 + 0x78)

int16_t* const r8 = &data_142d40450

if (data_143f5bda0 != 0)
    r8 = data_143f5bd98

int64_t var_3e8
sub_140a2e390(&var_3e8, u"%s%s", r8)
int64_t var_4f0
int64_t var_418
int64_t* rcx_9
int32_t rbx_3
int64_t r14

if (*(arg1 + 0x98) s<= 1)
    int64_t var_410_1 = 0
    rcx_9 = &var_418
    rbx_3 = 2
    r14 = 0
else
    int32_t rax_2 = *(arg1 + 0x80)
    int32_t rcx_1 = *(arg1 + 0x98)
    int32_t rdx = rax_2 - 1
    
    if (rax_2 == 0)
        rdx = 0
    
    int32_t rcx_2
    int16_t* const r8_1
    
    if (rcx_1 == 0)
        rcx_2 = 0
        r8_1 = &data_142d40450
    else
        r8_1 = *(arg1 + 0x90)
        rcx_2 = rcx_1 - 1
    
    int32_t rax_4 = rcx_2 - rdx
    int32_t rdx_1
    
    if (rcx_2 - rdx s>= 0)
        rdx_1 = rcx_2
        
        if (rax_4 s< rcx_2)
            rdx_1 = rax_4
    else
        rdx_1 = 0
    
    r14 = 0
    int32_t rdx_2 = 0
    var_4f0 = 0
    int32_t var_4e8_1 = 0
    int16_t* rdi_1 = &r8_1[sx.q(rcx_2) - sx.q(rdx_1)]
    int32_t rcx_5 = 0
    int32_t var_4e4_1 = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_4f0, rbx_1.d + 1)
            rcx_5 = var_4e4_1
            rdx_2 = var_4e8_1
            r14 = var_4f0
        
        int32_t rax_6 = rdx_2 + rbx_1.d + 1
        int32_t var_4e8_2 = rax_6
        
        if (rax_6 s> rcx_5)
            sub_140594770(&var_4f0)
            r14 = var_4f0
        
        UnDecorator::getReferenceType(r14, rdi_1, (rbx_1.d + 1) * 2)
    
    rcx_9 = &var_4f0
    rbx_3 = 1

*rcx_9 = 0
int32_t rax_7 = rcx_9[1].d
int32_t var_4a4 = *(rcx_9 + 0xc)
rcx_9[1] = 0
int64_t var_4b0 = r14

if ((rbx_3.b & 2) != 0)
    int64_t rcx_10 = var_418
    rbx_3 &= 0xfffffffd
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if ((rbx_3.b & 1) != 0)
    int64_t rcx_11 = var_4f0
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

void* rcx_12 = *(var_548 + 0x260)
float zmm0

if (*(rcx_12 + 0x94) == 0)
    zmm0 = *(rcx_12 + 0xa4)
else
    zmm0 = 1f

float var_540 = zmm0
char var_550 = 1
void* rax_10 = sub_1423de050()
char var_560 = 1
float var_558
int32_t var_568 = &var_558
void* rcx_13 = var_548
void* var_4f8 = rax_10
float var_554
float zmm10
int512_t zmm11
zmm10, zmm11 = sub_1424232b0(rcx_13, rax_10, &var_3e8, &var_554, var_568, var_560, var_558.b)
float zmm3 = zmm10 / var_540
void* rdx_6 = var_548
zmm11.o = zx.o(0)
uint128_t zmm6 = zx.o(data_143a304c8)
uint32_t rax_12 = zx.d(data_143a304c9)
uint128_t zmm0_1
zmm0_1.d = var_554.d f* zmm3
zmm3 = zmm3 * var_558
var_554 = zmm0_1.d
uint32_t rax_13 = zx.d(data_143a304ca)
var_558 = zmm3
int32_t zmm8 = *(rdx_6 + 0x30)
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rax_12))
void* rax_14 = *(arg1 + 0x118)
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rax_13))
float zmm5 = *(rax_14 + 0x50)
zmm7.d = zmm7.d f* 0.00392156886f
int32_t rax_16 = arg_18:4.d - 6
zmm4.d = zmm4.d f* 0.00392156886f
_mm_shuffle_ps(zmm7, zmm7, 0xe1)
void* rax_17 = *(arg1 + 0x40)
zmm7.d = zmm4.d
_mm_shuffle_ps(zmm7, zmm7, 0xc6)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_16))
int64_t rcx_14 = *(rax_17 + 0x78)
int32_t var_488 = 0
char var_480 = 0
zmm6 = _mm_cvtepi32_ps(zmm6)
int64_t var_478 = 0
void** const var_498 = &data_1433443d0
int64_t var_440 = rcx_14
zmm1.d = zmm1.d f- zmm3
int64_t var_438
__builtin_memset(&var_438, 0, 0x14)
zmm6.d = zmm6.d f* 0.00392156886f
zmm0_1 = _mm_cvtepi32_ps(zx.o(arg_18.d))
int32_t var_484 = 0xb
zmm7.d = zmm6.d
int32_t var_48c = zmm1.d
zmm1 = data_143dbb1f0:4.d
int32_t var_490 = zmm0_1.d
_mm_shuffle_ps(zmm7, zmm7, 0x27)
zmm7.d = zmm5 * 0.00999999978f
int128_t var_458
__builtin_memcpy(&var_458, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
zmm0_1 = data_143dbb1f0.d
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x39)
int32_t var_420 = zmm1.d
int32_t var_460 = zmm8
float var_45c = zmm3 + 6f
int32_t var_424 = zmm0_1.d
uint128_t var_518 = zmm7
uint128_t var_470 = zmm7
int32_t* rbx_4 = *(rdx_6 + 0x260)
int32_t zmm8_1 = sub_142408260(&var_498, rbx_4)

if (rbx_4[0x28] == 1)
    sub_14240e030(rbx_4, 0)

int128_t var_2f8
sub_140acc920(&var_2f8, &data_143a304c0)
int128_t var_470_1 = var_2f8
int64_t var_440_1 = *(*(arg1 + 0x48) + 0x78)
int32_t var_460_1 = zmm8_1
int32_t var_45c_1 = 0x40000000
void* rbx_5 = *(var_548 + 0x260)
var_498[3](&var_498, rbx_5)

if (*(rbx_5 + 0xa0) == 1)
    sub_14240e030(rbx_5, 0)

void var_2a8
sub_140aae420(&var_2a8, &var_3e8)
void var_2e8
sub_140acc920(&var_2e8, *(arg1 + 0x118) + 0x58)
int32_t rax_22 = arg_18:4.d - 3
uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o(arg_18.d))
uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rax_22))
int32_t var_4c0 = zmm0_3.d
zmm1_1.d = zmm1_1.d f- var_558
int32_t var_4bc = zmm1_1.d
void** var_260
sub_1420767c0(&var_260, &var_4c0, &var_2a8, sub_1423dd950(), &var_2e8)
int32_t var_220
int32_t var_220_1 = var_220 | 2
int32_t var_1e8 = 0x3f800000
int128_t var_1f8 = data_14399f5e0
int32_t var_1e4 = 0x3f800000
void* rbx_6 = *(var_548 + 0x260)
var_260[3](&var_260, rbx_6)

if (*(rbx_6 + 0xa0) == 1)
    sub_14240e030(rbx_6, 0)

int64_t var_130
int64_t var_128

if (rax_7 s> 1)
    int128_t var_2d8
    sub_140acc920(&var_2d8, *(arg1 + 0x118) + 0x68)
    int128_t var_238_1 = var_2d8
    void var_290
    int64_t* rax_26 = sub_140aae420(&var_290, &var_4b0)
    int64_t rdx_17 = var_130
    var_130 = *rax_26
    *rax_26 = rdx_17
    int64_t rdx_18 = var_128
    var_128 = rax_26[1]
    rax_26[1] = rdx_18
    int32_t var_120_1 = rax_26[2].d
    int64_t* var_288
    
    if (var_288 != 0)
        var_288[1].d -= 1
        
        if (var_288[1].d == 1)
            (**var_288)(var_288)
            int32_t rax_30 = *(var_288 + 0xc)
            *(var_288 + 0xc) -= 1
            
            if (rax_30 == 1)
                (*(*var_288 + 8))(var_288, 1)
    
    int32_t rax_33 = arg_18:4.d - 3
    uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(arg_18.d))
    void* rax_34 = var_548
    zmm2_1.d = zmm2_1.d f+ var_554
    uint128_t zmm3_1 = _mm_cvtepi32_ps(zx.o(rax_33))
    void* rbx_8 = *(rax_34 + 0x260)
    zmm3_1.d = zmm3_1.d f- var_558
    var_260[1](&var_260, rbx_8, zmm2_1, zmm3_1)
    
    if (*(rbx_8 + 0xa0) == 1)
        sub_14240e030(rbx_8, 0)

int32_t rax_36 = *(arg1 + 0x110)

if (rax_36 s> 0)
    int32_t r14_1 = *(arg1 + 0xcc)
    
    if (r14_1 s< 0)
        int32_t rax_37 = rax_36 + r14_1
        r14_1 = rax_37
        
        if (rax_37 s<= 0)
            r14_1 = 0
    
    bool cond:4_1 = data_143f5bda0 != 0
    int16_t* const rdi_2 = &data_142d40450
    int32_t rdx_20 = 0
    int64_t var_4e0 = 0
    
    if (cond:4_1)
        rdi_2 = data_143f5bd98
    
    int32_t rcx_34 = 0
    int32_t var_4d8_1 = 0
    int32_t var_4d4_1 = 0
    
    if (rdi_2 != 0 && *rdi_2 != 0)
        int64_t rbx_9 = -1
        
        do
            rbx_9 += 1
        while (rdi_2[rbx_9] != 0)
        
        if (rbx_9.d + 1 s> 0)
            sub_1405947f0(&var_4e0, rbx_9.d + 1)
            rcx_34 = var_4d4_1
            rdx_20 = var_4d8_1
        
        int32_t rax_38 = rdx_20 + rbx_9.d + 1
        int32_t var_4d8_2 = rax_38
        
        if (rax_38 s> rcx_34)
            sub_140594770(&var_4e0)
        
        UnDecorator::getReferenceType(var_4e0, rdi_2, (rbx_9.d + 1) * 2)
    
    char var_560_1 = 1
    float* var_568_2 = &var_558
    float zmm9_1
    float zmm10_1[0x4]
    float zmm11_1
    int32_t zmm12_1
    zmm9_1, zmm10_1, zmm11_1, zmm12_1 =
        sub_1424232b0(var_548, var_4f8, &var_4e0, &var_554, var_568_2.d, var_560_1)
    int64_t rcx_39 = var_4e0
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    uint128_t zmm0_6 = var_554
    zmm10_1[0] = zmm10_1[0] / var_540
    zmm0_6.d = zmm0_6.d f* zmm10_1[0]
    zmm10_1[0] = zmm10_1[0] * var_558
    var_554 = zmm0_6.d
    zmm0_6 = _mm_cvtepi32_ps(zx.o(arg_18:4.d))
    var_558 = zmm10_1[0]
    zmm10_1[0] = zmm10_1[0] + zmm10_1[0]
    zmm0_6.d = zmm0_6.d f- zmm12_1
    zmm0_6.d = zmm0_6.d f- zmm10_1[0]
    float var_538 = zmm0_6.d
    float var_3f8[0x4]
    sub_140acc920(&var_3f8, &data_143a304c8)
    void* rax_39 = *(arg1 + 0x118)
    float zmm1_2[0x4] = var_3f8
    int64_t** var_530 = nullptr
    int64_t var_528_1 = 0
    float zmm0_7 = *(rax_39 + 0x50)
    void* rax_40 = *(arg1 + 0x48)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x93)
    temp0_16[0] = zmm0_7 * zmm9_1
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
    var_3f8 = temp0_17
    float var_470_2[0x4] = temp0_17
    int64_t var_440_2 = *(rax_40 + 0x78)
    sub_1405c5570(&var_530, 0x15)
    int32_t rbx_11 = var_528_1.d
    int32_t i = 0
    float var_53c = 0f
    int64_t** r13_1 = var_530
    int64_t rcx_44 = sx.q(r14_1) * 0x28
    int64_t var_4b8_1 = rcx_44
    float zmm0_8[0x4]
    float zmm2_2[0x4]
    
    while (i s< *(arg1 + 0x110))
        int64_t rdi_3 = sx.q(rbx_11)
        int64_t* r14_3 = *(arg1 + 0x108) + rcx_44
        rbx_11 = (rdi_3 + 1).d
        var_528_1.d = rbx_11
        
        if (rbx_11 s> var_528_1:4.d)
            sub_1405a4d70(&var_530)
            rbx_11 = var_528_1.d
            r13_1 = var_530
        
        r13_1[rdi_3] = r14_3
        int64_t* rdi_4 = &r14_3[2]
        int16_t* const rcx_46
        
        if (rdi_4[1].d == 0)
            rcx_46 = &data_142d40450
        else
            rcx_46 = *rdi_4
        
        var_560_1 = 1
        int64_t* r8_9 = r14_3
        float var_504
        var_568_2 = &var_504
        
        if (sub_140a54510(rcx_46, &data_142e5cee4) == 0)
            r8_9 = rdi_4
        
        float var_508
        float zmm10_2[0x4]
        zmm10_2, zmm11_1 = sub_1424232b0(var_548, var_4f8, r8_9, &var_508, var_568_2.d, var_560_1)
        zmm0_8 = var_504
        zmm10_2[0] = zmm10_2[0] / var_540
        zmm2_2 = var_508
        zmm0_8[0] = zmm0_8[0] * zmm10_2[0]
        zmm2_2[0] = zmm2_2[0] * zmm10_2[0]
        var_504 = zmm0_8[0]
        bool cond:8_1 = var_53c[0] >= zmm2_2[0]
        var_508 = zmm2_2[0]
        
        if (not(cond:8_1))
            var_53c = zmm2_2[0]
        
        if (r14_3[3].d s> 1)
            int16_t* const rcx_48
            
            if (rdi_4[1].d == 0)
                rcx_48 = &data_142d40450
            else
                rcx_48 = *rdi_4
            
            var_560_1 = 1
            
            if (sub_140a54510(rcx_48, &data_142e5cee4) == 0)
                rdi_4 = r14_3
            
            float var_4fc
            var_568_2 = &var_4fc
            float var_500
            float zmm10_3[0x4]
            int32_t zmm12_2
            zmm10_3, zmm11_1, zmm12_2 =
                sub_1424232b0(var_548, var_4f8, rdi_4, &var_500, var_568_2.d, var_560_1)
            zmm2_2 = var_500
            zmm10_3[0] = zmm10_3[0] / var_540
            zmm0_8 = var_4fc
            zmm2_2[0] = zmm2_2[0] * zmm10_3[0]
            zmm0_8[0] = zmm0_8[0] * zmm10_3[0]
            var_500 = zmm2_2[0]
            zmm2_2[0] = zmm2_2[0] f+ zmm12_2
            var_4fc = zmm0_8[0]
            zmm11_1 = _mm_max_ss(zmm2_2[0], zmm11_1)[0]
        
        i += 1
        rcx_44 = var_4b8_1 + 0x28
        var_4b8_1 = rcx_44
        
        if (i u>= 0x14)
            break
    
    if (*(arg1 + 0x110) u> 0x14)
        TEB* gsbase
        
        if (data_143f5d7fc
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f5d7fc)
            
            if (data_143f5d7fc == 0xffffffff)
                atexit(sub_142d10b60)
                _Init_thread_footer(&data_143f5d7fc)
        
        int64_t var_408
        sub_140a2e390(&var_408, u"[%i more matches]", zx.q(*(arg1 + 0x110) - 0x14))
        int64_t rcx_54 = data_143a304d0
        
        if (rcx_54 != 0)
            sub_140a74f90(rcx_54)
        
        data_143a304d0 = var_408
        int32_t var_400
        data_143a304d8 = var_400
        int32_t var_3fc
        data_143a304dc = var_3fc
        int64_t rdi_5 = sx.q(rbx_11)
        rbx_11 = (rdi_5 + 1).d
        data_143a304f0 = *(*(arg1 + 0x118) + 0x68)
        var_528_1.d = rbx_11
        
        if (rbx_11 s> var_528_1:4.d)
            sub_1405a4d70(&var_530)
            rbx_11 = var_528_1.d
            r13_1 = var_530
        
        r13_1[rdi_5] = &data_143a304d0
    
    zmm11_1 = zmm11_1 + var_53c
    void* rax_50 = var_548
    float zmm3_2 = var_538 + var_558
    zmm0_8 = var_3f8
    int32_t var_484_1 = 0xb
    float temp0_19[0x4] = _mm_cvtepi32_ps(zx.o(arg_18.d))
    var_520 = zmm11_1
    temp0_19[0] = temp0_19[0] + var_554
    float var_470_3[0x4] = zmm0_8
    uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(rbx_11))
    float var_460_2 = zmm11_1 + 8f
    temp0_19[0] = temp0_19[0] - 4f
    zmm6_1.d = zmm6_1.d f* var_558
    float zmm8_2 = zmm6_1.d + 8f
    float var_45c_2 = zmm8_2
    void* rdi_6 = *(rax_50 + 0x260)
    var_498[1](&var_498, rdi_6, temp0_19, zmm3_2 f- zmm6_1.d - 4f, var_568_2, var_560_1)
    
    if (*(rdi_6 + 0xa0) == 1)
        zmm6_1 = sub_14240e030(rdi_6, 0)
    
    zmm2_2 = var_520
    zmm2_2[0] = zmm2_2[0] + 8f
    float var_3d0_1 = var_490[0]
    int64_t var_3c8_1 = 0
    float var_3cc_1 = var_48c[0]
    float var_3a0_1 = zmm2_2[0]
    float var_39c_1 = zmm8_2
    char var_3c0_1 = 0
    int64_t var_3b8_1 = 0
    float var_3b0_1[0x4] = data_14399f5c0
    void** const var_3d8 = &data_143298ab8
    int32_t var_398_1 = 0
    int64_t var_390_1 = 0
    int64_t var_388_1 = 0
    int128_t var_2c8
    sub_140acc920(&var_2c8, &data_143a304c0)
    void* rax_52 = var_548
    zmm3_2 = var_538 + var_558
    int128_t zmm0_9 = var_2c8
    var_3c8_1:4.d = 0
    float temp0_21[0x4] = _mm_cvtepi32_ps(zx.o(arg_18.d))
    temp0_21[0] = temp0_21[0] + var_554
    int128_t var_3b0_2 = zmm0_9
    void* rdi_7 = *(rax_52 + 0x260)
    void** const rax_53 = var_3d8
    temp0_21[0] = temp0_21[0] - 4f
    rax_53[1](&var_3d8, rdi_7, temp0_21, zmm3_2 f- zmm6_1.d - 4f)
    
    if (*(rdi_7 + 0xa0) == 1)
        sub_14240e030(rdi_7, 0)
    
    void* var_368 = arg1
    void** const* var_360_1 = &var_498
    float* var_358_1 = &var_520
    float* var_350_1 = &var_558
    void** var_348_1 = &var_548
    int64_t* var_340_1 = &arg_18
    int32_t* var_338_1 = &var_554
    float* var_330_1 = &var_538
    void** var_328_1 = &var_4f8
    char* var_320_1 = &var_550
    float* var_318_1 = &var_540
    float* var_310_1 = &var_53c
    void*** var_308_1 = &var_260
    
    if (*(*(arg1 + 0x118) + 0x54) == 0)
        int32_t rdi_9 = 0
        
        if (rbx_11 s> 0)
            int64_t** r14_6 = r13_1
            
            do
                sub_142400540(&var_368, *r14_6, rdi_9, rbx_11)
                rdi_9 += 1
                r14_6 = &r14_6[1]
            while (rdi_9 s< rbx_11)
    else
        int32_t rdi_8 = rbx_11 - 1
        
        if (rdi_8 s>= 0)
            int64_t** r14_5 = &r13_1[sx.q(rdi_8)]
            int32_t temp2_1
            
            do
                sub_142400540(&var_368, *r14_5, rdi_8, rbx_11)
                temp2_1 = rdi_8
                rdi_8 -= 1
                r14_5 = &r14_5[-1]
            while (temp2_1 - 1 s>= 0)
    
    if (var_390_1 != 0)
        sub_140a74f90(var_390_1)
    
    var_3d8 = &data_143283728
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)

int32_t rax_56 = *(arg1 + 0x80)
int32_t rcx_66 = *(arg1 + 0x88)
int16_t* r14_7

if (rax_56 == 0)
    r14_7 = &data_142d40450
else
    r14_7 = *(arg1 + 0x78)

int32_t rbx_12 = rax_56 - 1

if (rax_56 == 0)
    rbx_12 = 0

if (rcx_66 s< 0)
    rbx_12 = 0
else if (rcx_66 s< rbx_12)
    rbx_12 = rcx_66

int64_t var_4d0 = 0
int32_t rdx_32 = 0
int32_t var_4c8 = 0
int32_t rax_57 = 0
int32_t var_4c4 = 0
int64_t rdi_10 = 0

if (r14_7 != 0 && *r14_7 != 0 && rbx_12 s> 0)
    if (rbx_12 + 1 s> 0)
        sub_1405947f0(&var_4d0, rbx_12 + 1)
        rax_57 = var_4c4
        rdx_32 = var_4c8
        rdi_10 = var_4d0
    
    int32_t rsi_2 = rbx_12 + 1 + rdx_32
    
    if (rsi_2 s> rax_57)
        sub_140594770(&var_4d0)
        rdi_10 = var_4d0
    
    UnDecorator::getReferenceType(rdi_10, r14_7, rbx_12 * 2)
    *(rdi_10 + (sx.q(rsi_2) << 1) - 2) = 0

if (data_143f5bda0 != 0)
    r12 = data_143f5bd98

int64_t var_378
sub_140a2e390(&var_378, u"%s%s", r12)

if (rdi_10 != 0)
    sub_140a74f90(rdi_10)

uint128_t zmm10_4 = sub_1424232b0(var_548, var_4f8, &var_378, &var_554, &var_558, 1)
uint128_t zmm2_3
zmm2_3.d = zmm10_4.d f/ var_540
float zmm1_3 = var_558 f* zmm2_3.d
var_554 = var_554 f* zmm2_3.d
var_558 = zmm1_3
int128_t var_2b8
sub_140acc920(&var_2b8, &data_143a304c4)
var_518.q = 0
var_518:8.q = 0
int128_t var_238_2 = var_2b8
sub_1405947f0(&var_518, 2)
var_518:8.d += 2

if (var_518:8.d + 2 s> var_518:0xc.d)
    sub_140594770(&var_518)

UnDecorator::getReferenceType(var_518.q, &data_142d99650, 4)
void var_278
int64_t* rax_60 = sub_140aae2f0(&var_278, &var_518)
int64_t var_130_1 = *rax_60
*rax_60 = var_130
int64_t var_128_1 = rax_60[1]
rax_60[1] = var_128
int32_t var_120_2 = rax_60[2].d
int64_t* var_270

if (var_270 != 0)
    var_270[1].d -= 1
    
    if (var_270[1].d == 1)
        (**var_270)(var_270)
        int32_t rax_64 = *(var_270 + 0xc)
        *(var_270 + 0xc) -= 1
        
        if (rax_64 == 1)
            (*(*var_270 + 8))(var_270, 1)

int64_t rcx_83 = var_518.q

if (rcx_83 != 0)
    sub_140a74f90(rcx_83)

void* rax_66 = var_548
zmm2_3 = zx.o(arg_18.d)
uint128_t zmm3_3 = _mm_cvtepi32_ps(zx.o(arg_18:4.d))
void* rbx_14 = *(rax_66 + 0x260)
void** rax_67 = var_260
zmm3_3.d = zmm3_3.d f- zmm10_4.d
zmm2_3.d = _mm_cvtepi32_ps(zmm2_3).d f+ var_554
zmm3_3.d = zmm3_3.d f- var_558
rax_67[1](&var_260, rbx_14, zmm2_3, zmm3_3)

if (*(rbx_14 + 0xa0) == 1)
    sub_14240e030(rbx_14, 0)

int64_t rcx_86 = var_378

if (rcx_86 != 0)
    sub_140a74f90(rcx_86)

sub_141fa61e0(&var_260)
int64_t* var_2a0

if (var_2a0 != 0)
    var_2a0[1].d -= 1
    
    if (var_2a0[1].d == 1)
        (**var_2a0)(var_2a0)
        int32_t r15_1 = *(var_2a0 + 0xc)
        *(var_2a0 + 0xc) -= 1
        
        if (r15_1 == 1)
            (*(*var_2a0 + 8))(var_2a0, zx.q(r15_1))

int64_t rcx_90 = var_4b0
void** const result = &data_143283728
var_498 = &data_143283728

if (rcx_90 != 0)
    result = sub_140a74f90(rcx_90)

int64_t rcx_91 = var_3e8

if (rcx_91 != 0)
    result = sub_140a74f90(rcx_91)

__security_check_cookie(rax_1 ^ &var_588)
return result
