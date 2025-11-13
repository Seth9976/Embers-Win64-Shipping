// 函数: sub_141387a30
// 地址: 0x141387a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_141312a10(*(arg1 + 0x20))
char rax_1 = sub_141319740()
int128_t zmm0 = sub_141319920()
uint64_t r8_1 = zx.q(*(arg1 + 8) + 0x1e)
uint128_t zmm7 = zx.o(*(arg1 + 0xc) + 0x1c)
uint128_t zmm14 = _mm_cvtepi32_ps(zx.o(r8_1.d))
zmm7 = _mm_cvtepi32_ps(zmm7)
int16_t* var_f8
sub_140a2e390(&var_f8, u"HDR Histogram (EV100, max of RGB)", r8_1)
int16_t* const rbx = &data_142d40450
int16_t* rdi = var_f8
int32_t var_f0

if (var_f0 != 0)
    rbx = rdi

zmm7.d = zmm7.d f+ 14f
uint128_t var_e8 = data_142d3f670
sub_142409910(arg2, zmm14, zmm7, rbx, sub_1423de050(), &var_e8, &data_14399f5e0)
int32_t rcx_5 = *(arg1 + 8)
uint64_t rdx = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
int32_t rax_5 = *(arg1 + 0x14) - 0x40
uint128_t zmm11 = _mm_cvtepi32_ps(zx.o(rcx_5 + 0x4a))
int32_t rax_8 = *(arg1 + 0x10) - rcx_5 - 0x94
uint128_t zmm10 = _mm_cvtepi32_ps(zx.o(rax_5))
int32_t i = 0
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rax_8))
zmm10.d = zmm10.d f+ 14f
double zmm7_1[0x2]

do
    int32_t zmm1_1 = float.s(zx.q(i))
    void* rax_10 = *(arg1 + 0x20)
    float zmm6_1[0x2] = *(rax_10 + 0x112c)
    int32_t zmm0_2 = *(rax_10 + 0x1128)
    zmm6_1[0] = zmm6_1[0] f- zmm0_2
    zmm6_1[0] = zmm6_1[0] f* zmm1_1
    zmm6_1[0] = zmm6_1[0] * 0.25f
    zmm6_1[0] = zmm6_1[0] f+ zmm0_2
    
    if (rax_1 == 0)
        if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rdx << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        float zmm0_3 = logf(zmm0.d) f* data_143cda910
        zmm6_1[0] = zmm6_1[0] - zmm0_3
    
    sub_140a2e390(&var_f8, u"%.2g", _mm_cvtps_pd(zmm6_1)[0])
    
    if (rdi != 0)
        sub_140a74f90(rdi)
    
    rdi = var_f8
    uint128_t zmm0_4 = data_142f6e380
    var_f8 = nullptr
    int16_t* rbx_1 = &data_142d40450
    
    if (var_f0 != 0)
        rbx_1 = rdi
    
    var_f0.q = 0
    var_e8 = zmm0_4
    void* rax_14 = sub_1423de050()
    uint128_t zmm1_2
    zmm1_2.d = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1 f* zmm9.d f* 0.25f))).d f+ zmm11.d
    zmm1_2.d = zmm1_2.d f- 5f
    zmm7_1 = sub_142409910(arg2, zmm1_2, zmm10, rbx_1, rax_14, &var_e8, &data_14399f5e0)
    rdx = zx.q(data_14401b1a0)
    i += 1
    ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
while (i u<= 4)

int64_t* rcx_9
wchar16* rdx_1

if (rax == 0)
    rdx_1 = u"Histogram"
    rcx_9 = &var_f8
else if (rax == 1)
    rdx_1 = u"Basic"
    rcx_9 = &var_f8
else
    rcx_9 = &var_f8
    
    if (rax == 2)
        rdx_1 = u"Manual"
    else
        rdx_1 = u"Unknown"

sub_140a2e390(rcx_9, rdx_1, ThreadLocalStoragePointer)

