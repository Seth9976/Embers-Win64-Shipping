// 函数: sub_141dbfad0
// 地址: 0x141dbfad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm7[0x4]
uint32_t var_68[0x4] = zmm7
int128_t zmm8
int128_t var_78 = zmm8
uint32_t zmm9[0x4]
uint32_t var_88[0x4] = zmm9
void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int128_t zmm0 = data_142d8c9b0
int64_t* r12 = arg2 + 0x98
int64_t rax_2 = *r12
int64_t* r13 = arg1
int64_t* var_1e8 = arg1
int64_t* r15 = arg3
int128_t var_238 = zmm0
(*(rax_2 + 0x20))(r12, &var_238)
int16_t* var_268
(*(*r13 + 0x5c8))(r13, &var_268)
int32_t rax_4 = *(r13 + 0xc)
void* const rax_10

if (rax_4 s>= data_143e1d9b4)
    rax_10 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_4)
    uint32_t rdx_3 = zx.d(temp0_1)
    int32_t rax_6 = temp1_1 + rdx_3
    rax_10 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18

uint64_t var_250
int32_t var_248
int32_t var_244
uint64_t rdx_5
int32_t r8_2
int32_t var_260

if (((*(rax_10 + 8) u>> 0x1d).b & 1) == 0)
    r8_2 = var_260
    rdx_5 = var_268
else
    int16_t* const r8_1 = &data_142d40450
    
    if (var_260 != 0)
        r8_1 = var_268
    
    sub_140a2e390(&var_250, u"%s DELETED (IsPendingKill() == true)", r8_1)
    int16_t* rcx_8 = var_268
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    rdx_5 = var_250
    r8_2 = var_248
    var_268 = rdx_5
    int32_t var_260_1 = r8_2
    int32_t var_25c_1 = var_244
uint64_t rcx_9 = &data_142d40450

if (r8_2 != 0)
    rcx_9 = rdx_5

int32_t var_258

if (sub_140a54570(rcx_9, &data_1437020ab) != 0)
    var_258 = 0
    sub_142409af0(r12, &var_268, &var_258)

int64_t rax_15 = *r12
var_238 = data_142d3f670
(*(rax_15 + 0x20))(r12, &var_238)
uint64_t var_298
int64_t* rax_16 = sub_140b58260(&var_298, &data_14323c1f0, 1)
int64_t* i = *r15
int32_t var_2b8
uint64_t var_2a8
int64_t var_2a0
void* r8_4

for (r8_4 = &i[sx.q(r15[1].d)]; i != r8_4; i = &i[1])
    if (*i == *rax_16)
        int32_t rax_18
        rax_18, r8_4 = sub_141dcdc50(r13)
        
        if (rax_18 != 0)
            int32_t rax_19 = sub_141dcdc50(r13)
            *(r13 + 0x5f)
            var_2b8 = rax_19
            sub_140a2e390(&var_250, u"ROLE: %i RemoteRole: %i NetNode: %i", zx.q(r13[0x1e].b))
            int16_t* rcx_17 = var_268
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            bool cond:3_1 = (r13[0xb].b & 0x40) == 0
            var_268 = var_250
            int32_t var_25c_2 = var_244
            
            if (not(cond:3_1))
                var_2a8 = 0
                var_2a0 = 0
                sub_1405947f0(&var_2a8, 0xa)
                int32_t r15_1 = var_2a0:4.d
                int32_t rdi_1 = var_2a0.d + 0xa
                var_2a0.d = rdi_1
                
                if (rdi_1 s> r15_1)
                    sub_140594770(&var_2a8)
                    r15_1 = var_2a0:4.d
                    rdi_1 = var_2a0.d
                
                uint64_t r14_1 = var_2a8
                UnDecorator::getReferenceType(r14_1, u" Tear Off", 0x14)
                uint64_t rsi_2
                
                if (var_248 s> 1)
                    int32_t rdi_2
                    
                    if (rdi_1 == 0)
                        rdi_2 = 0
                    else
                        rdi_2 = rdi_1 - 1
                    
                    int32_t rax_23
                    
                    if (var_248 == 0)
                        rax_23 = var_248 + 1
                    
                    if (var_248 != 0 || rdi_2 == 0)
                        rax_23 = 0
                    
                    int16_t* r15_2 = var_268
                    int32_t rcx_21 = rax_23 + rdi_2
                    var_2a8 = 0
                    var_2a0.d = var_248
                    
                    if (var_248 != 0 || rcx_21 != 0)
                        sub_1405a4c70(&var_2a8, var_248 + rcx_21, 0)
                        memcpy(var_2a8, r15_2, var_248 * 2)
                    else
                        var_2a0:4.d = 0
                    
                    sub_140a20ba0(&var_2a8, r14_1, rdi_2)
                    rsi_2 = var_2a8
                    rdi_1 = var_2a0.d
                    r15_1 = var_2a0:4.d
                    var_2a8 = 0
                    var_2a0 = 0
                else
                    rsi_2 = r14_1
                    r14_1 = 0
                
                int16_t* rcx_25 = var_268
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                var_268 = rsi_2
                int32_t var_260_3 = rdi_1
                int32_t var_25c_3 = r15_1
                
                if (r14_1 != 0)
                    sub_140a74f90(r14_1)
                
                r15 = arg3
            
            var_258 = 0
            r8_4 = sub_142409af0(r12, &var_268, &var_258)
        
        break

