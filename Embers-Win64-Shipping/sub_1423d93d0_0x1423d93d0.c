// 函数: sub_1423d93d0
// 地址: 0x1423d93d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int64_t performanceCount
performanceCount.d = 0
uint128_t zmm0
double zmm1[0x2]

if (data_143dbb3b5 != 0 || data_143dbb3b6 != 0)
    QueryPerformanceCounter(&performanceCount)
    zmm1 = zx.o(arg1[3].q)
    zmm0.q = float.d(performanceCount)
    zmm0.q = zmm0.q f* data_143d796f8
    zmm0.q = zmm0.q f+ 16777216.0
    
    if (not(zmm1[0] != 0.0))
        zmm1 = zmm0
    
    arg1[3].q = zmm0.q
    zmm0.q = zmm0.q f- zmm1[0]
else
    zmm0.q = data_143dbb3b8 f- data_143dbb3c0

uint128_t zmm7 = 0x3feccccccccccccd
uint128_t zmm8 = 0x3fb999999999999a
zmm1 = *(arg1 + 0xc)
uint128_t zmm9 = 0x408f400000000000
double zmm2[0x2] = *(arg1 + 4)
zmm0 = _mm_cvtpd_ps(zmm0)
double temp0_1[0x2] = _mm_cvtps_pd(zmm1[0])
zmm0.d = zmm0.d f* 1000f
temp0_1[0] = temp0_1[0] f* zmm7.q
*(arg1 + 0x24) = zmm0.d
zmm0 = _mm_cvtps_pd(zmm0.q)
double temp0_3[0x2] = _mm_cvtps_pd(zmm2[0])
zmm0.q = zmm0.q f* zmm8.q
temp0_3[0] = temp0_3[0] f* zmm7.q
temp0_1[0] = temp0_1[0] f+ zmm0.q
*(arg1 + 0xc) = _mm_cvtpd_ps(temp0_1).d
uint64_t rax = zx.q(data_143f138ec)
zmm1 = zx.o(data_143d796f8)
zmm1[0] = zmm1[0] f* zmm9.q
zmm0.q = float.d(rax)
zmm1[0] = zmm1[0] f* zmm0.q
zmm1 = _mm_cvtpd_ps(zmm1)
*(arg1 + 0x1c) = zmm1[0].d
zmm0.q = _mm_cvtps_pd(zmm1[0]).q f* zmm8.q
temp0_3[0] = temp0_3[0] f+ zmm0.q
zmm0 = _mm_cvtpd_ps(temp0_3)
zmm2 = *arg1
*(arg1 + 4) = zmm0.d
uint64_t rax_1 = zx.q(data_143f138e4)
zmm1 = zx.o(data_143d796f8)
double temp0_8[0x2] = _mm_cvtps_pd(zmm2[0])
zmm0.q = float.d(rax_1)
zmm1[0] = zmm1[0] f* zmm9.q
temp0_8[0] = temp0_8[0] f* zmm7.q
zmm1[0] = zmm1[0] f* zmm0.q
zmm1 = _mm_cvtpd_ps(zmm1)
zmm0 = _mm_cvtps_pd(zmm1[0])
*(arg1 + 0x18) = zmm1[0].d
zmm0.q = zmm0.q f* zmm8.q
temp0_8[0] = temp0_8[0] f+ zmm0.q
zmm0 = _mm_cvtpd_ps(temp0_8)
zmm2 = arg1[1].d
*arg1 = zmm0.d
zmm1 = zx.o(data_143d796f8)
uint64_t rax_2 = zx.q(data_143f138e8)
double temp0_12[0x2] = _mm_cvtps_pd(zmm2[0])
zmm0.q = float.d(rax_2)
zmm1[0] = zmm1[0] f* zmm9.q
temp0_12[0] = temp0_12[0] f* zmm7.q
zmm1[0] = zmm1[0] f* zmm0.q
zmm1 = _mm_cvtpd_ps(zmm1)
zmm0 = _mm_cvtps_pd(zmm1[0])
*(arg1 + 0x28) = zmm1[0].d
zmm0.q = zmm0.q f* zmm8.q
temp0_12[0] = temp0_12[0] f+ zmm0.q
arg1[1].d = _mm_cvtpd_ps(temp0_12).d
int64_t rbx = data_143f01ca8
float zmm0_1[0x4] = sub_140a48b40()
uint128_t zmm13 = 0x43f0000000000000
zmm1 = zx.o(0)
zmm1[0] = float.d(rbx)

if (rbx s< 0)
    zmm1[0] = zmm1[0] f+ zmm13.q