if (rdi != 0)
    sub_140a74f90(rdi)

int16_t* rdi_1 = var_f8
zmm7_1[0].d = zmm7_1[0].d f+ 216f
var_e8 = data_142d3f670
int128_t zmm7_2 = sub_142409910(arg2, zmm14, zmm7_1, Auto Exposure Method:", sub_1423de050(), 
    &var_e8, &data_14399f5e0)
int16_t* r12_2 = &data_142d40450
int16_t* const rbx_2 = &data_142d40450
zmm10.d = zmm14.d f+ 250f

if (var_f0 != 0)
    rbx_2 = rdi_1

var_e8 = data_142d3f670
double zmm7_3[0x2] =
    sub_142409910(arg2, zmm10, zmm7_2, rbx_2, sub_1423de050(), &var_e8, &data_14399f5e0)
void* rax_17 = *(arg1 + 0x20)
double zmm2_3[0x2] = *(rax_17 + 0x1110)
_mm_cvtps_pd(*(rax_17 + 0x1114))
sub_140a2e390(&var_f8, u"%g%% .. %g%%", _mm_cvtps_pd(zmm2_3[0])[0])

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

zmm7_3[0].d = zmm7_3[0].d f+ 14f
var_e8 = data_142d3f670
int128_t zmm7_4 = sub_142409910(arg2, zmm14, zmm7_3, Percent Low/High:", sub_1423de050(), &var_e8, 
    &data_14399f5e0)
int16_t* const rbx_3 = &data_142d40450
int16_t* rdi_2 = var_f8

if (var_f0 != 0)
    rbx_3 = rdi_2

var_e8 = data_142d3f670
double zmm7_5[0x2] =
    sub_142409910(arg2, zmm10, zmm7_4, rbx_3, sub_1423de050(), &var_e8, &data_14399f5e0)
void* rax_20 = *(arg1 + 0x20)
uint128_t zmm8 = *(rax_20 + 0x111c)

if (rax_1 == 0)
    int32_t rbx_4 = data_143cda914
    float zmm6_2 = 1f f/ zmm0.d
    int64_t r15_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    zmm8.d = zmm8.d f* zmm6_2
    
    if (rbx_4 s> *(0x14 + r15_3))
        _Init_thread_header(&data_143cda914)
        rbx_4 = data_143cda914
        
        if (rbx_4 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
            rbx_4 = data_143cda914
    
    zmm8.d = logf(zmm8.d).d f* data_143cda910
    zmm9.d = (*(*(arg1 + 0x20) + 0x1118)).d f* zmm6_2
    
    if (rbx_4 s> *(0x14 + r15_3))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    double zmm2_5[0x2] = zx.o(0)
    zmm2_5[0] = fconvert.d(logf(zmm9.d) f* data_143cda910)
    sub_140a2e390(&var_f8, u"%.1f .. %.1f", zmm2_5[0])
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
else
    double temp0_10[0x2] = _mm_cvtps_pd((*(rax_20 + 0x1118))[0])
    _mm_cvtps_pd(zmm8.q)
    sub_140a2e390(&var_f8, u"%.1f .. %.1f", temp0_10[0])
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)

