// 函数: sub_1429c4c40
// 地址: 0x1429c4c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t r12 = arg2
uint128_t zmm6
uint128_t var_38 = zmm6
int64_t rbx = sx.q(arg3)
__CheckForDebuggerJustMyCode(&data_14427d007)
uint128_t zmm7 = 0x7fffffffffffffff
uint128_t zmm9 = zx.o(0)
uint128_t zmm11 = 0x3f800000
uint128_t zmm10 = zx.o(0)
int32_t var_1e0 = 0
__builtin_memset(arg1, 0, 0x20)
int64_t var_118
uint32_t zmm0[0x4]
float zmm1[0x4]
uint128_t zmm2
uint32_t zmm3[0x4]

if (rbx.d s> 0)
    int64_t r8 = arg5
    int64_t r15_1 = 0
    uint128_t zmm12
    uint128_t var_98_1 = zmm12
    uint32_t zmm13[0x4]
    uint32_t var_a8_1[0x4] = zmm13
    uint128_t zmm14
    uint128_t var_b8_1 = zmm14
    uint128_t zmm15
    uint128_t var_c8_1 = zmm15
    
    do
        int64_t rcx = sx.q(*(r12 + (r15_1 << 2)))
        int64_t rdx = rcx * 0x58
        
        if ((*(rdx + r8 + 0x4c) & 4) == 0)
            int32_t r12_1 = (rcx * 3).d
            int64_t rax_3 = sx.q(r12_1)
            int32_t rbx_1
            
            if (*(arg4 + (rax_3 << 2)) == arg7)
                rbx_1 = 0
            else if (*(arg4 + (rax_3 << 2) + 4) != arg7)
                rbx_1 = -1
                
                if (*(arg4 + (rax_3 << 2) + 8) == arg7)
                    rbx_1 = 2
            else
                rbx_1 = 1
            
            int64_t rax_5 = sx.q(r12_1 + rbx_1)
            int32_t r8_1 = *(arg4 + (rax_5 << 2))
            float var_1f8
            uint32_t var_1f0
            float var_1e8
            int32_t var_108
            (*(*arg6 + 0x18))(arg6, &var_108, zx.q(r8_1 s>> 2), zx.q(r8_1) & 3, var_1f8, var_1f0, 
                var_1e8, var_1e0)
            int32_t var_104
            zmm6 = var_104
            float zmm5_1[0x4] = var_108
            int32_t var_100
            zmm13 = var_100
            zmm2 = zx.o(*(rdx + arg5 + 0x28))
            int32_t rax_7 = *(rdx + arg5 + 0x30)
            zmm0 = zmm2
            zmm9 = zx.o(*(rdx + arg5 + 0x28))
            zmm12 = zx.o(*(rdx + arg5 + 0x28))
            zmm14 = zx.o(*(rdx + arg5 + 0x34))
            zmm5_1[0] = zmm5_1[0] f* zmm2.d
            float zmm4_1 = zmm6.d f* _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
            zmm13[0] = zmm13[0] f* rax_7
            int32_t rax_8 = *(rdx + arg5 + 0x3c)
            zmm4_1 = zmm4_1 + zmm5_1[0]
            zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
            int32_t var_1f4_1 = zmm6.d
            zmm4_1 = zmm4_1 f+ zmm13[0]
            zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
            var_1f8 = zmm5_1[0]
            var_1f0 = zmm13[0]
            zmm5_1[0] = zmm5_1[0] * zmm4_1
            zmm2.d = zmm6.d f* zmm4_1
            zmm13[0] = zmm13[0] f* zmm4_1
            zmm12.d = zmm12.d f- zmm5_1[0]
            zmm9.d = zmm9.d f- zmm2.d
            zmm4_1 = zmm6.d
            zmm2 = zx.o(*(rdx + arg5 + 0x34))
            zmm5_1[0] = zmm5_1[0] f* zmm2.d
            zmm10.d = rax_7.d f- zmm13[0]
            zmm0 = zmm2
            float var_1ec_1 = zmm12.d
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm2 = zmm6
            zmm6 = zx.o(*(rdx + arg5 + 0x34))
            zmm4_1 = zmm4_1 f* zmm0[0]
            zmm13[0] = zmm13[0] f* rax_8
            var_1e8 = zmm10.d
            uint64_t var_1a0_1 = zmm9.q
            zmm4_1 = zmm4_1 + zmm5_1[0] f+ zmm13[0]
            zmm0 = zx.o(0)
            zmm0[0].q = fconvert.d(zmm12.d)
            zmm5_1[0] = zmm5_1[0] * zmm4_1
            zmm2.d = zmm2.d f* zmm4_1
            uint32_t temp0_5[0x4] = _mm_and_ps(zmm0, zmm7)
            zmm6.d = zmm6.d f- zmm5_1[0]
            zmm13[0] = zmm13[0] f* zmm4_1
            zmm14.d = zmm14.d f- zmm2.d
            float temp0_6[0x4] = _mm_cvtpd_ps(temp0_5)
            float var_1e4_1 = zmm6.d
            zmm15.d = rax_8.d f- zmm13[0]
            int32_t rax_9
            rax_9.b = temp0_6[0] > 1.17549435e-38f
            
            if (rax_9 != 0)
            label_1429c4f3d:
                zmm0 = zmm12
                zmm1 = zmm9
                zmm0[0] = zmm0[0] f* zmm12.d
                zmm1[0] = zmm1[0] f* zmm9.d
                zmm2.d = zmm10.d f* zmm10.d
                zmm0[0] = zmm0[0] f+ zmm1[0]
                zmm0[0] = zmm0[0] f+ zmm2.d
                zmm2.d = zmm11.d f/ sqrtf(zmm0[0])[0]
                zmm1 = zmm2
                zmm0 = zmm2
                zmm1[0] = zmm1[0] f* zmm12.d
                zmm0[0] = zmm0[0] f* zmm9.d
                zmm2.d = zmm2.d f* zmm10.d
                var_1ec_1 = zmm1[0]
                var_1a0_1.d = zmm0[0]
                var_1e8 = zmm2.d
            else
                zmm0 = zx.o(0)
                zmm0[0].q = fconvert.d(zmm9.d)
                int32_t rax_10
                rax_10.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7))[0] > 1.17549435e-38f
                
                if (rax_10 != 0)
                    goto label_1429c4f3d
                
                int32_t rax_11
                rax_11.b =
                    _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm10.q), zmm7))[0] > 1.17549435e-38f
                
                if (rax_11 != 0)
                    goto label_1429c4f3d
            
            zmm0 = zx.o(0)
            zmm0[0].q = fconvert.d(zmm6.d)
            int32_t rax_12
            rax_12.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7))[0] > 1.17549435e-38f
            
            if (rax_12 != 0)
            label_1429c4fe3:
                zmm0 = zmm6
                zmm1 = zmm14
                zmm0[0] = zmm0[0] f* zmm6.d
                zmm1[0] = zmm1[0] f* zmm14.d
                zmm2.d = zmm15.d f* zmm15.d
                zmm0[0] = zmm0[0] f+ zmm1[0]
                zmm0[0] = zmm0[0] f+ zmm2.d
                zmm2.d = zmm11.d f/ sqrtf(zmm0[0])[0]
                zmm0 = zmm2
                zmm1 = zmm2
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm0[0] = zmm0[0] f* zmm14.d
                zmm2.d = zmm2.d f* zmm15.d
                var_1e4_1 = zmm1[0]
                zmm14 = zmm0
                zmm15 = zmm2
            else
                zmm0 = zx.o(0)
                zmm0[0].q = fconvert.d(zmm14.d)
                int32_t rax_13
                rax_13.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7))[0] > 1.17549435e-38f
                
                if (rax_13 != 0)
                    goto label_1429c4fe3
                
                int32_t rax_14
                rax_14.b =
                    _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm15.q), zmm7))[0] > 1.17549435e-38f
                
                if (rax_14 != 0)
                    goto label_1429c4fe3
            
            int32_t rax_16 = rbx_1 + 1 + r12_1
            
            if (rbx_1 s>= 2)
                rax_16 = r12_1
            
            int32_t rcx_3 = *(arg4 + (sx.q(rax_16) << 2))
            int64_t var_1c8_1
            var_1c8_1.d = *(arg4 + (rax_5 << 2))
            int32_t rbx_2
            
            if (rbx_1 s<= 0)
                rbx_2 = 2
            else
                rbx_2 = rbx_1 - 1
            
            int32_t r8_3 = *(arg4 + (sx.q(r12_1 + rbx_2) << 2))
            int32_t var_f8
            (*(*arg6 + 0x10))(arg6, &var_f8, zx.q(r8_3 s>> 2), zx.q(r8_3) & 3, var_1f8, var_1f0, 
                var_1e8)
            int32_t rcx_6 = var_1c8_1.d
            int32_t var_e8
            (*(*arg6 + 0x10))(arg6, &var_e8, zx.q(rcx_6 s>> 2), zx.q(rcx_6) & 3)
            (*(*arg6 + 0x10))(arg6, &var_118, zx.q(rcx_3 s>> 2), zx.q(rcx_3) & 3)
            zmm11.d = var_f8.d f- var_e8
            uint32_t zmm4_2[0x4] = var_1f8
            uint32_t zmm5_2[0x4] = var_1f4_1
            zmm2 = var_1f0
            zmm1 = zmm2
            int32_t var_f4
            int32_t var_e4
            zmm12.d = var_f4.d f- var_e4
            int32_t var_f0
            zmm13 = var_f0
            int32_t var_e0
            zmm13[0] = zmm13[0] f- var_e0
            zmm10.d = var_118.d.d f- var_e8
            zmm6.d = var_118:4.d.d f- var_e4
            int32_t var_110
            zmm9.d = var_110.d f- var_e0
            zmm5_2[0] = zmm5_2[0] f* zmm12.d
            zmm1[0] = zmm1[0] f* zmm13[0]
            zmm4_2[0] = zmm4_2[0] f* zmm11.d
            zmm4_2[0] = zmm4_2[0] f+ zmm5_2[0]
            zmm4_2[0] = zmm4_2[0] f+ zmm1[0]
            zmm1 = zmm5_2
            zmm4_2[0] = zmm4_2[0] f* zmm4_2[0]
            zmm1[0] = zmm1[0] f* zmm4_2[0]
            zmm11.d = zmm11.d f- zmm4_2[0]
            zmm2.d = zmm2.d f* zmm4_2[0]
            zmm12.d = zmm12.d f- zmm1[0]
            zmm13[0] = zmm13[0] f- zmm2.d
            int32_t rax_24
            rax_24.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm11.q), zmm7))[0] > 1.17549435e-38f
            
            if (rax_24 != 0)
            label_1429c51a9:
                zmm0 = zmm12
                zmm1 = zmm11
                zmm0[0] = zmm0[0] f* zmm12.d
                zmm1[0] = zmm1[0] f* zmm11.d
                zmm2.d = zmm13.d f* zmm13[0]
                zmm0[0] = zmm0[0] f+ zmm1[0]
                zmm0[0] = zmm0[0] f+ zmm2.d
                zmm1 = 0x3f800000
                zmm4_2 = var_1f8
                zmm5_2 = var_1f4_1
                zmm1[0] = 1f f/ sqrtf(zmm0[0])[0]
                zmm11.d = zmm11.d f* zmm1[0]
                zmm12.d = zmm12.d f* zmm1[0]
                zmm13[0] = zmm13[0] f* zmm1[0]
            else
                int32_t rax_25
                rax_25.b =
                    _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm12.q), zmm7))[0] > 1.17549435e-38f
                
                if (rax_25 != 0)
                    goto label_1429c51a9
                
                int32_t rax_26
                rax_26.b =
                    _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm13[0].q), zmm7))[0] > 1.17549435e-38f
                
                if (rax_26 != 0)
                    goto label_1429c51a9
            
            zmm5_2[0] = zmm5_2[0] f* zmm6.d
            zmm2.d = zmm4_2.d f* zmm10.d
            zmm2.d = zmm2.d f+ zmm5_2[0]
            zmm0 = var_1f0
            zmm1 = zmm0
            zmm1[0] = zmm1[0] f* zmm9.d
            zmm2.d = zmm2.d f+ zmm1[0]
            zmm0[0] = zmm0[0] f* zmm2.d
            zmm4_2[0] = zmm4_2[0] f* zmm2.d
            zmm9.d = zmm9.d f- zmm0[0]
            zmm5_2[0] = zmm5_2[0] f* zmm2.d
            zmm10.d = zmm10.d f- zmm4_2[0]
            zmm6.d = zmm6.d f- zmm5_2[0]
            int32_t rax_27
            rax_27.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm10.q), zmm7))[0] > 1.17549435e-38f
            
            if (rax_27 != 0)
            label_1429c527e:
                zmm0 = zmm6
                zmm1 = zmm10
                zmm0[0] = zmm0[0] f* zmm6.d
                zmm1[0] = zmm1[0] f* zmm10.d
                zmm2.d = zmm9.d f* zmm9.d
                zmm0[0] = zmm0[0] f+ zmm1[0]
                zmm0[0] = zmm0[0] f+ zmm2.d
                zmm1 = 0x3f800000
                zmm1[0] = 1f f/ sqrtf(zmm0[0])[0]
                zmm10.d = zmm10.d f* zmm1[0]
                zmm6.d = zmm6.d f* zmm1[0]
                zmm9.d = zmm9.d f* zmm1[0]
            else
                int32_t rax_28
                rax_28.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm6.q), zmm7))[0] > 1.17549435e-38f
                
                if (rax_28 != 0)
                    goto label_1429c527e
                
                int32_t rax_29
                rax_29.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm9.q), zmm7))[0] > 1.17549435e-38f
                
                if (rax_29 != 0)
                    goto label_1429c527e
            
            zmm11.d = zmm11.d f* zmm10.d
            zmm12.d = zmm12.d f* zmm6.d
            zmm13[0] = zmm13[0] f* zmm9.d
            zmm11.d = zmm11.d f+ zmm12.d
            zmm11.d = zmm11.d f+ zmm13[0]
            float temp0_37[0x4] = _mm_max_ss(0xbf800000, zmm11.d)
            zmm11 = 0x3f800000
            zmm0 = acos(_mm_cvtps_pd(_mm_min_ss(0x3f800000, temp0_37[0])[0].q)[0].q)
            zmm1 = zx.o(*arg1)
            float rax_30 = arg1[1].d
            uint32_t zmm5_3[0x4] = var_1ec_1
            zmm3 = zx.o(var_1a0_1)
            r8 = arg5
            r12 = arg2
            zmm2.d = fconvert.s(zmm0[0].q)
            zmm0 = zmm1
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm9.d = var_1e0.d f+ zmm2.d
            zmm3[0] = zmm3[0] f* zmm2.d
            zmm5_3[0] = zmm5_3[0] f* zmm2.d
            zmm3[0] = zmm3[0] f+ zmm0[0]
            zmm5_3[0] = zmm5_3[0] f+ zmm1[0]
            zmm14.d = zmm14.d f* zmm2.d
            zmm1 = zx.o(arg1[2])
            zmm15.d = zmm15.d f* zmm2.d
            var_1e0 = zmm9.d
            zmm0 = _mm_unpacklo_ps(zmm5_3, zmm3[0].q)
            zmm3 = var_1e4_1
            *arg1 = zmm0.q
            zmm0 = zmm1
            zmm14.d = zmm14.d f+ _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
            zmm3[0] = zmm3[0] f* zmm2.d
            zmm3[0] = zmm3[0] f+ zmm1[0]
            arg1[1].d = var_1e8 f* zmm2.d + rax_30
            int32_t rax_32 = arg1[3].d
            zmm1 = zmm2
            zmm1[0] = zmm1[0] f* *(rdx + r8 + 0x44)
            zmm15.d = zmm15.d f+ rax_32
            zmm1[0] = zmm1[0] f+ *(arg1 + 0x1c)
            arg1[2] = (_mm_unpacklo_ps(zmm3, zmm14.q)).q
            zmm0 = zmm2
            zmm0[0] = zmm0[0] f* *(rdx + r8 + 0x40)
            int32_t var_1b0_1 = zmm15.d
            zmm0[0] = zmm0[0] f+ *(arg1 + 0xc)
            *(arg1 + 0x1c) = zmm1[0]
            arg1[3].d = var_1b0_1
            *(arg1 + 0xc) = zmm0[0]
        
        r15_1 += 1
    while (r15_1 s< rbx)
    
    zmm10 = zx.o(0)

