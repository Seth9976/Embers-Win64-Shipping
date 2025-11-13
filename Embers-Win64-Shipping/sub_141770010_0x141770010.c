// 函数: sub_141770010
// 地址: 0x141770010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0x10)
int32_t r12 = 0
int64_t r14 = *(arg2 + 8)
int64_t r15 = arg4
int64_t var_c8 = 0
int32_t var_c0 = rdi

if (rdi != 0)
    sub_1405a4c70(&var_c8, rdi, 0)
    memcpy(var_c8, r14, rdi * 2)
else
    int32_t var_bc_1 = 0

sub_140a2fdd0(&var_c8)
int32_t r14_1 = 1
int64_t var_98
int64_t* rax = sub_140a300d0(&var_c8, &var_98, &(*U"RGBXYZF10|")[9], &data_142d99650, 1)

if (&var_c8 != rax)
    int64_t rcx_4 = var_c8
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    var_c8 = *rax
    *rax = 0
    var_c0 = rax[1].d
    int32_t var_bc_2 = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_6 = var_98

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t var_f8 = 1
int64_t* rax_3 = sub_140a300d0(&var_c8, &var_98, &data_142d84ee0, &data_142d99650, 1)

if (&var_c8 != rax_3)
    int64_t rcx_8 = var_c8
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    var_c8 = *rax_3
    *rax_3 = 0
    var_c0 = rax_3[1].d
    int32_t var_bc_3 = *(rax_3 + 0xc)
    rax_3[1] = 0

int64_t rcx_10 = var_98

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int128_t zmm6
int128_t var_58 = zmm6
int128_t zmm7
int128_t var_68 = zmm7
int128_t zmm8
int128_t var_78 = zmm8
int128_t zmm9
int128_t var_88 = zmm9
int64_t r8_2 = sub_140a20b00(&var_c8, "__", 2)
int64_t r13
r13.b = 0
int32_t rax_7 = *(arg1 + 0x30) * *(arg1 + 0x2c)
bool arg_8 = false

if (rax_7 * *(arg1 + 0x28) s<= 0)
    goto label_1417707ca

float (* rdi_3)[0x2] = nullptr
int64_t* r14_2 = nullptr
int64_t var_b8
int64_t var_a8
int32_t var_90
int32_t var_8c
int32_t rax_21
bool rcx_12

while (true)
    int64_t r15_1 = *(arg1 + 0x70)
    int32_t rax_9
    rax_9, r8_2 = _finite(_mm_cvtps_pd(*(r14_2 + r15_1)))
    
    if (rax_9 != 0)
        int32_t rax_10
        rax_10, r8_2 = _finite(_mm_cvtps_pd(*(r14_2 + r15_1 + 4)))
        
        if (rax_10 != 0)
            int32_t rax_11
            rax_11, r8_2 = _finite(_mm_cvtps_pd(*(r14_2 + r15_1 + 8)))
            
            if (rax_11 != 0)
                int32_t rax_13
                rax_13, r8_2 = _finite(_mm_cvtps_pd(*(rdi_3 + *(arg1 + 0x50))))
                
                if (rax_13 != 0)
                    int32_t rax_15
                    rax_15, r8_2 = _isnan(_mm_cvtps_pd(*(rdi_3 + *(arg1 + 0x50))))
                    
                    if (rax_15 == 0)
                        if (r13.b == 0)
                            r13.b = 0f f> *(rdi_3 + *(arg1 + 0x50))
                        
                        rcx_12 = arg_8
                        
                        if (rcx_12 == 0)
                            float temp0_6 = *(rdi_3 + *(arg1 + 0x50))
                            0f - temp0_6
                            rcx_12 = 0f < temp0_6
                            arg_8 = rcx_12
                        
                        r12 += 1
                        r14_2 += 0xc
                        rdi_3 = &(*rdi_3)[1]
                        
                        if (r12 s>= *(arg1 + 0x2c) * *(arg1 + 0x30) * *(arg1 + 0x28))
                            break
                        
                        continue
    
    if (data_143ef7c24 == 0)
        goto label_1417708f1
    
    sub_140a2e390(&var_98, u"NANS___", r8_2)
    
    if (var_90 s<= 1)
        rax_21 = 0
        int64_t r14_6 = var_c8
        var_a8 = 0
        int32_t var_a0_4 = var_c0
        
        if (var_c0 == 0)
            goto label_1417707a4
        
        sub_1405a4c70(&var_a8, var_c0, 0)
        memcpy(var_a8, r14_6, var_c0 * 2)
        goto label_1417707b1
    
    int32_t rdi_12
    
    if (var_c0 == 0)
        rdi_12 = 0
    else
        rdi_12 = var_c0 - 1
    
    int32_t rdx_22
    
    if (var_90 == 0)
        rdx_22 = var_90 + 1
    
    if (var_90 != 0 || rdi_12 == 0)
        rdx_22 = 0
    
    var_b8 = var_98
    int32_t rdx_24 = rdx_22 + var_90 + rdi_12
    var_98 = 0
    int32_t var_b0_3 = var_90
    var_90.q = 0
    
    if (rdx_24 s> var_8c)
        sub_1405947f0(&var_b8, rdx_24)
    
    sub_140a20ba0(&var_b8, var_c8, rdi_12)
    var_a8 = var_b8
    int32_t var_a0_5 = var_b0_3
    rax_21 = var_8c
    var_b0_3.q = 0
    var_b8 = 0
    goto label_1417707a4

