// 函数: sub_14000acc0
// 地址: 0x14000acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = arg9
float zmm9[0x4] = arg6
float zmm8[0x4] = arg5
float zmm2[0x8] = *arg11
int32_t temp0 = _mm256_movemask_ps(zmm2)
int64_t r8 = sx.q(arg3)
int64_t rsi = r8 * 3
float zmm11[0x4] = arg1[r8 + 0xe]
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm11, zmm11)
float temp0_2[0x4] = _mm_broadcastss_ps(zmm11)
float temp0_3[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_2)
float temp0_4[0x4] = _mm_broadcast_ss(arg1[r8][0x39])
float temp0_5[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_4)
float temp0_6[0x4] = _mm_broadcast_ss(arg1[r8][0x3b])
float temp0_7[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_6)
zmm2[0].o = _mm_permute_pd(zmm2[0].o, 1)
zmm2[0].o = zmm2[0].o f* arg1[r8][0x3a]
uint32_t zmm1[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_3, temp0_5, 0x88), 0xd8)
float temp0_11[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_7, zmm1)
zmm1 = __vsubps_xmmdq_xmmdq_xmmdq(zmm1, temp0_7)
float temp0_15[0x4] = _mm_permute_ps(
    __vshufps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_11, temp0_5, 0x4e), 
        temp0_3, 0xc), 
    0x78)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm2[0].o, 0x1c)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, temp0_5, 0x60)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_15, zmm2[0].o)
zmm2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(1f), zmm2[0].o)
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_11, (*arg1)[rsi + 0x19], 0x1d)
float temp0_22[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_11, (*arg1)[rsi + 0x1a], 0x2b)
float zmm4[0x4] = (*arg1)[rsi + 0x18]
float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, _mm_broadcastss_ps(zmm2[0].o))
float temp0_26[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm1, 0xea), temp0_21, temp0_24)
float temp0_28[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_11, 0xd5), temp0_22, temp0_26)
float temp0_29[0x4] = _mm_permute_ps(temp0_11, 0xea)
float temp0_32[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(zmm2[0].o, 0xd5)), zmm4, temp0_29)
float temp0_34[0x4] = _mm_fmadd_ps(_mm_broadcastss_ps(zmm1), temp0_22, temp0_32)
float temp0_35[0x4] = _mm_permute_ps(zmm1, 0xd5)
float temp0_38[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_broadcastss_ps(temp0_11)), zmm4, temp0_35)
float temp0_40[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm2[0].o, 0xea), temp0_22, temp0_38)
float temp0_42[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, temp0_11, 0x9c), zmm1, 0x60)
float temp0_44[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1, 0x8c), temp0_11, 0x20)
float temp0_47[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_11, temp0_11, 0x4e), zmm1, 0x14), 
    zmm2[0].o, 4)
zmm1 = _mm_broadcastss_ps(temp0_28)
zmm2[0].o = _mm_permute_ps(temp0_28, 0xd5)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, zmm2[0].o)
zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, temp0_42, zmm1)
zmm1 = _mm_fmadd_ps(_mm_permute_ps(temp0_28, 0xea), temp0_47, zmm2[0].o)
zmm2[0].o = _mm_broadcastss_ps(temp0_34)
float temp0_57[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, _mm_permute_ps(temp0_34, 0xd5)), temp0_42, zmm2[0].o)
zmm2[0].o = _mm_broadcastss_ps(temp0_40)
float temp0_61[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, _mm_permute_ps(temp0_40, 0xd5)), temp0_42, zmm2[0].o)
float temp0_62[0x4] = _mm_broadcast_ss(*arg8)
float temp0_63[0x4] = _mm_broadcast_ss(arg8[1])
float zmm5[0x4] = arg8[2]
zmm2[0].o = __vmovsd_xmmdq_memq(*arg8)
float temp0_66[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_34, 0xea), temp0_47, temp0_57)
float temp0_68[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_40, 0xea), temp0_47, temp0_61)
float temp0_70[0x4] = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_63, temp0_66), zmm1, temp0_62)
zmm1 = _mm_fmadd_ps(_mm_broadcastss_ps(zmm5), temp0_68, temp0_70)
float temp0_73[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5, 0x20)
float temp0_74[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_73, zmm1)
zmm1 = __vmovshdup_xmmdq_xmmdq(temp0_74)
zmm2[0].o = _mm_permute_pd(temp0_74, 1)
float zmm6[0x4] = zmm2[0].o f+ (temp0_74 f+ zmm1[0])[0]
float zmm7[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_57, temp0_57)
float zmm0[0x4]
float zmm12[0x4]

