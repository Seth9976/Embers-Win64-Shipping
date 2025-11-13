// 函数: sub_142266ca0
// 地址: 0x142266ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_738
int64_t rax_1 = __security_cookie ^ &var_738
int32_t var_638
(*(*arg1 + 0x660))(arg1, &var_638)
int128_t var_6b8 = data_142d3f670
(*(*(arg2 + 0x98) + 0x20))(arg2 + 0x98, &var_6b8)
void* rax_4 = arg1[0x1ca]
int32_t var_6d8 = 0
int64_t var_6d0 = *(rax_4 + 0x18)
int16_t* var_6c8
sub_140b63b70(&var_6d0, &var_6c8)
int16_t* const rsi = &data_142d40450
int64_t* rax_5 = sub_140b63b70(&arg1[0x46], &var_6b8)
int16_t* const r8

if (rax_5[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_5

int64_t var_698
sub_140a2e390(&var_698, u"   Camera Style:%s main ViewTarget:%s", r8)
int64_t r8_2 = sub_142409af0(arg2 + 0x98, &var_698, &var_6d8)
int64_t rcx_6 = var_698

if (rcx_6 != 0)
    r8_2 = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_6b8.q

if (rcx_7 != 0)
    r8_2 = sub_140a74f90(rcx_7)

int16_t* rcx_8 = var_6c8

if (rcx_8 != 0)
    r8_2 = sub_140a74f90(rcx_8)

float zmm8[0x4] = data_143f526b0
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm8, data_143f525c0)
int32_t var_628
float temp0_1[0x4] = _mm_unpacklo_ps(var_628, zx.o(0)[0].q)
int32_t var_62c
int32_t var_624
float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_62c, var_624[0].q), temp0_1[0].q)
float zmm2[0x4] = data_143f526c0
float temp0_4[0x4] = _mm_div_ps(temp0_3, zmm8)
var_6d8 = 0x38d1b717
var_6d0.d = 0
float temp0_6[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_4))
zmm2 = _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_4, data_143f525c0), 2), 
    temp0_6 ^ temp0_4)
float temp0_14[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0), 
    _mm_min_ps(_mm_sub_ps(temp0_3, _mm_mul_ps(zmm2 ^ temp0_6, zmm8)), temp0))