int16_t* rbx
int64_t* var_f0_1

if (r13.b == 0)
    r15 = arg4
    r14_1 = 1
label_1417707ca:
    
    if (data_143ef7c24 != 0)
        sub_140a2e390(&var_98, u"NOINTERIOR___", r8_2)
        int32_t var_9c_4
        
        if (var_90 s> 1)
            int32_t rdi_15
            
            if (var_c0 == 0)
                rdi_15 = 0
            else
                rdi_15 = var_c0 - 1
            
            if (var_90 != 0 || rdi_15 == 0)
                r14_1 = 0
            
            var_b8 = var_98
            int32_t rdx_29 = rdi_15 + var_90 + r14_1
            var_98 = 0
            int32_t var_b0_4 = var_90
            var_90.q = 0
            
            if (rdx_29 s> var_8c)
                sub_1405947f0(&var_b8, rdx_29)
            
            sub_140a20ba0(&var_b8, var_c8, rdi_15)
            var_a8 = var_b8
            int32_t var_a0_7 = var_b0_4
            var_b0_4.q = 0
            var_b8 = 0
            var_9c_4 = var_8c
        else
            int64_t r14_7 = var_c8
            var_a8 = 0
            int32_t var_a0_6 = var_c0
            
            if (var_c0 == 0)
                var_9c_4 = 0
            else
                sub_1405a4c70(&var_a8, var_c0, 0)
                memcpy(var_a8, r14_7, var_c0 * 2)
        var_f0_1 = &var_a8
        var_f8.q = r15
        goto label_1417708de
    
label_1417708f1:
    int16_t* rcx_48
    
    if (*(arg2 + 0x10) == 0)
        rcx_48 = &data_142d40450
    else
        rcx_48 = *(arg2 + 8)
    
    sub_140a54570(rcx_48, &data_1437020ab)
    *arg2 = 1
    *(arg2 + 1) = 1
    rbx.b = 0