zmm7_5[0].d = zmm7_5[0].d f+ 14f
int16_t* rdi_3 = var_f8
var_e8 = data_142d3f670
int128_t zmm7_6 =
    sub_142409910(arg2, zmm14, zmm7_5, EV100 Min/Max", sub_1423de050(), &var_e8, &data_14399f5e0)
int16_t* const rbx_5 = &data_142d40450

if (var_f0 != 0)
    rbx_5 = rdi_3

var_e8 = data_142f6e390
double zmm7_7[0x2] =
    sub_142409910(arg2, zmm10, zmm7_6, rbx_5, sub_1423de050(), &var_e8, &data_14399f5e0)
void* rax_25 = *(arg1 + 0x20)
double zmm2_7[0x2] = *(rax_25 + 0x1120)
_mm_cvtps_pd(*(rax_25 + 0x1124))
sub_140a2e390(&var_f8, u"%g / %g", _mm_cvtps_pd(zmm2_7[0])[0])

if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

zmm7_7[0].d = zmm7_7[0].d f+ 14f
var_e8 = data_142d3f670
int128_t zmm7_8 =
    sub_142409910(arg2, zmm14, zmm7_7, Speed Up/Down:", sub_1423de050(), &var_e8, &data_14399f5e0)
int16_t* const rbx_6 = &data_142d40450
int16_t* r15_4 = var_f8

if (var_f0 != 0)
    rbx_6 = r15_4

var_e8 = data_142d3f670
double zmm7_9[0x2] =
    sub_142409910(arg2, zmm10, zmm7_8, rbx_6, sub_1423de050(), &var_e8, &data_14399f5e0)
int64_t* rcx_27 = *(arg1 + 0x20)
zmm11 = *(rcx_27 + 0x10ec)
uint128_t zmm0_16 = sub_14141f620(rcx_27)
zmm9 = zx.o(0)
uint128_t zmm6_3 = zx.o(0)

if (not(zmm0_16.d f<= zmm9.d))
    int32_t rbx_7 = data_143cda914
    zmm8.d = zmm0_16.d f/ zmm0.d
    int64_t rsi_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (rbx_7 s> *(0x14 + rsi_3))
        _Init_thread_header(&data_143cda914)
        rbx_7 = data_143cda914
        
        if (rbx_7 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
            rbx_7 = data_143cda914
    
    zmm8.d = logf(zmm8.d).d f* data_143cda910
    
    if (rbx_7 s> *(0x14 + rsi_3))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    zmm6_3.d = data_143cda910.d f* 1.71479833f
    void* rcx_28 = *(*(arg1 + 0x20) + 0x1100)
    zmm6_3.d = zmm6_3.d f+ zmm8.d
    
    if (rcx_28 != 0)
        uint128_t zmm0_18
        zmm0_18, zmm6_3, zmm7_9 = sub_141f89240(rcx_28, zmm6_3)
        zmm9 = zmm0_18

sub_140a2e390(&var_f8, u"%.3g", _mm_cvtps_pd(zmm6_3.q)[0])

if (r15_4 != 0)
    sub_140a74f90(r15_4)

zmm7_9[0].d = zmm7_9[0].d f+ 14f
var_e8 = data_142d3f670
int128_t zmm7_10 = sub_142409910(arg2, zmm14, zmm7_9, Average Scene EV100:", sub_1423de050(), 
    &var_e8, &data_14399f5e0)
int16_t* const rbx_8 = &data_142d40450
int16_t* rdi_4 = var_f8

if (var_f0 != 0)
    rbx_8 = rdi_4

var_e8 = data_142d3f670
double zmm7_11[0x2] =
    sub_142409910(arg2, zmm10, zmm7_10, rbx_8, sub_1423de050(), &var_e8, &data_14399f5e0)
sub_140a2e390(&var_f8, u"%.3g", _mm_cvtps_pd(zmm11.q)[0])

if (rdi_4 != 0)
    sub_140a74f90(rdi_4)

zmm7_11[0].d = zmm7_11[0].d f+ 14f
var_e8 = data_142d3f670
int128_t zmm7_12 = sub_142409910(arg2, zmm14, zmm7_11, Exposure Compensation (Settings):", 
    sub_1423de050(), &var_e8, &data_14399f5e0)
int16_t* const rbx_9 = &data_142d40450
int16_t* rdi_5 = var_f8

if (var_f0 != 0)
    rbx_9 = rdi_5

var_e8 = data_142d3f670
int128_t zmm7_13 =
    sub_142409910(arg2, zmm10, zmm7_12, rbx_9, sub_1423de050(), &var_e8, &data_14399f5e0)
int128_t zmm2_13
zmm2_13.q = fconvert.d(zmm9.d)
sub_140a2e390(&var_f8, u"%.3g", zmm2_13.q)

if (rdi_5 != 0)
    sub_140a74f90(rdi_5)

zmm7_13.d = zmm7_13.d f+ 14f
var_e8 = data_142d3f670
int128_t zmm7_14 = sub_142409910(arg2, zmm14, zmm7_13, Exposure Compensation (Curve):", 
    sub_1423de050(), &var_e8, &data_14399f5e0)
int16_t* rbx_10 = &data_142d40450
int16_t* rdi_6 = var_f8

if (var_f0 != 0)
    rbx_10 = rdi_6

var_e8 = data_142d3f670
double zmm7_15[0x2] =
    sub_142409910(arg2, zmm10, zmm7_14, rbx_10, sub_1423de050(), &var_e8, &data_14399f5e0)
zmm11.d = zmm11.d f+ zmm9.d
sub_140a2e390(&var_f8, u"%.3g", _mm_cvtps_pd(zmm11.q)[0])

if (rdi_6 != 0)
    sub_140a74f90(rdi_6)

zmm7_15[0].d = zmm7_15[0].d f+ 14f
var_e8 = data_142d3f670
int128_t zmm7_16 = sub_142409910(arg2, zmm14, zmm7_15, Exposure Compensation (All): ", 
    sub_1423de050(), &var_e8, &data_14399f5e0)
int16_t* rbx_11 = &data_142d40450
int16_t* rdi_7 = var_f8

if (var_f0 != 0)
    rbx_11 = rdi_7

var_e8 = data_142f6e380
double zmm7_17[0x2] =
    sub_142409910(arg2, zmm10, zmm7_16, rbx_11, sub_1423de050(), &var_e8, &data_14399f5e0)
void* rax_38 = *(arg1 + 0x20)
zmm8 = *(rax_38 + 0x112c)

if (rax_1 == 0)
    int32_t rbx_12 = data_143cda914
    int64_t r15_5 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (rbx_12 s> *(0x14 + r15_5))
        _Init_thread_header(&data_143cda914)
        rbx_12 = data_143cda914
        
        if (rbx_12 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
            rbx_12 = data_143cda914
    
    float zmm0_29 = logf(zmm0.d)
    zmm9 = *(*(arg1 + 0x20) + 0x1128)
    zmm8.d = zmm8.d f- zmm0_29 f* data_143cda910
    
    if (rbx_12 s> *(0x14 + r15_5))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    float zmm6_4 = zmm0_29 f* data_143cda910
    _mm_cvtps_pd(zmm8.q)
    zmm9.d = zmm9.d f- zmm6_4
    sub_140a2e390(&var_f8, u"%.1f .. %.1f", _mm_cvtps_pd(zmm9.q)[0])
    
    if (rdi_7 != 0)
        sub_140a74f90(rdi_7)
else
    double temp0_17[0x2] = _mm_cvtps_pd((*(rax_38 + 0x1128))[0])
    _mm_cvtps_pd(zmm8.q)
    sub_140a2e390(&var_f8, u"%.1f .. %.1f", temp0_17[0])
    
    if (rdi_7 != 0)
        sub_140a74f90(rdi_7)

zmm7_17[0].d = zmm7_17[0].d f+ 14f
int16_t* rbx_13 = var_f8
var_e8 = data_142d3f670
int128_t zmm7_18 = sub_142409910(arg2, zmm14, zmm7_17, Histogram EV100 Min/Max:", sub_1423de050(), 
    &var_e8, &data_14399f5e0)
var_e8 = data_142f6e390

if (var_f0 != 0)
    r12_2 = rbx_13

uint64_t result =
    sub_142409910(arg2, zmm10, zmm7_18, r12_2, sub_1423de050(), &var_e8, &data_14399f5e0)

if (rbx_13 == 0)
    return result

return sub_140a74f90(rbx_13)