float zmm11[0x4] = 0xbf800000
zmm2 = zx.o(0)
zmm0_1[0].q = zmm0_1[0].q f* zmm1[0]
float zmm6[0x4] = 0xbf800000
int32_t var_178 = 0
double temp0_16[0x2] = _mm_cvtps_pd((*(arg1 + 0x14))[0])
zmm0_1[0].q = zmm0_1[0].q f* zmm9.q
temp0_16[0] = temp0_16[0] f* zmm7.q
float var_174 = -1f
zmm0_1[0] = fconvert.s(zmm0_1[0].q)
zmm2[0] = fconvert.d(zmm0_1[0])
*(arg1 + 0x2c) = zmm0_1[0]
zmm2[0] = zmm2[0] f* zmm8.q
zmm2[0] = zmm2[0] + temp0_16[0]
float temp0_17[0x4] = _mm_cvtpd_ps(zmm2)
*(arg1 + 0x14) = temp0_17[0]
void* rbx_1 = data_143f5b298
int64_t* rcx_1 = *(rbx_1 + 0xa50)

if (rcx_1 != 0 && (*(*rcx_1 + 0x10))(rcx_1) != 0)
    int64_t* rcx_2 = *(rbx_1 + 0xa50)
    
    if ((*(*rcx_2 + 0x38))(rcx_2) == 0)
        int32_t rsi
        rsi.b = *(rbx_1 + 0xa70) != 0
        var_178 = rsi + 1
    else
        int64_t* rcx_3 = *(rbx_1 + 0xa50)
        var_178 = 3
        (*(*rcx_3 + 0x20))(rcx_3)
        int64_t* rcx_4 = *(rbx_1 + 0xa50)
        zmm11 = temp0_17
        (*(*rcx_4 + 0x28))(rcx_4)
        zmm6 = temp0_17
    
    var_174 = _mm_min_ss(zmm6[0], zmm11[0])[0]

int64_t* rcx_5 = data_143f0f180
int32_t rax_10 = (*(*rcx_5 + 0x3a8))(rcx_5, 0)
zmm1 = zx.o(data_143d796f8)
zmm0_1 = zx.o(0)
uint64_t r13 = zx.q(rax_10)
zmm1[0] = zmm1[0] f* zmm9.q
zmm0_1[0].q = float.d(r13)
zmm1[0] = zmm1[0] f* zmm0_1[0].q
zmm0_1 = _mm_cvtps_pd((*(arg1 + 8))[0].q)
zmm1 = _mm_cvtpd_ps(zmm1)
zmm0_1[0].q = zmm0_1[0].q f* zmm7.q
double temp0_21[0x2] = _mm_cvtps_pd(zmm1[0])
arg1[2].d = zmm1[0].d
temp0_21[0] = temp0_21[0] f* zmm8.q
temp0_21[0] = temp0_21[0] f+ zmm0_1[0].q
int32_t temp0_22 = _mm_cvtpd_ps(temp0_21)
*(arg1 + 8) = temp0_22
int64_t rax_11 = data_143de5458

if (data_143f5b7d8 != rax_11)
    zmm0_1 = data_143f5b7e4
    zmm0_1[0] = zmm0_1[0] f+ *(arg1 + 0xc)
    zmm1 = data_143f5b7ec
    zmm1[0].d = zmm1[0].d f+ *arg1
    data_143f5b7e0 += 1
    data_143f5b7d8 = rax_11
    data_143f5b7e4 = zmm0_1[0]
    zmm0_1 = data_143f5b7e8
    zmm0_1[0] = zmm0_1[0] f+ *(arg1 + 4)
    data_143f5b7ec = zmm1[0].d
    zmm1 = data_143f5b7f0
    zmm1[0].d = zmm1[0].d f+ temp0_22
    data_143f5b7e8 = zmm0_1[0]
    zmm0_1 = data_143f5b7f4
    zmm0_1[0] = zmm0_1[0] f+ arg1[1].d
    data_143f5b7f0 = zmm1[0].d
    data_143f5b7f4 = zmm0_1[0]

int16_t* var_1a8
int32_t var_1a0
char arg_10

if (arg2[6] == 0)
    arg_10 = 0
else
    var_1a8 = nullptr
    var_1a0 = 0
    sub_1405947f0(&var_1a8, 8)
    int32_t rax_12 = var_1a0 + 8
    var_1a0 = rax_12
    
    if (rax_12 s> 0)
        sub_140594770(&var_1a8)
    
    UnDecorator::getReferenceType(var_1a8, u"UnitMax", 0x10)
    int64_t* rcx_9 = arg2[6]
    arg_10 = (*(*rcx_9 + 0x168))(rcx_9, &var_1a8)
    r14 = 1

if ((r14.b & 1) != 0)
    int16_t* rcx_10 = var_1a8
    r14 &= 0xfffffffe
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

void* rbx_2 = data_143f5b298

if ((*(*arg2 + 0x198))(arg2) == 0)
    rbx_2.b = 0
else
    int64_t* rcx_12 = *(rbx_2 + 0xaf8)
    
    if (rcx_12 == 0)
        rbx_2.b = 0
    else if ((*(*rcx_12 + 8))(rcx_12) == 0)
        rbx_2.b = 0
    else
        rbx_2.b = 1

void* rsi_2 = *(data_143f5b298 + 0x50)

if (arg2[6] == 0)
    performanceCount.b = 0