float temp0_15[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_14, 2)
float temp0_16[0x4] = _mm_add_ps(temp0_14, zmm8)
zmm2 = _mm_and_ps(temp0_16 ^ temp0_14, temp0_15) ^ temp0_16
float temp0_18[0x4] = _mm_cmpeq_ps(data_143f526a0, zmm2, 1)
float zmm1[0x4] = _mm_and_ps(_mm_sub_ps(zmm2, zmm8) ^ zmm2, temp0_18)
float zmm0_1[0x4] = var_6d8
int16_t* var_708
int64_t r8_3

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0), 
        __andps_xmmxud_memxud(zmm1 ^ zmm2, data_143f525c0), 1)) != 0)
    int16_t* var_6e8 = nullptr
    int64_t var_6e0_1 = 0
    sub_1405947f0(&var_6e8, 3)
    int32_t rax_7 = var_6e0_1.d + 3
    var_6e0_1.d = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_6e8)
    
    UnDecorator::getReferenceType(var_6e8, &data_14323b344, 6)
    zmm1 = var_62c
    char rax_8 = 1
    
    if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] <= 9.99999994e-09f))
        int64_t var_688
        sub_140a2e390(&var_688, u"P=%.2f", _mm_cvtps_pd(zmm1[0].q)[0].q)
        int32_t var_680
        int32_t r8_6
        
        if (var_680 == 0)
            r8_6 = 0
        else
            r8_6 = var_680 - 1
        
        sub_140a20ba0(&var_6e8, var_688, r8_6)
        int64_t rcx_16 = var_688
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        rax_8 = 0
    
    if (not(_mm_and_ps(var_628, 0x7fffffff)[0] <= 9.99999994e-09f))
        if (rax_8 == 0)
            var_708 = nullptr
            int32_t var_700_1 = 0
            sub_1405947f0(&var_708, 3)
            int32_t rbx_1 = var_700_1 + 3
            
            if (rbx_1 s> 0)
                sub_140594770(&var_708)
            
            int16_t* rdi_1 = var_708
            UnDecorator::getReferenceType(rdi_1, &data_142d8adc4, 6)
            int32_t r8_7 = rbx_1 - 1
            
            if (rbx_1 == 0)
                r8_7 = 0
            
            sub_140a20ba0(&var_6e8, rdi_1, r8_7)
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
        
        int64_t var_678
        sub_140a2e390(&var_678, u"Y=%.2f", _mm_cvtps_pd(var_628[0].q)[0].q)
        int32_t var_670
        int32_t r8_10
        
        if (var_670 == 0)
            r8_10 = 0
        else
            r8_10 = var_670 - 1
        
        sub_140a20ba0(&var_6e8, var_678, r8_10)
        int64_t rcx_24 = var_678
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        rax_8 = 0
    
    if (not(_mm_and_ps(var_624, 0x7fffffff)[0] <= 9.99999994e-09f))
        if (rax_8 == 0)
            var_708 = nullptr
            int32_t var_700_2 = 0
            sub_1405947f0(&var_708, 3)
            int32_t rbx_2 = var_700_2 + 3
            
            if (rbx_2 s> 0)
                sub_140594770(&var_708)
            
            int16_t* rdi_2 = var_708
            UnDecorator::getReferenceType(rdi_2, &data_142d8adc4, 6)
            int32_t r8_11 = rbx_2 - 1
            
            if (rbx_2 == 0)
                r8_11 = 0
            
            sub_140a20ba0(&var_6e8, rdi_2, r8_11)
            
            if (rdi_2 != 0)
                sub_140a74f90(rdi_2)
        
        int64_t var_668
        sub_140a2e390(&var_668, u"R=%.2f", _mm_cvtps_pd(var_624[0].q)[0].q)
        int32_t var_660
        int32_t r8_14
        
        if (var_660 == 0)
            r8_14 = 0
        else
            r8_14 = var_660 - 1
        
        sub_140a20ba0(&var_6e8, var_668, r8_14)
        int64_t rcx_32 = var_668
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
    
    var_708 = nullptr
    int32_t var_700_3 = 0
    sub_1405947f0(&var_708, 2)
    int32_t rbx_3 = var_700_3 + 2
    
    if (rbx_3 s> 0)
        sub_140594770(&var_708)
    
    int16_t* rdi_3 = var_708
    UnDecorator::getReferenceType(rdi_3, &data_142da76f4, 4)
    int32_t r8_15 = rbx_3 - 1
    
    if (rbx_3 == 0)
        r8_15 = 0
    
    r8_3 = sub_140a20ba0(&var_6e8, rdi_3, r8_15)
    
    if (rdi_3 != 0)
        r8_3 = sub_140a74f90(rdi_3)
    
    var_6c8 = var_6e8
    var_6e8 = nullptr
    int32_t var_6c0_1 = var_6e0_1.d
    int32_t var_6bc_1 = var_6e0_1:4.d
    int64_t var_6e0_2 = 0
else
    r8_3 = sub_140a2e390(&var_6c8, u"R(0)", r8_2)

int16_t* var_6a8
int32_t rcx_39
int16_t* rdx_16
int32_t var_634
int32_t var_630