if (temp0 != 0xff)
    if (not(zmm9 f<= 9.99999975e-05f))
        zmm0 = arg1[r8 + 0x15]
        zmm1 = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, zmm0)
        zmm2[0].o = _mm_permute_pd(zmm1, 1)
        zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, zmm2[0].o)
        zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm1)
        zmm1 = zmm1 f+ zmm2[0]
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm1 = _mm_cmp_ss(zmm2[0].o, zmm1[0], 2)
        zmm2[0].o = 0x3f800000
        zmm1 = _mm_fmsub_ps(
            _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm1)), 
            zmm11, zmm0)
        float temp0_117[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0, data_142d3f690)
        zmm2[0].o = _mm_broadcastss_ps(zmm1)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_117, 0xdb), zmm2[0].o)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142fc92a0)
        float temp0_122[0x4] = _mm_permute_ps(zmm1, 0xff)
        zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, temp0_117, temp0_122)
        float temp0_124[0x4] = _mm_permute_ps(zmm1, 0xd5)
        float temp0_127[0x4] = __vfmadd132ps_xmmdq_xmmdq_memdq(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(temp0_117, 1), temp0_124), zmm2[0].o, 
            data_142fc92b0)
        zmm1 = _mm_permute_ps(zmm1, 0xea)
        float temp0_131[0x4] = __vfmadd132ps_xmmdq_xmmdq_memdq(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_117, 0xf1), zmm1), temp0_127, 
            data_142fc92c0)
        float temp0_133[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_73, __vaddps_xmmdq_xmmdq_xmmdq(temp0_131, temp0_131))
        zmm1 = __vmovshdup_xmmdq_xmmdq(temp0_133)
        zmm2[0].o = _mm_permute_pd(temp0_133, 1)
        zmm7 = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o f+ (temp0_133 f+ zmm1[0])[0], 
            _mm_broadcast_ss(-0f))
    
    zmm11 = 0x3f800000
    
    if ((arg7 & 1) != 0)
        zmm2[0].o = 0x3f800000 f/ zmm6[0]
    else
        zmm2[0].o = 0x3f800000
    
    zmm0 = zmm2[0].o f* zmm8[0] f* arg4[0] f* arg4[0]
    zmm1 = zmm2[0].o f* zmm9[0] f* arg4[0]
    zmm2[0].o = zmm1 f+ zmm0[0]
    zmm2[0].o = _mm_fmadd_ss(zmm2[0].o, zmm6[0], 1f)
    zmm2[0].o = 0x3f800000 f/ zmm2[0]
    zmm10 = _mm_fmsub_ss(zmm10, zmm0[0], (zmm1 f* zmm7[0])[0])
    zmm12 = *arg10
    zmm0 = zmm2[0].o f* (zmm10 f- zmm12[0])[0]
    zmm2[0].o = zmm6 f* zmm0[0]
    float temp0_176[0x4] = _mm_broadcast_ss(-0f)
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_176)
    zmm2[0].o = _mm_broadcastss_ps(zmm2[0].o)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_73, zmm2[0].o)
    zmm6 = arg1[r8 + 0xe]
    arg4 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_176, temp0_176)
    float temp0_181[0x4] = _mm_broadcastss_ps(zmm2[0].o)
    float temp0_183[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0x1b), temp0_181)
    zmm5 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
    float temp0_186[0x4] = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_183, zmm5), zmm6, arg4)
    float temp0_187[0x4] = _mm_permute_ps(zmm2[0].o, 0x55)
    float temp0_189[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm6, 1), temp0_187)
    zmm9 = data_142d3f7d0
    float temp0_190[0x4] = _mm_fmadd_ps(temp0_189, zmm9, temp0_186)
    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xaa)
    float temp0_193[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0xb1), zmm2[0].o)
    zmm8 = data_142d3f7b0
    float temp0_194[0x4] = _mm_fmadd_ps(temp0_193, zmm8, temp0_190)
    zmm2[0].o = _mm_broadcastss_ps(0x3f000000)
    zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, temp0_194, zmm6)
    float temp0_197[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    float temp0_199[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_197, _mm_permute_pd(temp0_197, 1))
    zmm6 = temp0_199 f+ __vmovshdup_xmmdq_xmmdq(temp0_199)[0]
    arg4 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm6[0], 6), 0xffffffff)
    zmm7 = zmm6 f* 0.5f
    float temp0_203[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm6, zmm6[0])
    zmm1 = _mm_fmadd_ss(_mm_fnmadd_ss(temp0_203 f* temp0_203[0], zmm7[0], 0.5f), temp0_203[0], 
        temp0_203[0])
    zmm1 = _mm_broadcastss_ps(_mm_fmadd_ss(_mm_fnmadd_ss(zmm1 f* zmm1[0], zmm7[0], 0.5f), zmm1[0], 
        zmm1[0]))
    zmm1 = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1)