else
    var_1a8 = nullptr
    var_1a0 = 0
    sub_1405947f0(&var_1a8, 0xa)
    int32_t rax_20 = var_1a0 + 0xa
    var_1a0 = rax_20
    
    if (rax_20 s> 0)
        sub_140594770(&var_1a8)
    
    UnDecorator::getReferenceType(var_1a8, u"UnitGraph", 0x14)
    int64_t* rcx_16 = arg2[6]
    r14 |= 2
    performanceCount.b = (*(*rcx_16 + 0x168))(rcx_16, &var_1a8)

if ((r14.b & 2) != 0)
    int16_t* rcx_17 = var_1a8
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

bool arg_18 = r13.d != 0
float temp0_23 = *(arg1 + 0x14)
0f - temp0_23

zmm1 = rbx_2.b == 0 ? 0x3f800000 : 0x3f000000

bool cond:4 = arg_10 == 0
float temp0_24[0x4] = _mm_cvtepi32_ps(zx.o(arg4))
temp0_24[0] = temp0_24[0] f* zmm1[0].d
int32_t rbx_3 = int.d(temp0_24[0])
int32_t var_188 = rbx_3
int32_t r14_2

if (cond:4)
    r14_2 = rbx_3
else
    int32_t rbx_4 = rbx_3 - int.d(_mm_cvtepi32_ps(zx.o(sub_142006f60(rsi_2, u" 000.00 ms "))).d)
    var_188 = rbx_4
    r14_2 = rbx_4 - int.d(_mm_cvtepi32_ps(zx.o(sub_142006f60(rsi_2, u" 000.00 ms "))).d)

int32_t rax_27
uint128_t zmm12
rax_27, zmm12 = sub_142006f60(rsi_2, u"DynRes: ")
int32_t r15_2 = r14_2 - int.d(_mm_cvtepi32_ps(zx.o(rax_27)).d)
float zmm0_5
uint128_t zmm8_1
double zmm9_1
zmm0_5, zmm8_1, zmm9_1 = sub_142005cc0(rsi_2)
uint128_t zmm7_1 = *(arg1 + 0xc)
int32_t rax_29 = int.d(zmm0_5 * 1.10000002f)
float zmm0_6 = sub_142218a30()
float zmm0_7 = sub_142218a10()
int32_t* r13_1 = &data_14399f638
int32_t* rax_30

if (zmm7_1.d f<= zmm0_6)
    rax_30 = &data_14399f63c
    
    if (zmm7_1.d f> zmm0_7)
        rax_30 = &data_14399f644
else
    rax_30 = &data_14399f638

bool cond:7 = performanceCount.b == 0
int32_t var_180 = *rax_30
int32_t* rdx_4

if (cond:7)
    int32_t var_170
    rdx_4 = &var_170
    var_170 = data_14399f630
else
    int32_t var_17c = 0xff64ff64
    rdx_4 = &var_17c

sub_140acc920(&var_1a8, rdx_4)
int32_t arg_28
int32_t rbx_5 = arg_28
zmm7_1 = _mm_cvtepi32_ps(zx.o(rbx_5))
uint128_t zmm15 = _mm_cvtepi32_ps(zx.o(r15_2))
double zmm7_2[0x2] = sub_142409910(arg3, zmm15, zmm7_1, u"Frame:", rsi_2, &var_1a8, &data_14399f5e0)
void var_198
sub_140acc920(&var_198, &var_180)
sub_140a2e390(&var_1a8, u"%3.2f ms", _mm_cvtps_pd((*(arg1 + 0xc))[0])[0])
int16_t* r15_3 = &data_142d40450
int16_t* r9 = &data_142d40450

if (var_1a0 != 0)
    r9 = var_1a8

uint128_t zmm14 = _mm_cvtepi32_ps(zx.o(r14_2))
uint128_t zmm7_3 = sub_142409910(arg3, zmm14, zmm7_2, r9, rsi_2, &var_198, &data_14399f5e0)
int16_t* rcx_27 = var_1a8

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

char r14_3 = arg_10

if (r14_3 != 0)
    int32_t zmm0_8 = sub_142218a30()
    float zmm0_9 = sub_142218a10()
    int32_t* rax_33
    
    if (zmm0_8 f>= zmm8_1.d)
        rax_33 = &data_14399f63c
        
        if (zmm0_9 f< zmm8_1.d)
            rax_33 = &data_14399f644
    else
        rax_33 = &data_14399f638
    
    arg_28 = *rax_33
    sub_140acc920(&var_198, &arg_28)
    sub_140a2e390(&var_1a8, u"%4.2f ms", 0)
    int16_t* r9_1 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_1 = var_1a8
    
    sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(var_188)), zmm7_3, r9_1, rsi_2, &var_198, 
        &data_14399f5e0)
    int16_t* rcx_31 = var_1a8
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)