void* rdi_3 = r13[0x26]
int32_t var_240 = 0
uint128_t var_228
uint64_t var_208
int32_t rax_27
uint128_t zmm0_1
uint128_t zmm1_1

if (rdi_3 == 0)
    zmm0_1 = zx.o(data_143dbb208)
    rax_27 = data_143dbb210
else
    zmm1_1 = *(rdi_3 + 0x1c0)
    var_228 = zmm1_1
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm1_1, *(rdi_3 + 0x180), 4)) != 0)
        *(rdi_3 + 0x180) = zmm1_1
        int32_t* rax_25
        rax_25, r8_4 = sub_140adf5d0(&var_228, &var_208)
        *(rdi_3 + 0x190) = *rax_25
        *(rdi_3 + 0x198) = rax_25[2]
    
    zmm0_1 = zx.o(*(rdi_3 + 0x190))
    rax_27 = *(rdi_3 + 0x198)

float zmm6[0x4] = data_143f38d20
zmm7 = data_143f38d00
var_298 = zmm0_1.q
zmm0_1 = zx.o(var_298)
var_298 = zmm0_1.q
zmm9 = var_298.d
uint32_t zmm11[0x4] = rax_27
float zmm5[0x4] = _mm_unpacklo_ps(zmm9, zmm11[0].q)
uint128_t zmm10 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
var_258 = 0x38d1b717
zmm0_1 = _mm_unpacklo_ps(zmm10, zx.o(0)[0].q)
uint32_t zmm2[0x4] = data_143f38d30
zmm5 = _mm_unpacklo_ps(zmm5, zmm0_1.q)
float zmm4[0x4] = _mm_div_ps(zmm5, zmm6)
zmm2 = _mm_cmpeq_ps(zmm2, _mm_and_ps(zmm4, zmm7), 2)
zmm1_1 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm4))
zmm0_1 = _mm_and_ps(zmm6, zmm7)
float zmm3[0x4] = _mm_and_ps(zmm1_1 ^ zmm4, zmm2) ^ zmm1_1
zmm1_1 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm0_1), 
    _mm_min_ps(_mm_sub_ps(zmm5, _mm_mul_ps(zmm3, zmm6)), zmm0_1))
zmm0_1 = _mm_add_ps(zmm6, zmm1_1)
zmm3 = _mm_and_ps(zmm0_1 ^ zmm1_1, _mm_cmpeq_ps(zx.o(0), zmm1_1, 2)) ^ zmm0_1
zmm0_1 = _mm_cmpeq_ps(data_143f38d10, zmm3, 1)
zmm1_1 = _mm_and_ps(_mm_sub_ps(zmm3, zmm6) ^ zmm3, zmm0_1)
zmm0_1 = var_258
int16_t* var_288
int32_t var_280
int32_t var_27c
uint64_t var_278
int64_t var_270
int64_t r8_10

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0), 
        _mm_and_ps(zmm7, zmm1_1 ^ zmm3), 1)) != 0)
    var_278 = 0
    int64_t var_270_1 = 0
    sub_1405947f0(&var_278, 3)
    int32_t rax_30 = var_270_1.d + 3
    var_270_1.d = rax_30
    
    if (rax_30 s> 0)
        sub_140594770(&var_278)
    
    UnDecorator::getReferenceType(var_278, &data_14323b344, 6)
    char rax_31 = 1
    
    if (not(_mm_and_ps(zmm9, 0x7fffffff)[0] f<= 9.99999994e-09f))
        int64_t var_178
        sub_140a2e390(&var_178, u"P=%.2f", _mm_cvtps_pd(zmm9[0].q)[0].q)
        int32_t var_170
        int32_t r8_13
        
        if (var_170 == 0)
            r8_13 = 0
        else
            r8_13 = var_170 - 1
        
        sub_140a20ba0(&var_278, var_178, r8_13)
        int64_t rcx_36 = var_178
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        rax_31 = 0
    
    if (not(_mm_and_ps(zmm10, 0x7fffffff)[0] f<= 9.99999994e-09f))
        if (rax_31 == 0)
            var_2a8 = 0
            int32_t var_2a0_1 = 0
            sub_1405947f0(&var_2a8, 3)
            int32_t rdi_4 = var_2a0_1 + 3
            
            if (rdi_4 s> 0)
                sub_140594770(&var_2a8)
            
            uint64_t rsi_3 = var_2a8
            UnDecorator::getReferenceType(rsi_3, &data_142d8adc4, 6)
            int32_t r8_14 = rdi_4 - 1
            
            if (rdi_4 == 0)
                r8_14 = 0
            
            sub_140a20ba0(&var_278, rsi_3, r8_14)
            
            if (rsi_3 != 0)
                sub_140a74f90(rsi_3)
        
        zmm2 = zx.o(0)
        zmm2[0].q = fconvert.d(zmm10.d)
        int64_t var_168
        sub_140a2e390(&var_168, u"Y=%.2f", zmm2[0].q)
        int32_t var_160
        int32_t r8_17
        
        if (var_160 == 0)
            r8_17 = 0
        else
            r8_17 = var_160 - 1
        
        sub_140a20ba0(&var_278, var_168, r8_17)
        int64_t rcx_44 = var_168
        
        if (rcx_44 != 0)
            sub_140a74f90(rcx_44)
        
        rax_31 = 0
    
    if (not(_mm_and_ps(zmm11, 0x7fffffff)[0] f<= 9.99999994e-09f))
        if (rax_31 == 0)
            var_2a8 = 0
            int32_t var_2a0_2 = 0
            sub_1405947f0(&var_2a8, 3)
            int32_t rdi_5 = var_2a0_2 + 3
            
            if (rdi_5 s> 0)
                sub_140594770(&var_2a8)
            
            uint64_t rsi_4 = var_2a8
            UnDecorator::getReferenceType(rsi_4, &data_142d8adc4, 6)
            int32_t r8_18 = rdi_5 - 1
            
            if (rdi_5 == 0)
                r8_18 = 0
            
            sub_140a20ba0(&var_278, rsi_4, r8_18)
            
            if (rsi_4 != 0)
                sub_140a74f90(rsi_4)
        
        int64_t var_158
        sub_140a2e390(&var_158, u"R=%.2f", _mm_cvtps_pd(zmm11[0].q)[0].q)
        int32_t var_150
        int32_t r8_21
        
        if (var_150 == 0)
            r8_21 = 0
        else
            r8_21 = var_150 - 1
        
        sub_140a20ba0(&var_278, var_158, r8_21)
        int64_t rcx_52 = var_158
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
    
    var_2a8 = 0
    var_2a0 = 0
    sub_1405947f0(&var_2a8, 2)
    int32_t rdi_6 = var_2a0.d + 2
    var_2a0.d = rdi_6
    
    if (rdi_6 s> 0)
        sub_140594770(&var_2a8)
        rdi_6 = var_2a0.d
    
    uint64_t rsi_5 = var_2a8
    UnDecorator::getReferenceType(rsi_5, &data_142da76f4, 4)
    int32_t r8_22 = rdi_6 - 1
    
    if (rdi_6 == 0)
        r8_22 = 0
    
    r8_10 = sub_140a20ba0(&var_278, rsi_5, r8_22)
    
    if (rsi_5 != 0)
        r8_10 = sub_140a74f90(rsi_5)
    
    var_288 = var_278
    var_278 = 0
    var_280 = var_270_1.d
    var_27c = var_270_1:4.d
    var_270 = 0