else
    if (not(zmm9 f<= 9.99999975e-05f))
        zmm0 = arg1[r8 + 0x15]
        zmm1 = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, zmm0)
        zmm2[0].o = _mm_permute_pd(zmm1, 1)
        zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, zmm2[0].o)
        zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm1)
        zmm1 = zmm1 f+ zmm2[0]
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm1 = _mm_cmp_ss(zmm2[0].o, zmm1[0], 2)
        zmm2[0].o = 0x3f800000
        zmm1 = _mm_fmsub_ps(
            _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm1)), 
            zmm11, zmm0)
        float temp0_87[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0, data_142d3f690)
        zmm2[0].o = _mm_broadcastss_ps(zmm1)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_87, 0xdb), zmm2[0].o)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142fc92a0)
        float temp0_92[0x4] = _mm_permute_ps(zmm1, 0xff)
        zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, temp0_87, temp0_92)
        float temp0_94[0x4] = _mm_permute_ps(zmm1, 0xd5)
        float temp0_97[0x4] = __vfmadd132ps_xmmdq_xmmdq_memdq(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(temp0_87, 1), temp0_94), zmm2[0].o, 
            data_142fc92b0)
        zmm1 = _mm_permute_ps(zmm1, 0xea)
        float temp0_101[0x4] = __vfmadd132ps_xmmdq_xmmdq_memdq(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_87, 0xf1), zmm1), temp0_97, 
            data_142fc92c0)
        float temp0_103[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_73, __vaddps_xmmdq_xmmdq_xmmdq(temp0_101, temp0_101))
        zmm1 = __vmovshdup_xmmdq_xmmdq(temp0_103)
        zmm2[0].o = _mm_permute_pd(temp0_103, 1)
        zmm7 = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o f+ (temp0_103 f+ zmm1[0])[0], 
            _mm_broadcast_ss(-0f))
    
    zmm11 = 0x3f800000
    
    if ((arg7 & 1) != 0)
        zmm4 = 0x3f800000 / zmm6[0]
    else
        zmm4 = 0x3f800000
    
    zmm0 = zmm4 f* zmm8[0] f* arg4[0] f* arg4[0]
    zmm1 = zmm4 f* zmm9[0] f* arg4[0]
    arg4 = 0x3f800000 / _mm_fmadd_ss(zmm1 f+ zmm0[0], zmm6[0], 1f)[0]
    zmm10 = _mm_fmsub_ss(zmm10, zmm0[0], (zmm1 f* zmm7[0])[0])
    zmm12 = *arg10
    zmm0 = arg4 f* (zmm10 f- zmm12[0])[0]
    float temp0_142[0x4] =
        _mm_broadcastss_ps(__vxorps_xmmdq_xmmdq_xmmdq(zmm6 f* zmm0[0], _mm_broadcast_ss(-0f)))
    float temp0_143[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_73, temp0_142)
    zmm6 = arg1[r8 + 0xe]
    arg4 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_142, temp0_142)
    float temp0_145[0x4] = _mm_broadcastss_ps(temp0_143)
    float temp0_147[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0x1b), temp0_145)
    zmm5 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
    float temp0_150[0x4] = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_147, zmm5), zmm6, arg4)
    float temp0_151[0x4] = _mm_permute_ps(temp0_143, 0x55)
    zmm2[0].o = _mm_permute_pd(zmm6, 1)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_151)
    zmm9 = data_142d3f7d0
    zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm9, temp0_150)
    float temp0_155[0x4] = _mm_permute_ps(temp0_143, 0xaa)
    float temp0_157[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0xb1), temp0_155)
    zmm8 = data_142d3f7b0
    float temp0_158[0x4] = _mm_fmadd_ps(temp0_157, zmm8, zmm2[0].o)
    zmm2[0].o = 0x3f000000
    float temp0_160[0x4] = _mm_fmadd_ps(_mm_broadcastss_ps(0x3f000000), temp0_158, zmm6)
    float temp0_161[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_160, temp0_160)
    float temp0_163[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_161, _mm_permute_pd(temp0_161, 1))
    zmm6 = temp0_163 f+ __vmovshdup_xmmdq_xmmdq(temp0_163)[0]
    arg4 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm6[0], 6), 0xffffffff)
    zmm7 = zmm6 f* 0.5f
    float temp0_167[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm6, zmm6[0])
    zmm1 = _mm_fmadd_ss(_mm_fnmadd_ss(temp0_167 f* temp0_167[0], zmm7[0], 0.5f), temp0_167[0], 
        temp0_167[0])
    zmm1 = __vmulps_xmmdq_xmmdq_xmmdq(temp0_160, 
        _mm_broadcastss_ps(_mm_fmadd_ss(_mm_fnmadd_ss(zmm1 f* zmm1[0], zmm7[0], 0.5f), zmm1[0], 
            zmm1[0])))

