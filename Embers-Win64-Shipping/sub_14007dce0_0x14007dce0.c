// 函数: sub_14007dce0
// 地址: 0x14007dce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg17[0].o
int128_t var_68 = arg16[0].o
int128_t var_78 = arg15[0].o
int128_t var_88 = arg14[0].o
int128_t var_98 = arg13[0].o
int128_t var_a8 = arg12[0].o
int128_t var_b8 = arg11[0].o
int128_t var_c8 = arg10[0].o
int128_t var_d8 = arg9[0].o
int128_t var_e8 = arg8[0].o
double* r13 = arg1
float zmm0[0x8] = *arg25
int32_t rcx = arg24
int32_t* var_7a0 = arg4
double* var_7c0 = r13
double* var_6c0 = arg3
uint32_t zmm1[0x8]
int128_t var_8b0
int32_t var_700
int64_t var_6e0
int64_t var_640
int64_t var_620
int64_t var_600
int64_t var_5e0
int64_t var_5c0
int64_t var_5a0
int64_t var_580
int64_t var_560
int32_t zmm3[0x8]

if (_mm256_movemask_ps(zmm0) != 0xff)
    float var_520_1[0x8] = zmm0
    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
    float var_4c0_1[0x8] = arg7
    float var_4e0_1[0x8] = arg7
    zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
    zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, data_142fc9560)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    uint32_t var_830_1 = zmm1[0]
    float temp0_489 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_500_1[0x8] = arg7
    float temp0_490 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm1[0].o = __vmovsd_xmmdq_memq(*r13)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r13[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_840_1 = zmm0[0]
    float temp0_494 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_495 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rax_52 = ((rcx s>> 0x1f u>> 0x1d) + rcx) & 0xfffffff8
    int32_t rax_53
    
    if (rax_52 s<= 0)
        rax_53 = 0
        
        if (0 s< rcx)
        label_140081073:
            float var_800_6[0x8] = arg7
            zmm0[0].o = zx.o(rax_53)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg16[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
            arg5[0].o = zx.o(rcx)
            arg14[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg17[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg16[0].o)
            arg7 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
            arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg17[0].o)
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg16[0].o)
            var_7a0.32 = zmm0
            arg11 = _mm256_insertf128_ps(zmm0, arg13[0].o, 1)
            arg7 = _mm256_and_ps(arg11, arg7)
            int64_t rax_157 = sx.q(arg7[0])
            void* r14_8 = arg20 + (rax_157 << 2)
            arg8[0].o = *(arg20 + (rax_157 << 2))
            int64_t rcx_123 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            void* rdi_29 = arg20 + (rcx_123 << 2)
            int64_t r12_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            void* r15_6 = arg20 + (r12_9 << 2)
            int64_t rsi_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            void* r11_8 = arg20 + (rsi_29 << 2)
            arg9[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            int64_t rdx_87 = sx.q(arg9[0])
            arg7[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_123 << 2)), 0x10)
            int32_t temp0_1590 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            arg8[0].o = *(arg20 + (rdx_87 << 2))
            int64_t rcx_125 = sx.q(temp0_1590)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_125 << 2)), 0x10)
            void* rdx_88 = arg20 + (rdx_87 << 2)
            void* r10_8 = arg20 + (rcx_125 << 2)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg20 + (r12_9 << 2)), 0x20)
            int32_t temp0_1593 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            arg15[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg20 + (rsi_29 << 2)), 0x30)
            int64_t rcx_127 = sx.q(temp0_1593)
            int64_t rsi_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_127 << 2)), 0x20)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rsi_31 << 2)), 0x30)
            void* rcx_128 = arg20 + (rcx_127 << 2)
            void* rax_161 = arg20 + (rsi_31 << 2)
            arg9 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9520)
            arg10 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9540)
            zmm3[0].o = *(zx.q(arg10[0].d) + r14_8)
            uint64_t rsi_33 = zx.q(arg9[0])
            arg6[0].o = *(rsi_33 + r14_8)
            arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            zmm0[0].o = *(zx.q(arg7[0]) + rdx_88)
            uint64_t rsi_35 = zx.q(arg5[0])
            zmm1[0].o = *(rsi_35 + rdx_88)
            uint64_t rdx_89 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_89 + r10_8), 0x10)
            uint64_t rdx_90 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_90 + r10_8), 0x10)
            uint64_t rdx_91 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_91 + rcx_128), 0x20)
            uint64_t rdx_92 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_92 + rcx_128), 0x20)
            uint64_t rcx_129 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_129 + rax_161), 0x30)
            uint64_t rcx_130 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_130 + rax_161), 0x30)
            uint64_t rcx_131 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_131 + rdi_29), 0x10)
            uint64_t rax_162 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_162 + rdi_29), 0x10)
            uint64_t rcx_132 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_132 + r15_6), 0x20)
            uint64_t rax_163 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_163 + r15_6), 0x20)
            uint64_t rcx_133 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_133 + r11_8), 0x30)
            uint64_t rax_164 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_164 + r11_8), 0x30)
            arg6 = _mm256_insertf128_ps(arg15, arg8[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
            uint32_t var_380_2[0x8] = zmm1
            arg7[0].o = zx.o(0)
            float temp0_1629[0x8] = _mm256_broadcast_ss(arg19[3])
            float var_8c0_7[0x8] = temp0_1629
            float var_8a0_7[0x8] = temp0_1629
            float var_880_10[0x8] = temp0_1629
            float var_860_4[0x8] = temp0_1629
            zmm3 = _mm256_broadcast_ss(arg19[1])
            float temp0_1631[0x8] = _mm256_mul_ps(zmm0, zmm3)
            float temp0_1632[0x8] = _mm256_broadcast_ss(arg19[2])
            arg10 = _mm256_mul_ps(arg6, temp0_1632)
            float temp0_1634[0x8] = _mm256_broadcast_ss(*arg19)
            float temp0_1635[0x8] = _mm256_mul_ps(zmm1, temp0_1632)
            zmm1 = _mm256_mul_ps(zmm1, temp0_1634)
            float temp0_1637[0x8] = _mm256_sub_ps(temp0_1631, temp0_1635)
            float temp0_1638[0x8] = _mm256_mul_ps(temp0_1629, arg7)
            float temp0_1640[0x8] = _mm256_sub_ps(arg10, _mm256_mul_ps(zmm0, temp0_1634))
            zmm1 = _mm256_sub_ps(zmm1, _mm256_mul_ps(arg6, zmm3))
            zmm3 = _mm256_sub_ps(temp0_1638, temp0_1638)
            float temp0_1644[0x8] = _mm256_add_ps(temp0_1637, temp0_1637)
            float temp0_1645[0x8] = _mm256_add_ps(temp0_1640, temp0_1640)
            zmm1 = _mm256_add_ps(zmm1, zmm1)
            zmm3 = _mm256_add_ps(zmm3, zmm3)
            float var_780_7[0x8] = temp0_1644
            float var_760_7[0x8] = temp0_1645
            uint32_t var_740_7[0x8] = zmm1
            int32_t var_720_4[0x8] = zmm3
            float temp0_1648[0x8] = _mm256_mul_ps(temp0_1629, temp0_1644)
            float temp0_1649[0x8] = _mm256_mul_ps(temp0_1629, temp0_1645)
            arg10 = _mm256_mul_ps(temp0_1629, zmm1)
            float temp0_1651[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1648, arg6)
            float temp0_1652[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1649, var_380_2)
            arg10 = __vaddps_ymmqq_ymmqq_memqq(arg10, zmm0)
            float var_180_2[0x8] = temp0_1651
            float var_160_2[0x8] = temp0_1652
            double var_140_2[0x4] = arg10
            float var_120_2[0x8] = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_1629, zmm3), arg7)
            float temp0_1656[0x8] = _mm256_broadcast_ss(arg19[1])
            zmm3 = _mm256_mul_ps(zmm1, temp0_1656)
            float temp0_1658[0x8] = _mm256_broadcast_ss(arg19[2])
            zmm3 = _mm256_sub_ps(zmm3, _mm256_mul_ps(temp0_1645, temp0_1658))
            arg12 = _mm256_broadcast_ss(*arg19)
            float temp0_1662[0x8] = _mm256_mul_ps(temp0_1645, arg12)
            zmm1 = _mm256_mul_ps(zmm1, arg12)
            zmm1 = _mm256_sub_ps(_mm256_mul_ps(temp0_1644, temp0_1658), zmm1)
            float temp0_1667[0x8] = _mm256_sub_ps(temp0_1662, _mm256_mul_ps(temp0_1644, temp0_1656))
            float temp0_1668[0x8] = _mm256_add_ps(temp0_1651, zmm3)
            zmm1 = _mm256_add_ps(temp0_1652, zmm1)
            float temp0_1670[0x8] = _mm256_add_ps(arg10, temp0_1667)
            zmm3 = _mm256_broadcast_ss(arg19[4])
            float temp0_1672[0x8] = _mm256_add_ps(temp0_1668, zmm3)
            arg5 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg19[5]))
            zmm1 = _mm256_broadcast_ss(arg19[6])
            arg12 = _mm256_add_ps(temp0_1670, zmm1)
            float temp0_1677[0x8] = _mm256_broadcast_ss(var_830_1)
            float temp0_1678[0x8] = _mm256_cmp_ps(temp0_1677, temp0_1672, 1)
            temp0_1670[0].o = _mm256_extractf128_ps(temp0_1678[0].o, 1)
            temp0_1670[0].o &= arg13[0].o
            arg13 = arg5
            zmm1[0].o = __vandps_xmmdq_xmmdq_memdq(temp0_1678[0].o, var_7a0.o)
            temp0_1670[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1670[0].o)
            temp0_1670[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1670[0].o, temp0_1670[0].o)
            float var_2e0_1[0x8] = arg5
            double var_2c0_1[0x4] = arg12
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1670[0].o) != 0)
                var_8c0_7 = _mm256_maskstore_ps(temp0_1678, temp0_1677)
            
            arg7 = _mm256_insertf128_ps(arg16, arg17[0].o, 1)
            double temp0_1686[0x4] = _mm256_insertf128_ps(arg14, arg14[0].o, 1)
            zmm0 = _mm256_andnot_ps(temp0_1678, arg11)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0 = _mm256_xor_ps(temp0_1678, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                arg5 = _mm256_broadcast_ss(var_840_1)
                zmm1 = _mm256_cmp_ps(temp0_1672, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg11)) != 0)
                    var_8c0_7 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                zmm1 = _mm256_and_ps(zmm0, arg11)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_8c0_7 = _mm256_maskstore_ps(zmm0, temp0_1672)
            
            var_700.32 = temp0_1672
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(temp0_1686[0].o, arg7[0].o)
            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(temp0_1686[0].o, 1)
            temp0_1672[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1 = _mm256_broadcast_ss(temp0_489)
            float temp0_1707[0x8] = _mm256_cmp_ps(zmm1, arg13, 1)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1707[0].o, 1)
            zmm3[0].o &= temp0_1672[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1707[0].o, arg5[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1707[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                var_8a0_7 = _mm256_maskstore_ps(temp0_1707, zmm1)
            
            zmm1 = _mm256_andnot_ps(temp0_1707, arg11)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm0 = _mm256_xor_ps(temp0_1707, _mm256_cmp_ps(zmm1, zmm1, 0xf))
                arg5 = _mm256_broadcast_ss(temp0_494)
                zmm1 = _mm256_cmp_ps(arg13, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg11)) != 0)
                    var_8a0_7 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg11)) != 0)
                    var_8a0_7 = _mm256_maskstore_ps(zmm0, arg13)
            
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(temp0_1686[0].o, arg7[0].o)
            zmm1 = _mm256_broadcast_ss(temp0_490)
            float temp0_1731[0x8] = _mm256_cmp_ps(zmm1, arg12, 1)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1731[0].o, 1)
            zmm3[0].o &= temp0_1672[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1731[0].o, arg5[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1731[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                var_880_10 = _mm256_maskstore_ps(temp0_1731, zmm1)
            
            var_7c0.32 = temp0_1686
            arg5[0].o = zx.o(0)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_1731, arg11)) != 0)
                zmm0 = _mm256_xor_ps(temp0_1731, _mm256_cmp_ps(arg5, arg5, 0xf))
                arg5 = _mm256_broadcast_ss(temp0_495)
                zmm1 = _mm256_cmp_ps(arg12, arg5, 1)
                int32_t temp0_1744[0x8] = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(temp0_1744, arg11)) != 0)
                    var_880_10 = _mm256_maskstore_ps(temp0_1744, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg11)) != 0)
                    var_880_10 = _mm256_maskstore_ps(zmm0, arg12)
            
            var_5c0.32 = arg13
            var_5a0.32 = arg12
            arg11 = _mm256_broadcast_ss(*r13)
            float temp0_1753[0x8] = _mm256_sub_ps(var_8c0_7, arg11)
            float temp0_1754[0x8] = _mm256_broadcast_ss(*(r13 + 4))
            zmm1 = _mm256_sub_ps(var_8a0_7, temp0_1754)
            float temp0_1756[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_1757[0x8] = _mm256_div_ps(temp0_1753, temp0_1756)
            float temp0_1758[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, temp0_1758)
            arg5[0].o = arg3[1].d
            zmm3 = _mm256_cvttps_epi32(temp0_1757)
            zmm0 = _mm256_cvttps_epi32(zmm1)
            float temp0_1764[0x8] =
                _mm256_add_ps(_mm256_mul_ps(temp0_1758, _mm256_cvtepi32_ps(zmm0)), temp0_1754)
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 0x20)
            temp0_1754[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
            zmm1[0].o = _mm_permute_ps(temp0_1754[0].o, 0x55)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            uint32_t var_420_2[0x8] = zmm1
            zmm1 = _mm256_add_ps(zmm1, temp0_1764)
            temp0_1764[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            temp0_1758[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_1758[0].o, temp0_1758[0].o)
            temp0_1764[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1764[0].o, temp0_1758[0].o)
            temp0_1758[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1758[0].o)
            arg12 = _mm256_insertf128_ps(temp0_1758, temp0_1764[0].o, 1)
            arg16 = _mm256_cmp_ps(zmm1, var_8a0_7, 1)
            temp0_1764[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            temp0_1764[0].o &= temp0_1672[0].o
            var_7a0.32 = arg7
            arg6 = var_7c0.32
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
            arg7[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            temp0_1764[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_1764[0].o)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0)
            arg7 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
            float temp0_1783[0x8] = _mm256_broadcast_ss(r13[1].d)
            int32_t var_660_1
            var_660_1.32 = var_880_10
            arg10 = _mm256_div_ps(_mm256_sub_ps(var_880_10, temp0_1783), arg7)
            temp0_1764[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1764[0].o, temp0_1764[0].o)
            char temp0_1787 = __vpmovmskb_gpr32d_xmmdq(temp0_1764[0].o)
            arg5 = _mm256_cvttps_epi32(arg10)
            float temp0_1790[0x8] = _mm256_mul_ps(temp0_1756, _mm256_cvtepi32_ps(zmm3))
            arg10 = _mm256_mul_ps(arg7, _mm256_cvtepi32_ps(arg5))
            uint32_t var_3e0_2[0x8] = arg11
            float temp0_1793[0x8] = _mm256_add_ps(temp0_1790, arg11)
            float temp0_1794[0x8] = _mm256_add_ps(arg10, temp0_1783)
            arg10[0].o = _mm_permute_ps(temp0_1754[0].o, 0)
            double temp0_1796[0x4] = _mm256_insertf128_ps(arg10, arg10[0].o, 1)
            float temp0_1797[0x8] = _mm256_add_ps(temp0_1796, temp0_1793)
            temp0_1754[0].o = _mm_permute_ps(temp0_1754[0].o, 0xaa)
            arg17 = _mm256_blendv_ps(arg12, zmm3, _mm256_cmp_ps(temp0_1797, var_8c0_7, 1))
            arg8 = _mm256_insertf128_ps(temp0_1754, temp0_1754[0].o, 1)
            float var_8c0_8[0x8] = arg17
            zmm1 = _mm256_cmp_ps(zmm1, var_8a0_7, 5)
            
            if (temp0_1787 != 0)
                zmm3 = zmm0
            
            float temp0_1803[0x8] = _mm256_add_ps(arg8, temp0_1794)
            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg5[0].o &= temp0_1672[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1803[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                arg12 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            
            arg11 = _mm256_blendv_ps(arg12, zmm3, arg16)
            uint32_t var_8a0_8[0x8] = arg11
            arg14 = var_660_1.32
            zmm1 = _mm256_cmp_ps(temp0_1803, arg14, 5)
            arg16 = _mm256_cmp_ps(temp0_1803, arg14, 1)
            temp0_1803[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            temp0_1803[0].o &= temp0_1672[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            temp0_1803[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1803[0].o)
            temp0_1803[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1803[0].o, temp0_1803[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1803[0].o) != 0)
                zmm3 = arg5
            
            temp0_1803[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            temp0_1803[0].o &= temp0_1672[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            temp0_1803[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1803[0].o)
            temp0_1803[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1803[0].o, temp0_1803[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1803[0].o) != 0)
                temp0_1803[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                temp0_1803[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1803[0].o, zmm1[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                arg12 = _mm256_insertf128_ps(zmm1, temp0_1803[0].o, 1)
            
            float temp0_1832[0x8] = _mm256_blendv_ps(arg12, zmm3, arg16)
            zmm3 = temp0_1756
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(arg17)), 
                var_3e0_2)
            float temp0_1838[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(temp0_1758, _mm256_cvtepi32_ps(arg11)), temp0_1754)
            float var_880_11[0x8] = temp0_1832
            float temp0_1841[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg7, _mm256_cvtepi32_ps(temp0_1832)), temp0_1783)
            zmm1 = _mm256_add_ps(temp0_1796, zmm1)
            float temp0_1843[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1838, var_420_2)
            float temp0_1844[0x8] = _mm256_add_ps(arg8, temp0_1841)
            arg10 = var_8c0_7
            zmm1 = _mm256_div_ps(_mm256_sub_ps(arg10, zmm1), zmm3)
            float temp0_1848[0x8] = _mm256_div_ps(_mm256_sub_ps(var_8a0_7, temp0_1843), temp0_1758)
            zmm0 = _mm256_div_ps(_mm256_sub_ps(arg14, temp0_1844), arg7)
            uint32_t var_780_8[0x8] = zmm1
            float var_760_8[0x8] = temp0_1848
            float var_740_8[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, zmm1[0].o)
            temp0_1848[0].o = zmm0[0].o & temp0_1672[0].o
            zmm3[0].o = zmm1[0].o & arg6[0].o
            temp0_1848[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1848[0].o)
            temp0_1848[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1848[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1848[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(0)
                var_8c0_8 = _mm256_maskstore_ps(zmm0, zmm1)
                var_780_8 = _mm256_maskstore_ps(zmm0, zmm1)
                arg17 = var_8c0_8
            
            zmm1 = __vsubps_ymmqq_ymmqq_memqq(arg10, var_700.32)
            arg11 = var_7a0.32
            arg13 = var_7c0.32
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            int32_t rax_183 = *arg4
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm3[0].o = zx.o(rax_183 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, zmm3[0].o)
            arg7[0].o = zmm0[0].o & temp0_1672[0].o
            arg6[0].o &= zmm3[0].o
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                zmm3[0].o = zx.o(rax_183 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_8c0_8 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_780_8 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
            
            zmm3 = __vsubps_ymmqq_ymmqq_memqq(var_8a0_7, var_5c0.32)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_8[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_8[4].o)
            var_8a0_7[0].o = arg6[0].o & temp0_1672[0].o
            arg7[0].o &= zmm0[0].o
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, var_8a0_7[0].o)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                arg6[0].o = zx.o(0)
                var_8a0_8 = _mm256_maskstore_ps(zmm0, arg6)
                var_760_8 = _mm256_maskstore_ps(zmm0, arg6)
            
            arg6 = var_8a0_8
            arg7[0].o = zx.o(0)
            float temp0_1887[0x8] = _mm256_sub_ps(arg14, var_5a0.32)
            zmm1 = _mm256_add_ps(zmm1, arg7)
            arg5 = _mm256_mul_ps(zmm3, zmm3)
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            int32_t rdx_94 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            var_8a0_7[0].o = zx.o(rdx_94 - 1)
            var_8a0_7[0].o = __vpshufd_xmmdq_xmmdq_immb(var_8a0_7[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_8a0_7[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8a0_7[0].o)
            var_8a0_7[0].o = zmm3[0].o & temp0_1672[0].o
            arg7[0].o &= arg6[0].o
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, var_8a0_7[0].o)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_1887[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
                zmm3 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
                arg6[0].o = zx.o(rdx_94 - 2)
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
                var_8a0_8 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(arg6, arg6[0].o, 1))
                arg6 = data_142fc95a0
                var_760_8 = _mm256_maskstore_ps(zmm3, arg6)
            
            zmm1 = _mm256_add_ps(zmm1, arg5)
            float temp0_1904[0x8] = _mm256_mul_ps(temp0_1887, temp0_1887)
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_880_11[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_880_11[4].o)
            arg7[0].o = zmm3[0].o & temp0_1672[0].o
            arg6[0].o &= arg5[0].o
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1904[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_880_11 = _mm256_maskstore_ps(arg5, zmm3)
                var_740_8 = _mm256_maskstore_ps(arg5, zmm3)
            
            arg10 = var_880_11
            zmm0 = _mm256_add_ps(zmm1, temp0_1904)
            var_5a0.32 = zmm0
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            int32_t rdx_97 = arg4[2]
            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            zmm1[0].o = zx.o(rdx_97 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            arg17[0].o = temp0_1672[0].o
            zmm3[0].o = zmm0[0].o & temp0_1672[0].o
            arg5[0].o &= zmm1[0].o
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(rdx_97 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                float temp0_1927[0x8] =
                    _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_740_8 = _mm256_maskstore_ps(zmm0, zmm1)
                arg10 = temp0_1927
            
            zmm0[0].o = zx.o(*(arg18 + 4))
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm1[0].o = var_8c0_8[0].o
            arg7[0].o = var_8b0
            arg6[0].o = var_8a0_8[0].o
            arg12[0].o = var_8a0_8[4].o
            arg16[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            temp0_1672[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
            var_8a0_7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1672[0].o, arg12[0].o)
            var_8c0_7[0].o = var_8a0_7[0].o
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            var_660_1.o = zmm3[0].o
            arg5[0].o = zx.o(*(arg18 + 8))
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            temp0_1758[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            var_8a0_7[0].o = temp0_1758[0].o
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_8a0_7[0].o, arg5[0].o)
            var_700.o = zmm3[0].o
            arg14[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            var_8a0_7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1758[0].o, arg10[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            var_8a0_7[0].o = __vpslld_xmmdq_xmmdq_immb(var_8a0_7[0].o, 2)
            zmm3 = _mm256_insertf128_ps(zmm3, var_8a0_7[0].o, 1)
            int32_t var_6a0_4[0x8] = zmm3
            var_8a0_7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_8a0_7[0].o, var_8a0_7[0].o)
            zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, var_8a0_7[0].o)
            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8a0_7[0].o)
            arg11[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg7[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            temp0_1758[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
            temp0_1758[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_1758[0].o, arg5[0].o)
            temp0_1758[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1758[0].o, arg14[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            temp0_1758[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1758[0].o, 2)
            zmm3 = _mm256_insertf128_ps(zmm3, temp0_1758[0].o, 1)
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg13[0].o, var_7a0.o)
            var_5c0.32 = zmm1
            arg13 = _mm256_insertf128_ps(zmm1, arg17[0].o, 1)
            int32_t temp0_1959[0x8] = _mm256_and_ps(arg13, zmm3)
            int32_t temp0_1960 = __vextractps_gpr32_xmmdq_immb(temp0_1959[0].o, 1)
            int32_t temp0_1961 = __vextractps_gpr32_xmmdq_immb(temp0_1959[0].o, 2)
            int32_t temp0_1962 = __vextractps_gpr32_xmmdq_immb(temp0_1959[0].o, 3)
            int32_t rdx_99 = temp0_1959[0]
            temp0_1959[0].o = _mm256_extractf128_ps(temp0_1959[0].o, 1)
            int32_t temp0_1964 = __vpextrd_gpr32d_xmmdq_immb(temp0_1959[0].o, 1)
            int32_t temp0_1965 = __vpextrd_gpr32d_xmmdq_immb(temp0_1959[0].o, 2)
            int32_t temp0_1966 = __vpextrd_gpr32d_xmmdq_immb(temp0_1959[0].o, 3)
            float* rcx_137 = *(arg18 + 0x10)
            temp0_1959[0].o = *(rcx_137 + sx.q(temp0_1959[0]))
            temp0_1959[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1959[0].o, 
                *(rcx_137 + sx.q(temp0_1964)), 0x10)
            arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8a0_7[0].o)
            var_8a0_7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_8a0_7[0].o)
            temp0_1959[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1959[0].o, 
                *(rcx_137 + sx.q(temp0_1965)), 0x20)
            arg12[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1959[0].o, 
                *(rcx_137 + sx.q(temp0_1966)), 0x30)
            temp0_1959[0].o = *(rcx_137 + sx.q(rdx_99))
            temp0_1959[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1959[0].o, 
                *(rcx_137 + sx.q(temp0_1960)), 0x10)
            temp0_1758[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1672[0].o, var_8a0_7[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            temp0_1758[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_1758[0].o, arg5[0].o)
            temp0_1758[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1758[0].o, arg14[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            temp0_1758[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1758[0].o, 2)
            zmm1 = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm1, temp0_1758[0].o, 1))
            int32_t temp0_1983 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1984 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1985 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3)
            uint32_t rax_189 = zmm1[0]
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            int32_t temp0_1987 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1988 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1989 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            uint32_t r13_7 = zmm1[0]
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1959[0].o, 
                *(rcx_137 + sx.q(temp0_1961)), 0x20)
            temp0_1672[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_137 + sx.q(temp0_1962)), 0x30)
            zmm1[0].o = *(rcx_137 + sx.q(r13_7))
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_137 + sx.q(temp0_1987)), 0x10)
            var_8a0_7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, var_8a0_7[0].o)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_137 + sx.q(temp0_1988)), 0x20)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
            arg7[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_137 + sx.q(temp0_1989)), 0x30)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(arg13, var_6a0_4)
            var_6a0_4[0] = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
            temp0_1758[0].o = *(rcx_137 + sx.q(rax_189))
            temp0_1758[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1758[0].o, 
                *(rcx_137 + sx.q(temp0_1983)), 0x10)
            int32_t temp0_2000 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
            var_8a0_7[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_8a0_7[0].o, arg5[0].o)
            var_8a0_7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_8a0_7[0].o, arg14[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            var_8a0_7[0].o = __vpslld_xmmdq_xmmdq_immb(var_8a0_7[0].o, 2)
            arg6 = _mm256_insertf128_ps(arg6, var_8a0_7[0].o, 1)
            var_8a0_7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1758[0].o, 
                *(rcx_137 + sx.q(temp0_1984)), 0x20)
            uint32_t r11_10 = zmm1[0]
            var_8a0_7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_7[0].o, 
                *(rcx_137 + sx.q(temp0_1985)), 0x30)
            int32_t temp0_2010 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg6 = _mm256_and_ps(arg13, arg6)
            int32_t temp0_2013 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_2014 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            uint32_t rbx_76 = zmm1[0]
            int32_t temp0_2015 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            int64_t rdx_107 = sx.q(zmm1[0])
            int32_t temp0_2017 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 1)
            int32_t temp0_2018 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 2)
            int32_t temp0_2019 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 3)
            float r14_9 = arg6[0]
            arg6[0].o = *(rcx_137 + rdx_107)
            int64_t rdx_109 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_137 + rdx_109), 0x10)
            int32_t temp0_2022 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_2023 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rcx_137 + sx.q(r14_9))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_137 + sx.q(temp0_2022)), 0x20)
            temp0_1758[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_137 + sx.q(temp0_2023)), 0x30)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_137 + sx.q(temp0_2017)), 0x10)
            int64_t r14_11 = sx.q(r11_10)
            int64_t r11_11 = sx.q(var_6a0_4[0])
            int64_t r8_19 = sx.q(temp0_2000)
            int64_t rbx_77 = sx.q(rbx_76)
            int64_t rdx_112 = sx.q(temp0_2013)
            int64_t rax_193 = sx.q(temp0_2014)
            int64_t r10_11 = sx.q(temp0_2015)
            arg6[0].o = *(rcx_137 + rbx_77)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_137 + rdx_112), 0x10)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_137 + rax_193), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_137 + r10_11), 0x30)
            int64_t rdi_35 = sx.q(temp0_2010)
            temp0_1959[0].o = *(rcx_137 + r14_11)
            temp0_1959[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1959[0].o, *(rcx_137 + r11_11), 0x10)
            temp0_1959[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1959[0].o, *(rcx_137 + r8_19), 0x20)
            temp0_1959[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1959[0].o, *(rcx_137 + rdi_35), 0x30)
            zmm3 = _mm256_insertf128_ps(temp0_1959, arg6[0].o, 1)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_137 + sx.q(temp0_2018)), 0x20)
            arg11[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_137 + sx.q(temp0_2019)), 0x30)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, var_8c0_7[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, var_660_1.o)
            arg15 = _mm256_add_ps(zmm3, 
                _mm256_mul_ps(var_780_8, 
                    _mm256_sub_ps(_mm256_insertf128_ps(temp0_1672, arg12[0].o, 1), zmm3)))
            zmm3[0].o = *(rsi_35 + rcx_137 + rbx_77)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_90 + rcx_137 + rdx_112), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_92 + rcx_137 + rax_193), 0x20)
            arg7 = _mm256_insertf128_ps(var_8a0_7, arg7[0].o, 1)
            var_8a0_7[0].o = *(rsi_33 + rcx_137 + r14_11)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
            float temp0_2049[0x8] = _mm256_mul_ps(var_780_8, 
                _mm256_sub_ps(_mm256_insertf128_ps(arg11, temp0_1758[0].o, 1), arg7))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_130 + rcx_137 + r10_11), 0x30)
            var_8a0_7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_7[0].o, 
                *(rax_162 + rcx_137 + r11_11), 0x10)
            var_8a0_7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_7[0].o, 
                *(rax_163 + rcx_137 + r8_19), 0x20)
            arg11 = _mm256_add_ps(arg7, temp0_2049)
            var_8a0_7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_7[0].o, 
                *(rax_164 + rcx_137 + rdi_35), 0x30)
            arg8 = _mm256_insertf128_ps(var_8a0_7, zmm3[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg14[0].o)
            temp0_2049[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
            temp0_2049[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_2049[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_2061[0x8] =
                _mm256_and_ps(arg13, _mm256_insertf128_ps(temp0_2049, zmm3[0].o, 1))
            int64_t rax_198 = sx.q(temp0_2061[0])
            int32_t temp0_2062 = __vpextrd_gpr32d_xmmdq_immb(temp0_2061[0].o, 1)
            int32_t temp0_2063 = __vpextrd_gpr32d_xmmdq_immb(temp0_2061[0].o, 2)
            temp0_2049[0].o = _mm256_extractf128_ps(temp0_2061[0].o, 1)
            arg7[0].o = *(rsi_35 + sx.q(temp0_2049[0]) + rcx_137)
            void* rdi_42 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_2049[0].o, 1)) + rcx_137
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_90 + rdi_42), 0x10)
            void* rdi_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_2049[0].o, 2)) + rcx_137
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_92 + rdi_45), 0x20)
            int32_t temp0_2069 = __vpextrd_gpr32d_xmmdq_immb(temp0_2061[0].o, 3)
            temp0_2061[0].o = *(rsi_33 + rax_198 + rcx_137)
            void* rax_202 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_2049[0].o, 3)) + rcx_137
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_130 + rax_202), 0x30)
            temp0_2061[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2061[0].o, 
                *(rax_162 + sx.q(temp0_2062) + rcx_137), 0x10)
            temp0_2061[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2061[0].o, 
                *(rax_163 + sx.q(temp0_2063) + rcx_137), 0x20)
            temp0_2061[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2061[0].o, 
                *(rax_164 + sx.q(temp0_2069) + rcx_137), 0x30)
            zmm3 = _mm256_mul_ps(var_780_8, 
                _mm256_sub_ps(_mm256_insertf128_ps(temp0_2061, arg7[0].o, 1), arg8))
            arg12 = _mm256_add_ps(arg8, zmm3)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_700.o)
            arg7[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg8[0].o, var_8a0_7[0].o)
            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_2086[0x8] = _mm256_and_ps(arg13, _mm256_insertf128_ps(arg7, zmm3[0].o, 1))
            void* rdx_119 = sx.q(temp0_2086[0]) + rcx_137
            int32_t temp0_2087 = __vpextrd_gpr32d_xmmdq_immb(temp0_2086[0].o, 1)
            int32_t temp0_2088 = __vpextrd_gpr32d_xmmdq_immb(temp0_2086[0].o, 2)
            int32_t temp0_2089 = __vpextrd_gpr32d_xmmdq_immb(temp0_2086[0].o, 3)
            arg7[0].o = *(rsi_33 + rdx_119)
            temp0_2086[0].o = _mm256_extractf128_ps(temp0_2086[0].o, 1)
            temp0_2049[0].o = *(rsi_35 + sx.q(temp0_2086[0]) + rcx_137)
            void* rdx_125 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_2086[0].o, 1)) + rcx_137
            temp0_2049[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2049[0].o, *(rdx_90 + rdx_125), 0x10)
            void* rdx_128 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_2086[0].o, 2)) + rcx_137
            temp0_2049[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2049[0].o, *(rdx_92 + rdx_128), 0x20)
            void* rdx_131 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_2086[0].o, 3)) + rcx_137
            temp0_2086[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2049[0].o, *(rcx_130 + rdx_131), 0x30)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                *(rax_162 + sx.q(temp0_2087) + rcx_137), 0x10)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                *(rax_163 + sx.q(temp0_2088) + rcx_137), 0x20)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                *(rax_164 + sx.q(temp0_2089) + rcx_137), 0x30)
            arg9 = _mm256_insertf128_ps(arg7, temp0_2086[0].o, 1)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            zmm0 = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm0, arg5[0].o, 1))
            void* rdx_133 = sx.q(zmm0[0]) + rcx_137
            int32_t temp0_2107 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2108 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2109 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            arg5[0].o = *(rsi_33 + rdx_133)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            temp0_2086[0].o = *(rsi_35 + sx.q(zmm0[0]) + rcx_137)
            int32_t temp0_2111 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2112 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2113 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2086[0].o, 
                *(rdx_90 + sx.q(temp0_2111) + rcx_137), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rdx_92 + sx.q(temp0_2112) + rcx_137), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rcx_130 + sx.q(temp0_2113) + rcx_137), 0x30)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                *(rax_162 + sx.q(temp0_2107) + rcx_137), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                *(rax_163 + sx.q(temp0_2108) + rcx_137), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                *(rax_164 + sx.q(temp0_2109) + rcx_137), 0x30)
            float temp0_2123[0x8] = _mm256_add_ps(arg9, 
                _mm256_mul_ps(var_780_8, 
                    _mm256_sub_ps(_mm256_insertf128_ps(arg5, zmm0[0].o, 1), arg9)))
            zmm1 = var_760_8
            float temp0_2126[0x8] =
                _mm256_add_ps(arg15, _mm256_mul_ps(_mm256_sub_ps(arg11, arg15), zmm1))
            zmm0 = _mm256_add_ps(temp0_2126, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(arg12, 
                            _mm256_mul_ps(zmm1, _mm256_sub_ps(temp0_2123, arg12))), 
                        temp0_2126), 
                    var_740_8))
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm3 = var_5a0.32
            zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
            temp0_2126[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_5c0.o)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o &= arg17[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_2126[0].o, zmm1[0].o)
            temp0_2126[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_2126[0].o) != 0)
                float temp0_2140[0x8] = _mm256_rsqrt_ps(zmm3)
                zmm3 = _mm256_mul_ps(temp0_2140, _mm256_mul_ps(zmm3, temp0_2140))
                float temp0_2145[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_2140, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                zmm3 = _mm256_rcp_ps(temp0_2145)
                float temp0_2147[0x8] = _mm256_mul_ps(zmm3, temp0_2145)
                float temp0_2150[0x8] = _mm256_add_ps(zmm0, 
                    _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, temp0_2147)))
                zmm3[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                zmm0 = _mm256_blendv_ps(zmm0, temp0_2150, zmm1)
            
            zmm3 = var_7a0.32
            arg6 = var_7c0.32
            zmm1[0].o = arg21
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            zmm0 = _mm256_sub_ps(zmm0, zmm1)
            arg5 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
            zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            zmm1[0].o &= arg17[0].o
            arg6[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) == 0)
                arg7 = var_800_6
            else
                zmm3 = _mm256_insertf128_ps(zmm3, arg17[0].o, 1)
                float temp0_2167[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_1672)
                float temp0_2168[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_2e0_1)
                float temp0_2169[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_2c0_1)
                arg6 = __vaddps_ymmqq_ymmqq_memqq(temp0_2167, var_500_1)
                float temp0_2171[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_2168, var_4e0_1)
                arg8 = __vaddps_ymmqq_ymmqq_memqq(temp0_2169, var_4c0_1)
                arg5 = _mm256_and_ps(arg5, zmm3)
                var_500_1 = _mm256_maskstore_ps(arg5, arg6)
                var_4e0_1 = _mm256_maskstore_ps(arg5, temp0_2171)
                var_4c0_1 = _mm256_maskstore_ps(arg5, arg8)
                zmm0 = _mm256_add_ps(var_800_6, zmm0)
                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                arg7 = _mm256_blendv_ps(var_800_6, zmm0, zmm1)
    else
        zmm0[0].o = arg21
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
        float var_680_2[0x8] = zmm0
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int32_t rdi_2 = 0
        rax_53 = 0
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        
        do
            int64_t rcx_53 = sx.q(rdi_2)
            zmm0[0].o = *(arg20 + rcx_53)
            zmm1[0].o = *(arg20 + rcx_53 + 0x10)
            arg5[0].o = *(arg20 + rcx_53 + 0x20)
            zmm3[0].o = *(arg20 + rcx_53 + 0x30)
            arg6[0].o = *(arg20 + rcx_53 + 0x40)
            arg7[0].o = *(arg20 + rcx_53 + 0x50)
            arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xec)
            arg9[0].o = _mm_permute_ps(arg5[0].o, 0x44)
            arg10[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 8)
            arg9[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg6[0].o, 0xec)
            arg8[0].o = _mm_permute_ps(arg7[0].o, 0x44)
            arg11[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg9[0].o, arg8[0].o, 8)
            arg9[0].o = _mm_permute_ps(zmm0[0].o, 0xe5)
            arg8[0].o = _mm_permute_ps(zmm1[0].o, 0xf0)
            arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 1)
            arg9[0].o = _mm_permute_ps(arg5[0].o, 0xa4)
            arg12[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 8)
            arg9[0].o = _mm_permute_ps(zmm3[0].o, 0xe5)
            arg8[0].o = _mm_permute_ps(arg6[0].o, 0xf0)
            arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 1)
            arg9[0].o = _mm_permute_ps(arg7[0].o, 0xa4)
            arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 8)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 2)
            zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0xc4)
            zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0x4e)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 2)
            zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg7[0].o, 0xc4)
            arg5 = _mm256_insertf128_ps(arg10, arg11[0].o, 1)
            zmm3 = _mm256_insertf128_ps(arg12, arg8[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            int32_t var_760_3[0x8] = zmm3
            float var_720_2[0x8] = arg14
            zmm1 = _mm256_broadcast_ss(arg19[3])
            uint32_t var_8c0_3[0x8] = zmm1
            uint32_t var_8a0_3[0x8] = zmm1
            uint32_t var_880_4[0x8] = zmm1
            uint32_t var_860_2[0x8] = zmm1
            arg6 = _mm256_broadcast_ss(arg19[1])
            float temp0_527[0x8] = _mm256_mul_ps(arg6, zmm0)
            float temp0_528[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_529[0x8] = _mm256_mul_ps(temp0_528, arg5)
            arg10 = _mm256_broadcast_ss(*arg19)
            arg11 = _mm256_mul_ps(arg10, zmm3)
            zmm3 = _mm256_sub_ps(temp0_527, _mm256_mul_ps(temp0_528, zmm3))
            float temp0_535[0x8] = _mm256_sub_ps(temp0_529, _mm256_mul_ps(arg10, zmm0))
            float temp0_537[0x8] = _mm256_sub_ps(arg11, _mm256_mul_ps(arg6, arg5))
            zmm3 = _mm256_add_ps(zmm3, zmm3)
            float temp0_539[0x8] = _mm256_add_ps(temp0_535, temp0_535)
            float temp0_540[0x8] = _mm256_add_ps(temp0_537, temp0_537)
            float temp0_541[0x8] = _mm256_mul_ps(zmm1, zmm3)
            float temp0_542[0x8] = _mm256_mul_ps(zmm1, temp0_539)
            float temp0_543[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_541, arg5)
            float temp0_544[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_542, var_760_3)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm1, temp0_540), zmm0)
            arg11 = _mm256_mul_ps(temp0_540, arg6)
            arg12 = _mm256_mul_ps(zmm3, temp0_528)
            float temp0_549[0x8] = _mm256_mul_ps(temp0_539, arg10)
            float temp0_552[0x8] =
                _mm256_add_ps(temp0_543, _mm256_sub_ps(arg11, _mm256_mul_ps(temp0_539, temp0_528)))
            float temp0_555[0x8] =
                _mm256_add_ps(temp0_544, _mm256_sub_ps(arg12, _mm256_mul_ps(temp0_540, arg10)))
            zmm1 = _mm256_add_ps(zmm1, _mm256_sub_ps(temp0_549, _mm256_mul_ps(zmm3, arg6)))
            zmm3 = _mm256_broadcast_ss(arg19[4])
            float temp0_560[0x8] = _mm256_add_ps(temp0_552, zmm3)
            float temp0_562[0x8] = _mm256_add_ps(temp0_555, _mm256_broadcast_ss(arg19[5]))
            float temp0_564[0x8] = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg19[6]))
            float temp0_565[0x8] = _mm256_broadcast_ss(var_830_1)
            zmm1 = _mm256_cmp_ps(temp0_565, temp0_560, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_8c0_3 = _mm256_maskstore_ps(zmm1, temp0_565)
            
            float temp0_569[0x8] = _mm256_cmp_ps(arg14, arg14, 0xf)
            zmm1 = _mm256_xor_ps(zmm1, temp0_569)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = _mm256_broadcast_ss(var_840_1)
                float temp0_573[0x8] = _mm256_cmp_ps(temp0_560, zmm3, 1)
                arg6 = _mm256_and_ps(temp0_573, zmm1)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_8c0_3 = _mm256_maskstore_ps(arg6, zmm3)
                
                zmm1 = _mm256_andnot_ps(temp0_573, zmm1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_8c0_3 = _mm256_maskstore_ps(zmm1, temp0_560)
            
            float temp0_580[0x8] = _mm256_broadcast_ss(temp0_489)
            zmm1 = _mm256_cmp_ps(temp0_580, temp0_562, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_8a0_3 = _mm256_maskstore_ps(zmm1, temp0_580)
            
            zmm1 = _mm256_xor_ps(zmm1, temp0_569)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = _mm256_broadcast_ss(temp0_494)
                float temp0_587[0x8] = _mm256_cmp_ps(temp0_562, zmm3, 1)
                arg6 = _mm256_and_ps(temp0_587, zmm1)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_8a0_3 = _mm256_maskstore_ps(arg6, zmm3)
                
                zmm1 = _mm256_andnot_ps(temp0_587, zmm1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_8a0_3 = _mm256_maskstore_ps(zmm1, temp0_562)
            
            float temp0_594[0x8] = _mm256_broadcast_ss(temp0_490)
            zmm1 = _mm256_cmp_ps(temp0_594, temp0_564, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_880_4 = _mm256_maskstore_ps(zmm1, temp0_594)
            
            zmm0 = _mm256_xor_ps(zmm1, temp0_569)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_600[0x8] = _mm256_broadcast_ss(temp0_495)
                zmm1 = _mm256_cmp_ps(temp0_564, temp0_600, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_880_4 = _mm256_maskstore_ps(zmm3, temp0_600)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_880_4 = _mm256_maskstore_ps(zmm0, temp0_564)
            
            var_620.32 = temp0_560
            var_600.32 = temp0_562
            var_5e0.32 = temp0_564
            arg12 = var_8c0_3
            arg8 = var_8a0_3
            arg5 = var_880_4
            float temp0_608[0x8] = _mm256_broadcast_ss(*r13)
            float temp0_609[0x8] = _mm256_sub_ps(arg12, temp0_608)
            float temp0_610[0x8] = _mm256_broadcast_ss(*(r13 + 4))
            zmm1 = _mm256_sub_ps(arg8, temp0_610)
            float temp0_612[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_613[0x8] = _mm256_div_ps(temp0_609, temp0_612)
            arg9 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, arg9)
            float temp0_616[0x8] = _mm256_broadcast_ss(r13[1].d)
            var_640.32 = arg5
            float temp0_617[0x8] = _mm256_sub_ps(arg5, temp0_616)
            zmm3[0].o = arg3[1].d
            arg6[0].o = _mm_permute_ps(zmm3[0].o, 0)
            double temp0_619[0x4] = _mm256_insertf128_ps(arg6, arg6[0].o, 1)
            float temp0_620[0x8] = _mm256_div_ps(temp0_617, temp0_619)
            arg6 = _mm256_cvttps_epi32(temp0_613)
            arg16 = _mm256_cvttps_epi32(zmm1)
            arg11 = _mm256_cvttps_epi32(temp0_620)
            float temp0_625[0x8] = _mm256_mul_ps(temp0_612, _mm256_cvtepi32_ps(arg6))
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x20)
            temp0_620[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            temp0_620[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_620[0].o, zmm3[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            arg5 = _mm256_insertf128_ps(zmm3, temp0_620[0].o, 1)
            zmm3 = _mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg16))
            uint32_t var_7e0_2[0x8] = arg11
            arg11 = _mm256_mul_ps(temp0_619, _mm256_cvtepi32_ps(arg11))
            var_560.32 = temp0_608
            float temp0_637[0x8] = _mm256_add_ps(temp0_625, temp0_608)
            var_5a0.32 = temp0_610
            zmm3 = _mm256_add_ps(zmm3, temp0_610)
            var_5c0.32 = temp0_616
            float temp0_639[0x8] = _mm256_add_ps(arg11, temp0_616)
            zmm1[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
            arg11[0].o = _mm_permute_ps(zmm1[0].o, 0)
            arg13 = _mm256_insertf128_ps(arg11, arg11[0].o, 1)
            float temp0_643[0x8] = _mm256_add_ps(arg13, temp0_637)
            arg11[0].o = _mm_permute_ps(zmm1[0].o, 0x55)
            arg14 = _mm256_insertf128_ps(arg11, arg11[0].o, 1)
            arg11 = _mm256_add_ps(arg14, zmm3)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
            arg15 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            var_580.32 = arg12
            zmm3 = _mm256_blendv_ps(arg5, arg6, _mm256_cmp_ps(temp0_643, arg12, 1))
            int32_t var_8c0_4[0x8] = zmm3
            zmm1 = _mm256_cmp_ps(arg11, arg8, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                arg6 = arg16
            
            float temp0_653[0x8] = _mm256_add_ps(arg15, temp0_639)
            var_6e0.32 = arg8
            arg11 = _mm256_cmp_ps(arg11, arg8, 5)
            arg8[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            arg8[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, arg8[0].o)
            arg8[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg8[0].o, temp0_653[0].o)
            bool cond:1_1 = __vpmovmskb_gpr32d_xmmdq(arg8[0].o) == 0
            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            
            if (not(cond:1_1))
                arg5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg11[0].o)
                arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
            
            arg16 = _mm256_blendv_ps(arg5, arg6, zmm1)
            double var_8a0_4[0x4] = arg16
            arg17 = var_640.32
            zmm1 = _mm256_cmp_ps(temp0_653, arg17, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                arg6 = var_7e0_2
            
            float temp0_667[0x8] = _mm256_cmp_ps(temp0_653, arg17, 5)
            arg8[0].o = _mm256_extractf128_ps(temp0_667[0].o, 1)
            temp0_667[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_667[0].o, arg8[0].o)
            temp0_667[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_667[0].o, temp0_667[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_667[0].o) != 0)
                arg5 = var_7e0_2
                temp0_667[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                temp0_667[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_667[0].o, arg11[0].o)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                arg5 = _mm256_insertf128_ps(arg5, temp0_667[0].o, 1)
            
            float temp0_676[0x8] = _mm256_blendv_ps(arg5, arg6, zmm1)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_612, _mm256_cvtepi32_ps(zmm3)), 
                var_560.32)
            float temp0_682[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg16)), var_5a0.32)
            float var_880_5[0x8] = temp0_676
            float temp0_685[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(temp0_619, _mm256_cvtepi32_ps(temp0_676)), var_5c0.32)
            zmm1 = _mm256_add_ps(arg13, zmm1)
            float temp0_687[0x8] = _mm256_add_ps(arg14, temp0_682)
            float temp0_688[0x8] = _mm256_add_ps(arg15, temp0_685)
            arg12 = var_580.32
            zmm1 = _mm256_div_ps(_mm256_sub_ps(arg12, zmm1), temp0_612)
            arg8 = var_6e0.32
            float temp0_692[0x8] = _mm256_div_ps(_mm256_sub_ps(arg8, temp0_687), arg9)
            float temp0_694[0x8] = _mm256_div_ps(_mm256_sub_ps(arg17, temp0_688), temp0_619)
            uint32_t var_780_4[0x8] = zmm1
            float var_760_4[0x8] = temp0_692
            float var_740_4[0x8] = temp0_694
            temp0_694[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            temp0_694[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_694[0].o, arg11[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, temp0_694[0].o, 1)
            bool cond:4_1 = _mm256_movemask_ps(zmm0) == 0
            temp0_612[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_612[0].o, temp0_612[0].o)
            arg6 = var_600.32
            
            if (not(cond:4_1))
                var_8c0_4 = _mm256_maskstore_ps(zmm0, temp0_612)
                var_780_4 = _mm256_maskstore_ps(zmm0, temp0_612)
                zmm3 = var_8c0_4
            
            int32_t rcx_71 = *arg4
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm1[0].o = zx.o(rcx_71 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm3 = var_620.32
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rcx_71 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                var_8c0_4 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                var_780_4 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_8a0_4[0].o)
            temp0_692[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_8a0_4[2].o)
            zmm1 = _mm256_sub_ps(arg12, zmm3)
            zmm0 = _mm256_insertf128_ps(zmm0, temp0_692[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_8a0_4 = _mm256_maskstore_ps(zmm0, temp0_612)
                var_760_4 = _mm256_maskstore_ps(zmm0, temp0_612)
            
            arg5 = var_8a0_4
            float temp0_720[0x8] = _mm256_sub_ps(arg8, arg6)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            int32_t rcx_74 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            arg6[0].o = zx.o(rcx_74 - 1)
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                zmm3[0].o = zx.o(rcx_74 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_8a0_4 = _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_760_4 = _mm256_maskstore_ps(arg5, data_142fc95a0)
            
            float temp0_732[0x8] = __vsubps_ymmqq_ymmqq_memqq(arg17, var_5e0.32)
            zmm3 = _mm256_mul_ps(temp0_720, temp0_720)
            temp0_720[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_880_5[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_880_5[4].o)
            zmm1 = _mm256_add_ps(zmm1, temp0_612)
            zmm0 = _mm256_insertf128_ps(temp0_720, arg6[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_880_5 = _mm256_maskstore_ps(zmm0, temp0_612)
                var_740_4 = _mm256_maskstore_ps(zmm0, temp0_612)
            
            arg14 = var_880_5
            var_6e0.d = rdi_2
            float temp0_741[0x8] = _mm256_mul_ps(temp0_732, temp0_732)
            zmm1 = _mm256_add_ps(zmm1, zmm3)
            int32_t rcx_77 = arg4[2]
            temp0_732[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm3[0].o = zx.o(rcx_77 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            temp0_732[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_732[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
            arg5 = _mm256_insertf128_ps(zmm3, temp0_732[0].o, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                zmm3[0].o = zx.o(rcx_77 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                float temp0_751[0x8] =
                    _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                zmm3 = data_142fc95a0
                var_740_4 = _mm256_maskstore_ps(arg5, zmm3)
                arg14 = temp0_751
            
            float temp0_753[0x8] = _mm256_add_ps(zmm1, temp0_741)
            var_5e0.32 = temp0_753
            temp0_753[0].o = zx.o(*(arg18 + 4))
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_753[0].o, 0)
            arg6[0].o = var_8c0_4[0].o
            arg13[0].o = var_8b0
            arg8[0].o = var_8a0_4[0].o
            arg9[0].o = var_8a0_4[2].o
            arg15[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            temp0_619[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg8[0].o)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
            zmm1[0].o = zx.o(*(arg18 + 8))
            temp0_612[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg17[0].o, temp0_612[0].o)
            var_620.o = zmm1[0].o
            temp0_753[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_619[0].o, temp0_612[0].o)
            var_600.o = temp0_753[0].o
            temp0_753[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_753[0].o, arg14[0].o)
            arg11[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            temp0_753[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_753[0].o, 2)
            int32_t temp0_765 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 1)
            int32_t temp0_766 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 2)
            float rbx_25 = temp0_753[0]
            int32_t temp0_767 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 3)
            temp0_753[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
            float* rdi_3 = *(arg18 + 0x10)
            temp0_753[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_753[0].o, 2)
            int64_t r15_2 = sx.q(rbx_25)
            int64_t r14_2 = sx.q(temp0_765)
            int64_t rax_57 = sx.q(temp0_766)
            int64_t r13_3 = sx.q(temp0_753[0])
            int64_t rsi_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 1))
            int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 2))
            int32_t temp0_772 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 3)
            temp0_753[0].o = *(rdi_3 + r13_3)
            temp0_753[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_753[0].o, *(rdi_3 + rsi_11), 0x10)
            temp0_753[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_753[0].o, *(rdi_3 + r12_2), 0x20)
            int64_t r10_2 = sx.q(temp0_772)
            temp0_753[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_753[0].o, *(rdi_3 + r10_2), 0x30)
            zmm3[0].o = *(rdi_3 + r15_2)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_3 + r14_2), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_3 + rax_57), 0x20)
            int64_t r9_3 = sx.q(temp0_767)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_3 + r9_3), 0x30)
            double temp0_779[0x4] = _mm256_insertf128_ps(zmm3, temp0_753[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            temp0_753[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_753[0].o)
            temp0_619[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_619[0].o, arg5[0].o)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg5[0].o)
            temp0_753[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
            temp0_753[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_753[0].o, temp0_612[0].o)
            temp0_753[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_753[0].o, arg11[0].o)
            temp0_753[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_753[0].o, 2)
            int32_t temp0_791 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 1)
            int32_t temp0_792 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 2)
            int32_t temp0_793 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 3)
            float r8_8 = temp0_753[0]
            temp0_753[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
            temp0_753[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_753[0].o, temp0_612[0].o)
            temp0_753[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_753[0].o, arg14[0].o)
            temp0_753[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_753[0].o, 2)
            int32_t temp0_798 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 1)
            arg5[0].o = *(rdi_3 + sx.q(r8_8))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_791)), 0x10)
            int32_t temp0_800 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 2)
            int32_t temp0_801 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 3)
            float rax_58 = temp0_753[0]
            temp0_753[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_792)), 0x20)
            temp0_753[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_753[0].o, *(rdi_3 + sx.q(temp0_793)), 0x30)
            arg5[0].o = *(rdi_3 + sx.q(rax_58))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_798)), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_800)), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_801)), 0x30)
            zmm3 = _mm256_insertf128_ps(arg5, temp0_753[0].o, 1)
            temp0_753[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, temp0_753[0].o)
            arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, temp0_612[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, temp0_612[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg14[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            float rax_60 = arg9[0]
            int32_t temp0_818 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            int32_t temp0_819 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            int32_t temp0_820 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
            arg9[0].o = *(rdi_3 + sx.q(rax_60))
            int32_t temp0_821 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1)
            zmm3 = _mm256_sub_ps(zmm3, temp0_779)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_818)), 0x10)
            int32_t temp0_824 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_819)), 0x20)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_820)), 0x30)
            float rdx_26 = arg8[0]
            int32_t temp0_827 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3)
            arg15 = var_780_4
            zmm3 = _mm256_mul_ps(arg15, zmm3)
            arg8[0].o = *(rdi_3 + sx.q(rdx_26))
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_821)), 0x10)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_824)), 0x20)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_827)), 0x30)
            arg16 = _mm256_add_ps(temp0_779, zmm3)
            arg8 = _mm256_insertf128_ps(arg8, arg9[0].o, 1)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
            temp0_753[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_753[0].o)
            temp0_753[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_753[0].o, temp0_612[0].o)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_612[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
            temp0_753[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_753[0].o, arg11[0].o)
            temp0_753[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_753[0].o, 2)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            int64_t rax_65 = sx.q(arg5[0])
            int64_t rcx_92 = sx.q(temp0_753[0])
            int32_t temp0_842 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 1)
            zmm3[0].o = *(rdi_3 + rcx_92)
            int32_t temp0_843 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 2)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_3 + sx.q(temp0_842)), 0x10)
            int32_t temp0_845 = __vpextrd_gpr32d_xmmdq_immb(temp0_753[0].o, 3)
            temp0_753[0].o = *(rdi_3 + rax_65)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_3 + sx.q(temp0_843)), 0x20)
            int64_t rax_68 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_3 + sx.q(temp0_845)), 0x30)
            int32_t temp0_849 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            temp0_753[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_753[0].o, *(rdi_3 + rax_68), 0x10)
            int32_t temp0_851 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg6[0].o = *(rdi_3 + r13_3 + 4)
            temp0_753[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_753[0].o, *(rdi_3 + sx.q(temp0_849)), 0x20)
            temp0_753[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_753[0].o, *(rdi_3 + sx.q(temp0_851)), 0x30)
            zmm0 = _mm256_insertf128_ps(temp0_753, zmm3[0].o, 1)
            arg9[0].o = *(rdi_3 + r15_2 + 4)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg17[0].o, temp0_612[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_619[0].o, temp0_612[0].o)
            float temp0_858[0x8] = _mm256_mul_ps(arg15, _mm256_sub_ps(zmm0, arg8))
            arg10 = _mm256_add_ps(arg8, temp0_858)
            temp0_858[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_3 + rsi_11 + 4), 0x10)
            temp0_858[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_858[0].o, *(rdi_3 + r12_2 + 4), 0x20)
            temp0_858[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_858[0].o, *(rdi_3 + r10_2 + 4), 0x30)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + r14_2 + 4), 0x10)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_3 + rax_57 + 4), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_3 + r9_3 + 4), 0x30)
            arg6 = _mm256_insertf128_ps(arg6, temp0_858[0].o, 1)
            temp0_858[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            temp0_858[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_858[0].o, 2)
            float rax_72 = temp0_858[0]
            int32_t temp0_871 = __vpextrd_gpr32d_xmmdq_immb(temp0_858[0].o, 1)
            int32_t temp0_872 = __vpextrd_gpr32d_xmmdq_immb(temp0_858[0].o, 2)
            int32_t temp0_873 = __vpextrd_gpr32d_xmmdq_immb(temp0_858[0].o, 3)
            temp0_858[0].o = *(rdi_3 + sx.q(rax_72) + 4)
            int64_t rdx_32 = sx.q(arg8[0])
            int32_t temp0_874 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1)
            int32_t temp0_875 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            int32_t temp0_876 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3)
            arg8[0].o = *(rdi_3 + rdx_32 + 4)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_874) + 4), 0x10)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_875) + 4), 0x20)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_876) + 4), 0x30)
            temp0_858[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_858[0].o, 
                *(rdi_3 + sx.q(temp0_871) + 4), 0x10)
            temp0_858[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_858[0].o, 
                *(rdi_3 + sx.q(temp0_872) + 4), 0x20)
            temp0_858[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_858[0].o, 
                *(rdi_3 + sx.q(temp0_873) + 4), 0x30)
            zmm0 = _mm256_insertf128_ps(temp0_858, arg8[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_612[0].o, arg11[0].o)
            temp0_612[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_612[0].o, arg14[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_memdq(temp0_612[0].o, var_600.o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_620.o)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            int64_t rax_77 = sx.q(arg8[0])
            int32_t temp0_890 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1)
            int32_t temp0_891 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            int32_t temp0_892 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3)
            arg8[0].o = *(rdi_3 + rax_77 + 4)
            float rax_78 = arg9[0]
            int32_t temp0_893 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            int32_t temp0_894 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            int32_t temp0_895 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
            arg9[0].o = *(rdi_3 + sx.q(rax_78) + 4)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_893) + 4), 0x10)
            float temp0_898[0x8] = _mm256_mul_ps(arg15, _mm256_sub_ps(zmm0, arg6))
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_894) + 4), 0x20)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_895) + 4), 0x30)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_890) + 4), 0x10)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_891) + 4), 0x20)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_892) + 4), 0x30)
            float temp0_904[0x8] = _mm256_add_ps(arg6, temp0_898)
            arg6 = _mm256_insertf128_ps(arg8, arg9[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_612[0].o, zmm3[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_910 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int64_t rcx_104 = sx.q(zmm1[0])
            int32_t temp0_911 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_912 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_913 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rdi_3 + rcx_104 + 4)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_3 + sx.q(temp0_911) + 4), 0x10)
            float rcx_106 = arg5[0]
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_3 + sx.q(temp0_912) + 4), 0x20)
            int32_t temp0_916 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_3 + sx.q(temp0_913) + 4), 0x30)
            int32_t temp0_918 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = *(rdi_3 + sx.q(rcx_106) + 4)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_910) + 4), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_916) + 4), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_918) + 4), 0x30)
            zmm1 = _mm256_add_ps(arg6, 
                _mm256_mul_ps(arg15, _mm256_sub_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1), arg6)))
            arg5 = var_760_4
            zmm3 = _mm256_add_ps(arg16, _mm256_mul_ps(_mm256_sub_ps(arg10, arg16), arg5))
            zmm0 = _mm256_add_ps(zmm3, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(temp0_904, 
                            _mm256_mul_ps(arg5, _mm256_sub_ps(zmm1, temp0_904))), 
                        zmm3), 
                    var_740_4))
            zmm3 = var_5e0.32
            arg14[0].o = zx.o(0)
            zmm1 = _mm256_cmp_ps(zmm3, arg14, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_937[0x8] = _mm256_rsqrt_ps(zmm3)
                zmm3 = _mm256_mul_ps(temp0_937, _mm256_mul_ps(zmm3, temp0_937))
                float temp0_942[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_937, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                zmm3 = _mm256_rcp_ps(temp0_942)
                float temp0_944[0x8] = _mm256_mul_ps(zmm3, temp0_942)
                arg6 = data_142fc94c0
                arg5 = _mm256_add_ps(zmm0, _mm256_mul_ps(zmm3, _mm256_sub_ps(arg6, temp0_944)))
                zmm0 = _mm256_blendv_ps(zmm0, arg5, zmm1)
            
            arg4 = var_7a0
            r13 = var_7c0
            arg3 = var_6c0
            arg7 = arg7
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, var_680_2)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_952[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_560)
                zmm3 = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_562)
                float temp0_954[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_564)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_952, var_500_1)
                zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_4e0_1)
                arg6 = __vaddps_ymmqq_ymmqq_memqq(temp0_954, var_4c0_1)
                var_500_1 = _mm256_maskstore_ps(zmm1, arg5)
                var_4e0_1 = _mm256_maskstore_ps(zmm1, zmm3)
                var_4c0_1 = _mm256_maskstore_ps(zmm1, arg6)
                zmm0 = _mm256_add_ps(arg7, zmm0)
                arg7 = _mm256_blendv_ps(arg7, zmm0, zmm1)
            
            rcx = arg24
            rax_53 += 8
            rdi_2 = var_6e0.d + 0x60
        while (rax_53 s< rax_52)
        
        if (rax_53 s< rcx)
            goto label_140081073
    zmm3 = var_520_1
    zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    zmm0[0].o ^= arg5[0].o
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    zmm1[0].o ^= arg5[0].o
    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
    zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_500_1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    arg5 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_4e0_1)
    float temp0_2210[0x8] = _mm256_hadd_ps(arg5, arg5)
    float temp0_2211[0x8] = _mm256_hadd_ps(temp0_2210, temp0_2210)
    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    int32_t temp0_2213[0x8] = __vandps_ymmqq_ymmqq_memqq(zmm0, var_4c0_1)
    arg6[0].o = _mm256_extractf128_ps(temp0_2211[0].o, 1)
    zmm3 = _mm256_hadd_ps(temp0_2213, temp0_2213)
    temp0_2211[0].o = temp0_2211[0].o f+ arg6[0]
    zmm3 = _mm256_hadd_ps(zmm3, zmm3)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_2211[0].o, 0x10)
    temp0_2211[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    temp0_2211[0].o = zmm3[0].o f+ temp0_2211[0]
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_2211[0].o, 0x20)
    temp0_2211[0].o = __vmovsd_xmmdq_memq(*arg23)
    temp0_2211[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2211[0].o, arg23[1].d, 0x20)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_2211[0].o)
    *arg23 = zmm1[0]
    *(arg23 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    arg23[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0 = _mm256_and_ps(zmm0, arg7)
    zmm0 = _mm256_hadd_ps(zmm0, zmm0)
else
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    float var_460_1[0x8] = arg6
    float var_480_1[0x8] = arg6
    zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
    zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, data_142fc9560)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    uint32_t var_810_1 = zmm1[0]
    float temp0_8 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_4a0_1[0x8] = arg6
    float temp0_9 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm1[0].o = __vmovsd_xmmdq_memq(*r13)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r13[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_820_1 = zmm0[0]
    float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_14 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rax_6 = ((rcx s>> 0x1f u>> 0x1d) + rcx) & 0xfffffff8
    int32_t rax_7
    
    if (rax_6 s<= 0)
        rax_7 = 0
        
        if (0 s< rcx)
        label_14007fc65:
            var_5e0.32 = arg6
            zmm0[0].o = zx.o(rax_7)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg16[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
            arg5[0].o = zx.o(rcx)
            arg14[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg17[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg16[0].o)
            arg7 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
            arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg17[0].o)
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg16[0].o)
            int32_t var_800_4[0x4] = zmm0[0].o
            double temp0_974[0x4] = _mm256_insertf128_ps(zmm0, arg13[0].o, 1)
            arg7 = _mm256_and_ps(temp0_974, arg7)
            int64_t rax_89 = sx.q(arg7[0])
            void* r11_3 = arg20 + (rax_89 << 2)
            arg8[0].o = *(arg20 + (rax_89 << 2))
            int64_t rcx_109 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            void* r10_3 = arg20 + (rcx_109 << 2)
            int64_t rsi_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            void* r14_3 = arg20 + (rsi_16 << 2)
            int64_t rax_93 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            void* r15_3 = arg20 + (rax_93 << 2)
            arg9[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            int64_t rdx_40 = sx.q(arg9[0])
            arg7[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_109 << 2)), 0x10)
            int32_t temp0_981 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            arg8[0].o = *(arg20 + (rdx_40 << 2))
            int64_t rcx_111 = sx.q(temp0_981)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_111 << 2)), 0x10)
            void* rdx_41 = arg20 + (rdx_40 << 2)
            void* r12_3 = arg20 + (rcx_111 << 2)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg20 + (rsi_16 << 2)), 0x20)
            int32_t temp0_984 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            arg15[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg20 + (rax_93 << 2)), 0x30)
            int64_t rcx_113 = sx.q(temp0_984)
            int64_t rsi_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_113 << 2)), 0x20)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rsi_18 << 2)), 0x30)
            void* rcx_114 = arg20 + (rcx_113 << 2)
            void* rsi_19 = arg20 + (rsi_18 << 2)
            arg9 = __vandps_ymmqq_ymmqq_memqq(temp0_974, data_142fc9520)
            arg11 = __vandps_ymmqq_ymmqq_memqq(temp0_974, data_142fc9540)
            zmm3[0].o = *(zx.q(arg11[0]) + r11_3)
            uint64_t rax_94 = zx.q(arg9[0])
            arg6[0].o = *(rax_94 + r11_3)
            arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            arg7[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            zmm0[0].o = *(zx.q(arg7[0]) + rdx_41)
            uint64_t rax_95 = zx.q(arg5[0])
            zmm1[0].o = *(rax_95 + rdx_41)
            uint64_t rdx_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_42 + r12_3), 0x10)
            uint64_t rax_96 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_96 + r12_3), 0x10)
            uint64_t rdx_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_43 + rcx_114), 0x20)
            uint64_t rax_97 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_97 + rcx_114), 0x20)
            uint64_t rcx_115 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_115 + rsi_19), 0x30)
            uint64_t rax_98 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_98 + rsi_19), 0x30)
            uint64_t rcx_116 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 1))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_116 + r10_3), 0x10)
            uint64_t rax_99 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_99 + r10_3), 0x10)
            uint64_t rcx_117 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_117 + r14_3), 0x20)
            uint64_t rax_100 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_100 + r14_3), 0x20)
            uint64_t rcx_118 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_118 + r15_3), 0x30)
            uint64_t rax_101 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_101 + r15_3), 0x30)
            arg6 = _mm256_insertf128_ps(arg15, arg8[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
            uint32_t var_380_1[0x8] = zmm1
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            float temp0_1021[0x8] = _mm256_broadcast_ss(arg19[3])
            float var_8c0_5[0x8] = temp0_1021
            float var_8a0_5[0x8] = temp0_1021
            float var_880_7[0x8] = temp0_1021
            float var_860_3[0x8] = temp0_1021
            zmm3 = _mm256_broadcast_ss(arg19[1])
            float temp0_1023[0x8] = _mm256_mul_ps(zmm0, zmm3)
            float temp0_1024[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_1025[0x8] = _mm256_mul_ps(arg6, temp0_1024)
            float temp0_1026[0x8] = _mm256_broadcast_ss(*arg19)
            float temp0_1027[0x8] = _mm256_mul_ps(zmm1, temp0_1024)
            zmm1 = _mm256_mul_ps(zmm1, temp0_1026)
            float temp0_1029[0x8] = _mm256_sub_ps(temp0_1023, temp0_1027)
            float temp0_1030[0x8] = _mm256_mul_ps(temp0_1021, arg11)
            float temp0_1032[0x8] = _mm256_sub_ps(temp0_1025, _mm256_mul_ps(zmm0, temp0_1026))
            zmm1 = _mm256_sub_ps(zmm1, _mm256_mul_ps(arg6, zmm3))
            zmm3 = _mm256_sub_ps(temp0_1030, temp0_1030)
            float temp0_1036[0x8] = _mm256_add_ps(temp0_1029, temp0_1029)
            float temp0_1037[0x8] = _mm256_add_ps(temp0_1032, temp0_1032)
            zmm1 = _mm256_add_ps(zmm1, zmm1)
            zmm3 = _mm256_add_ps(zmm3, zmm3)
            float var_780_5[0x8] = temp0_1036
            float var_760_5[0x8] = temp0_1037
            uint32_t var_740_5[0x8] = zmm1
            int32_t var_720_3[0x8] = zmm3
            float temp0_1040[0x8] = _mm256_mul_ps(temp0_1021, temp0_1036)
            float temp0_1041[0x8] = _mm256_mul_ps(temp0_1021, temp0_1037)
            float temp0_1042[0x8] = _mm256_mul_ps(temp0_1021, zmm1)
            float temp0_1043[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1040, arg6)
            float temp0_1044[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1041, var_380_1)
            float temp0_1045[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1042, zmm0)
            float var_180_1[0x8] = temp0_1043
            float var_160_1[0x8] = temp0_1044
            float var_140_1[0x8] = temp0_1045
            float var_120_1[0x8] =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_1021, zmm3), arg11)
            float temp0_1048[0x8] = _mm256_broadcast_ss(arg19[1])
            zmm3 = _mm256_mul_ps(zmm1, temp0_1048)
            float temp0_1050[0x8] = _mm256_broadcast_ss(arg19[2])
            zmm3 = _mm256_sub_ps(zmm3, _mm256_mul_ps(temp0_1037, temp0_1050))
            arg12 = _mm256_broadcast_ss(*arg19)
            float temp0_1054[0x8] = _mm256_mul_ps(temp0_1037, arg12)
            zmm1 = _mm256_mul_ps(zmm1, arg12)
            zmm1 = _mm256_sub_ps(_mm256_mul_ps(temp0_1036, temp0_1050), zmm1)
            float temp0_1059[0x8] = _mm256_sub_ps(temp0_1054, _mm256_mul_ps(temp0_1036, temp0_1048))
            float temp0_1060[0x8] = _mm256_add_ps(temp0_1043, zmm3)
            zmm1 = _mm256_add_ps(temp0_1044, zmm1)
            float temp0_1062[0x8] = _mm256_add_ps(temp0_1045, temp0_1059)
            zmm3 = _mm256_add_ps(temp0_1060, _mm256_broadcast_ss(arg19[4]))
            arg5 = _mm256_broadcast_ss(arg19[5])
            float temp0_1066[0x8] = _mm256_add_ps(zmm1, arg5)
            zmm1 = _mm256_broadcast_ss(arg19[6])
            arg12 = _mm256_add_ps(temp0_1062, zmm1)
            float temp0_1069[0x8] = _mm256_broadcast_ss(var_810_1)
            float temp0_1070[0x8] = _mm256_cmp_ps(temp0_1069, zmm3, 1)
            temp0_1062[0].o = _mm256_extractf128_ps(temp0_1070[0].o, 1)
            temp0_1062[0].o &= arg13[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_memdq(temp0_1070[0].o, var_800_4)
            temp0_1062[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1062[0].o)
            temp0_1062[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1062[0].o, temp0_1062[0].o)
            var_6c0.32 = zmm3
            int32_t var_240_1[0x8] = zmm3
            double var_200_1[0x4] = arg12
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1062[0].o) != 0)
                var_8c0_5 = _mm256_maskstore_ps(temp0_1070, temp0_1069)
            
            arg8 = _mm256_insertf128_ps(arg16, arg17[0].o, 1)
            arg9 = _mm256_insertf128_ps(arg14, arg14[0].o, 1)
            zmm0 = _mm256_andnot_ps(temp0_1070, temp0_974)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm0 = _mm256_xor_ps(temp0_1070, _mm256_cmp_ps(arg11, arg11, 0xf))
                arg5 = _mm256_broadcast_ss(var_820_1)
                zmm1 = _mm256_cmp_ps(var_6c0.32, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, temp0_974)) != 0)
                    var_8c0_5 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                zmm1 = _mm256_and_ps(zmm0, temp0_974)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm1 = var_6c0.32
                    var_8c0_5 = _mm256_maskstore_ps(zmm0, zmm1)
            
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1 = _mm256_broadcast_ss(temp0_8)
            float temp0_1098[0x8] = _mm256_cmp_ps(zmm1, temp0_1066, 1)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1098[0].o, 1)
            zmm3[0].o &= arg14[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1098[0].o, arg5[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1098[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                var_8a0_5 = _mm256_maskstore_ps(temp0_1098, zmm1)
            
            zmm1 = _mm256_andnot_ps(temp0_1098, temp0_974)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm0 = _mm256_xor_ps(temp0_1098, _mm256_cmp_ps(zmm1, zmm1, 0xf))
                arg5 = _mm256_broadcast_ss(temp0_13)
                zmm1 = _mm256_cmp_ps(temp0_1066, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, temp0_974)) != 0)
                    var_8a0_5 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, temp0_974)) != 0)
                    var_8a0_5 = _mm256_maskstore_ps(zmm0, temp0_1066)
            
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
            zmm1 = _mm256_broadcast_ss(temp0_9)
            float temp0_1122[0x8] = _mm256_cmp_ps(zmm1, arg12, 1)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1122[0].o, 1)
            zmm3[0].o &= arg14[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1122[0].o, arg5[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1122[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                var_880_7 = _mm256_maskstore_ps(temp0_1122, zmm1)
            
            var_7a0.32 = arg9
            float var_800_5[0x8] = arg8
            arg5[0].o = zx.o(0)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_1122, temp0_974)) != 0)
                zmm0 = _mm256_xor_ps(temp0_1122, _mm256_cmp_ps(arg5, arg5, 0xf))
                arg5 = _mm256_broadcast_ss(temp0_14)
                zmm1 = _mm256_cmp_ps(arg12, arg5, 1)
                int32_t temp0_1135[0x8] = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(temp0_1135, temp0_974)) != 0)
                    var_880_7 = _mm256_maskstore_ps(temp0_1135, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, temp0_974)) != 0)
                    var_880_7 = _mm256_maskstore_ps(zmm0, arg12)
            
            var_700.32 = arg12
            arg10 = _mm256_broadcast_ss(*r13)
            float temp0_1144[0x8] = _mm256_sub_ps(var_8c0_5, arg10)
            float temp0_1145[0x8] = _mm256_broadcast_ss(*(r13 + 4))
            zmm1 = _mm256_sub_ps(var_8a0_5, temp0_1145)
            float temp0_1147[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_1148[0x8] = _mm256_div_ps(temp0_1144, temp0_1147)
            zmm3 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, zmm3)
            arg5[0].o = arg3[1].d
            arg11 = _mm256_cvttps_epi32(temp0_1148)
            zmm0 = _mm256_cvttps_epi32(zmm1)
            int32_t var_6a0_1[0x8] = zmm3
            float temp0_1155[0x8] =
                _mm256_add_ps(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(zmm0)), temp0_1145)
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 0x20)
            arg9[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
            zmm1[0].o = _mm_permute_ps(arg9[0].o, 0x55)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            uint32_t var_400_1[0x8] = zmm1
            zmm1 = _mm256_add_ps(zmm1, temp0_1155)
            temp0_1155[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            temp0_1155[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1155[0].o, zmm3[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
            zmm3 = _mm256_insertf128_ps(zmm3, temp0_1155[0].o, 1)
            float temp0_1167[0x8] = _mm256_cmp_ps(zmm1, var_8a0_5, 1)
            temp0_1155[0].o = _mm256_extractf128_ps(temp0_1167[0].o, 1)
            temp0_1155[0].o &= arg14[0].o
            arg6 = var_7a0.32
            arg16[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg6[0].o, var_800_5[0].o)
            arg6[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1167[0].o, arg16[0].o)
            temp0_1155[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1155[0].o)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0)
            arg6 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
            arg12 = _mm256_broadcast_ss(r13[1].d)
            var_7c0.32 = var_880_7
            float temp0_1176[0x8] = _mm256_div_ps(_mm256_sub_ps(var_880_7, arg12), arg6)
            temp0_1155[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1155[0].o, temp0_1155[0].o)
            char temp0_1178 = __vpmovmskb_gpr32d_xmmdq(temp0_1155[0].o)
            arg5 = _mm256_cvttps_epi32(temp0_1176)
            float temp0_1181[0x8] = _mm256_mul_ps(temp0_1147, _mm256_cvtepi32_ps(arg11))
            float var_540_1[0x8] = arg5
            float temp0_1183[0x8] = _mm256_mul_ps(arg6, _mm256_cvtepi32_ps(arg5))
            double var_3c0_1[0x4] = arg10
            float temp0_1184[0x8] = _mm256_add_ps(temp0_1181, arg10)
            float temp0_1185[0x8] = _mm256_add_ps(temp0_1183, arg12)
            temp0_1183[0].o = _mm_permute_ps(arg9[0].o, 0)
            arg8 = _mm256_insertf128_ps(temp0_1183, temp0_1183[0].o, 1)
            float temp0_1188[0x8] = _mm256_add_ps(arg8, temp0_1184)
            arg9[0].o = _mm_permute_ps(arg9[0].o, 0xaa)
            arg17 = _mm256_blendv_ps(zmm3, arg11, _mm256_cmp_ps(temp0_1188, var_8c0_5, 1))
            arg9 = _mm256_insertf128_ps(arg9, arg9[0].o, 1)
            float var_8c0_6[0x8] = arg17
            int32_t var_660
            var_660.32 = var_8a0_5
            zmm1 = _mm256_cmp_ps(zmm1, var_8a0_5, 5)
            
            if (temp0_1178 != 0)
                arg11 = zmm0
            
            float temp0_1194[0x8] = _mm256_add_ps(arg9, temp0_1185)
            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg5[0].o &= arg14[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm1[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1194[0].o)
            bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            var_8a0_5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_8a0_5[0].o, var_8a0_5[0].o)
            
            if (not(cond:3_1))
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8a0_5[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_8a0_5[0].o)
                zmm3 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            
            arg10 = _mm256_blendv_ps(zmm3, arg11, temp0_1167)
            double var_8a0_6[0x4] = arg10
            arg5 = var_7c0.32
            zmm1 = _mm256_cmp_ps(temp0_1194, arg5, 5)
            float temp0_1207[0x8] = _mm256_cmp_ps(temp0_1194, arg5, 1)
            temp0_1194[0].o = _mm256_extractf128_ps(temp0_1207[0].o, 1)
            temp0_1194[0].o &= arg14[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1207[0].o, arg16[0].o)
            temp0_1194[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1194[0].o)
            temp0_1194[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1194[0].o, temp0_1194[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1194[0].o) != 0)
                arg11 = var_540_1
            
            temp0_1194[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            temp0_1194[0].o &= arg14[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm1[0].o)
            temp0_1194[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1194[0].o)
            temp0_1194[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1194[0].o, temp0_1194[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1194[0].o) != 0)
                zmm1 = var_540_1
                temp0_1194[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                temp0_1194[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1194[0].o, var_8a0_5[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8a0_5[0].o)
                zmm3 = _mm256_insertf128_ps(zmm1, temp0_1194[0].o, 1)
            
            float temp0_1222[0x8] = _mm256_blendv_ps(zmm3, arg11, temp0_1207)
            zmm3 = temp0_1147
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(arg17)), 
                var_3c0_1)
            float temp0_1226[0x8] = _mm256_cvtepi32_ps(arg10)
            arg10 = var_6a0_1
            float temp0_1228[0x8] =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg10, temp0_1226), temp0_1145)
            float var_880_8[0x8] = temp0_1222
            float temp0_1231[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg6, _mm256_cvtepi32_ps(temp0_1222)), arg12)
            zmm1 = _mm256_add_ps(arg8, zmm1)
            float temp0_1233[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1228, var_400_1)
            float temp0_1234[0x8] = _mm256_add_ps(arg9, temp0_1231)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_8c0_5, zmm1), zmm3)
            arg8 = var_660.32
            float temp0_1238[0x8] = _mm256_div_ps(_mm256_sub_ps(arg8, temp0_1233), arg10)
            zmm3 = var_7c0.32
            zmm0 = _mm256_div_ps(_mm256_sub_ps(zmm3, temp0_1234), arg6)
            uint32_t var_780_6[0x8] = zmm1
            float var_760_6[0x8] = temp0_1238
            float var_740_6[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_8a0_5[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, var_8a0_5[0].o)
            temp0_1238[0].o = zmm0[0].o & arg14[0].o
            zmm3[0].o = zmm1[0].o & arg16[0].o
            temp0_1238[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1238[0].o)
            temp0_1238[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1238[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1238[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(0)
                var_8c0_6 = _mm256_maskstore_ps(zmm0, zmm1)
                var_780_6 = _mm256_maskstore_ps(zmm0, zmm1)
                arg17 = var_8c0_6
            
            zmm1 = __vsubps_ymmqq_ymmqq_memqq(var_8c0_5, var_6c0.32)
            arg15 = var_800_5
            arg13 = var_7a0.32
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            int32_t rax_120 = *arg4
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm3[0].o = zx.o(rax_120 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, zmm3[0].o)
            var_8c0_5[0].o = zmm0[0].o & arg14[0].o
            arg6[0].o &= zmm3[0].o
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8c0_5[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                zmm3[0].o = zx.o(rax_120 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_8c0_6 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_780_6 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
            
            zmm3 = __vsubps_ymmqq_ymmqq_memqq(arg8, temp0_1066)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            var_8c0_5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_6[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_6[2].o)
            arg8[0].o = arg6[0].o & arg14[0].o
            var_8c0_5[0].o &= zmm0[0].o
            var_8c0_5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, arg8[0].o)
            var_8c0_5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(var_8c0_5[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                arg6[0].o = zx.o(0)
                var_8a0_6 = _mm256_maskstore_ps(zmm0, arg6)
                var_760_6 = _mm256_maskstore_ps(zmm0, arg6)
            
            arg6 = var_8a0_6
            var_8c0_5[0].o = zx.o(0)
            float temp0_1276[0x8] = _mm256_sub_ps(var_7c0.32, var_700.32)
            zmm1 = _mm256_add_ps(zmm1, var_8c0_5)
            arg5 = _mm256_mul_ps(zmm3, zmm3)
            var_8c0_5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            int32_t rdx_45 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            arg8[0].o = zx.o(rdx_45 - 1)
            arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
            arg8[0].o = zmm3[0].o & arg14[0].o
            var_8c0_5[0].o &= arg6[0].o
            var_8c0_5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, arg8[0].o)
            var_8c0_5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, temp0_1276[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(var_8c0_5[0].o) != 0)
                zmm3 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
                arg6[0].o = zx.o(rdx_45 - 2)
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
                var_8a0_6 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(arg6, arg6[0].o, 1))
                arg6 = data_142fc95a0
                var_760_6 = _mm256_maskstore_ps(zmm3, arg6)
            
            zmm1 = _mm256_add_ps(zmm1, arg5)
            float temp0_1293[0x8] = _mm256_mul_ps(temp0_1276, temp0_1276)
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_880_8[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_880_8[4].o)
            var_8c0_5[0].o = zmm3[0].o & arg14[0].o
            arg6[0].o &= arg5[0].o
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8c0_5[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1293[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_880_8 = _mm256_maskstore_ps(arg5, zmm3)
                var_740_6 = _mm256_maskstore_ps(arg5, zmm3)
            
            arg17 = var_880_8
            zmm0 = _mm256_add_ps(zmm1, temp0_1293)
            var_6c0.32 = zmm0
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            int32_t rdx_48 = arg4[2]
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm1[0].o = zx.o(rdx_48 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, zmm1[0].o)
            var_7c0.o = arg14[0].o
            zmm3[0].o = zmm0[0].o & arg14[0].o
            arg5[0].o &= zmm1[0].o
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(rdx_48 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                float temp0_1316[0x8] =
                    _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_740_6 = _mm256_maskstore_ps(zmm0, zmm1)
                arg17 = temp0_1316
            
            zmm0[0].o = zx.o(*(arg18 + 4))
            arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg11[0].o = var_8c0_6[0].o
            arg6[0].o = var_8b0
            zmm3[0].o = var_8a0_6[0].o
            arg10[0].o = var_8a0_6[2].o
            arg14[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
            arg16[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg10[0].o)
            temp0_1147[0].o = arg9[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
            var_8c0_5[0].o = zmm0[0].o
            zmm1[0].o = zx.o(*(arg18 + 8))
            var_8c0_5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_8c0_5[0].o)
            var_660.o = arg5[0].o
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, var_8c0_5[0].o)
            temp0_1066[0].o = zmm1[0].o
            arg12[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg17[0].o)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm0 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
            arg11[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, var_8c0_5[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8c0_5[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg17[0].o)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            var_700.32 = arg6
            arg13 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg6, var_7c0.o, 1)
            arg5 = _mm256_and_ps(arg13, arg5)
            int32_t temp0_1349 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_1350 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_1351 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 3)
            float rsi_20 = arg5[0]
            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            int32_t temp0_1353 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_1354 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_1355 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            float* rcx_122 = *(arg18 + 0x10)
            arg5[0].o = *(rcx_122 + sx.q(arg5[0]))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_122 + sx.q(temp0_1353)), 0x10)
            zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_122 + sx.q(temp0_1354)), 0x20)
            arg15[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + sx.q(temp0_1355)), 0x30)
            arg6[0].o = *(rcx_122 + sx.q(rsi_20))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_122 + sx.q(temp0_1349)), 0x10)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg5[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8c0_5[0].o)
            arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, var_8c0_5[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg17[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            zmm1 = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm1, arg9[0].o, 1))
            int32_t temp0_1372 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1373 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1374 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3)
            uint32_t rax_126 = zmm1[0]
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            int32_t temp0_1376 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1377 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1378 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            uint32_t r10_4 = zmm1[0]
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_122 + sx.q(temp0_1350)), 0x20)
            arg10[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + sx.q(temp0_1351)), 0x30)
            zmm1[0].o = *(rcx_122 + sx.q(r10_4))
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + sx.q(temp0_1376)), 0x10)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + sx.q(temp0_1377)), 0x20)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_122 + sx.q(temp0_1378)), 0x30)
            arg6 = __vandps_ymmqq_ymmqq_memqq(arg13, zmm0)
            zmm0[0] = __vextractps_memd_xmmdq_immb(arg6[0].o, 1)
            zmm3[0].o = *(rcx_122 + sx.q(rax_126))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_122 + sx.q(temp0_1372)), 0x10)
            int32_t temp0_1389 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 2)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8c0_5[0].o)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, var_8c0_5[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg17[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_122 + sx.q(temp0_1373)), 0x20)
            float r11_5 = arg6[0]
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_122 + sx.q(temp0_1374)), 0x30)
            int32_t temp0_1399 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm1 = _mm256_and_ps(arg13, zmm1)
            int32_t temp0_1402 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_1403 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            float r8_14 = arg5[0]
            int32_t temp0_1404 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            int64_t rbx_53 = sx.q(arg5[0])
            int32_t temp0_1406 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1407 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1408 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3)
            uint32_t r14_4 = zmm1[0]
            zmm1[0].o = *(rcx_122 + rbx_53)
            int64_t rbx_55 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + rbx_55), 0x10)
            int32_t temp0_1411 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_1412 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = *(rcx_122 + sx.q(r14_4))
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + sx.q(temp0_1411)), 0x20)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + sx.q(temp0_1412)), 0x30)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_122 + sx.q(temp0_1406)), 0x10)
            int64_t r14_6 = sx.q(r11_5)
            int64_t r11_6 = sx.q(zmm0[0])
            int64_t r10_6 = sx.q(temp0_1389)
            int64_t rdx_55 = sx.q(r8_14)
            int64_t rbx_58 = sx.q(temp0_1402)
            int64_t rax_130 = sx.q(temp0_1403)
            int64_t r8_15 = sx.q(temp0_1404)
            arg5[0].o = *(rcx_122 + rdx_55)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_122 + rbx_58), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_122 + rax_130), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_122 + r8_15), 0x30)
            int64_t rdi_11 = sx.q(temp0_1399)
            arg9[0].o = *(rcx_122 + r14_6)
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rcx_122 + r11_6), 0x10)
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rcx_122 + r10_6), 0x20)
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rcx_122 + rdi_11), 0x30)
            arg9 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + sx.q(temp0_1407)), 0x20)
            arg11[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_122 + sx.q(temp0_1408)), 0x30)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg8[0].o, temp0_1147[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg8[0].o, var_8c0_5[0].o)
            arg5 = var_780_6
            arg14 = _mm256_add_ps(arg9, 
                _mm256_mul_ps(arg5, 
                    _mm256_sub_ps(_mm256_insertf128_ps(arg10, arg15[0].o, 1), arg9)))
            arg9[0].o = *(rax_95 + rcx_122 + rdx_55)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_96 + rcx_122 + rbx_58), 0x10)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_97 + rcx_122 + rax_130), 0x20)
            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm3[0].o = *(rax_94 + rcx_122 + r14_6)
            arg15[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, var_8c0_5[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8c0_5[0].o)
            zmm1 =
                _mm256_mul_ps(arg5, _mm256_sub_ps(_mm256_insertf128_ps(arg11, arg6[0].o, 1), zmm0))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_98 + rcx_122 + r8_15), 0x30)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_99 + rcx_122 + r11_6), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_100 + rcx_122 + r10_6), 0x20)
            arg10 = _mm256_add_ps(zmm0, zmm1)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_101 + rcx_122 + rdi_11), 0x30)
            zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg12[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg17[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm1 = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm3, zmm1[0].o, 1))
            int64_t rax_135 = sx.q(zmm1[0])
            int32_t temp0_1451 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1452 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg6[0].o = *(rax_95 + sx.q(zmm3[0]) + rcx_122)
            void* rdi_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)) + rcx_122
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_96 + rdi_18), 0x10)
            void* rdi_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)) + rcx_122
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_97 + rdi_21), 0x20)
            int32_t temp0_1458 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rax_94 + rax_135 + rcx_122)
            void* rax_139 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)) + rcx_122
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_98 + rax_139), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_99 + sx.q(temp0_1451) + rcx_122), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_100 + sx.q(temp0_1452) + rcx_122), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_101 + sx.q(temp0_1458) + rcx_122), 0x30)
            zmm1 =
                _mm256_mul_ps(arg5, _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm3[0].o, 1), zmm0))
            float temp0_1467[0x8] = _mm256_add_ps(zmm0, zmm1)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, arg17[0].o)
            var_8c0_5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, arg12[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(var_8c0_5[0].o, temp0_1066[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_660.o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm1 = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm3, zmm1[0].o, 1))
            void* rdx_63 = sx.q(zmm1[0]) + rcx_122
            int32_t temp0_1476 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1477 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1478 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm3[0].o = *(rax_94 + rdx_63)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg9[0].o = *(rax_95 + sx.q(zmm1[0]) + rcx_122)
            void* rdx_69 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)) + rcx_122
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_96 + rdx_69), 0x10)
            void* rdx_72 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)) + rcx_122
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_97 + rdx_72), 0x20)
            void* rdx_75 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)) + rcx_122
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_98 + rdx_75), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_99 + sx.q(temp0_1476) + rcx_122), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_100 + sx.q(temp0_1477) + rcx_122), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_101 + sx.q(temp0_1478) + rcx_122), 0x30)
            arg9 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, arg8[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm1 = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm3, zmm1[0].o, 1))
            void* rdx_77 = sx.q(zmm1[0]) + rcx_122
            int32_t temp0_1496 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1497 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1498 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm3[0].o = *(rax_94 + rdx_77)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg6[0].o = *(rax_95 + sx.q(zmm1[0]) + rcx_122)
            int32_t temp0_1500 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1501 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1502 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                *(rax_96 + sx.q(temp0_1500) + rcx_122), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_97 + sx.q(temp0_1501) + rcx_122), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_98 + sx.q(temp0_1502) + rcx_122), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_99 + sx.q(temp0_1496) + rcx_122), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_100 + sx.q(temp0_1497) + rcx_122), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_101 + sx.q(temp0_1498) + rcx_122), 0x30)
            zmm1 = _mm256_add_ps(arg9, 
                _mm256_mul_ps(arg5, _mm256_sub_ps(_mm256_insertf128_ps(zmm3, zmm1[0].o, 1), arg9)))
            zmm3 = _mm256_add_ps(arg14, _mm256_mul_ps(_mm256_sub_ps(arg10, arg14), var_760_6))
            var_8c0_5[0].o = var_7c0.o
            zmm1 = _mm256_mul_ps(var_760_6, _mm256_sub_ps(zmm1, temp0_1467))
            zmm0 = _mm256_add_ps(zmm3, 
                __vmulps_ymmqq_ymmqq_memqq(_mm256_sub_ps(_mm256_add_ps(temp0_1467, zmm1), zmm3), 
                    var_740_6))
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm3 = var_6c0.32
            zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
            var_760_6[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_700.o)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o &= var_8c0_5[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_760_6[0].o, zmm1[0].o)
            var_760_6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(var_760_6[0].o) != 0)
                float temp0_1529[0x8] = _mm256_rsqrt_ps(zmm3)
                zmm3 = _mm256_mul_ps(temp0_1529, _mm256_mul_ps(zmm3, temp0_1529))
                float temp0_1534[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_1529, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                zmm3 = _mm256_rcp_ps(temp0_1534)
                float temp0_1536[0x8] = _mm256_mul_ps(zmm3, temp0_1534)
                float temp0_1539[0x8] = _mm256_add_ps(zmm0, 
                    _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, temp0_1536)))
                zmm3[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                zmm0 = _mm256_blendv_ps(zmm0, temp0_1539, zmm1)
            
            zmm3 = var_800_5
            arg6 = var_7a0.32
            zmm1[0].o = arg21
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            float temp0_1547[0x8] = _mm256_sub_ps(zmm0, zmm1)
            float temp0_1548[0x8] = __vcmpps_ymmqq_ymmqq_memqq_immb(temp0_1547, data_142fc94e0, 1)
            zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            zmm1[0].o = _mm256_extractf128_ps(temp0_1548[0].o, 1)
            zmm1[0].o &= var_8c0_5[0].o
            arg6[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1548[0].o, zmm3[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1547[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) == 0)
                arg6 = var_5e0.32
            else
                zmm3 = _mm256_insertf128_ps(zmm3, var_8c0_5[0].o, 1)
                float temp0_1556[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_1547, var_240_1)
                float temp0_1557[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_1547, temp0_1066)
                float temp0_1558[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_1547, var_200_1)
                float temp0_1559[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1556, var_4a0_1)
                float temp0_1560[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1557, var_480_1)
                arg8 = __vaddps_ymmqq_ymmqq_memqq(temp0_1558, var_460_1)
                arg5 = _mm256_and_ps(temp0_1548, zmm3)
                var_4a0_1 = _mm256_maskstore_ps(arg5, temp0_1559)
                var_480_1 = _mm256_maskstore_ps(arg5, temp0_1560)
                var_460_1 = _mm256_maskstore_ps(arg5, arg8)
                arg6 = var_5e0.32
                float temp0_1566[0x8] = _mm256_add_ps(arg6, temp0_1547)
                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                arg6 = _mm256_blendv_ps(arg6, temp0_1566, _mm256_insertf128_ps(arg5, zmm1[0].o, 1))
    else
        zmm0[0].o = arg21
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
        float var_680_1[0x8] = zmm0
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int32_t rdx = 0
        rax_7 = 0
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        
        do
            var_5e0.32 = arg6
            int64_t rcx_1 = sx.q(rdx)
            zmm0[0].o = *(arg20 + rcx_1)
            zmm1[0].o = *(arg20 + rcx_1 + 0x10)
            arg5[0].o = *(arg20 + rcx_1 + 0x20)
            zmm3[0].o = *(arg20 + rcx_1 + 0x30)
            arg6[0].o = *(arg20 + rcx_1 + 0x40)
            arg7[0].o = *(arg20 + rcx_1 + 0x50)
            arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xec)
            arg9[0].o = _mm_permute_ps(arg5[0].o, 0x44)
            arg10[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 8)
            arg9[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg6[0].o, 0xec)
            arg8[0].o = _mm_permute_ps(arg7[0].o, 0x44)
            arg11[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg9[0].o, arg8[0].o, 8)
            arg9[0].o = _mm_permute_ps(zmm0[0].o, 0xe5)
            arg8[0].o = _mm_permute_ps(zmm1[0].o, 0xf0)
            arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 1)
            arg9[0].o = _mm_permute_ps(arg5[0].o, 0xa4)
            arg12[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 8)
            arg9[0].o = _mm_permute_ps(zmm3[0].o, 0xe5)
            arg8[0].o = _mm_permute_ps(arg6[0].o, 0xf0)
            arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 1)
            arg9[0].o = _mm_permute_ps(arg7[0].o, 0xa4)
            arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg9[0].o, 8)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 2)
            zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0xc4)
            zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0x4e)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 2)
            zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg7[0].o, 0xc4)
            arg5 = _mm256_insertf128_ps(arg10, arg11[0].o, 1)
            zmm3 = _mm256_insertf128_ps(arg12, arg8[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            int32_t var_760_1[0x8] = zmm3
            float var_720_1[0x8] = arg14
            zmm1 = _mm256_broadcast_ss(arg19[3])
            uint32_t var_8c0_1[0x8] = zmm1
            uint32_t var_8a0_1[0x8] = zmm1
            uint32_t var_880_1[0x8] = zmm1
            uint32_t var_860_1[0x8] = zmm1
            arg6 = _mm256_broadcast_ss(arg19[1])
            float temp0_46[0x8] = _mm256_mul_ps(arg6, zmm0)
            float temp0_47[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_48[0x8] = _mm256_mul_ps(temp0_47, arg5)
            arg10 = _mm256_broadcast_ss(*arg19)
            arg11 = _mm256_mul_ps(arg10, zmm3)
            zmm3 = _mm256_sub_ps(temp0_46, _mm256_mul_ps(temp0_47, zmm3))
            float temp0_54[0x8] = _mm256_sub_ps(temp0_48, _mm256_mul_ps(arg10, zmm0))
            float temp0_56[0x8] = _mm256_sub_ps(arg11, _mm256_mul_ps(arg6, arg5))
            zmm3 = _mm256_add_ps(zmm3, zmm3)
            float temp0_58[0x8] = _mm256_add_ps(temp0_54, temp0_54)
            float temp0_59[0x8] = _mm256_add_ps(temp0_56, temp0_56)
            float temp0_60[0x8] = _mm256_mul_ps(zmm1, zmm3)
            float temp0_61[0x8] = _mm256_mul_ps(zmm1, temp0_58)
            float temp0_62[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_60, arg5)
            float temp0_63[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_61, var_760_1)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm1, temp0_59), zmm0)
            arg11 = _mm256_mul_ps(temp0_59, arg6)
            arg12 = _mm256_mul_ps(zmm3, temp0_47)
            float temp0_68[0x8] = _mm256_mul_ps(temp0_58, arg10)
            float temp0_71[0x8] =
                _mm256_add_ps(temp0_62, _mm256_sub_ps(arg11, _mm256_mul_ps(temp0_58, temp0_47)))
            float temp0_74[0x8] =
                _mm256_add_ps(temp0_63, _mm256_sub_ps(arg12, _mm256_mul_ps(temp0_59, arg10)))
            zmm1 = _mm256_add_ps(zmm1, _mm256_sub_ps(temp0_68, _mm256_mul_ps(zmm3, arg6)))
            zmm3 = _mm256_broadcast_ss(arg19[4])
            float temp0_79[0x8] = _mm256_add_ps(temp0_71, zmm3)
            float temp0_81[0x8] = _mm256_add_ps(temp0_74, _mm256_broadcast_ss(arg19[5]))
            float temp0_83[0x8] = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg19[6]))
            float temp0_84[0x8] = _mm256_broadcast_ss(var_810_1)
            zmm1 = _mm256_cmp_ps(temp0_84, temp0_79, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_8c0_1 = _mm256_maskstore_ps(zmm1, temp0_84)
            
            float temp0_88[0x8] = _mm256_cmp_ps(arg14, arg14, 0xf)
            zmm1 = _mm256_xor_ps(zmm1, temp0_88)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = _mm256_broadcast_ss(var_820_1)
                float temp0_92[0x8] = _mm256_cmp_ps(temp0_79, zmm3, 1)
                arg6 = _mm256_and_ps(temp0_92, zmm1)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_8c0_1 = _mm256_maskstore_ps(arg6, zmm3)
                
                zmm1 = _mm256_andnot_ps(temp0_92, zmm1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_8c0_1 = _mm256_maskstore_ps(zmm1, temp0_79)
            
            float temp0_99[0x8] = _mm256_broadcast_ss(temp0_8)
            zmm1 = _mm256_cmp_ps(temp0_99, temp0_81, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_8a0_1 = _mm256_maskstore_ps(zmm1, temp0_99)
            
            zmm1 = _mm256_xor_ps(zmm1, temp0_88)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = _mm256_broadcast_ss(temp0_13)
                float temp0_106[0x8] = _mm256_cmp_ps(temp0_81, zmm3, 1)
                arg6 = _mm256_and_ps(temp0_106, zmm1)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_8a0_1 = _mm256_maskstore_ps(arg6, zmm3)
                
                zmm1 = _mm256_andnot_ps(temp0_106, zmm1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_8a0_1 = _mm256_maskstore_ps(zmm1, temp0_81)
            
            float temp0_113[0x8] = _mm256_broadcast_ss(temp0_9)
            zmm1 = _mm256_cmp_ps(temp0_113, temp0_83, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_880_1 = _mm256_maskstore_ps(zmm1, temp0_113)
            
            zmm0 = _mm256_xor_ps(zmm1, temp0_88)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_119[0x8] = _mm256_broadcast_ss(temp0_14)
                zmm1 = _mm256_cmp_ps(temp0_83, temp0_119, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_880_1 = _mm256_maskstore_ps(zmm3, temp0_119)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_880_1 = _mm256_maskstore_ps(zmm0, temp0_83)
            
            var_640.32 = temp0_79
            var_620.32 = temp0_81
            var_600.32 = temp0_83
            arg7 = var_8a0_1
            arg5 = var_880_1
            arg12 = _mm256_broadcast_ss(*r13)
            float temp0_128[0x8] = _mm256_sub_ps(var_8c0_1, arg12)
            float temp0_129[0x8] = _mm256_broadcast_ss(*(r13 + 4))
            zmm1 = _mm256_sub_ps(arg7, temp0_129)
            float temp0_131[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_132[0x8] = _mm256_div_ps(temp0_128, temp0_131)
            arg9 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, arg9)
            float temp0_135[0x8] = _mm256_broadcast_ss(r13[1].d)
            var_6e0.32 = arg5
            float temp0_136[0x8] = _mm256_sub_ps(arg5, temp0_135)
            arg6[0].o = arg3[1].d
            zmm3[0].o = _mm_permute_ps(arg6[0].o, 0)
            arg16 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
            float temp0_139[0x8] = _mm256_div_ps(temp0_136, arg16)
            zmm3 = _mm256_cvttps_epi32(temp0_132)
            arg15 = _mm256_cvttps_epi32(zmm1)
            arg10 = _mm256_cvttps_epi32(temp0_139)
            float temp0_144[0x8] = _mm256_mul_ps(temp0_131, _mm256_cvtepi32_ps(zmm3))
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 0x20)
            temp0_139[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            temp0_139[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_139[0].o, arg6[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            arg6 = _mm256_insertf128_ps(arg6, temp0_139[0].o, 1)
            float temp0_153[0x8] = _mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg15))
            double var_7e0_1[0x4] = arg10
            arg10 = _mm256_mul_ps(arg16, _mm256_cvtepi32_ps(arg10))
            var_560.32 = arg12
            float temp0_156[0x8] = _mm256_add_ps(temp0_144, arg12)
            var_5a0.32 = temp0_129
            float temp0_157[0x8] = _mm256_add_ps(temp0_153, temp0_129)
            var_5c0.32 = temp0_135
            float temp0_158[0x8] = _mm256_add_ps(arg10, temp0_135)
            zmm1[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
            arg10[0].o = _mm_permute_ps(zmm1[0].o, 0)
            arg12 = _mm256_insertf128_ps(arg10, arg10[0].o, 1)
            float temp0_162[0x8] = _mm256_add_ps(arg12, temp0_156)
            arg10[0].o = _mm_permute_ps(zmm1[0].o, 0x55)
            arg13 = _mm256_insertf128_ps(arg10, arg10[0].o, 1)
            arg10 = _mm256_add_ps(arg13, temp0_157)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
            arg14 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            var_580.32 = var_8c0_1
            arg5 = _mm256_blendv_ps(arg6, zmm3, _mm256_cmp_ps(temp0_162, var_8c0_1, 1))
            float var_8c0_2[0x8] = arg5
            zmm1 = _mm256_cmp_ps(arg10, arg7, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = arg15
            
            float temp0_172[0x8] = _mm256_add_ps(arg14, temp0_158)
            arg10 = _mm256_cmp_ps(arg10, arg7, 5)
            arg7[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, arg7[0].o)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_172[0].o)
            bool cond:2_1 = __vpmovmskb_gpr32d_xmmdq(arg7[0].o) == 0
            arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            
            if (not(cond:2_1))
                arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg10[0].o)
                arg6 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
            
            float temp0_183[0x8] = _mm256_blendv_ps(arg6, zmm3, zmm1)
            float var_8a0_2[0x8] = temp0_183
            arg17 = var_6e0.32
            zmm1 = _mm256_cmp_ps(temp0_172, arg17, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = var_7e0_1
            
            float temp0_186[0x8] = _mm256_cmp_ps(temp0_172, arg17, 5)
            arg7[0].o = _mm256_extractf128_ps(temp0_186[0].o, 1)
            temp0_186[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_186[0].o, arg7[0].o)
            temp0_186[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_186[0].o, temp0_186[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_186[0].o) != 0)
                arg6 = var_7e0_1
                temp0_186[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                temp0_186[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_186[0].o, arg10[0].o)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                arg6 = _mm256_insertf128_ps(arg6, temp0_186[0].o, 1)
            
            var_7e0_1[0].d = rdx
            float temp0_195[0x8] = _mm256_blendv_ps(arg6, zmm3, zmm1)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_131, _mm256_cvtepi32_ps(arg5)), 
                var_560.32)
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg9, _mm256_cvtepi32_ps(temp0_183)), 
                var_5a0.32)
            float var_880_2[0x8] = temp0_195
            float temp0_204[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg16, _mm256_cvtepi32_ps(temp0_195)), var_5c0.32)
            zmm1 = _mm256_add_ps(arg12, zmm1)
            zmm3 = _mm256_add_ps(arg13, zmm3)
            float temp0_207[0x8] = _mm256_add_ps(arg14, temp0_204)
            arg11 = var_580.32
            zmm1 = _mm256_div_ps(_mm256_sub_ps(arg11, zmm1), temp0_131)
            zmm3 = _mm256_div_ps(_mm256_sub_ps(arg7, zmm3), arg9)
            float temp0_213[0x8] = _mm256_div_ps(_mm256_sub_ps(arg17, temp0_207), arg16)
            uint32_t var_780_2[0x8] = zmm1
            int32_t var_760_2[0x8] = zmm3
            float var_740_2[0x8] = temp0_213
            temp0_213[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            temp0_213[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_213[0].o, arg10[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, temp0_213[0].o, 1)
            bool cond:5_1 = _mm256_movemask_ps(zmm0) == 0
            arg7[0].o = zx.o(0)
            
            if (not(cond:5_1))
                var_8c0_2 = _mm256_maskstore_ps(zmm0, arg7)
                var_780_2 = _mm256_maskstore_ps(zmm0, arg7)
                arg5 = var_8c0_2
            
            int32_t rcx_19 = *arg4
            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            zmm1[0].o = zx.o(rcx_19 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm3 = var_620.32
            arg6 = var_640.32
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rcx_19 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                var_8c0_2 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                var_780_2 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, var_8a0_2[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, var_8a0_2[4].o)
            zmm1 = _mm256_sub_ps(arg11, arg6)
            zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_8a0_2 = _mm256_maskstore_ps(zmm0, arg7)
                var_760_2 = _mm256_maskstore_ps(zmm0, arg7)
            
            float temp0_238[0x8] = _mm256_sub_ps(arg7, zmm3)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            int32_t rcx_22 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(var_8a0_2[0].o, 1)
            arg6[0].o = zx.o(rcx_22 - 1)
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            var_8a0_2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_8a0_2[0].o, arg6[0].o)
            arg5 = _mm256_insertf128_ps(var_8a0_2, zmm3[0].o, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                zmm3[0].o = zx.o(rcx_22 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_8a0_2 = _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_760_2 = _mm256_maskstore_ps(arg5, data_142fc95a0)
            
            float temp0_250[0x8] = __vsubps_ymmqq_ymmqq_memqq(arg17, var_600.32)
            zmm3 = _mm256_mul_ps(temp0_238, temp0_238)
            temp0_238[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, var_880_2[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg10[0].o, var_880_2[4].o)
            zmm1 = _mm256_add_ps(zmm1, arg7)
            zmm0 = _mm256_insertf128_ps(temp0_238, arg6[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_880_2 = _mm256_maskstore_ps(zmm0, arg7)
                var_740_2 = _mm256_maskstore_ps(zmm0, arg7)
            
            arg13 = var_880_2
            float temp0_259[0x8] = _mm256_mul_ps(temp0_250, temp0_250)
            zmm1 = _mm256_add_ps(zmm1, zmm3)
            int32_t rcx_25 = arg4[2]
            temp0_250[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            zmm3[0].o = zx.o(rcx_25 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            temp0_250[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_250[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
            arg5 = _mm256_insertf128_ps(zmm3, temp0_250[0].o, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                zmm3[0].o = zx.o(rcx_25 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                float temp0_269[0x8] =
                    _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                zmm3 = data_142fc95a0
                var_740_2 = _mm256_maskstore_ps(arg5, zmm3)
                arg13 = temp0_269
            
            float temp0_271[0x8] = _mm256_add_ps(zmm1, temp0_259)
            temp0_271[0].o = zx.o(*(arg18 + 4))
            arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_271[0].o, 0)
            zmm3[0].o = var_8c0_2[0].o
            arg12[0].o = var_8b0
            arg7[0].o = var_8a0_2[0].o
            temp0_131[0].o = var_8a0_2[4].o
            arg16[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
            arg14[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
            arg10[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg7[0].o)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, temp0_131[0].o)
            zmm1[0].o = zx.o(*(arg18 + 8))
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg17[0].o, arg6[0].o)
            var_620.o = zmm1[0].o
            temp0_271[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
            var_600.o = temp0_271[0].o
            temp0_271[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_271[0].o, arg13[0].o)
            arg11[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            temp0_271[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_271[0].o, 2)
            int32_t temp0_283 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 1)
            int32_t temp0_284 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 2)
            float rbx_1 = temp0_271[0]
            int32_t temp0_285 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 3)
            temp0_271[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
            int32_t* rdi_1 = *(arg18 + 0x10)
            temp0_271[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_271[0].o, 2)
            int64_t rbx_2 = sx.q(rbx_1)
            int64_t rsi_1 = sx.q(temp0_283)
            int64_t r8 = sx.q(temp0_284)
            int64_t r10_1 = sx.q(temp0_271[0])
            int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 1))
            int64_t r12_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 2))
            int32_t temp0_290 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 3)
            temp0_271[0].o = *(rdi_1 + r10_1)
            temp0_271[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_271[0].o, *(rdi_1 + r15_1), 0x10)
            temp0_271[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_271[0].o, *(rdi_1 + r12_1), 0x20)
            int64_t rdx_8 = sx.q(temp0_290)
            temp0_271[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_271[0].o, *(rdi_1 + rdx_8), 0x30)
            arg5[0].o = *(rdi_1 + rbx_2)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_1 + rsi_1), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_1 + r8), 0x20)
            int64_t r13_2 = sx.q(temp0_285)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_1 + r13_2), 0x30)
            arg15 = _mm256_insertf128_ps(arg5, temp0_271[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            temp0_271[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, temp0_271[0].o)
            arg10[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg9[0].o)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg9[0].o)
            temp0_271[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_131[0].o)
            temp0_271[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_271[0].o, arg6[0].o)
            temp0_271[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_271[0].o, arg11[0].o)
            temp0_271[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_271[0].o, 2)
            int32_t temp0_309 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 1)
            int32_t temp0_310 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 2)
            int32_t temp0_311 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 3)
            float r8_1 = temp0_271[0]
            temp0_271[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg7[0].o)
            temp0_271[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_271[0].o, arg6[0].o)
            temp0_271[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_271[0].o, arg13[0].o)
            temp0_271[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_271[0].o, 2)
            int32_t temp0_316 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 1)
            arg5[0].o = *(rdi_1 + sx.q(r8_1))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_1 + sx.q(temp0_309)), 0x10)
            int32_t temp0_318 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 2)
            int32_t temp0_319 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 3)
            float rax_16 = temp0_271[0]
            temp0_271[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_1 + sx.q(temp0_310)), 0x20)
            temp0_271[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_271[0].o, *(rdi_1 + sx.q(temp0_311)), 0x30)
            arg5[0].o = *(rdi_1 + sx.q(rax_16))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_1 + sx.q(temp0_316)), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_1 + sx.q(temp0_318)), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_1 + sx.q(temp0_319)), 0x30)
            arg5 = _mm256_insertf128_ps(arg5, temp0_271[0].o, 1)
            temp0_271[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(temp0_131[0].o, zmm1[0].o)
            arg7[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
            temp0_131[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg7[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, temp0_271[0].o)
            arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
            temp0_131[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_131[0].o, arg6[0].o)
            temp0_131[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_131[0].o, arg13[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            temp0_131[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_131[0].o, 2)
            float r8_5 = arg9[0]
            int32_t temp0_336 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            int32_t temp0_337 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            int32_t temp0_338 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
            arg9[0].o = *(rdi_1 + sx.q(r8_5))
            int32_t temp0_339 = __vpextrd_gpr32d_xmmdq_immb(temp0_131[0].o, 1)
            float temp0_340[0x8] = _mm256_sub_ps(arg5, arg15)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_1 + sx.q(temp0_336)), 0x10)
            int32_t temp0_342 = __vpextrd_gpr32d_xmmdq_immb(temp0_131[0].o, 2)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_1 + sx.q(temp0_337)), 0x20)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_1 + sx.q(temp0_338)), 0x30)
            float rax_20 = temp0_131[0]
            int32_t temp0_345 = __vpextrd_gpr32d_xmmdq_immb(temp0_131[0].o, 3)
            arg14 = var_780_2
            float temp0_346[0x8] = _mm256_mul_ps(arg14, temp0_340)
            temp0_131[0].o = *(rdi_1 + sx.q(rax_20))
            temp0_131[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_131[0].o, *(rdi_1 + sx.q(temp0_339)), 0x10)
            temp0_131[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_131[0].o, *(rdi_1 + sx.q(temp0_342)), 0x20)
            temp0_131[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_131[0].o, *(rdi_1 + sx.q(temp0_345)), 0x30)
            arg15 = _mm256_add_ps(arg15, temp0_346)
            arg8 = _mm256_insertf128_ps(temp0_131, arg9[0].o, 1)
            temp0_346[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg7[0].o)
            temp0_271[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_271[0].o)
            temp0_271[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_271[0].o, arg6[0].o)
            temp0_346[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_346[0].o, arg6[0].o)
            temp0_346[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_346[0].o, arg13[0].o)
            temp0_271[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_271[0].o, arg11[0].o)
            temp0_271[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_271[0].o, 2)
            temp0_346[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_346[0].o, 2)
            int64_t rax_23 = sx.q(temp0_346[0])
            int64_t rcx_36 = sx.q(temp0_271[0])
            int32_t temp0_360 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 1)
            zmm3[0].o = *(rdi_1 + rcx_36)
            int32_t temp0_361 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 2)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_1 + sx.q(temp0_360)), 0x10)
            int32_t temp0_363 = __vpextrd_gpr32d_xmmdq_immb(temp0_271[0].o, 3)
            temp0_271[0].o = *(rdi_1 + rax_23)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_1 + sx.q(temp0_361)), 0x20)
            int64_t rax_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_346[0].o, 1))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_1 + sx.q(temp0_363)), 0x30)
            int32_t temp0_367 = __vpextrd_gpr32d_xmmdq_immb(temp0_346[0].o, 2)
            temp0_271[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_271[0].o, *(rdi_1 + rax_26), 0x10)
            int32_t temp0_369 = __vpextrd_gpr32d_xmmdq_immb(temp0_346[0].o, 3)
            arg7[0].o = *(rdi_1 + r10_1 + 4)
            temp0_271[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_271[0].o, *(rdi_1 + sx.q(temp0_367)), 0x20)
            temp0_271[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_271[0].o, *(rdi_1 + sx.q(temp0_369)), 0x30)
            zmm0 = _mm256_insertf128_ps(temp0_271, zmm3[0].o, 1)
            arg9[0].o = *(rdi_1 + rbx_2 + 4)
            temp0_346[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg17[0].o, arg6[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
            float temp0_376[0x8] = _mm256_mul_ps(arg14, _mm256_sub_ps(zmm0, arg8))
            arg10 = _mm256_add_ps(arg8, temp0_376)
            temp0_376[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_1 + r15_1 + 4), 0x10)
            temp0_376[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_376[0].o, *(rdi_1 + r12_1 + 4), 0x20)
            temp0_376[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_376[0].o, *(rdi_1 + rdx_8 + 4), 0x30)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_1 + rsi_1 + 4), 0x10)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_1 + r8 + 4), 0x20)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdi_1 + r13_2 + 4), 0x30)
            arg7 = _mm256_insertf128_ps(arg7, temp0_376[0].o, 1)
            temp0_376[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_346[0].o, arg11[0].o)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            temp0_376[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_376[0].o, 2)
            float rax_32 = temp0_376[0]
            int32_t temp0_389 = __vpextrd_gpr32d_xmmdq_immb(temp0_376[0].o, 1)
            int32_t temp0_390 = __vpextrd_gpr32d_xmmdq_immb(temp0_376[0].o, 2)
            int32_t temp0_391 = __vpextrd_gpr32d_xmmdq_immb(temp0_376[0].o, 3)
            temp0_376[0].o = *(rdi_1 + sx.q(rax_32) + 4)
            int64_t rdx_11 = sx.q(arg8[0])
            int32_t temp0_392 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1)
            int32_t temp0_393 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            int32_t temp0_394 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3)
            arg8[0].o = *(rdi_1 + rdx_11 + 4)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_1 + sx.q(temp0_392) + 4), 0x10)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_1 + sx.q(temp0_393) + 4), 0x20)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_1 + sx.q(temp0_394) + 4), 0x30)
            temp0_376[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_376[0].o, 
                *(rdi_1 + sx.q(temp0_389) + 4), 0x10)
            temp0_376[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_376[0].o, 
                *(rdi_1 + sx.q(temp0_390) + 4), 0x20)
            temp0_376[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_376[0].o, 
                *(rdi_1 + sx.q(temp0_391) + 4), 0x30)
            zmm0 = _mm256_insertf128_ps(temp0_376, arg8[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg11[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg8[0].o, var_600.o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_620.o)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            int64_t rax_37 = sx.q(arg6[0])
            int32_t temp0_408 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
            int32_t temp0_409 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
            int32_t temp0_410 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
            arg6[0].o = *(rdi_1 + rax_37 + 4)
            float rax_38 = arg9[0]
            int32_t temp0_411 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            int32_t temp0_412 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            int32_t temp0_413 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
            arg9[0].o = *(rdi_1 + sx.q(rax_38) + 4)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_1 + sx.q(temp0_411) + 4), 0x10)
            float temp0_416[0x8] = _mm256_mul_ps(arg14, _mm256_sub_ps(zmm0, arg7))
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_1 + sx.q(temp0_412) + 4), 0x20)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_1 + sx.q(temp0_413) + 4), 0x30)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_1 + sx.q(temp0_408) + 4), 0x10)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_1 + sx.q(temp0_409) + 4), 0x20)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_1 + sx.q(temp0_410) + 4), 0x30)
            float temp0_422[0x8] = _mm256_add_ps(arg7, temp0_416)
            arg6 = _mm256_insertf128_ps(arg6, arg9[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm3[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_346[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            temp0_346[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_428 = __vpextrd_gpr32d_xmmdq_immb(temp0_346[0].o, 1)
            int64_t rcx_48 = sx.q(zmm1[0])
            int32_t temp0_429 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_430 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_431 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rdi_1 + rcx_48 + 4)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_1 + sx.q(temp0_429) + 4), 0x10)
            float rcx_50 = temp0_346[0]
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_1 + sx.q(temp0_430) + 4), 0x20)
            int32_t temp0_434 = __vpextrd_gpr32d_xmmdq_immb(temp0_346[0].o, 2)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_1 + sx.q(temp0_431) + 4), 0x30)
            int32_t temp0_436 = __vpextrd_gpr32d_xmmdq_immb(temp0_346[0].o, 3)
            temp0_346[0].o = *(rdi_1 + sx.q(rcx_50) + 4)
            temp0_346[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_346[0].o, 
                *(rdi_1 + sx.q(temp0_428) + 4), 0x10)
            temp0_346[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_346[0].o, 
                *(rdi_1 + sx.q(temp0_434) + 4), 0x20)
            temp0_346[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_346[0].o, 
                *(rdi_1 + sx.q(temp0_436) + 4), 0x30)
            zmm1 = _mm256_add_ps(arg6, 
                _mm256_mul_ps(arg14, 
                    _mm256_sub_ps(_mm256_insertf128_ps(temp0_346, zmm1[0].o, 1), arg6)))
            arg5 = var_760_2
            zmm3 = _mm256_add_ps(arg15, _mm256_mul_ps(_mm256_sub_ps(arg10, arg15), arg5))
            zmm0 = _mm256_add_ps(zmm3, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(temp0_422, 
                            _mm256_mul_ps(arg5, _mm256_sub_ps(zmm1, temp0_422))), 
                        zmm3), 
                    var_740_2))
            zmm3 = temp0_271
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            zmm1 = _mm256_cmp_ps(zmm3, arg14, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_456[0x8] = _mm256_rsqrt_ps(zmm3)
                zmm3 = _mm256_mul_ps(temp0_456, _mm256_mul_ps(zmm3, temp0_456))
                float temp0_461[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_456, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                zmm3 = _mm256_rcp_ps(temp0_461)
                float temp0_463[0x8] = _mm256_mul_ps(zmm3, temp0_461)
                arg5 = _mm256_add_ps(zmm0, 
                    _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, temp0_463)))
                zmm0 = _mm256_blendv_ps(zmm0, arg5, zmm1)
            
            arg4 = var_7a0
            r13 = var_7c0
            arg3 = var_6c0
            int32_t rdx_18 = var_7e0_1[0].d
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, var_680_1)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
            
            if (_mm256_movemask_ps(zmm1) == 0)
                arg6 = var_5e0.32
            else
                float temp0_471[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_79)
                zmm3 = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_81)
                float temp0_473[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_83)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_471, var_4a0_1)
                zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_480_1)
                float temp0_476[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_473, var_460_1)
                var_4a0_1 = _mm256_maskstore_ps(zmm1, arg5)
                var_480_1 = _mm256_maskstore_ps(zmm1, zmm3)
                var_460_1 = _mm256_maskstore_ps(zmm1, temp0_476)
                arg6 = var_5e0.32
                zmm0 = _mm256_add_ps(arg6, zmm0)
                arg6 = _mm256_blendv_ps(arg6, zmm0, zmm1)
            
            rcx = arg24
            rax_7 += 8
            rdx = rdx_18 + 0x60
        while (rax_7 s< rax_6)
        
        if (rax_7 s< rcx)
            goto label_14007fc65
    zmm1 = var_480_1
    float temp0_2183[0x8] = _mm256_hadd_ps(var_4a0_1, var_4a0_1)
    float temp0_2184[0x8] = _mm256_hadd_ps(temp0_2183, temp0_2183)
    zmm3[0].o = _mm256_extractf128_ps(temp0_2184[0].o, 1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    temp0_2184[0].o = temp0_2184[0].o f+ zmm3[0]
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    float temp0_2189[0x8] = _mm256_hadd_ps(var_460_1, var_460_1)
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    float temp0_2190[0x8] = _mm256_hadd_ps(temp0_2189, temp0_2189)
    temp0_2184[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2184[0].o, zmm1[0].o, 0x10)
    zmm1[0].o = _mm256_extractf128_ps(temp0_2190[0].o, 1)
    zmm1[0].o = temp0_2190[0].o f+ zmm1[0]
    temp0_2184[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2184[0].o, zmm1[0].o, 0x20)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg23)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg23[1].d, 0x20)
    temp0_2184[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_2184[0].o, zmm1[0].o)
    *arg23 = temp0_2184[0]
    *(arg23 + 4) = __vextractps_memd_xmmdq_immb(temp0_2184[0].o, 1)
    arg23[1].d = __vextractps_memd_xmmdq_immb(temp0_2184[0].o, 2)
    zmm0 = _mm256_hadd_ps(arg6, arg6)
float temp0_2227[0x8] = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(temp0_2227[0].o, 1)
temp0_2227[0].o = temp0_2227[0].o f+ zmm1[0]
temp0_2227[0].o = temp0_2227[0].o f+ *arg22
*arg22 = temp0_2227[0]
arg8[0].o = var_e8
arg9[0].o = var_d8
arg10[0].o = var_c8
arg11[0].o = var_b8
arg12[0].o = var_a8
arg13[0].o = var_98
arg14[0].o = var_88
arg15[0].o = var_78
arg16[0].o = var_68
arg17[0].o = var_58
_mm256_zeroupper()
return arg22