zmm0 = zx.o(*arg1)
int32_t rax_34 = arg1[1].d
var_118 = zmm0.q
zmm0[0].q = fconvert.d(zmm0[0])
int32_t rax_35
rax_35.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7))[0] > 1.17549435e-38f

if (rax_35 != 0)
label_1429c54b2:
    int32_t rax_38 = arg1[1].d
    zmm6 = zx.o(*arg1)
    zmm0 = zmm6
    zmm2 = rax_38
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm0[0] = zmm0[0] f* zmm0[0]
    zmm2.d = zmm2.d f* zmm2.d
    var_118 = zmm6.q
    zmm1 = var_118.d
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm0[0] = zmm0[0] f+ zmm1[0]
    zmm0[0] = zmm0[0] f+ zmm2.d
    zmm0 = sqrtf(zmm0[0])
    zmm1 = zmm11
    zmm3 = zmm6
    zmm1[0] = zmm1[0] f/ zmm0[0]
    zmm0 = rax_38
    zmm0[0] = zmm0[0] f* zmm1[0]
    zmm3[0] = zmm3[0] f* zmm1[0]
    zmm2.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f* zmm1[0]
    uint32_t var_1b0_2 = zmm0[0]
    *arg1 = (_mm_unpacklo_ps(zmm3, zmm2.q)).q
    arg1[1].d = var_1b0_2