if (_mm_and_ps(var_638, 0x7fffffff)[0] f> 9.99999975e-05f)
label_142267207:
    var_708 = nullptr
    int64_t var_700_4 = 0
    sub_1405947f0(&var_708, 3)
    int32_t rax_10 = var_700_4.d + 3
    var_700_4.d = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_708)
    
    UnDecorator::getReferenceType(var_708, &data_142fdd3f4, 6)
    zmm1 = var_638
    char rax_11 = 1
    
    if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] <= 9.99999994e-09f))
        int64_t var_658
        sub_140a2e390(&var_658, u"X=%.2f", _mm_cvtps_pd(zmm1[0].q)[0].q)
        int32_t var_650
        int32_t r8_18
        
        if (var_650 == 0)
            r8_18 = 0
        else
            r8_18 = var_650 - 1
        
        sub_140a20ba0(&var_708, var_658, r8_18)
        int64_t rcx_45 = var_658
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
        
        rax_11 = 0
    
    int64_t var_6f8
    
    if (not(_mm_and_ps(var_634, 0x7fffffff)[0] <= 9.99999994e-09f))
        if (rax_11 == 0)
            var_6f8 = 0
            int32_t var_6f0_1 = 0
            sub_1405947f0(&var_6f8, 3)
            int32_t rbx_4 = var_6f0_1 + 3
            
            if (rbx_4 s> 0)
                sub_140594770(&var_6f8)
            
            int64_t rdi_4 = var_6f8
            UnDecorator::getReferenceType(rdi_4, &data_142d8adc4, 6)
            int32_t r8_19 = rbx_4 - 1
            
            if (rbx_4 == 0)
                r8_19 = 0
            
            sub_140a20ba0(&var_708, rdi_4, r8_19)
            
            if (rdi_4 != 0)
                sub_140a74f90(rdi_4)
        
        int64_t var_648
        sub_140a2e390(&var_648, u"Y=%.2f", _mm_cvtps_pd(var_634[0].q)[0].q)
        int32_t var_640
        int32_t r8_22
        
        if (var_640 == 0)
            r8_22 = 0
        else
            r8_22 = var_640 - 1
        
        sub_140a20ba0(&var_708, var_648, r8_22)
        int64_t rcx_53 = var_648
        
        if (rcx_53 != 0)
            sub_140a74f90(rcx_53)
        
        rax_11 = 0
    
    if (not(_mm_and_ps(var_630, 0x7fffffff)[0] <= 9.99999994e-09f))
        if (rax_11 == 0)
            var_6f8 = 0
            int32_t var_6f0_2 = 0
            sub_1405947f0(&var_6f8, 3)
            int32_t rbx_5 = var_6f0_2 + 3
            
            if (rbx_5 s> 0)
                sub_140594770(&var_6f8)
            
            int64_t rdi_5 = var_6f8
            UnDecorator::getReferenceType(rdi_5, &data_142d8adc4, 6)
            int32_t r8_23 = rbx_5 - 1
            
            if (rbx_5 == 0)
                r8_23 = 0
            
            sub_140a20ba0(&var_708, rdi_5, r8_23)
            
            if (rdi_5 != 0)
                sub_140a74f90(rdi_5)
        
        sub_140a2e390(&var_698, u"Z=%.2f", _mm_cvtps_pd(var_630[0].q)[0].q)
        int32_t var_690
        int32_t r8_26
        
        if (var_690 == 0)
            r8_26 = 0
        else
            r8_26 = var_690 - 1
        
        sub_140a20ba0(&var_708, var_698, r8_26)
        int64_t rcx_61 = var_698
        
        if (rcx_61 != 0)
            sub_140a74f90(rcx_61)
    
    var_6f8 = 0
    int32_t var_6f0_3 = 0
    sub_1405947f0(&var_6f8, 2)
    int32_t rbx_6 = var_6f0_3 + 2
    
    if (rbx_6 s> 0)
        sub_140594770(&var_6f8)
    
    int64_t rdi_6 = var_6f8
    UnDecorator::getReferenceType(rdi_6, &data_142da76f4, 4)
    int32_t r8_27 = rbx_6 - 1
    
    if (rbx_6 == 0)
        r8_27 = 0
    
    sub_140a20ba0(&var_708, rdi_6, r8_27)
    
    if (rdi_6 != 0)
        sub_140a74f90(rdi_6)
    
    rdx_16 = var_708
    rcx_39 = var_700_4.d
    var_6a8 = rdx_16
    var_708 = nullptr
    int32_t var_6a0_1 = rcx_39
    int32_t var_69c_1 = var_700_4:4.d
    int64_t var_700_5 = 0
else
    if (_mm_and_ps(var_634, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_142267207
    
    if (_mm_and_ps(var_630, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_142267207
    
    sub_140a2e390(&var_6a8, u"V(0)", r8_3)
    int32_t var_6a0
    rcx_39 = var_6a0
    rdx_16 = var_6a8
int32_t var_620
float temp0_40[0x2] = _mm_cvtps_pd(var_620)

if (rcx_39 != 0)
    rsi = rdx_16

float var_718[0x2] = temp0_40
sub_140a2e390(&var_6b8, u"   CamLoc:%s CamRot:%s FOV:%f", rsi)
sub_142409af0(arg2 + 0x98, &var_6b8, &var_6d0)
int64_t rcx_69 = var_6b8.q

if (rcx_69 != 0)
    sub_140a74f90(rcx_69)

int16_t* rcx_70 = var_6a8

if (rcx_70 != 0)
    sub_140a74f90(rcx_70)

int16_t* rcx_71 = var_6c8

if (rcx_71 != 0)
    sub_140a74f90(rcx_71)

int32_t var_60c
float temp0_41[0x2] = _mm_cvtps_pd(var_60c)
var_6d0.d = 0
sub_140a2e390(&var_6b8, u"   AspectRatio: %1.3f", temp0_41)
uint64_t result = sub_142409af0(arg2 + 0x98, &var_6b8, &var_6d0)
int64_t rcx_74 = var_6b8.q

if (rcx_74 != 0)
    result = sub_140a74f90(rcx_74)

char var_78 = 0
int64_t var_c8

if (var_c8 != 0)
    result = sub_140a74f90(var_c8)

__security_check_cookie(rax_1 ^ &var_738)
return result