int32_t rbx_6 = rbx_5 + rax_29
zmm7_3 = *(arg1 + 4)
int32_t zmm0_10 = sub_142218a30()
float zmm0_11 = sub_142218a10()
int32_t* rax_35

if (zmm7_3.d f<= zmm0_10)
    rax_35 = &data_14399f63c
    
    if (zmm7_3.d f> zmm0_11)
        rax_35 = &data_14399f644
else
    rax_35 = &data_14399f638

bool cond:11 = performanceCount.b == 0
var_180 = *rax_35
int32_t* rdx_7

if (cond:11)
    rdx_7 = &arg_10
    arg_10.d = data_14399f630
else
    arg_28 = 0xffff6464
    rdx_7 = &arg_28

sub_140acc920(&var_198, rdx_7)
double zmm7_4[0x2] = sub_142409910(arg3, zmm15, _mm_cvtepi32_ps(zx.o(rbx_6)), Game:", rsi_2, 
    &var_198, &data_14399f5e0)
sub_140acc920(&var_198, &var_180)
sub_140a2e390(&var_1a8, u"%3.2f ms", _mm_cvtps_pd((*(arg1 + 4))[0])[0])
int16_t* r9_2 = &data_142d40450

if (var_1a0 != 0)
    r9_2 = var_1a8

uint128_t zmm7_5 = sub_142409910(arg3, zmm14, zmm7_4, r9_2, rsi_2, &var_198, &data_14399f5e0)
int16_t* rcx_37 = var_1a8

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

if (r14_3 != 0)
    int32_t zmm0_12 = sub_142218a30()
    float zmm0_13 = sub_142218a10()
    int32_t* rax_38
    
    if (zmm0_12 f>= zmm8_1.d)
        rax_38 = &data_14399f63c
        
        if (zmm0_13 f< zmm8_1.d)
            rax_38 = &data_14399f644
    else
        rax_38 = &data_14399f638
    
    arg_28 = *rax_38
    sub_140acc920(&var_198, &arg_28)
    sub_140a2e390(&var_1a8, u"%4.2f ms", 0)
    int16_t* r9_3 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_3 = var_1a8
    
    sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(var_188)), zmm7_5, r9_3, rsi_2, &var_198, 
        &data_14399f5e0)
    int16_t* rcx_41 = var_1a8
    
    if (rcx_41 != 0)
        sub_140a74f90(rcx_41)

int32_t rbx_7 = rbx_6 + rax_29
zmm7_5 = *arg1
int32_t zmm0_14 = sub_142218a30()
float zmm0_15 = sub_142218a10()
int32_t* rax_40

if (zmm7_5.d f<= zmm0_14)
    rax_40 = &data_14399f63c
    
    if (zmm7_5.d f> zmm0_15)
        rax_40 = &data_14399f644
else
    rax_40 = &data_14399f638

bool cond:16 = performanceCount.b == 0
var_180 = *rax_40
int32_t* rdx_10

if (cond:16)
    rdx_10 = &arg_10
    arg_10.d = data_14399f630
else
    arg_28 = 0xff6464ff
    rdx_10 = &arg_28

sub_140acc920(&var_198, rdx_10)
double zmm7_6[0x2] = sub_142409910(arg3, zmm15, _mm_cvtepi32_ps(zx.o(rbx_7)), Draw:", rsi_2, 
    &var_198, &data_14399f5e0)
sub_140acc920(&var_198, &var_180)
sub_140a2e390(&var_1a8, u"%3.2f ms", _mm_cvtps_pd((*arg1)[0])[0])
int16_t* r9_4 = &data_142d40450

if (var_1a0 != 0)
    r9_4 = var_1a8

uint128_t zmm7_7 = sub_142409910(arg3, zmm14, zmm7_6, r9_4, rsi_2, &var_198, &data_14399f5e0)
int16_t* rcx_47 = var_1a8

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

if (r14_3 != 0)
    uint128_t zmm0_16 = sub_142218a30()
    float zmm0_17 = sub_142218a10()
    int32_t* rax_43
    
    if (zmm0_16.d f>= zmm8_1.d)
        rax_43 = &data_14399f63c
        
        if (zmm0_17 f< zmm8_1.d)
            rax_43 = &data_14399f644
    else
        rax_43 = &data_14399f638
    
    arg_28 = *rax_43
    sub_140acc920(&var_198, &arg_28)
    sub_140a2e390(&var_1a8, u"%4.2f ms", 0)
    int16_t* r9_5 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_5 = var_1a8
    
    sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(var_188)), zmm7_7, r9_5, rsi_2, &var_198, 
        &data_14399f5e0)
    int16_t* rcx_51 = var_1a8
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)

int32_t rbx_8 = rbx_7 + rax_29