else
    r8_10 = sub_140a2e390(&var_288, u"R(0)", r8_4)

void* rax_33 = r13[0x26]
int16_t* const rsi_6 = &data_142d40450
int32_t var_290_2

if (rax_33 == 0)
    int32_t rax_34 = data_143dbb200
    var_298 = data_143dbb1f8.q
    var_290_2 = rax_34
else
    zmm1_1 = *(rax_33 + 0x1d0)
    var_298.d = zmm1_1.d
    uint32_t zmm0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    var_290_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
    var_298:4.d = zmm0_2[0]

zmm9 = zx.o(var_298)
zmm7 = _mm_and_ps(zmm9, 0x7fffffff)
bool cond:4 = zmm7[0] f> 9.99999975e-05f
zmm11 = var_290_2
var_298 = zmm9.q
zmm10 = var_298:4.d
int64_t var_1e0
int32_t var_1d8
int64_t var_1d0
int32_t var_1c8
int64_t var_1c0
int32_t var_1b8
int32_t rcx_59
uint64_t rdx_25

if (cond:4)
label_141dc0394:
    var_298 = 0
    int32_t var_290_3
    var_290_3.q = 0
    sub_1405947f0(&var_298, 3)
    int32_t var_28c
    
    if (var_290_3 + 3 s> var_28c)
        sub_140594770(&var_298)
    
    UnDecorator::getReferenceType(var_298, &data_142fdd3f4, 6)
    char rax_37 = 1
    
    if (not(zmm7[0] f<= 9.99999994e-09f))
        zmm2 = zx.o(0)
        zmm2[0].q = fconvert.d(zmm9[0])
        sub_140a2e390(&var_1e0, u"X=%.2f", zmm2[0].q)
        int32_t r8_25
        
        if (var_1d8 == 0)
            r8_25 = 0
        else
            r8_25 = var_1d8 - 1
        
        sub_140a20ba0(&var_298, var_1e0, r8_25)
        int64_t rcx_65 = var_1e0
        
        if (rcx_65 != 0)
            sub_140a74f90(rcx_65)
        
        rax_37 = 0
    
    if (not(_mm_and_ps(zmm10, 0x7fffffff).d f<= 9.99999994e-09f))
        if (rax_37 == 0)
            var_2a8 = 0
            int32_t var_2a0_3 = 0
            sub_1405947f0(&var_2a8, 3)
            int32_t rdi_7 = var_2a0_3 + 3
            
            if (rdi_7 s> 0)
                sub_140594770(&var_2a8)
            
            uint64_t rsi_7 = var_2a8
            UnDecorator::getReferenceType(rsi_7, &data_142d8adc4, 6)
            int32_t r8_26 = rdi_7 - 1
            
            if (rdi_7 == 0)
                r8_26 = 0
            
            sub_140a20ba0(&var_298, rsi_7, r8_26)
            
            if (rsi_7 != 0)
                sub_140a74f90(rsi_7)
        
        sub_140a2e390(&var_1d0, u"Y=%.2f", _mm_cvtps_pd(zmm10.q)[0].q)
        int32_t r8_29
        
        if (var_1c8 == 0)
            r8_29 = 0
        else
            r8_29 = var_1c8 - 1
        
        sub_140a20ba0(&var_298, var_1d0, r8_29)
        int64_t rcx_73 = var_1d0
        
        if (rcx_73 != 0)
            sub_140a74f90(rcx_73)
        
        rax_37 = 0
    
    if (not(_mm_and_ps(zmm11, 0x7fffffff).d f<= 9.99999994e-09f))
        if (rax_37 == 0)
            var_2a8 = 0
            int32_t var_2a0_4 = 0
            sub_1405947f0(&var_2a8, 3)
            int32_t rdi_8 = var_2a0_4 + 3
            
            if (rdi_8 s> 0)
                sub_140594770(&var_2a8)
            
            uint64_t rsi_8 = var_2a8
            UnDecorator::getReferenceType(rsi_8, &data_142d8adc4, 6)
            int32_t r8_30 = rdi_8 - 1
            
            if (rdi_8 == 0)
                r8_30 = 0
            
            sub_140a20ba0(&var_298, rsi_8, r8_30)
            
            if (rsi_8 != 0)
                sub_140a74f90(rsi_8)
        
        sub_140a2e390(&var_1c0, u"Z=%.2f", _mm_cvtps_pd(zmm11[0].q)[0].q)
        int32_t r8_33
        
        if (var_1b8 == 0)
            r8_33 = 0
        else
            r8_33 = var_1b8 - 1
        
        sub_140a20ba0(&var_298, var_1c0, r8_33)
        int64_t rcx_81 = var_1c0
        
        if (rcx_81 != 0)
            sub_140a74f90(rcx_81)
    
    var_2a8 = 0
    var_2a0 = 0
    sub_1405947f0(&var_2a8, 2)
    int32_t rdi_9 = var_2a0.d + 2
    var_2a0.d = rdi_9
    
    if (rdi_9 s> 0)
        sub_140594770(&var_2a8)
        rdi_9 = var_2a0.d
    
    uint64_t rsi_9 = var_2a8
    UnDecorator::getReferenceType(rsi_9, &data_142da76f4, 4)
    int32_t r8_34 = rdi_9 - 1
    
    if (rdi_9 == 0)
        r8_34 = 0
    
    sub_140a20ba0(&var_298, rsi_9, r8_34)
    
    if (rsi_9 != 0)
        sub_140a74f90(rsi_9)
    
    rdx_25 = var_298
    rsi_6 = &data_142d40450
    rcx_59 = var_290_3 + 3
    var_250 = rdx_25
    var_298 = 0
    var_248 = rcx_59
    int32_t var_244_1 = var_28c
    int32_t var_290_4
    var_290_4.q = 0