else
    if (rcx_12 == 0)
        if (data_143ef7c24 == 0)
            goto label_1417708f1
        
        sub_140a2e390(&var_98, u"NOEXTERIOR___", r8_2)
        
        if (var_90 s<= 1)
            rax_21 = 0
            int64_t r14_3 = var_c8
            var_a8 = 0
            int32_t var_a0_1 = var_c0
            
            if (var_c0 == 0)
            label_1417707a4:
                int32_t var_9c_3 = rax_21
            else
                sub_1405a4c70(&var_a8, var_c0, 0)
                memcpy(var_a8, r14_3, var_c0 * 2)
            
        label_1417707b1:
            var_f0_1 = &var_a8
            var_f8.q = arg4
        label_1417708de:
            sub_14177afd0(arg1, arg2, arg3, arg5, var_f8, var_f0_1)
            int64_t rcx_47 = var_98
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            goto label_1417708f1
        
        int32_t rdi_6
        
        if (var_c0 == 0)
            rdi_6 = 0
        else
            rdi_6 = var_c0 - 1
        
        int32_t rdx_6
        
        if (var_90 == 0)
            rdx_6 = var_90 + 1
        
        if (var_90 != 0 || rdi_6 == 0)
            rdx_6 = 0
        
        var_b8 = var_98
        int32_t rdx_8 = rdx_6 + rdi_6 + var_90
        var_98 = 0
        int32_t var_b0_1 = var_90
        var_90.q = 0
        
        if (rdx_8 s> var_8c)
            sub_1405947f0(&var_b8, rdx_8)
        
        sub_140a20ba0(&var_b8, var_c8, rdi_6)
        var_a8 = var_b8
        int32_t var_a0_2 = var_b0_1
        int32_t var_9c_1 = var_8c
        var_f0_1 = &var_a8
        var_f8.q = arg4
        var_b8 = 0
        var_b0_1.q = 0
        goto label_1417708de
    
    arg_8.d = 0
    var_f8.q = &arg_8
    int32_t arg_10 = 0
    int128_t zmm0_2 = sub_1417743d0(arg1, arg3, arg5, arg4, var_f8, &arg_10)
    int128_t zmm1_1 = *(arg1 + 0x38)
    zmm9 = zmm0_2
    float zmm3_1[0x2] = *(arg1 + 0x34)
    int64_t zmm2_1 = *(arg1 + 0x3c)
    zmm7 = arg_8.d
    zmm8 = arg_10
    zmm1_1.d = zmm1_1.d f* zmm1_1.d
    zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
    zmm2_1.d = zmm2_1.d f* zmm2_1.d
    zmm3_1[0] = zmm3_1[0] f+ zmm1_1.d
    zmm3_1[0] = zmm3_1[0] f+ zmm2_1.d
    zmm1_1 = _mm_sqrt_ss(0, zmm3_1[0])
    zmm0_2.d = zmm1_1.d f* data_1439b8df0
    
    if (not(zmm9.d f> zmm0_2.d) && not(zmm7.d f> data_1439b8df8))
        zmm1_1.d = zmm1_1.d f* data_1439b8df4
    
    if (not(zmm9.d f> zmm0_2.d) && not(zmm7.d f> data_1439b8df8) && zmm8.d f<= zmm1_1.d)
        rbx.b = 1
    else
        if (data_143ef7c24 != 0)
            _mm_cvtps_pd(zmm8.q)
            var_f8.q = (_mm_cvtps_pd(zmm7.q)).q
            sub_140a2e390(&var_98, u"AVGDIST_%f__MAXDIST_%f__ANGLE_%f___", fconvert.d(zmm9.d))
            int32_t rdi_7
            int64_t r14_5
            
            if (var_90 s> 1)
                int32_t rdi_9
                
                if (var_c0 == 0)
                    rdi_9 = 0
                else
                    rdi_9 = var_c0 - 1
                
                int32_t rdx_13
                
                if (var_90 == 0)
                    rdx_13 = var_90 + 1
                
                if (var_90 != 0 || rdi_9 == 0)
                    rdx_13 = 0
                
                var_a8 = var_98
                int32_t rdx_15 = rdx_13 + rdi_9 + var_90
                var_98 = 0
                int32_t var_a0_3 = var_90
                int32_t var_9c_2 = var_8c
                var_90.q = 0
                
                if (rdx_15 s> var_8c)
                    sub_1405947f0(&var_a8, rdx_15)
                
                sub_140a20ba0(&var_a8, var_c8, rdi_9)
                rdi_7 = var_a0_3
                r14_5 = var_a8
            else
                rdi_7 = var_c0
                int64_t r14_4 = var_c8
                var_b8 = 0
                
                if (rdi_7 != 0)
                    sub_1405a4c70(&var_b8, rdi_7, 0)
                    r14_5 = var_b8
                    memcpy(r14_5, r14_4, rdi_7 * 2)
                else
                    r14_5 = 0
            
            int64_t rcx_26 = var_98
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            int32_t var_90_1 = rdi_7
            var_98 = 0
            
            if (rdi_7 != 0)
                sub_1405a4c70(&var_98, rdi_7, 0)
                memcpy(var_98, r14_5, rdi_7 * 2)
            else
                int32_t var_8c_1 = 0
            
            var_f8.q = arg4
            zmm7, zmm8, zmm9 = sub_14177afd0(arg1, arg2, arg3, arg5, var_f8, &var_98)
            
            if (r14_5 != 0)
                sub_140a74f90(r14_5)
        
        if (data_143ef7c28 == 0)
            rbx.b = 1
        else
            zmm0_2 = *(arg1 + 0x38)
            zmm2_1 = *(arg1 + 0x34)
            zmm1_1 = *(arg1 + 0x3c)
            zmm3_1 = data_1439b8df0
            zmm0_2.d = zmm0_2.d f* zmm0_2.d
            zmm2_1.d = zmm2_1.d f* zmm2_1.d
            zmm1_1.d = zmm1_1.d f* zmm1_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            int64_t temp0_10 = _mm_cvtps_pd(zmm7.q)
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            int64_t var_d0_1 = (_mm_cvtps_pd(data_1439b8df8.q)).q
            int64_t var_d8_1 = temp0_10
            int64_t var_e0_1 = (_mm_cvtps_pd(_mm_sqrt_ss(0, zmm2_1.d).q)).q
            zmm0_2 = _mm_cvtps_pd(data_1439b8df4.q)
            int64_t temp0_15 = _mm_cvtps_pd(zmm8.q)
            int64_t var_e8_1 = zmm0_2.q
            _mm_cvtps_pd(zmm3_1)
            int64_t var_f0_4 = temp0_15
            sub_140a2e390(&var_98, 
                High error for level set: AvgDistError: %f (Max: %f*%f), MaxDistError: %f (Max: %f*%f), "
            "AvgAngleError: %f (Max: %f)", fconvert.d(zmm9.d))
            int16_t* rcx_32
            
            if (*(arg2 + 0x10) == 0)
                rcx_32 = &data_142d40450
            else
                rcx_32 = *(arg2 + 8)
            
            sub_140a54570(rcx_32, &data_1437020ab)
            int64_t rcx_33 = var_98
            *arg2 = 0x101
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
            
            rbx.b = 0
int64_t rcx_49 = var_c8

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

return zx.q(rbx.b)