if (arg_18 != 0)
    zmm7_7 = *(arg1 + 8)
    uint128_t zmm0_18 = sub_142218a30()
    float zmm0_19 = sub_142218a10()
    int32_t* rax_45
    
    if (zmm7_7.d f<= zmm0_18.d)
        rax_45 = &data_14399f63c
        
        if (zmm7_7.d f> zmm0_19)
            rax_45 = &data_14399f644
    else
        rax_45 = &data_14399f638
    
    arg_18.d = *rax_45
    int32_t* rdx_13
    
    if (performanceCount.b == 0)
        rdx_13 = &arg_10
        arg_10.d = data_14399f630
    else
        arg_28 = 0xffffff64
        rdx_13 = &arg_28
    
    sub_140acc920(&var_198, rdx_13)
    double zmm7_8[0x2] = sub_142409910(arg3, zmm15, _mm_cvtepi32_ps(zx.o(rbx_8)), GPU:", rsi_2, 
        &var_198, &data_14399f5e0)
    sub_140acc920(&var_198, &arg_18)
    sub_140a2e390(&var_1a8, u"%3.2f ms", _mm_cvtps_pd((*(arg1 + 8))[0])[0])
    int16_t* r9_6 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_6 = var_1a8
    
    zmm7_7 = sub_142409910(arg3, zmm14, zmm7_8, r9_6, rsi_2, &var_198, &data_14399f5e0)
    int16_t* rcx_57 = var_1a8
    
    if (rcx_57 != 0)
        sub_140a74f90(rcx_57)
    
    if (r14_3 != 0)
        uint128_t zmm0_20 = sub_142218a30()
        float zmm0_21 = sub_142218a10()
        int32_t* rax_48
        
        if (zmm0_20.d f>= zmm8_1.d)
            rax_48 = &data_14399f63c
            
            if (zmm0_21 f< zmm8_1.d)
                rax_48 = &data_14399f644
        else
            rax_48 = &data_14399f638
        
        arg_28 = *rax_48
        sub_140acc920(&var_198, &arg_28)
        sub_140a2e390(&var_1a8, u"%4.2f ms", 0)
        int16_t* r9_7 = &data_142d40450
        
        if (var_1a0 != 0)
            r9_7 = var_1a8
        
        sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(var_188)), zmm7_7, r9_7, rsi_2, &var_198, 
            &data_14399f5e0)
        int16_t* rcx_61 = var_1a8
        
        if (rcx_61 != 0)
            sub_140a74f90(rcx_61)
    
    rbx_8 += rax_29

if (data_143f01c92 != 0)
    zmm7_7 = arg1[1].d
    uint128_t zmm0_22 = sub_142218a30()
    float zmm0_23 = sub_142218a10()
    int32_t* rax_50
    
    if (zmm7_7.d f<= zmm0_22.d)
        rax_50 = &data_14399f63c
        
        if (zmm7_7.d f> zmm0_23)
            rax_50 = &data_14399f644
    else
        rax_50 = &data_14399f638
    
    arg_18.d = *rax_50
    int32_t* rdx_16
    
    if (performanceCount.b == 0)
        rdx_16 = &arg_10
        arg_10.d = data_14399f630
    else
        arg_28 = 0xffff64ff
        rdx_16 = &arg_28
    
    sub_140acc920(&var_198, rdx_16)
    double zmm7_9[0x2] = sub_142409910(arg3, zmm15, _mm_cvtepi32_ps(zx.o(rbx_8)), RHIT:", rsi_2, 
        &var_198, &data_14399f5e0)
    sub_140acc920(&var_198, &arg_18)
    sub_140a2e390(&var_1a8, u"%3.2f ms", _mm_cvtps_pd(arg1[1].d[0])[0])
    int16_t* r9_8 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_8 = var_1a8
    
    zmm7_7 = sub_142409910(arg3, zmm14, zmm7_9, r9_8, rsi_2, &var_198, &data_14399f5e0)
    int16_t* rcx_67 = var_1a8
    
    if (rcx_67 != 0)
        sub_140a74f90(rcx_67)
    
    if (r14_3 != 0)
        uint128_t zmm0_24 = sub_142218a30()
        float zmm0_25 = sub_142218a10()
        int32_t* rax_53
        
        if (zmm0_24.d f>= zmm8_1.d)
            rax_53 = &data_14399f63c
            
            if (zmm0_25 f< zmm8_1.d)
                rax_53 = &data_14399f644
        else
            rax_53 = &data_14399f638
        
        arg_28 = *rax_53
        sub_140acc920(&var_198, &arg_28)
        sub_140a2e390(&var_1a8, u"%4.2f ms", 0)
        int16_t* r9_9 = &data_142d40450
        
        if (var_1a0 != 0)
            r9_9 = var_1a8
        
        sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(var_188)), zmm7_7, r9_9, rsi_2, &var_198, 
            &data_14399f5e0)
        int16_t* rcx_71 = var_1a8
        
        if (rcx_71 != 0)
            sub_140a74f90(rcx_71)
    
    rbx_8 += rax_29