zmm2[0].o = _mm_broadcastss_ps(arg4)
zmm1 = __vandps_xmmdq_xmmdq_xmmdq(zmm1, zmm2[0].o)
zmm2[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142d3f660)
arg1[r8 + 0xe] = __vorps_xmmdq_xmmdq_xmmdq(zmm1, zmm2[0].o)
zmm1 = arg1[0xf]
zmm2[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm1, arg1[0xe])
arg4 = _mm_permute_pd(zmm2[0].o, 1)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4)
float temp0_217[0x4] = __vmovshdup_xmmdq_xmmdq(zmm2[0].o)
zmm2[0].o = zmm2[0].o f+ temp0_217[0]
zmm10 = __vxorps_xmmdq_xmmdq_xmmdq(zmm10, zmm10)
zmm2[0].o = _mm_cmp_ss(zmm10, zmm2[0], 2)
zmm2[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, zmm11, zmm2[0].o)
zmm2[0].o = _mm_broadcastss_ps(zmm2[0].o)
arg1[0xf] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1, zmm2[0].o)
zmm1 = arg1[r8 + 0xe][0]
zmm2[0].o = arg1[r8][0x39]
arg4 = arg1[r8][0x3a]
zmm4 = arg1[rsi][6]
float temp0_224[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg4, 0x10), zmm1, 0x20)
zmm1 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm1, 0x10)
arg4 = arg1[rsi + 1][0]
zmm1 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm2[0].o, 0x20)
zmm2[0].o = __vmovsd_xmmdq_memq(*(&arg1[rsi] + 0x14))
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg4, 0x20)
float temp0_230[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, arg4, 0x10), arg1[rsi][5], 0x20)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1, zmm2[0].o)
zmm2[0].o = _mm_fmsub_ps(zmm2[0].o, temp0_224, temp0_230)
arg4 = __vmovsd_xmmdq_memq(arg1[rsi + 1][0].q)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
float temp0_235[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x20)
float temp0_237[0x4] = _mm_fmadd_ps(_mm_broadcast_ss(arg1[r8][0x3b]), zmm2[0].o, temp0_235)
float temp0_238[0x4] = _mm_permute_ps(zmm2[0].o, 0xd2)
zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xc9)
zmm1 = _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1, zmm2[0].o), temp0_224, temp0_238)
zmm2[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rsi << 2) + 0xc0))
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, (*arg1)[rsi + 0x32], 0x20)
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(temp0_237, zmm1)
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1)
(*arg1)[rsi + 0x20] = zmm1[0]
(*arg1)[rsi + 0x21] = __vextractps_memd_xmmdq_immb(zmm1, 1)
(*arg1)[rsi + 0x22] = __vextractps_memd_xmmdq_immb(zmm1, 2)
*arg10 = (zmm12 f+ zmm0[0])[0]
float temp0_248[0x4] = _mm_broadcast_ss(arg1[r8][0x3b])
zmm1 = arg1[rsi]
zmm2[0].o = _mm_broadcast_ss(arg1[r8 + 0xe][0])
arg4 = arg1[rsi][3]
zmm4 = arg1[rsi][2]
zmm6 = arg1[rsi][1]
float temp0_252[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10), zmm6, 
        0x20), 
    zmm1, 0x30)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_252)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5)
zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm1, temp0_248)
float temp0_256[0x4] = _mm_broadcast_ss(arg1[r8][0x39])
float temp0_261[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rsi] + 8)), zmm1, 0x20), 
            zmm6, 0x30), 
        temp0_256), 
    zmm9, zmm2[0].o)
zmm2[0].o = _mm_broadcast_ss(arg1[r8][0x3a])
arg1[r8 + 0xa] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm1, 0x10), arg4, 0x20), 
            zmm4, 0x30), 
        zmm2[0].o), 
    zmm8, temp0_261)
zmm0 = arg1[0xb]
zmm1 = __vmulps_xmmdq_xmmdq_memdq(zmm0, arg1[0xa])
zmm2[0].o = _mm_permute_pd(zmm1, 1)
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, zmm2[0].o)
zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm1)
arg1[0xb] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, 
    _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, zmm11, 
        _mm_cmp_ss(zmm10, (zmm1 f+ zmm2[0])[0], 2))))
_mm256_zeroupper()
return &arg1[r8 + 0xe]