else
    if (_mm_and_ps(zmm10, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141dc0394
    
    if (_mm_and_ps(zmm11, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141dc0394
    
    sub_140a2e390(&var_250, u"V(0)", r8_10)
    rcx_59 = var_248
    rdx_25 = var_250

uint64_t r8_35 = &data_142d40450

if (rcx_59 != 0)
    r8_35 = rdx_25

sub_140a2e390(&var_238, u"Location: %s Rotation: %s", r8_35)
sub_142409af0(r12, &var_238, &var_240)
int64_t rcx_89 = var_238.q

if (rcx_89 != 0)
    sub_140a74f90(rcx_89)

uint64_t rcx_90 = var_250

if (rcx_90 != 0)
    sub_140a74f90(rcx_90)

int16_t* rcx_91 = var_288

if (rcx_91 != 0)
    sub_140a74f90(rcx_91)

int64_t* rax_39
uint32_t zmm6_1[0x4]
rax_39, zmm6_1 = sub_140b58260(&var_298, u"physics", 1)
int64_t* i_1 = *r15

for (void* r8_37 = &i_1[sx.q(r15[1].d)]; i_1 != r8_37; i_1 = &i_1[1])
    if (*i_1 == *rax_39)
        int64_t rax_41 = *r13
        var_240 = 0
        int128_t* rax_42 = (*(rax_41 + 0x2f0))(r13, &var_208, r8_37)
        uint32_t zmm0_5[0x4] = *(rax_42 + 4)
        uint32_t zmm1_2[0x4] = *rax_42
        int64_t rax_43 = *r13
        zmm1_2[0] = zmm1_2[0] f* zmm1_2[0]
        zmm0_5[0] = zmm0_5[0] f* zmm0_5[0]
        zmm1_2[0] = zmm1_2[0] f+ zmm0_5[0]
        zmm7 = _mm_sqrt_ss(0, zmm1_2[0])
        int64_t* rax_44 = (*(rax_43 + 0x2f0))(r13, &var_298)
        zmm0_5 = *(rax_44 + 4)
        float zmm2_1[0x2] = *rax_44
        zmm1_2 = rax_44[1].d
        int64_t rax_45 = *r13
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        zmm0_5[0] = zmm0_5[0] f* zmm0_5[0]
        zmm1_2[0] = zmm1_2[0] f* zmm1_2[0]
        zmm2_1[0] = zmm2_1[0] f+ zmm0_5[0]
        zmm2_1[0] = zmm2_1[0] f+ zmm1_2[0]
        zmm9 = _mm_sqrt_ss(0, zmm2_1[0])
        int128_t* rax_46
        int64_t r8_38
        rax_46, r8_38 = (*(rax_45 + 0x2f0))(r13, &var_278)
        int32_t rcx_98
        uint64_t rdx_40
        
        if (_mm_and_ps(*rax_46, zmm6_1)[0] f> 9.99999975e-05f)
        label_141dc07d7:
            var_2a8 = 0
            int64_t var_2a0_5 = 0
            sub_1405947f0(&var_2a8, 3)
            int32_t rax_47 = var_2a0_5.d + 3
            var_2a0_5.d = rax_47
            
            if (rax_47 s> 0)
                sub_140594770(&var_2a8)
            
            UnDecorator::getReferenceType(var_2a8, &data_142fdd3f4, 6)
            zmm1_2 = *rax_46
            char rax_48 = 1
            
            if (not(_mm_and_ps(zmm1_2, zmm6_1)[0] f<= 9.99999994e-09f))
                sub_140a2e390(&var_1c0, u"X=%.2f", _mm_cvtps_pd(zmm1_2[0].q).q)
                int32_t r8_41
                
                if (var_1b8 == 0)
                    r8_41 = 0
                else
                    r8_41 = var_1b8 - 1
                
                sub_140a20ba0(&var_2a8, var_1c0, r8_41)
                int64_t rcx_104 = var_1c0
                
                if (rcx_104 != 0)
                    sub_140a74f90(rcx_104)
                
                rax_48 = 0
            
            if (not(_mm_and_ps(*(rax_46 + 4), zmm6_1)[0] f<= 9.99999994e-09f))
                if (rax_48 == 0)
                    var_288 = nullptr
                    var_280.q = 0
                    sub_1405947f0(&var_288, 3)
                    int32_t rsi_10 = var_280 + 3
                    
                    if (rsi_10 s> var_27c)
                        sub_140594770(&var_288)
                    
                    int16_t* r14_3 = var_288
                    UnDecorator::getReferenceType(r14_3, &data_142d8adc4, 6)
                    int32_t r8_42 = rsi_10 - 1
                    
                    if (rsi_10 == 0)
                        r8_42 = 0
                    
                    sub_140a20ba0(&var_2a8, r14_3, r8_42)
                    
                    if (r14_3 != 0)
                        sub_140a74f90(r14_3)
                
                sub_140a2e390(&var_1d0, u"Y=%.2f", _mm_cvtps_pd(*(rax_46 + 4)).q)
                int32_t r8_45
                
                if (var_1c8 == 0)
                    r8_45 = 0
                else
                    r8_45 = var_1c8 - 1
                
                sub_140a20ba0(&var_2a8, var_1d0, r8_45)
                int64_t rcx_112 = var_1d0
                
                if (rcx_112 != 0)
                    sub_140a74f90(rcx_112)
                
                rax_48 = 0
            
            if (not(_mm_and_ps(*(rax_46 + 8), zmm6_1)[0] f<= 9.99999994e-09f))
                if (rax_48 == 0)
                    var_288 = nullptr
                    var_280.q = 0
                    sub_1405947f0(&var_288, 3)
                    int32_t rsi_11 = var_280 + 3
                    
                    if (rsi_11 s> var_27c)
                        sub_140594770(&var_288)
                    
                    int16_t* r14_4 = var_288
                    UnDecorator::getReferenceType(r14_4, &data_142d8adc4, 6)
                    int32_t r8_46 = rsi_11 - 1
                    
                    if (rsi_11 == 0)
                        r8_46 = 0
                    
                    sub_140a20ba0(&var_2a8, r14_4, r8_46)
                    
                    if (r14_4 != 0)
                        sub_140a74f90(r14_4)
                
                sub_140a2e390(&var_1e0, u"Z=%.2f", _mm_cvtps_pd(*(rax_46 + 8)).q)
                int32_t r8_49
                
                if (var_1d8 == 0)
                    r8_49 = 0
                else
                    r8_49 = var_1d8 - 1
                
                sub_140a20ba0(&var_2a8, var_1e0, r8_49)
                int64_t rcx_120 = var_1e0
                
                if (rcx_120 != 0)
                    sub_140a74f90(rcx_120)
            
            var_288 = nullptr
            var_280.q = 0
            sub_1405947f0(&var_288, 2)
            int32_t rdi_11 = var_280 + 2
            var_280 = rdi_11
            
            if (rdi_11 s> var_27c)
                sub_140594770(&var_288)
                rdi_11 = var_280
            
            int16_t* rsi_12 = var_288
            UnDecorator::getReferenceType(rsi_12, &data_142da76f4, 4)
            int32_t r8_50 = rdi_11 - 1
            
            if (rdi_11 == 0)
                r8_50 = 0
            
            sub_140a20ba0(&var_2a8, rsi_12, r8_50)
            
            if (rsi_12 != 0)
                sub_140a74f90(rsi_12)
            
            rdx_40 = var_2a8
            rsi_6 = &data_142d40450
            rcx_98 = var_2a0_5.d
            var_250 = rdx_40
            var_2a8 = 0
            int32_t var_248_1 = rcx_98
            int32_t var_244_2 = var_2a0_5:4.d
            var_2a0 = 0
        else
            if (_mm_and_ps(*(rax_46 + 4), zmm6_1)[0] f> 9.99999975e-05f)
                goto label_141dc07d7
            
            if (_mm_and_ps(*(rax_46 + 8), zmm6_1)[0] f> 9.99999975e-05f)
                goto label_141dc07d7
            
            sub_140a2e390(&var_250, u"V(0)", r8_38)
            rcx_98 = var_248
            rdx_40 = var_250
        
        uint64_t r8_51 = &data_142d40450
        _mm_cvtps_pd(zmm9[0].q)
        
        if (rcx_98 != 0)
            r8_51 = rdx_40
        
        var_2b8.q = _mm_cvtps_pd(zmm7[0].q).q
        sub_140a2e390(&var_238, u"Velocity: %s Speed: %f Speed2D: %f", r8_51)
        sub_142409af0(r12, &var_238, &var_240)
        int64_t rcx_128 = var_238.q
        
        if (rcx_128 != 0)
            sub_140a74f90(rcx_128)
        
        uint64_t rcx_129 = var_250
        
        if (rcx_129 != 0)
            sub_140a74f90(rcx_129)
        
        break

int64_t* rax_50 = sub_140b58260(&var_298, u"collision", 1)
uint128_t var_1b0

for (int64_t* i_2 = *r15; i_2 != &i_2[sx.q(r15[1].d)]; i_2 = &i_2[1])
    if (*i_2 == *rax_50)
        var_2b8.b = 0
        *(arg2 + 0x38) = 0
        (*(*r13 + 0x558))(r13, &var_258, &var_240, 0, var_2b8)
        float zmm2_2[0x2] = var_258
        _mm_cvtps_pd(var_240)
        var_298.d = 0
        sub_140a2e390(&var_238, u"Collision Radius: %f Height: %f", _mm_cvtps_pd(zmm2_2).q)
        sub_142409af0(r12, &var_238, &var_298)
        int64_t rcx_135 = var_238.q
        
        if (rcx_135 != 0)
            sub_140a74f90(rcx_135)
        
        if (r13[0x26] == 0)
            var_298.d = 0
            var_2a8 = 0
            int32_t var_2a0_6 = 0
            sub_1405947f0(&var_2a8, 0x11)
            int32_t rax_54 = var_2a0_6 + 0x11
            var_2a0_6 = rax_54
            
            if (rax_54 s> 0)
                sub_140594770(&var_2a8)
            
            UnDecorator::getReferenceType(var_2a8, u"No RootComponent", 0x22)
            sub_142409af0(r12, &var_2a8, &var_298)
            uint64_t rcx_140 = var_2a8
            
            if (rcx_140 != 0)
                sub_140a74f90(rcx_140)
        
        var_2a8 = 0
        var_2a0 = 0
        sub_1405947f0(&var_2a8, 0xd)
        int32_t rsi_13 = var_2a0:4.d
        int32_t rdi_12 = var_2a0.d + 0xd
        var_2a0.d = rdi_12
        
        if (rdi_12 s> rsi_13)
            sub_140594770(&var_2a8)
            rsi_13 = var_2a0:4.d
            rdi_12 = var_2a0.d
        
        uint64_t r14_5 = var_2a8
        UnDecorator::getReferenceType(r14_5, u"Overlapping ", 0x1a)
        int16_t* rcx_144 = var_268
        
        if (rcx_144 != 0)
            sub_140a74f90(rcx_144)
        
        var_268 = r14_5
        int32_t var_260_4 = rdi_12
        int32_t var_25c_4 = rsi_13
        uint64_t var_118 = 0
        int64_t var_110
        __builtin_memset(&var_110, 0, 0x24)
        int32_t var_ec_1 = 0x80
        int32_t var_e8_1 = 0xffffffff
        int32_t var_e4_1 = 0
        int64_t var_d8_1 = 0
        int32_t var_d0_1 = 0
        sub_141dca570(r13, &var_118, nullptr)
        int32_t var_f0
        int32_t r8_58 = var_f0
        rdi_12.b = 0
        int64_t var_108
        var_228:8.q = &var_108
        var_228.d = 0
        var_228:4.d = 1
        int32_t var_218_1 = 0xffffffff
        int64_t var_214_1 = 0
        
        if (r8_58 != 0)
            sub_14059bdd0(&var_228)
            r8_58 = var_f0
        
        double zmm2_3[0x2] = var_218_1.o
        double var_130_1[0x2] = zmm2_3
        var_214_1.d = r8_58
        uint128_t var_140_1 = var_228
        zmm2_3 = _mm_unpackhi_pd(zmm2_3, zmm2_3[0])
        var_1b0 = (&var_118).o
        uint128_t var_1a0_1 = var_140_1
        int64_t var_190_1 = zmm2_3.q
        
        while (true)
            int64_t rcx_149 = sx.q(var_1a0_1:0xc.d)
            int64_t* rax_55 = var_1b0.q
            
            if (rcx_149.d == ((0xffffffff << (r8_58.b & 0x1f)).q u>> 0x20).d
                    && var_1a0_1.q == &var_108 && rax_55 == &var_118)
                break
            
            void* rsi_14 = *(*rax_55 + rcx_149 * 0x10)
            
            if (rsi_14 != 0)
                int32_t rax_57 = *(rsi_14 + 0xc)
                void* const rax_61
                
                if (rax_57 s>= data_143e1d9b4)
                    rax_61 = nullptr
                else
                    uint32_t rdx_59 = zx.d(rax_57.w)
                    
                    if (rax_57 s< 0)
                        rax_57 += 0xffff
                        rdx_59 -= 0x10000
                    
                    rax_61 = *(data_143e1d9a0 + (sx.q(rax_57 s>> 0x10) << 3)) + sx.q(rdx_59) * 0x18
                
                if (((*(rax_61 + 8) u>> 0x1d).b & 1) == 0)
                    var_2a8 = 0
                    var_2a0 = 0
                    sub_1405947f0(&var_2a8, 2)
                    int32_t r15_3 = var_2a0:4.d
                    rdi_12 = var_2a0.d + 2
                    var_2a0.d = rdi_12
                    
                    if (rdi_12 s> r15_3)
                        sub_140594770(&var_2a8)
                        r15_3 = var_2a0:4.d
                        rdi_12 = var_2a0.d
                    
                    var_2b8.w = 0x3f
                    uint64_t r14_6 = var_2a8
                    sub_1405a7220(r14_6, 2, &(*U""\tv 0")[3], 2, var_2b8.w)
                    var_298 = *(rsi_14 + 0x18)
                    sub_140b63b70(&var_298, &var_288)
                    int32_t rax_65
                    int32_t rcx_157
                    uint64_t rsi_15
                    
                    if (var_260_4 s> 1)
                        int32_t rsi_17
                        
                        if (var_280 == 0)
                            rsi_17 = 0
                        else
                            rsi_17 = var_280 - 1
                        
                        int32_t rax_66
                        
                        if (var_260_4 == 0)
                            rax_66 = var_260_4 + 1
                        
                        if (var_260_4 != 0 || rsi_17 == 0)
                            rax_66 = 0
                        
                        int16_t* rdx_63 = var_268
                        var_278 = 0
                        sub_140596860(&var_278, rdx_63, var_260_4, 0, rax_66 + rsi_17)
                        sub_140a20ba0(&var_278, var_288, rsi_17)
                        rcx_157 = var_270.d
                        rax_65 = var_270:4.d
                        rsi_15 = var_278
                        var_270 = 0
                        var_278 = 0
                    else
                        rsi_15 = var_288
                        rcx_157 = var_280
                        rax_65 = var_27c
                        var_288 = nullptr
                        var_280.q = 0
                    
                    int32_t var_244_3 = rax_65
                    int32_t var_248_2 = rcx_157
                    var_250 = rsi_15
                    uint64_t r12_1
                    
                    if (rcx_157 s> 1)
                        int32_t rdi_13
                        
                        if (rdi_12 == 0)
                            rdi_13 = 0
                        else
                            rdi_13 = rdi_12 - 1
                        
                        int32_t rax_68
                        
                        if (rcx_157 == 0)
                            rax_68 = rcx_157 + 1
                        
                        if (rcx_157 != 0 || rdi_13 == 0)
                            rax_68 = 0
                        
                        sub_140596690(&var_208, &var_250, rdi_13 + rax_68)
                        sub_140a20ba0(&var_208, r14_6, rdi_13)
                        r12_1 = var_208
                        int32_t var_200
                        rdi_12 = var_200
                        int32_t var_1fc
                        r15_3 = var_1fc
                        rsi_15 = var_250
                        var_208 = 0
                        var_200.q = 0
                    else
                        r12_1 = r14_6
                        var_2a0 = 0
                        r14_6 = 0
                    
                    int16_t* rcx_162 = var_268
                    
                    if (rcx_162 != 0)
                        sub_140a74f90(rcx_162)
                    
                    var_268 = r12_1
                    var_260_4 = rdi_12
                    var_25c_4 = r15_3
                    
                    if (rsi_15 != 0)
                        sub_140a74f90(rsi_15)
                    
                    int16_t* rcx_164 = var_288
                    
                    if (rcx_164 != 0)
                        sub_140a74f90(rcx_164)
                    
                    if (r14_6 != 0)
                        sub_140a74f90(r14_6)
                    
                    rdi_12.b = 1
            
            var_1a0_1:8.d &= not.d(var_1b0:0xc.d)
            sub_14059bdd0(&var_1b0:8)
        
        r13 = var_1e8
        
        if (rdi_12.b == 0 && var_268 != u"Overlapping nothing")
            int32_t rcx_167 = var_25c_4
            int32_t rdx_67 = 0
            int32_t var_260_5 = 0
            
            if (rcx_167 != 0x14)
                sub_1405947f0(&var_268, 0x14)
                rcx_167 = var_25c_4
                rdx_67 = var_260_5
            
            int32_t var_260_6 = rdx_67 + 0x14
            
            if (rdx_67 + 0x14 s> rcx_167)
                sub_140594770(&var_268)
            
            int16_t* rax_72 = var_268
            __builtin_memcpy(rax_72, u"Overlapping noth", 0x20)
            *(rax_72 + 0x20) = 0x67006e0069
        
        r12 = arg2 + 0x98
        var_298.d = 0
        sub_142409af0(r12, &var_268, &var_298)
        int32_t var_d0_2 = 0
        
        if (var_d8_1 != 0)
            sub_140a74f90(var_d8_1)
        
        sub_14100e680(&var_118)
        rsi_6 = &data_142d40450
        break

void* rax_73 = r13[0x1c]
var_298.d = 0

if (rax_73 != 0)
    var_1e8 = *(rax_73 + 0x18)
    sub_140b63b70(&var_1e8, &var_278)
else
    var_278 = 0
    var_270 = 0
    sub_1405947f0(&var_278, (rax_73 + 5).d)
    int32_t rax_74 = var_270.d + 5
    var_270.d = rax_74
    
    if (rax_74 s> 0)
        sub_140594770(&var_278)
    
    UnDecorator::getReferenceType(var_278, u"None", 0xa)

void* rax_76 = r13[0x23]

if (rax_76 != 0)
    var_240.q = *(rax_76 + 0x18)
    sub_140b63b70(&var_240, &var_2a8)
else
    var_2a8 = 0
    var_2a0 = 0
    sub_1405947f0(&var_2a8, (rax_76 + 5).d)
    int32_t rax_77 = var_2a0.d + 5
    var_2a0.d = rax_77
    
    if (rax_77 s> 0)
        sub_140594770(&var_2a8)
    
    UnDecorator::getReferenceType(var_2a8, u"None", 0xa)

if (var_2a0.d != 0)
    rsi_6 = var_2a8

sub_140a2e390(&var_238, u" Instigator: %s Owner: %s", rsi_6)
sub_142409af0(r12, &var_238, &var_298)
int64_t rcx_183 = var_238.q

if (rcx_183 != 0)
    sub_140a74f90(rcx_183)

uint64_t rcx_184 = var_2a8

if (rcx_184 != 0)
    sub_140a74f90(rcx_184)

uint64_t rcx_185 = var_278

if (rcx_185 != 0)
    sub_140a74f90(rcx_185)

TEB* gsbase
void* rdi_15 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f38de0 s> *(rdi_15 + 0x14))
    _Init_thread_header(&data_143f38de0)
    
    if (data_143f38de0 == 0xffffffff)
        sub_140b58260(&data_143f38dd8, u"Animation", 1)
        _Init_thread_footer(&data_143f38de0)

if (data_143f38df0 s> *(rdi_15 + 0x14))
    _Init_thread_header(&data_143f38df0)
    
    if (data_143f38df0 == 0xffffffff)
        sub_140b58260(&data_143f38de8, u"Bones", 1)
        _Init_thread_footer(&data_143f38df0)

int64_t* i_4 = *arg3
int64_t* i_5 = i_4
void* r9_6 = &i_4[sx.q(arg3[1].d)]
int64_t* i_3 = data_143f38dd8

if (i_4 != r9_6)
    while (*i_5 != i_3)
        i_5 = &i_5[1]
        
        if (i_5 == r9_6)
            goto label_141dc12a2
    
    goto label_141dc1318

label_141dc12a2:
int64_t* i_6 = i_4

if (i_4 != r9_6)
    while (*i_6 != data_143f38de8)
        i_6 = &i_6[1]
        
        if (i_6 == r9_6)
            goto label_141dc12bf
    
label_141dc1318:
    
    for (; i_4 != r9_6; i_4 = &i_4[1])
        if (*i_4 == i_3)
            var_228.d = 0
            int32_t rdx_76 = r13[0x39].d
            var_228:8.q = &r13[0x36]
            var_228:4.d = 1
            int32_t var_218_3 = 0xffffffff
            int64_t var_214_2 = 0
            
            if (rdx_76 != 0)
                sub_14059bdd0(&var_228)
                rdx_76 = r13[0x39].d
            
            double zmm2_4[0x2] = var_218_3.o
            uint128_t var_140_2 = var_228
            double var_130_2[0x2] = zmm2_4
            var_214_2.d = rdx_76
            zmm2_4 = _mm_unpackhi_pd(zmm2_4, zmm2_4[0])
            var_1b0 = (&r13[0x34]).o
            uint128_t var_1a0_2 = var_140_2
            int64_t var_190_2 = zmm2_4.q
            
            while (true)
                int64_t rcx_194 = sx.q(var_1a0_2:0xc.d)
                i_3 = var_1b0.q
                
                if (rcx_194.d == ((0xffffffff << (rdx_76.b & 0x1f)).q u>> 0x20).d
                        && var_1a0_2.q == &r13[0x36] && i_3 == &r13[0x34])
                    break
                
                void* rbx_1 = *(*i_3 + rcx_194 * 0x10)
                
                if (rbx_1 != 0 && sub_141db5ad0(rbx_1) != 0 && sub_141f3b9f0(rbx_1) != 0)
                    var_2b8.q = arg4
                
                var_1a0_2:8.d &= not.d(var_1b0:0xc.d)
                sub_14059bdd0(&var_1b0:8)
            
            break

label_141dc12bf:
int16_t* rcx_188 = var_268

if (rcx_188 != 0)
    i_3 = sub_140a74f90(rcx_188)

__security_check_cookie(rax_1 ^ &var_2d8)
return i_3