if (0f < temp0_23 != 0)
    zmm7_7.d = (*(arg1 + 0x14)).d f* 0.400000006f
    uint128_t zmm0_26 = sub_142218a30()
    float zmm0_27 = sub_142218a10()
    int32_t* rax_55
    
    if (zmm7_7.d f<= zmm0_26.d)
        rax_55 = &data_14399f63c
        
        if (zmm7_7.d f> zmm0_27)
            rax_55 = &data_14399f644
    else
        rax_55 = &data_14399f638
    
    arg_18.d = *rax_55
    int32_t* rdx_19
    
    if (performanceCount.b == 0)
        rdx_19 = &arg_10
        arg_10.d = data_14399f630
    else
        arg_28 = 0xffffff64
        rdx_19 = &arg_28
    
    sub_140acc920(&var_198, rdx_19)
    double zmm7_10[0x2] = sub_142409910(arg3, zmm15, _mm_cvtepi32_ps(zx.o(rbx_8)), Input:", rsi_2, 
        &var_198, &data_14399f5e0)
    sub_140acc920(&var_198, &arg_18)
    sub_140a2e390(&var_1a8, u"%3.2f ms", _mm_cvtps_pd((*(arg1 + 0x14))[0])[0])
    int16_t* r9_10 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_10 = var_1a8
    
    zmm7_7 = sub_142409910(arg3, zmm14, zmm7_10, r9_10, rsi_2, &var_198, &data_14399f5e0)
    int16_t* rcx_77 = var_1a8
    
    if (rcx_77 != 0)
        sub_140a74f90(rcx_77)
    
    if (r14_3 != 0)
        uint128_t zmm0_28 = sub_142218a30()
        float zmm0_29 = sub_142218a10()
        int32_t* rax_58
        
        if (zmm0_28.d f>= zmm8_1.d)
            rax_58 = &data_14399f63c
            
            if (zmm0_29 f< zmm8_1.d)
                rax_58 = &data_14399f644
        else
            rax_58 = &data_14399f638
        
        arg_28 = *rax_58
        sub_140acc920(&var_198, &arg_28)
        sub_140a2e390(&var_1a8, u"%4.2f ms", 0)
        int16_t* r9_11 = &data_142d40450
        
        if (var_1a0 != 0)
            r9_11 = var_1a8
        
        sub_142409910(arg3, _mm_cvtepi32_ps(zx.o(var_188)), zmm7_7, r9_11, rsi_2, &var_198, 
            &data_14399f5e0)
        int16_t* rcx_81 = var_1a8
        
        if (rcx_81 != 0)
            sub_140a74f90(rcx_81)
    
    rbx_8 += rax_29

char r14_4

if (r14_3 == 0)
    r14_4 = performanceCount.b