else
    int32_t rax_36
    rax_36.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(var_118:4.d[0].q), zmm7))[0] > 1.17549435e-38f
    
    if (rax_36 != 0)
        goto label_1429c54b2
    
    int32_t rax_37
    rax_37.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(rax_34[0].q), zmm7))[0] > 1.17549435e-38f
    
    if (rax_37 != 0)
        goto label_1429c54b2

zmm0 = zx.o(arg1[2])
int32_t rax_40 = arg1[3].d
var_118 = zmm0.q
zmm0[0].q = fconvert.d(zmm0[0])
int32_t rax_41
rax_41.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7))[0] > 1.17549435e-38f

if (rax_41 != 0)
label_1429c5589:
    int32_t rax_43 = arg1[3].d
    zmm6 = zx.o(arg1[2])
    zmm0 = zmm6
    zmm2 = rax_43
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm0[0] = zmm0[0] f* zmm0[0]
    zmm2.d = zmm2.d f* zmm2.d
    var_118 = zmm6.q
    zmm1 = var_118.d
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm0[0] = zmm0[0] f+ zmm1[0]
    zmm0[0] = zmm0[0] f+ zmm2.d
    zmm11.d = zmm11.d f/ sqrtf(zmm0[0])[0]
    zmm0 = rax_43
    zmm1 = zmm6
    zmm1[0] = zmm1[0] f* zmm11.d
    zmm2.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f* zmm11.d
    zmm0[0] = zmm0[0] f* zmm11.d
    arg1[2] = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
    arg1[3].d = zmm0[0]
else
    int32_t rax_42
    rax_42.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(var_118:4.d[0].q), zmm7))[0] > 1.17549435e-38f
    
    if (rax_42 != 0)
        goto label_1429c5589
    
    int32_t rdi
    rdi.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(rax_40[0].q), zmm7))[0] > 1.17549435e-38f
    
    if (rdi != 0)
        goto label_1429c5589

if (not(zmm9.d f<= zmm10.d))
    zmm0 = *(arg1 + 0xc)
    zmm1 = *(arg1 + 0x1c)
    zmm0[0] = zmm0[0] f/ zmm9.d
    zmm1[0] = zmm1[0] f/ zmm9.d
    *(arg1 + 0xc) = zmm0[0]
    *(arg1 + 0x1c) = zmm1[0]

__security_check_cookie(rax_1 ^ &var_218)
return arg1