else
    uint128_t var_b8_1 = zmm12
    void var_168
    sub_140b6c480(&var_168)
    r14_4 = performanceCount.b
    int32_t* rdx_22
    
    if (r14_4 == 0)
        rdx_22 = &performanceCount
        performanceCount.d = data_14399f630
    else
        arg_28 = 0xff6464ff
        rdx_22 = &arg_28
    
    sub_140acc920(&var_198, rdx_22)
    zmm8_1 = _mm_cvtepi32_ps(zx.o(rbx_8))
    sub_142409910(arg3, zmm15, zmm8_1, u"Mem:", rsi_2, &var_198, &data_14399f5e0)
    sub_140acc920(&var_198, &data_14399f63c)
    double zmm0_30[0x2] = zx.o(0)
    int64_t var_118
    zmm0_30[0] = float.d(var_118)
    
    if (var_118 s< 0)
        zmm0_30[0] = zmm0_30[0] f+ zmm13.q
    
    zmm9_1 = 1073741824.0
    wchar16* rdi_1 = u"%.2f GB"
    int64_t zmm11_1 = 0x3eb0000000000000
    zmm12 = 0x3f50000000000000
    int64_t zmm10_1 = 0x3e10000000000000
    wchar16 const* const rdx_23
    
    if (not(zmm0_30[0] <= zmm9_1))
        rdx_23 = u"%.2f GB"
        zmm0_30[0] = zmm0_30[0] f* zmm10_1
    else if (not(zmm0_30[0] f<= 0x4130000000000000))
        rdx_23 = u"%.2f MB"
        zmm0_30[0] = zmm0_30[0] f* zmm11_1
    else if (zmm0_30[0] f<= 0x4090000000000000)
        rdx_23 = u"%.2f B"
    else
        rdx_23 = u"%.2f KB"
        zmm0_30[0] = zmm0_30[0] f* zmm12.q
    
    sub_140a2e390(&var_1a8, rdx_23, _mm_cvtps_pd(_mm_cvtpd_ps(zmm0_30)[0])[0])
    int16_t* r9_12 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_12 = var_1a8
    
    int64_t zmm6_6
    int64_t zmm7_12
    zmm6_6, zmm7_12 = sub_142409910(arg3, zmm14, zmm8_1, r9_12, rsi_2, &var_198, &data_14399f5e0)
    int16_t* rcx_88 = var_1a8
    
    if (rcx_88 != 0)
        sub_140a74f90(rcx_88)
    
    sub_140acc920(&var_198, &data_14399f63c)
    double zmm0_31[0x2] = zx.o(0)
    int64_t var_110
    zmm0_31[0] = float.d(var_110)
    
    if (var_110 s< 0)
        zmm0_31[0] = zmm0_31[0] f+ zmm13.q
    
    wchar16 const* const rdx_24
    
    if (not(zmm0_31[0] <= zmm9_1))
        rdx_24 = u"%.2f GB"
        zmm0_31[0] = zmm0_31[0] f* zmm10_1
    else if (not(zmm0_31[0] f<= zmm6_6))
        rdx_24 = u"%.2f MB"
        zmm0_31[0] = zmm0_31[0] f* zmm11_1
    else if (zmm0_31[0] f<= zmm7_12)
        rdx_24 = u"%.2f B"
    else
        rdx_24 = u"%.2f KB"
        zmm0_31[0] = zmm0_31[0] f* zmm12.q
    
    sub_140a2e390(&var_1a8, rdx_24, _mm_cvtps_pd(_mm_cvtpd_ps(zmm0_31)[0])[0])
    int16_t* r9_13 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_13 = var_1a8
    
    zmm13 = _mm_cvtepi32_ps(zx.o(var_188))
    sub_142409910(arg3, zmm13, zmm8_1, r9_13, rsi_2, &var_198, &data_14399f5e0)
    int16_t* rcx_92 = var_1a8
    
    if (rcx_92 != 0)
        sub_140a74f90(rcx_92)
    
    int32_t rbx_9 = rbx_8 + rax_29
    int32_t* rdx_25
    
    if (r14_4 == 0)
        rdx_25 = &performanceCount
        performanceCount.d = data_14399f630
    else
        arg_28 = 0xff6464ff
        rdx_25 = &arg_28
    
    sub_140acc920(&var_198, rdx_25)
    zmm8_1 = _mm_cvtepi32_ps(zx.o(rbx_9))
    int64_t zmm6_7
    int64_t zmm7_13
    zmm6_7, zmm7_13 = sub_142409910(arg3, zmm15, zmm8_1, u"VMem:", rsi_2, &var_198, &data_14399f5e0)
    sub_140acc920(&var_198, &data_14399f63c)
    double zmm0_32[0x2] = zx.o(0)
    int64_t var_108
    zmm0_32[0] = float.d(var_108)
    
    if (var_108 s< 0)
        zmm0_32[0] = zmm0_32[0] + 1.8446744073709552e+19
    
    wchar16 const* const rdx_26
    
    if (not(zmm0_32[0] <= zmm9_1))
        rdx_26 = u"%.2f GB"
        zmm0_32[0] = zmm0_32[0] f* zmm10_1
    else if (not(zmm0_32[0] f<= zmm6_7))
        rdx_26 = u"%.2f MB"
        zmm0_32[0] = zmm0_32[0] f* zmm11_1
    else if (zmm0_32[0] f<= zmm7_13)
        rdx_26 = u"%.2f B"
    else
        rdx_26 = u"%.2f KB"
        zmm0_32[0] = zmm0_32[0] f* zmm12.q
    
    sub_140a2e390(&var_1a8, rdx_26, _mm_cvtps_pd(_mm_cvtpd_ps(zmm0_32)[0]).q)
    int16_t* r9_14 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_14 = var_1a8
    
    int64_t zmm6_8
    int64_t zmm7_14
    zmm6_8, zmm7_14 = sub_142409910(arg3, zmm14, zmm8_1, r9_14, rsi_2, &var_198, &data_14399f5e0)
    int16_t* rcx_98 = var_1a8
    
    if (rcx_98 != 0)
        sub_140a74f90(rcx_98)
    
    sub_140acc920(&var_198, &data_14399f63c)
    double zmm0_33[0x2] = zx.o(0)
    int64_t var_100
    zmm0_33[0] = float.d(var_100)
    
    if (var_100 s< 0)
        zmm0_33[0] = zmm0_33[0] + 1.8446744073709552e+19
    
    if (not(zmm0_33[0] <= zmm9_1))
        zmm0_33[0] = zmm0_33[0] f* zmm10_1
    else if (not(zmm0_33[0] f<= zmm6_8))
        rdi_1 = u"%.2f MB"
        zmm0_33[0] = zmm0_33[0] f* zmm11_1
    else if (zmm0_33[0] f<= zmm7_14)
        rdi_1 = u"%.2f B"
    else
        rdi_1 = u"%.2f KB"
        zmm0_33[0] = zmm0_33[0] f* zmm12.q
    
    sub_140a2e390(&var_1a8, rdi_1, _mm_cvtps_pd(_mm_cvtpd_ps(zmm0_33)[0]).q)
    int16_t* r9_15 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_15 = var_1a8
    
    sub_142409910(arg3, zmm13, zmm8_1, r9_15, rsi_2, &var_198, &data_14399f5e0)
    int16_t* rcx_102 = var_1a8
    
    if (rcx_102 != 0)
        sub_140a74f90(rcx_102)
    
    rbx_8 = rbx_9 + rax_29
    zmm9_1 = 1f

double zmm6_9[0x2]

if (*(arg3 + 0x90) s< 3)
    int32_t rdi_2 = data_143f0f20c
    int32_t* rdx_32
    
    if (r14_4 == 0)
        rdx_32 = &performanceCount
        performanceCount.d = data_14399f630
    else
        arg_28 = 0xff6464ff
        rdx_32 = &arg_28
    
    sub_140acc920(&var_198, rdx_32)
    int128_t zmm6_10 = sub_142409910(arg3, zmm15, _mm_cvtepi32_ps(zx.o(rbx_8)), Draws:", rsi_2, 
        &var_198, &data_14399f5e0)
    sub_140acc920(&var_198, &data_14399f63c)
    sub_140a2e390(&var_1a8, u"%d", zx.q(rdi_2))
    int16_t* const r9_17 = &data_142d40450
    
    if (var_1a0 != 0)
        r9_17 = var_1a8
    
    sub_142409910(arg3, zmm14, zmm6_10, r9_17, rsi_2, &var_198, &data_14399f5e0)
    int16_t* rcx_118 = var_1a8
    
    if (rcx_118 != 0)
        sub_140a74f90(rcx_118)
    
    rbx_8 += rax_29
    int32_t rdi_3 = data_143f0f210
    int32_t* rdx_33
    
    if (r14_4 == 0)
        rdx_33 = &performanceCount
        performanceCount.d = data_14399f630
    else
        arg_28 = 0xff6464ff
        rdx_33 = &arg_28
    
    sub_140acc920(&var_198, rdx_33)
    zmm6_9 = sub_142409910(arg3, zmm15, _mm_cvtepi32_ps(zx.o(rbx_8)), Prims:", rsi_2, &var_198, 
        &data_14399f5e0)
    sub_140acc920(&var_198, &data_14399f63c)
    int64_t* rcx_122 = &var_1a8
    
    if (rdi_3 s>= 0x2710)
        uint128_t zmm0_35
        zmm0_35.d = _mm_cvtepi32_ps(zx.o(rdi_3)).d f* 0.00100000005f
        sub_140a2e390(rcx_122, u"%.1fK", _mm_cvtps_pd(zmm0_35.q)[0])
    else
        sub_140a2e390(rcx_122, u"%d", zx.q(rdi_3))
    
    int128_t* var_1b8_2 = &data_14399f5e0
label_1423dad70:
    
    if (var_1a0 != 0)
        r15_3 = var_1a8
    
    sub_142409910(arg3, zmm14, zmm6_9, r15_3, rsi_2, &var_198, &data_14399f5e0)
    int16_t* rcx_124 = var_1a8
    
    if (rcx_124 != 0)
        sub_140a74f90(rcx_124)
else
    zmm8_1 = var_174
    zmm7_7.d = zmm8_1.d f* 100f
    int32_t* rdx_28
    
    if (r14_4 == 0)
        rdx_28 = &performanceCount
        performanceCount.d = data_14399f630
    else
        arg_28 = 0xffffa064
        rdx_28 = &arg_28
    
    sub_140acc920(&var_198, rdx_28)
    float zmm7_15[0x2]
    zmm6_9, zmm7_15 = sub_142409910(arg3, zmm15, _mm_cvtepi32_ps(zx.o(rbx_8)), DynRes:", rsi_2, 
        &var_198, &data_14399f5e0)
    
    if (var_178 == 3)
        if (not(zmm8_1.d f< 0.699999988f))
            r13_1 = &data_14399f63c
            
            if (_mm_min_ss(zmm8_1.d * 0.970000029f, zmm9_1.d) f> zmm8_1.d)
                r13_1 = &data_14399f644
        
        arg_28 = *r13_1
        sub_140acc920(&var_198, &arg_28)
        double temp0_61[0x2] = _mm_cvtps_pd(zmm7_15)
        temp0_61[0]
        sub_140a2e390(&var_1a8, u"%3.1f%% x %3.1f%%", temp0_61[0])
        int128_t* var_1b8_1 = &data_14399f5e0
        goto label_1423dad70
    
    if (var_178 == 2)
        sub_140acc920(&var_198, &data_14399f64c)
        sub_142409910(arg3, zmm14, zmm6_9, u"Paused", rsi_2, &var_198, &data_14399f5e0)
    else if (var_178 == 1)
        arg_28 = 0xffa0a0a0
        sub_140acc920(&var_198, &arg_28)
        sub_142409910(arg3, zmm14, zmm6_9, &data_142fdd290, rsi_2, &var_198, &data_14399f5e0)
    else if (var_178 == 0)
        arg_28 = 0xffa0a0a0
        sub_140acc920(&var_198, &arg_28)
        sub_142409910(arg3, zmm14, zmm6_9, u"Unsupported", rsi_2, &var_198, &data_14399f5e0)
return zx.q(rax_29 + rbx_8)
