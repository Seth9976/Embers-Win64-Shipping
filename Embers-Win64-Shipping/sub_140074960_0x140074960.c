// 函数: sub_140074960
// 地址: 0x140074960
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
double* r15 = arg1
float zmm3[0x8] = *arg26
int32_t rcx = arg25
int32_t* var_7a0 = arg4
double* var_7c0 = r15
double* var_7e0 = arg3
float zmm0[0x8]
int32_t zmm1[0x8]
int128_t var_8b0
int32_t var_6c0
int32_t var_6a0
int64_t var_660
int64_t var_640
int64_t var_620
int64_t var_600
int64_t var_5c0
int64_t var_5a0
int64_t var_580
int64_t var_560
int64_t var_540

if (_mm256_movemask_ps(zmm3) != 0xff)
    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
    float var_4c0_1[0x8] = arg7
    float var_4e0_1[0x8] = arg7
    zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
    zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, data_142fc9560)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    int32_t var_830_1 = zmm1[0]
    float temp0_495 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_500_1[0x8] = arg7
    float temp0_496 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm1[0].o = __vmovsd_xmmdq_memq(*r15)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r15[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_840_1 = zmm0[0]
    float temp0_500 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_501 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rax_79 = ((rcx s>> 0x1f u>> 0x1d) + rcx) & 0xfffffff8
    float var_5e0_1[0x8] = zmm3
    int32_t rax_80
    
    if (rax_79 s<= 0)
        rax_80 = 0
        
        if (0 s< rcx)
        label_140077dfb:
            float var_800_6[0x8] = arg7
            zmm0[0].o = zx.o(rax_80)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
            arg13[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
            arg5[0].o = zx.o(rcx)
            arg16[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            arg15[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg13[0].o)
            var_7a0.32 = zmm0
            arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
            arg11 = _mm256_insertf128_ps(arg14, arg15[0].o, 1)
            float temp0_1593[0x8] = _mm256_maskload_ps(arg11, *(arg21 + sx.q(rax_80 << 2)))
            arg8[0].o = _mm256_extractf128_ps(temp0_1593[0].o, 1)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1593[0].o, temp0_1593[0].o)
            temp0_1593[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, temp0_1593[0].o)
            arg7 = _mm256_and_ps(arg11, _mm256_insertf128_ps(temp0_1593, arg8[0].o, 1))
            int64_t rax_223 = sx.q(arg7[0])
            int64_t r12_8 = arg20 + (rax_223 << 2)
            arg8[0].o = *(arg20 + (rax_223 << 2))
            int64_t rcx_74 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            int64_t r14_10 = arg20 + (rcx_74 << 2)
            int64_t rbx_68 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            int64_t r11_10 = arg20 + (rbx_68 << 2)
            int64_t rsi_33 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            int64_t rax_227 = arg20 + (rsi_33 << 2)
            arg9[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            int64_t rdi_42 = sx.q(arg9[0])
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_74 << 2)), 0x10)
            int32_t temp0_1606 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            arg8[0].o = *(arg20 + (rdi_42 << 2))
            int64_t rcx_76 = sx.q(temp0_1606)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_76 << 2)), 0x10)
            int64_t rdi_43 = arg20 + (rdi_42 << 2)
            int64_t r10_8 = arg20 + (rcx_76 << 2)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg20 + (rbx_68 << 2)), 0x20)
            int32_t temp0_1609 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            arg17[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg20 + (rsi_33 << 2)), 0x30)
            int64_t rcx_78 = sx.q(temp0_1609)
            int64_t rbx_70 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_78 << 2)), 0x20)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rbx_70 << 2)), 0x30)
            int64_t rcx_79 = arg20 + (rcx_78 << 2)
            int64_t rbx_71 = arg20 + (rbx_70 << 2)
            arg9 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9520)
            arg10 = __vandps_ymmqq_ymmqq_memqq(arg11, data_142fc9540)
            zmm0[0].o = *(zx.q(arg10[0]) + r12_8)
            uint64_t rdx_94 = zx.q(arg9[0])
            zmm1[0].o = *(rdx_94 + r12_8)
            zmm3[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            arg5[0].o = *(zx.q(arg6[0]) + rdi_43)
            uint64_t rdx_95 = zx.q(zmm3[0])
            arg7[0].o = *(rdx_95 + rdi_43)
            uint64_t rdi_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_44 + r10_8), 0x10)
            uint64_t rdx_96 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_96 + r10_8), 0x10)
            uint64_t rdi_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_45 + rcx_79), 0x20)
            uint64_t rdx_97 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_97 + rcx_79), 0x20)
            uint64_t rcx_80 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_80 + rbx_71), 0x30)
            uint64_t rcx_81 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_81 + rbx_71), 0x30)
            uint64_t rcx_82 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_82 + r14_10), 0x10)
            uint64_t rcx_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_83 + r14_10), 0x10)
            uint64_t rcx_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_84 + r11_10), 0x20)
            uint64_t rcx_85 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_85 + r11_10), 0x20)
            uint64_t rcx_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_86 + rax_227), 0x30)
            uint64_t rcx_87 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_87 + rax_227), 0x30)
            arg6 = _mm256_insertf128_ps(arg17, arg8[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
            int32_t var_380_2[0x8] = zmm1
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_1646[0x8] = _mm256_broadcast_ss(arg19[3])
            float var_8c0_7[0x8] = temp0_1646
            float var_8a0_7[0x8] = temp0_1646
            float var_880_10[0x8] = temp0_1646
            float var_860_4[0x8] = temp0_1646
            float temp0_1647[0x8] = _mm256_broadcast_ss(arg19[1])
            float temp0_1648[0x8] = _mm256_mul_ps(zmm0, temp0_1647)
            float temp0_1649[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_1650[0x8] = _mm256_mul_ps(arg6, temp0_1649)
            float temp0_1651[0x8] = _mm256_broadcast_ss(*arg19)
            float temp0_1652[0x8] = _mm256_mul_ps(zmm1, temp0_1649)
            zmm1 = _mm256_mul_ps(zmm1, temp0_1651)
            float temp0_1654[0x8] = _mm256_sub_ps(temp0_1648, temp0_1652)
            float temp0_1655[0x8] = _mm256_mul_ps(temp0_1646, arg7)
            float temp0_1657[0x8] = _mm256_sub_ps(temp0_1650, _mm256_mul_ps(zmm0, temp0_1651))
            zmm1 = _mm256_sub_ps(zmm1, _mm256_mul_ps(arg6, temp0_1647))
            float temp0_1660[0x8] = _mm256_sub_ps(temp0_1655, temp0_1655)
            float temp0_1661[0x8] = _mm256_add_ps(temp0_1654, temp0_1654)
            float temp0_1662[0x8] = _mm256_add_ps(temp0_1657, temp0_1657)
            zmm1 = _mm256_add_ps(zmm1, zmm1)
            float temp0_1664[0x8] = _mm256_add_ps(temp0_1660, temp0_1660)
            float var_780_7[0x8] = temp0_1661
            float var_760_7[0x8] = temp0_1662
            int32_t var_740_7[0x8] = zmm1
            float var_720_4[0x8] = temp0_1664
            float temp0_1665[0x8] = _mm256_mul_ps(temp0_1646, temp0_1661)
            float temp0_1666[0x8] = _mm256_mul_ps(temp0_1646, temp0_1662)
            float temp0_1667[0x8] = _mm256_mul_ps(temp0_1646, zmm1)
            float temp0_1668[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1665, arg6)
            float temp0_1669[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1666, var_380_2)
            float temp0_1670[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1667, zmm0)
            float var_180_2[0x8] = temp0_1668
            float var_160_2[0x8] = temp0_1669
            float var_140_2[0x8] = temp0_1670
            float var_120_2[0x8] =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_1646, temp0_1664), arg7)
            float temp0_1673[0x8] = _mm256_broadcast_ss(arg19[1])
            float temp0_1674[0x8] = _mm256_mul_ps(zmm1, temp0_1673)
            float temp0_1675[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_1677[0x8] = _mm256_sub_ps(temp0_1674, _mm256_mul_ps(temp0_1662, temp0_1675))
            float temp0_1678[0x8] = _mm256_broadcast_ss(*arg19)
            float temp0_1679[0x8] = _mm256_mul_ps(temp0_1662, temp0_1678)
            zmm1 = _mm256_mul_ps(zmm1, temp0_1678)
            zmm1 = _mm256_sub_ps(_mm256_mul_ps(temp0_1661, temp0_1675), zmm1)
            float temp0_1684[0x8] = _mm256_sub_ps(temp0_1679, _mm256_mul_ps(temp0_1661, temp0_1673))
            float temp0_1685[0x8] = _mm256_add_ps(temp0_1668, temp0_1677)
            zmm1 = _mm256_add_ps(temp0_1669, zmm1)
            float temp0_1687[0x8] = _mm256_add_ps(temp0_1670, temp0_1684)
            zmm3 = _mm256_add_ps(temp0_1685, _mm256_broadcast_ss(arg19[4]))
            arg5 = _mm256_broadcast_ss(arg19[5])
            float temp0_1691[0x8] = _mm256_add_ps(zmm1, arg5)
            zmm1 = _mm256_broadcast_ss(arg19[6])
            float temp0_1693[0x8] = _mm256_add_ps(temp0_1687, zmm1)
            float temp0_1694[0x8] = _mm256_broadcast_ss(var_830_1)
            float temp0_1695[0x8] = _mm256_cmp_ps(temp0_1694, zmm3, 1)
            temp0_1687[0].o = _mm256_extractf128_ps(temp0_1695[0].o, 1)
            temp0_1687[0].o &= arg15[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1695[0].o, arg14[0].o)
            temp0_1687[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1687[0].o)
            temp0_1687[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1687[0].o, temp0_1687[0].o)
            var_7e0.32 = zmm3
            float var_300_1[0x8] = zmm3
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1687[0].o) != 0)
                var_8c0_7 = _mm256_maskstore_ps(temp0_1695, temp0_1694)
            
            arg13 = _mm256_insertf128_ps(var_7a0.32, arg13[0].o, 1)
            arg10 = _mm256_insertf128_ps(arg16, arg16[0].o, 1)
            zmm0 = _mm256_andnot_ps(temp0_1695, arg11)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm0 = _mm256_xor_ps(temp0_1695, _mm256_cmp_ps(arg7, arg7, 0xf))
                arg5 = _mm256_broadcast_ss(var_840_1)
                zmm1 = _mm256_cmp_ps(var_7e0.32, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg11)) != 0)
                    var_8c0_7 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                zmm1 = _mm256_and_ps(zmm0, arg11)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm1 = var_7e0.32
                    var_8c0_7 = _mm256_maskstore_ps(zmm0, zmm1)
            
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg13[0].o)
            zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            arg15[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1 = _mm256_broadcast_ss(temp0_495)
            float temp0_1723[0x8] = _mm256_cmp_ps(zmm1, temp0_1691, 1)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1723[0].o, 1)
            zmm3[0].o &= arg15[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1723[0].o, arg5[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1723[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                var_8a0_7 = _mm256_maskstore_ps(temp0_1723, zmm1)
            
            int32_t temp0_1730[0x8] = _mm256_andnot_ps(temp0_1723, arg11)
            
            if (_mm256_movemask_ps(temp0_1730) != 0)
                temp0_1730[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_1730[0].o, temp0_1730[0].o)
                zmm0 = _mm256_xor_ps(temp0_1723, _mm256_cmp_ps(temp0_1730, temp0_1730, 0xf))
                arg5 = _mm256_broadcast_ss(temp0_500)
                zmm1 = _mm256_cmp_ps(temp0_1691, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg11)) != 0)
                    var_8a0_7 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg11)) != 0)
                    var_8a0_7 = _mm256_maskstore_ps(zmm0, temp0_1691)
            
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg13[0].o)
            zmm1 = _mm256_broadcast_ss(temp0_496)
            float temp0_1747[0x8] = _mm256_cmp_ps(zmm1, temp0_1693, 1)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1747[0].o, 1)
            zmm3[0].o &= arg15[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1747[0].o, arg5[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1747[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                var_880_10 = _mm256_maskstore_ps(temp0_1747, zmm1)
            
            var_7c0.32 = arg10
            arg5[0].o = zx.o(0)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_1747, arg11)) != 0)
                zmm0 = _mm256_xor_ps(temp0_1747, _mm256_cmp_ps(arg5, arg5, 0xf))
                arg5 = _mm256_broadcast_ss(temp0_501)
                zmm1 = _mm256_cmp_ps(temp0_1693, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg11)) != 0)
                    var_880_10 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg11)) != 0)
                    var_880_10 = _mm256_maskstore_ps(zmm0, temp0_1693)
            
            var_6a0.32 = temp0_1691
            var_5c0.32 = temp0_1693
            float temp0_1768[0x8] = _mm256_broadcast_ss(*r15)
            float temp0_1769[0x8] = _mm256_sub_ps(var_8c0_7, temp0_1768)
            float temp0_1770[0x8] = _mm256_broadcast_ss(*(r15 + 4))
            zmm1 = _mm256_sub_ps(var_8a0_7, temp0_1770)
            float temp0_1772[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_1773[0x8] = _mm256_div_ps(temp0_1769, temp0_1772)
            float temp0_1774[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, temp0_1774)
            arg5[0].o = arg3[1].d
            zmm3 = _mm256_cvttps_epi32(temp0_1773)
            zmm0 = _mm256_cvttps_epi32(zmm1)
            float temp0_1780[0x8] =
                _mm256_add_ps(_mm256_mul_ps(temp0_1774, _mm256_cvtepi32_ps(zmm0)), temp0_1770)
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 0x20)
            temp0_1695[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
            zmm1[0].o = _mm_permute_ps(temp0_1695[0].o, 0x55)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            int32_t var_420_2[0x8] = zmm1
            zmm1 = _mm256_add_ps(zmm1, temp0_1780)
            temp0_1780[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            temp0_1774[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_1774[0].o, temp0_1774[0].o)
            temp0_1780[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1780[0].o, temp0_1774[0].o)
            temp0_1774[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1774[0].o)
            arg12 = _mm256_insertf128_ps(temp0_1774, temp0_1780[0].o, 1)
            arg16 = _mm256_cmp_ps(zmm1, var_8a0_7, 1)
            temp0_1780[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            temp0_1780[0].o &= arg15[0].o
            var_7a0.32 = arg13
            arg6 = var_7c0.32
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
            temp0_1770[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            temp0_1780[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1770[0].o, temp0_1780[0].o)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0)
            arg7 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
            float temp0_1799[0x8] = _mm256_broadcast_ss(r15[1].d)
            float temp0_1801[0x8] = _mm256_div_ps(_mm256_sub_ps(var_880_10, temp0_1799), arg7)
            temp0_1780[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1780[0].o, temp0_1780[0].o)
            char temp0_1803 = __vpmovmskb_gpr32d_xmmdq(temp0_1780[0].o)
            arg5 = _mm256_cvttps_epi32(temp0_1801)
            float temp0_1806[0x8] = _mm256_mul_ps(temp0_1772, _mm256_cvtepi32_ps(zmm3))
            float temp0_1808[0x8] = _mm256_mul_ps(arg7, _mm256_cvtepi32_ps(arg5))
            float temp0_1809[0x8] = _mm256_add_ps(temp0_1806, temp0_1768)
            float temp0_1810[0x8] = _mm256_add_ps(temp0_1808, temp0_1799)
            temp0_1808[0].o = _mm_permute_ps(temp0_1695[0].o, 0)
            arg10 = _mm256_insertf128_ps(temp0_1808, temp0_1808[0].o, 1)
            float temp0_1813[0x8] = _mm256_add_ps(arg10, temp0_1809)
            temp0_1695[0].o = _mm_permute_ps(temp0_1695[0].o, 0xaa)
            int32_t var_680_1
            var_680_1.32 = var_8c0_7
            arg17 = _mm256_blendv_ps(arg12, zmm3, _mm256_cmp_ps(temp0_1813, var_8c0_7, 1))
            arg8 = _mm256_insertf128_ps(temp0_1695, temp0_1695[0].o, 1)
            float var_8c0_8[0x8] = arg17
            var_6c0.32 = var_8a0_7
            zmm1 = _mm256_cmp_ps(zmm1, var_8a0_7, 5)
            
            if (temp0_1803 != 0)
                zmm3 = zmm0
            
            float temp0_1819[0x8] = _mm256_add_ps(arg8, temp0_1810)
            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg5[0].o &= arg15[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1819[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                arg12 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            
            float temp0_1830[0x8] = _mm256_blendv_ps(arg12, zmm3, arg16)
            float var_8a0_8[0x8] = temp0_1830
            arg14 = var_880_10
            zmm1 = _mm256_cmp_ps(temp0_1819, arg14, 5)
            arg16 = _mm256_cmp_ps(temp0_1819, arg14, 1)
            temp0_1819[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
            temp0_1819[0].o &= arg15[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            temp0_1819[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1819[0].o)
            temp0_1819[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1819[0].o, temp0_1819[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1819[0].o) != 0)
                zmm3 = arg5
            
            temp0_1819[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            temp0_1819[0].o &= arg15[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            temp0_1819[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1819[0].o)
            temp0_1819[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1819[0].o, temp0_1819[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1819[0].o) != 0)
                temp0_1819[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                temp0_1819[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1819[0].o, zmm1[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                arg12 = _mm256_insertf128_ps(zmm1, temp0_1819[0].o, 1)
            
            float temp0_1848[0x8] = _mm256_blendv_ps(arg12, zmm3, arg16)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_1772, _mm256_cvtepi32_ps(arg17)), 
                temp0_1768)
            float temp0_1854[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(temp0_1774, _mm256_cvtepi32_ps(temp0_1830)), temp0_1770)
            float var_880_11[0x8] = temp0_1848
            float temp0_1857[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg7, _mm256_cvtepi32_ps(temp0_1848)), temp0_1799)
            zmm1 = _mm256_add_ps(arg10, zmm1)
            float temp0_1859[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1854, var_420_2)
            float temp0_1860[0x8] = _mm256_add_ps(arg8, temp0_1857)
            arg10 = var_680_1.32
            zmm1 = _mm256_div_ps(_mm256_sub_ps(arg10, zmm1), temp0_1772)
            arg8 = var_6c0.32
            float temp0_1864[0x8] = _mm256_div_ps(_mm256_sub_ps(arg8, temp0_1859), temp0_1774)
            zmm0 = _mm256_div_ps(_mm256_sub_ps(arg14, temp0_1860), arg7)
            int32_t var_780_8[0x8] = zmm1
            float var_760_8[0x8] = temp0_1864
            float var_740_8[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, zmm1[0].o)
            temp0_1864[0].o = zmm0[0].o & arg15[0].o
            temp0_1772[0].o = zmm1[0].o & arg6[0].o
            temp0_1864[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1772[0].o, temp0_1864[0].o)
            temp0_1864[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1864[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1864[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(0)
                var_8c0_8 = _mm256_maskstore_ps(zmm0, zmm1)
                var_780_8 = _mm256_maskstore_ps(zmm0, zmm1)
                arg17 = var_8c0_8
            
            zmm1 = __vsubps_ymmqq_ymmqq_memqq(arg10, var_7e0.32)
            arg11 = var_7a0.32
            arg13 = var_7c0.32
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            int32_t rax_246 = *arg4
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            temp0_1772[0].o = zx.o(rax_246 - 1)
            temp0_1772[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_1772[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_1772[0].o)
            temp0_1772[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, temp0_1772[0].o)
            arg7[0].o = zmm0[0].o & arg15[0].o
            arg6[0].o &= temp0_1772[0].o
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(temp0_1772, zmm0[0].o, 1)
                temp0_1772[0].o = zx.o(rax_246 - 2)
                temp0_1772[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_1772[0].o, 0)
                var_8c0_8 =
                    _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(temp0_1772, temp0_1772[0].o, 1))
                var_780_8 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
            
            zmm3 = __vsubps_ymmqq_ymmqq_memqq(arg8, var_6a0.32)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_8[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_8[4].o)
            arg8[0].o = arg6[0].o & arg15[0].o
            arg7[0].o &= zmm0[0].o
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
                arg6[0].o = zx.o(0)
                var_8a0_8 = _mm256_maskstore_ps(zmm0, arg6)
                var_760_8 = _mm256_maskstore_ps(zmm0, arg6)
            
            arg6 = var_8a0_8
            arg7[0].o = zx.o(0)
            float temp0_1903[0x8] = _mm256_sub_ps(arg14, var_5c0.32)
            zmm1 = _mm256_add_ps(zmm1, arg7)
            arg5 = _mm256_mul_ps(zmm3, zmm3)
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            int32_t rbx_73 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            arg8[0].o = zx.o(rbx_73 - 1)
            arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
            arg8[0].o = zmm3[0].o & arg15[0].o
            arg7[0].o &= arg6[0].o
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_1903[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
                zmm3 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
                arg6[0].o = zx.o(rbx_73 - 2)
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
                var_8a0_8 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(arg6, arg6[0].o, 1))
                arg6 = data_142fc95a0
                var_760_8 = _mm256_maskstore_ps(zmm3, arg6)
            
            zmm1 = _mm256_add_ps(zmm1, arg5)
            float temp0_1920[0x8] = _mm256_mul_ps(temp0_1903, temp0_1903)
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_880_11[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_880_11[4].o)
            arg7[0].o = zmm3[0].o & arg15[0].o
            arg6[0].o &= arg5[0].o
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1920[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_880_11 = _mm256_maskstore_ps(arg5, zmm3)
                var_740_8 = _mm256_maskstore_ps(arg5, zmm3)
            
            arg10 = var_880_11
            zmm0 = _mm256_add_ps(zmm1, temp0_1920)
            var_7e0.32 = zmm0
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg11[0].o)
            int32_t rbx_76 = arg4[2]
            zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            zmm1[0].o = zx.o(rbx_76 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            arg17[0].o = arg15[0].o
            zmm3[0].o = zmm0[0].o & arg15[0].o
            arg5[0].o &= zmm1[0].o
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(rbx_76 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                float temp0_1943[0x8] =
                    _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_740_8 = _mm256_maskstore_ps(zmm0, zmm1)
                arg10 = temp0_1943
            
            zmm0[0].o = zx.o(*(arg18 + 4))
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg5[0].o = var_8c0_8[0].o
            arg7[0].o = var_8b0
            arg6[0].o = var_8a0_8[0].o
            arg12[0].o = var_8a0_8[4].o
            arg16[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg15[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
            var_680_1.o = arg8[0].o
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            var_880_10[0].o = zmm3[0].o
            zmm1[0].o = zx.o(*(arg18 + 8))
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            temp0_1774[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            var_6c0.o = temp0_1774[0].o
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
            var_6a0.o = zmm3[0].o
            arg14[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1774[0].o, arg10[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            zmm3 = _mm256_insertf128_ps(zmm3, arg8[0].o, 1)
            float var_700_5[0x8] = zmm3
            arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
            arg11[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg7[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            temp0_1774[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
            temp0_1774[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_1774[0].o, zmm1[0].o)
            temp0_1774[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1774[0].o, arg14[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            temp0_1774[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1774[0].o, 2)
            zmm3 = _mm256_insertf128_ps(zmm3, temp0_1774[0].o, 1)
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg13[0].o, var_7a0.o)
            var_5c0.32 = arg5
            arg13 = _mm256_insertf128_ps(arg5, arg17[0].o, 1)
            zmm3 = _mm256_and_ps(arg13, zmm3)
            int32_t temp0_1976 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1977 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_1978 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 3)
            float rdi_50 = zmm3[0]
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            int32_t temp0_1980 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1981 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_1982 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            float* rcx_91 = *(arg18 + 0x10)
            zmm3[0].o = *(rcx_91 + sx.q(zmm3[0]))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_91 + sx.q(temp0_1980)), 0x10)
            arg6[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
            arg8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg8[0].o)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_91 + sx.q(temp0_1981)), 0x20)
            arg12[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_91 + sx.q(temp0_1982)), 0x30)
            zmm3[0].o = *(rcx_91 + sx.q(rdi_50))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_91 + sx.q(temp0_1976)), 0x10)
            temp0_1774[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg8[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg6[0].o)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            temp0_1774[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_1774[0].o, zmm1[0].o)
            temp0_1774[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1774[0].o, arg14[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            temp0_1774[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1774[0].o, 2)
            arg5 = _mm256_and_ps(arg13, _mm256_insertf128_ps(arg5, temp0_1774[0].o, 1))
            int32_t temp0_1999 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_2000 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_2001 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 3)
            float rbx_80 = arg5[0]
            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            int32_t temp0_2003 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_2004 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_2005 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            float r14_11 = arg5[0]
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_91 + sx.q(temp0_1977)), 0x20)
            arg15[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_91 + sx.q(temp0_1978)), 0x30)
            arg5[0].o = *(rcx_91 + sx.q(r14_11))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_91 + sx.q(temp0_2003)), 0x10)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_91 + sx.q(temp0_2004)), 0x20)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
            arg7[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_91 + sx.q(temp0_2005)), 0x30)
            arg5 = __vandps_ymmqq_ymmqq_memqq(arg13, var_700_5)
            var_700_5[0] = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
            temp0_1774[0].o = *(rcx_91 + sx.q(rbx_80))
            temp0_1774[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1774[0].o, 
                *(rcx_91 + sx.q(temp0_1999)), 0x10)
            int32_t temp0_2016 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 2)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg14[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            arg6 = _mm256_insertf128_ps(arg6, arg8[0].o, 1)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1774[0].o, 
                *(rcx_91 + sx.q(temp0_2000)), 0x20)
            float r13_10 = arg5[0]
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rcx_91 + sx.q(temp0_2001)), 0x30)
            int32_t temp0_2026 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            arg6 = _mm256_and_ps(arg13, arg6)
            int32_t temp0_2029 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_2030 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            float rsi_39 = arg5[0]
            int32_t temp0_2031 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            int64_t rdx_107 = sx.q(arg5[0])
            int32_t temp0_2033 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 1)
            int32_t temp0_2034 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 2)
            int32_t temp0_2035 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 3)
            float r9_10 = arg6[0]
            arg6[0].o = *(rcx_91 + rdx_107)
            int64_t rdx_109 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_91 + rdx_109), 0x10)
            int32_t temp0_2038 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_2039 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = *(rcx_91 + sx.q(r9_10))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_91 + sx.q(temp0_2038)), 0x20)
            temp0_1774[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_91 + sx.q(temp0_2039)), 0x30)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_91 + sx.q(temp0_2033)), 0x10)
            int64_t r13_11 = sx.q(r13_10)
            int64_t r9_12 = sx.q(var_700_5[0])
            int64_t r8_13 = sx.q(temp0_2016)
            int64_t rsi_40 = sx.q(rsi_39)
            int64_t rdi_53 = sx.q(temp0_2029)
            int64_t rdx_112 = sx.q(temp0_2030)
            int64_t r11_14 = sx.q(temp0_2031)
            arg6[0].o = *(rcx_91 + rsi_40)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_91 + rdi_53), 0x10)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_91 + rdx_112), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_91 + r11_14), 0x30)
            int64_t rax_257 = sx.q(temp0_2026)
            zmm3[0].o = *(rcx_91 + r13_11)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_91 + r9_12), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_91 + r8_13), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_91 + rax_257), 0x30)
            zmm3 = _mm256_insertf128_ps(zmm3, arg6[0].o, 1)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_91 + sx.q(temp0_2034)), 0x20)
            arg11[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_91 + sx.q(temp0_2035)), 0x30)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, var_680_1.o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, var_880_10[0].o)
            arg5 = var_780_8
            arg15 = _mm256_add_ps(zmm3, 
                _mm256_mul_ps(arg5, 
                    _mm256_sub_ps(_mm256_insertf128_ps(arg15, arg12[0].o, 1), zmm3)))
            zmm3[0].o = *(rdx_95 + rcx_91 + rsi_40)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_96 + rcx_91 + rdi_53), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_97 + rcx_91 + rdx_112), 0x20)
            arg7 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
            arg8[0].o = *(rdx_94 + rcx_91 + r13_11)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            float temp0_2065[0x8] = _mm256_mul_ps(arg5, 
                _mm256_sub_ps(_mm256_insertf128_ps(arg11, temp0_1774[0].o, 1), arg7))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_81 + rcx_91 + r11_14), 0x30)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rcx_83 + rcx_91 + r9_12), 0x10)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rcx_85 + rcx_91 + r8_13), 0x20)
            arg11 = _mm256_add_ps(arg7, temp0_2065)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rcx_87 + rcx_91 + rax_257), 0x30)
            arg8 = _mm256_insertf128_ps(arg8, zmm3[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg14[0].o)
            temp0_2065[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
            temp0_2065[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_2065[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm3 = _mm256_and_ps(arg13, _mm256_insertf128_ps(temp0_2065, zmm3[0].o, 1))
            int64_t rax_260 = sx.q(zmm3[0])
            int32_t temp0_2078 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_2079 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            temp0_2065[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg7[0].o = *(rdx_95 + sx.q(temp0_2065[0]) + rcx_91)
            void* rdi_60 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_2065[0].o, 1)) + rcx_91
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_96 + rdi_60), 0x10)
            void* rdi_63 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_2065[0].o, 2)) + rcx_91
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rdx_97 + rdi_63), 0x20)
            int32_t temp0_2085 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = *(rdx_94 + rax_260 + rcx_91)
            void* rax_264 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_2065[0].o, 3)) + rcx_91
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rcx_81 + rax_264), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rcx_83 + sx.q(temp0_2078) + rcx_91), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rcx_85 + sx.q(temp0_2079) + rcx_91), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rcx_87 + sx.q(temp0_2085) + rcx_91), 0x30)
            float temp0_2093[0x8] =
                _mm256_mul_ps(arg5, _mm256_sub_ps(_mm256_insertf128_ps(zmm3, arg7[0].o, 1), arg8))
            arg12 = _mm256_add_ps(arg8, temp0_2093)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
            temp0_2093[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_6a0.o)
            arg7[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg8[0].o, var_6c0.o)
            arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 2)
            temp0_2093[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_2093[0].o, 2)
            zmm3 = _mm256_and_ps(arg13, _mm256_insertf128_ps(arg7, temp0_2093[0].o, 1))
            void* rdx_120 = sx.q(zmm3[0]) + rcx_91
            int32_t temp0_2103 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_2104 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_2105 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            arg7[0].o = *(rdx_94 + rdx_120)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            temp0_2065[0].o = *(rdx_95 + sx.q(zmm3[0]) + rcx_91)
            void* rdx_126 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)) + rcx_91
            temp0_2065[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2065[0].o, *(rdx_96 + rdx_126), 0x10)
            void* rdx_129 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)) + rcx_91
            temp0_2065[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2065[0].o, *(rdx_97 + rdx_129), 0x20)
            void* rdx_132 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)) + rcx_91
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2065[0].o, *(rcx_81 + rdx_132), 0x30)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                *(rcx_83 + sx.q(temp0_2103) + rcx_91), 0x10)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                *(rcx_85 + sx.q(temp0_2104) + rcx_91), 0x20)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, 
                *(rcx_87 + sx.q(temp0_2105) + rcx_91), 0x30)
            arg9 = _mm256_insertf128_ps(arg7, zmm3[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm0 = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
            void* rdx_134 = sx.q(zmm0[0]) + rcx_91
            int32_t temp0_2123 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2124 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2125 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm1[0].o = *(rdx_94 + rdx_134)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm3[0].o = *(rdx_95 + sx.q(zmm0[0]) + rcx_91)
            int32_t temp0_2127 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2128 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2129 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rdx_96 + sx.q(temp0_2127) + rcx_91), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rdx_97 + sx.q(temp0_2128) + rcx_91), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rcx_81 + sx.q(temp0_2129) + rcx_91), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rcx_83 + sx.q(temp0_2123) + rcx_91), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rcx_85 + sx.q(temp0_2124) + rcx_91), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rcx_87 + sx.q(temp0_2125) + rcx_91), 0x30)
            float temp0_2139[0x8] = _mm256_add_ps(arg9, 
                _mm256_mul_ps(arg5, _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), arg9)))
            zmm1 = var_760_8
            float temp0_2142[0x8] =
                _mm256_add_ps(arg15, _mm256_mul_ps(_mm256_sub_ps(arg11, arg15), zmm1))
            zmm0 = _mm256_add_ps(temp0_2142, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(arg12, 
                            _mm256_mul_ps(zmm1, _mm256_sub_ps(temp0_2139, arg12))), 
                        temp0_2142), 
                    var_740_8))
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm3 = var_7e0.32
            zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
            temp0_2142[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_5c0.o)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o &= arg17[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_2142[0].o, zmm1[0].o)
            temp0_2142[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_2142[0].o) != 0)
                float temp0_2156[0x8] = _mm256_rsqrt_ps(zmm3)
                float temp0_2158[0x8] = _mm256_mul_ps(temp0_2156, _mm256_mul_ps(zmm3, temp0_2156))
                float temp0_2161[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_2156, _mm256_sub_ps(data_142fc9480, temp0_2158)), 
                    data_142fc94a0)
                float temp0_2162[0x8] = _mm256_rcp_ps(temp0_2161)
                float temp0_2163[0x8] = _mm256_mul_ps(temp0_2162, temp0_2161)
                float temp0_2166[0x8] = _mm256_add_ps(zmm0, 
                    _mm256_mul_ps(temp0_2162, _mm256_sub_ps(data_142fc94c0, temp0_2163)))
                temp0_2162[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1 = _mm256_insertf128_ps(temp0_2162, zmm1[0].o, 1)
                zmm0 = _mm256_blendv_ps(zmm0, temp0_2166, zmm1)
            
            zmm3 = var_7a0.32
            arg6 = var_7c0.32
            zmm1[0].o = arg22
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
                zmm3 = var_5e0_1
                arg7 = var_800_6
            else
                zmm3 = _mm256_insertf128_ps(zmm3, arg17[0].o, 1)
                float temp0_2183[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_300_1)
                float temp0_2184[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_1691)
                float temp0_2185[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_1693)
                arg6 = __vaddps_ymmqq_ymmqq_memqq(temp0_2183, var_500_1)
                float temp0_2187[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_2184, var_4e0_1)
                arg8 = __vaddps_ymmqq_ymmqq_memqq(temp0_2185, var_4c0_1)
                arg5 = _mm256_and_ps(arg5, zmm3)
                var_500_1 = _mm256_maskstore_ps(arg5, arg6)
                var_4e0_1 = _mm256_maskstore_ps(arg5, temp0_2187)
                var_4c0_1 = _mm256_maskstore_ps(arg5, arg8)
                zmm0 = _mm256_add_ps(var_800_6, zmm0)
                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                arg7 = _mm256_blendv_ps(var_800_6, zmm0, zmm1)
                zmm3 = var_5e0_1
    else
        zmm0[0].o = arg22
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
        float var_700_1[0x8] = zmm0
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int32_t rdx_24 = 0
        rax_80 = 0
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        
        do
            int64_t rax_81 = sx.q(rdx_24)
            zmm0[0].o = *(arg21 + rax_81)
            zmm1[0].o = *(arg21 + rax_81 + 0x10)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            int64_t rdx_25 = sx.q(zmm0[0])
            int64_t r11_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            int64_t rax_86 = sx.q(zmm1[0])
            int64_t rdi_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            int64_t rbx_25 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            int64_t rcx_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm0[0].o = *(arg20 + (rax_86 << 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg20 + (rdi_4 << 2)), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg20 + (rbx_25 << 2)), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg20 + (rcx_28 << 2)), 0x30)
            zmm1[0].o = *(arg20 + (rax_86 << 2) + 4)
            arg5[0].o = *(arg20 + (rdx_25 << 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r11_3 << 2)), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r14_3 << 2)), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r10_3 << 2)), 0x30)
            zmm3[0].o = *(arg20 + (rdx_25 << 2) + 4)
            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg20 + (rdi_4 << 2) + 4), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg20 + (rbx_25 << 2) + 4), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg20 + (rcx_28 << 2) + 4), 0x30)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg20 + (r11_3 << 2) + 4), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r14_3 << 2) + 4), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r10_3 << 2) + 4), 0x30)
            zmm3[0].o = *(arg20 + (rdx_25 << 2) + 8)
            arg6[0].o = *(arg20 + (rax_86 << 2) + 8)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg20 + (rdi_4 << 2) + 8), 0x10)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg20 + (rbx_25 << 2) + 8), 0x20)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg20 + (rcx_28 << 2) + 8), 0x30)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg20 + (r11_3 << 2) + 8), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg20 + (r14_3 << 2) + 8), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg20 + (r10_3 << 2) + 8), 0x30)
            zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            arg5 = _mm256_insertf128_ps(zmm3, arg6[0].o, 1)
            int32_t var_760_3[0x8] = zmm1
            float var_720_2[0x8] = arg14
            float temp0_537[0x8] = _mm256_broadcast_ss(arg19[3])
            float var_8c0_3[0x8] = temp0_537
            float var_8a0_3[0x8] = temp0_537
            float var_880_4[0x8] = temp0_537
            float var_860_2[0x8] = temp0_537
            arg6 = _mm256_broadcast_ss(arg19[1])
            float temp0_539[0x8] = _mm256_mul_ps(arg5, arg6)
            float temp0_540[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_541[0x8] = _mm256_mul_ps(zmm0, temp0_540)
            float temp0_542[0x8] = _mm256_broadcast_ss(*arg19)
            float temp0_543[0x8] = _mm256_mul_ps(zmm1, temp0_542)
            zmm1 = _mm256_sub_ps(temp0_539, _mm256_mul_ps(zmm1, temp0_540))
            float temp0_547[0x8] = _mm256_sub_ps(temp0_541, _mm256_mul_ps(arg5, temp0_542))
            float temp0_549[0x8] = _mm256_sub_ps(temp0_543, _mm256_mul_ps(zmm0, arg6))
            zmm1 = _mm256_add_ps(zmm1, zmm1)
            float temp0_551[0x8] = _mm256_add_ps(temp0_547, temp0_547)
            float temp0_552[0x8] = _mm256_add_ps(temp0_549, temp0_549)
            float temp0_553[0x8] = _mm256_mul_ps(temp0_537, zmm1)
            float temp0_554[0x8] = _mm256_mul_ps(temp0_537, temp0_551)
            float temp0_555[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_553, zmm0)
            float temp0_556[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_554, var_760_3)
            float temp0_558[0x8] =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_537, temp0_552), arg5)
            float temp0_559[0x8] = _mm256_mul_ps(temp0_552, arg6)
            float temp0_560[0x8] = _mm256_mul_ps(zmm1, temp0_540)
            float temp0_561[0x8] = _mm256_mul_ps(temp0_551, temp0_542)
            float temp0_564[0x8] = _mm256_add_ps(temp0_555, 
                _mm256_sub_ps(temp0_559, _mm256_mul_ps(temp0_551, temp0_540)))
            float temp0_567[0x8] = _mm256_add_ps(temp0_556, 
                _mm256_sub_ps(temp0_560, _mm256_mul_ps(temp0_552, temp0_542)))
            zmm1 = _mm256_add_ps(temp0_558, _mm256_sub_ps(temp0_561, _mm256_mul_ps(zmm1, arg6)))
            zmm3 = _mm256_broadcast_ss(arg19[4])
            float temp0_572[0x8] = _mm256_add_ps(temp0_564, zmm3)
            float temp0_574[0x8] = _mm256_add_ps(temp0_567, _mm256_broadcast_ss(arg19[5]))
            float temp0_576[0x8] = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg19[6]))
            float temp0_577[0x8] = _mm256_broadcast_ss(var_830_1)
            zmm1 = _mm256_cmp_ps(temp0_577, temp0_572, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_8c0_3 = _mm256_maskstore_ps(zmm1, temp0_577)
            
            float temp0_581[0x8] = _mm256_cmp_ps(arg14, arg14, 0xf)
            int32_t temp0_582[0x8] = _mm256_xor_ps(zmm1, temp0_581)
            
            if (_mm256_movemask_ps(temp0_582) != 0)
                zmm3 = _mm256_broadcast_ss(var_840_1)
                float temp0_585[0x8] = _mm256_cmp_ps(temp0_572, zmm3, 1)
                arg6 = _mm256_and_ps(temp0_585, temp0_582)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_8c0_3 = _mm256_maskstore_ps(arg6, zmm3)
                
                int32_t temp0_589[0x8] = _mm256_andnot_ps(temp0_585, temp0_582)
                
                if (_mm256_movemask_ps(temp0_589) != 0)
                    var_8c0_3 = _mm256_maskstore_ps(temp0_589, temp0_572)
            
            float temp0_592[0x8] = _mm256_broadcast_ss(temp0_495)
            zmm1 = _mm256_cmp_ps(temp0_592, temp0_574, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_8a0_3 = _mm256_maskstore_ps(zmm1, temp0_592)
            
            int32_t temp0_596[0x8] = _mm256_xor_ps(zmm1, temp0_581)
            
            if (_mm256_movemask_ps(temp0_596) != 0)
                zmm3 = _mm256_broadcast_ss(temp0_500)
                float temp0_599[0x8] = _mm256_cmp_ps(temp0_574, zmm3, 1)
                arg6 = _mm256_and_ps(temp0_599, temp0_596)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_8a0_3 = _mm256_maskstore_ps(arg6, zmm3)
                
                int32_t temp0_603[0x8] = _mm256_andnot_ps(temp0_599, temp0_596)
                
                if (_mm256_movemask_ps(temp0_603) != 0)
                    var_8a0_3 = _mm256_maskstore_ps(temp0_603, temp0_574)
            
            float temp0_606[0x8] = _mm256_broadcast_ss(temp0_496)
            zmm1 = _mm256_cmp_ps(temp0_606, temp0_576, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_880_4 = _mm256_maskstore_ps(zmm1, temp0_606)
            
            zmm0 = _mm256_xor_ps(zmm1, temp0_581)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_612[0x8] = _mm256_broadcast_ss(temp0_501)
                zmm1 = _mm256_cmp_ps(temp0_576, temp0_612, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_880_4 = _mm256_maskstore_ps(zmm3, temp0_612)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_880_4 = _mm256_maskstore_ps(zmm0, temp0_576)
            
            var_640.32 = temp0_572
            var_620.32 = temp0_574
            var_600.32 = temp0_576
            float temp0_620[0x8] = _mm256_broadcast_ss(*r15)
            float temp0_621[0x8] = _mm256_sub_ps(var_8c0_3, temp0_620)
            float temp0_622[0x8] = _mm256_broadcast_ss(*(r15 + 4))
            zmm1 = _mm256_sub_ps(var_8a0_3, temp0_622)
            float temp0_624[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_625[0x8] = _mm256_div_ps(temp0_621, temp0_624)
            arg9 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, arg9)
            float temp0_628[0x8] = _mm256_broadcast_ss(r15[1].d)
            var_660.32 = var_880_4
            float temp0_629[0x8] = _mm256_sub_ps(var_880_4, temp0_628)
            zmm3[0].o = arg3[1].d
            arg6[0].o = _mm_permute_ps(zmm3[0].o, 0)
            arg10 = _mm256_insertf128_ps(arg6, arg6[0].o, 1)
            float temp0_632[0x8] = _mm256_div_ps(temp0_629, arg10)
            arg6 = _mm256_cvttps_epi32(temp0_625)
            arg16 = _mm256_cvttps_epi32(zmm1)
            arg11 = _mm256_cvttps_epi32(temp0_632)
            float temp0_637[0x8] = _mm256_mul_ps(temp0_624, _mm256_cvtepi32_ps(arg6))
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x20)
            temp0_632[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            temp0_632[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_632[0].o, zmm3[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            arg5 = _mm256_insertf128_ps(zmm3, temp0_632[0].o, 1)
            float temp0_646[0x8] = _mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg16))
            float var_6e0_2[0x8] = arg11
            float temp0_648[0x8] = _mm256_mul_ps(arg10, _mm256_cvtepi32_ps(arg11))
            var_560.32 = temp0_620
            float temp0_649[0x8] = _mm256_add_ps(temp0_637, temp0_620)
            var_580.32 = temp0_622
            float temp0_650[0x8] = _mm256_add_ps(temp0_646, temp0_622)
            var_5c0.32 = temp0_628
            float temp0_651[0x8] = _mm256_add_ps(temp0_648, temp0_628)
            zmm1[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
            temp0_648[0].o = _mm_permute_ps(zmm1[0].o, 0)
            arg13 = _mm256_insertf128_ps(temp0_648, temp0_648[0].o, 1)
            float temp0_655[0x8] = _mm256_add_ps(arg13, temp0_649)
            temp0_648[0].o = _mm_permute_ps(zmm1[0].o, 0x55)
            arg14 = _mm256_insertf128_ps(temp0_648, temp0_648[0].o, 1)
            float temp0_658[0x8] = _mm256_add_ps(arg14, temp0_650)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
            arg15 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            var_540.32 = var_8c0_3
            zmm3 = _mm256_blendv_ps(arg5, arg6, _mm256_cmp_ps(temp0_655, var_8c0_3, 1))
            float var_8c0_4[0x8] = zmm3
            zmm1 = _mm256_cmp_ps(temp0_658, var_8a0_3, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                arg6 = arg16
            
            float temp0_665[0x8] = _mm256_add_ps(arg15, temp0_651)
            var_5a0.32 = var_8a0_3
            arg11 = _mm256_cmp_ps(temp0_658, var_8a0_3, 5)
            var_8a0_3[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            var_8a0_3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, var_8a0_3[0].o)
            var_8a0_3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_8a0_3[0].o, temp0_665[0].o)
            bool cond:2_1 = __vpmovmskb_gpr32d_xmmdq(var_8a0_3[0].o) == 0
            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            
            if (not(cond:2_1))
                arg5[0].o = _mm256_extractf128_ps(arg16[0].o, 1)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
                var_8a0_3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg11[0].o)
                arg5 = _mm256_insertf128_ps(var_8a0_3, arg5[0].o, 1)
            
            arg16 = _mm256_blendv_ps(arg5, arg6, zmm1)
            double var_8a0_4[0x4] = arg16
            arg17 = var_660.32
            zmm1 = _mm256_cmp_ps(temp0_665, arg17, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                arg6 = var_6e0_2
            
            float temp0_679[0x8] = _mm256_cmp_ps(temp0_665, arg17, 5)
            var_8a0_3[0].o = _mm256_extractf128_ps(temp0_679[0].o, 1)
            temp0_679[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_679[0].o, var_8a0_3[0].o)
            temp0_679[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_679[0].o, temp0_679[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_679[0].o) != 0)
                temp0_679[0].o = _mm256_extractf128_ps(var_6e0_2[0].o, 1)
                temp0_679[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_679[0].o, arg11[0].o)
                var_6e0_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_6e0_2[0].o, arg11[0].o)
                arg5 = _mm256_insertf128_ps(var_6e0_2, temp0_679[0].o, 1)
            
            float temp0_688[0x8] = _mm256_blendv_ps(arg5, arg6, zmm1)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_624, _mm256_cvtepi32_ps(zmm3)), 
                var_560.32)
            float temp0_694[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg16)), var_580.32)
            float var_880_5[0x8] = temp0_688
            float temp0_697[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg10, _mm256_cvtepi32_ps(temp0_688)), var_5c0.32)
            zmm1 = _mm256_add_ps(arg13, zmm1)
            float temp0_699[0x8] = _mm256_add_ps(arg14, temp0_694)
            float temp0_700[0x8] = _mm256_add_ps(arg15, temp0_697)
            arg12 = var_540.32
            zmm1 = _mm256_div_ps(_mm256_sub_ps(arg12, zmm1), temp0_624)
            arg8 = var_5a0.32
            float temp0_704[0x8] = _mm256_div_ps(_mm256_sub_ps(arg8, temp0_699), arg9)
            float temp0_706[0x8] = _mm256_div_ps(_mm256_sub_ps(arg17, temp0_700), arg10)
            int32_t var_780_4[0x8] = zmm1
            float var_760_4[0x8] = temp0_704
            float var_740_4[0x8] = temp0_706
            temp0_706[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            temp0_706[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_706[0].o, arg11[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, temp0_706[0].o, 1)
            bool cond:5_1 = _mm256_movemask_ps(zmm0) == 0
            temp0_624[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_624[0].o, temp0_624[0].o)
            arg6 = var_620.32
            
            if (not(cond:5_1))
                var_8c0_4 = _mm256_maskstore_ps(zmm0, temp0_624)
                var_780_4 = _mm256_maskstore_ps(zmm0, temp0_624)
                zmm3 = var_8c0_4
            
            int32_t rax_105 = *arg4
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm1[0].o = zx.o(rax_105 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm3 = var_640.32
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rax_105 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                var_8c0_4 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                var_780_4 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_8a0_4[0].o)
            temp0_704[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_8a0_4[2].o)
            zmm1 = _mm256_sub_ps(arg12, zmm3)
            zmm0 = _mm256_insertf128_ps(zmm0, temp0_704[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_8a0_4 = _mm256_maskstore_ps(zmm0, temp0_624)
                var_760_4 = _mm256_maskstore_ps(zmm0, temp0_624)
            
            arg5 = var_8a0_4
            float temp0_732[0x8] = _mm256_sub_ps(arg8, arg6)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            int32_t rax_108 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            arg6[0].o = zx.o(rax_108 - 1)
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                zmm3[0].o = zx.o(rax_108 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_8a0_4 = _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_760_4 = _mm256_maskstore_ps(arg5, data_142fc95a0)
            
            float temp0_744[0x8] = __vsubps_ymmqq_ymmqq_memqq(arg17, var_600.32)
            zmm3 = _mm256_mul_ps(temp0_732, temp0_732)
            temp0_732[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_880_5[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_880_5[4].o)
            zmm1 = _mm256_add_ps(zmm1, temp0_624)
            zmm0 = _mm256_insertf128_ps(temp0_732, arg6[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_880_5 = _mm256_maskstore_ps(zmm0, temp0_624)
                var_740_4 = _mm256_maskstore_ps(zmm0, temp0_624)
            
            arg14 = var_880_5
            float temp0_753[0x8] = _mm256_mul_ps(temp0_744, temp0_744)
            zmm1 = _mm256_add_ps(zmm1, zmm3)
            int32_t rax_111 = arg4[2]
            temp0_744[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm3[0].o = zx.o(rax_111 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            temp0_744[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_744[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
            arg5 = _mm256_insertf128_ps(zmm3, temp0_744[0].o, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                zmm3[0].o = zx.o(rax_111 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                float temp0_763[0x8] =
                    _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                zmm3 = data_142fc95a0
                var_740_4 = _mm256_maskstore_ps(arg5, zmm3)
                arg14 = temp0_763
            
            float temp0_765[0x8] = _mm256_add_ps(zmm1, temp0_753)
            var_600.32 = temp0_765
            temp0_765[0].o = zx.o(*(arg18 + 4))
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_765[0].o, 0)
            arg6[0].o = var_8c0_4[0].o
            arg13[0].o = var_8b0
            arg8[0].o = var_8a0_4[0].o
            arg9[0].o = var_8a0_4[2].o
            arg15[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
            arg10[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg8[0].o)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg9[0].o)
            arg5[0].o = zx.o(*(arg18 + 8))
            temp0_624[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg17[0].o, temp0_624[0].o)
            var_640.o = arg5[0].o
            temp0_765[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg10[0].o, temp0_624[0].o)
            var_620.o = temp0_765[0].o
            temp0_765[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_765[0].o, arg14[0].o)
            arg11[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            temp0_765[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_765[0].o, 2)
            int32_t temp0_777 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 1)
            int32_t temp0_778 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 2)
            float rdx_26 = temp0_765[0]
            int32_t temp0_779 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 3)
            temp0_765[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
            float* r10_4 = *(arg18 + 0x10)
            temp0_765[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_765[0].o, 2)
            int64_t r14_4 = sx.q(rdx_26)
            int64_t r15_2 = sx.q(temp0_777)
            int64_t rdx_27 = sx.q(temp0_778)
            int64_t rdi_6 = sx.q(temp0_765[0])
            int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 1))
            int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 2))
            int32_t temp0_784 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 3)
            temp0_765[0].o = *(r10_4 + rdi_6)
            temp0_765[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_765[0].o, *(r10_4 + r12_2), 0x10)
            temp0_765[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_765[0].o, *(r10_4 + r13_2), 0x20)
            int64_t r9_5 = sx.q(temp0_784)
            temp0_765[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_765[0].o, *(r10_4 + r9_5), 0x30)
            zmm3[0].o = *(r10_4 + r14_4)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r10_4 + r15_2), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r10_4 + rdx_27), 0x20)
            int64_t r8_5 = sx.q(temp0_779)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r10_4 + r8_5), 0x30)
            double temp0_791[0x4] = _mm256_insertf128_ps(zmm3, temp0_765[0].o, 1)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            temp0_765[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
            zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_765[0].o)
            arg10[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg17[0].o, zmm1[0].o)
            temp0_765[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
            temp0_765[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_765[0].o, temp0_624[0].o)
            temp0_765[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_765[0].o, arg11[0].o)
            temp0_765[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_765[0].o, 2)
            int32_t temp0_803 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 1)
            int32_t temp0_804 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 2)
            int32_t temp0_805 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 3)
            float rsi_16 = temp0_765[0]
            temp0_765[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
            temp0_765[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_765[0].o, temp0_624[0].o)
            temp0_765[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_765[0].o, arg14[0].o)
            temp0_765[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_765[0].o, 2)
            int32_t temp0_810 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 1)
            zmm1[0].o = *(r10_4 + sx.q(rsi_16))
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_4 + sx.q(temp0_803)), 0x10)
            int32_t temp0_812 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 2)
            int32_t temp0_813 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 3)
            float rax_120 = temp0_765[0]
            temp0_765[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_4 + sx.q(temp0_804)), 0x20)
            temp0_765[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_765[0].o, *(r10_4 + sx.q(temp0_805)), 0x30)
            zmm1[0].o = *(r10_4 + sx.q(rax_120))
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_4 + sx.q(temp0_810)), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_4 + sx.q(temp0_812)), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_4 + sx.q(temp0_813)), 0x30)
            zmm3 = _mm256_insertf128_ps(zmm1, temp0_765[0].o, 1)
            temp0_765[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, temp0_765[0].o)
            arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, temp0_624[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, temp0_624[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg14[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            float rax_122 = arg9[0]
            int32_t temp0_830 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            int32_t temp0_831 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            int32_t temp0_832 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
            arg9[0].o = *(r10_4 + sx.q(rax_122))
            int32_t temp0_833 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1)
            float temp0_834[0x8] = _mm256_sub_ps(zmm3, temp0_791)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r10_4 + sx.q(temp0_830)), 0x10)
            int32_t temp0_836 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r10_4 + sx.q(temp0_831)), 0x20)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r10_4 + sx.q(temp0_832)), 0x30)
            float rdx_34 = arg8[0]
            int32_t temp0_839 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3)
            arg15 = var_780_4
            float temp0_840[0x8] = _mm256_mul_ps(arg15, temp0_834)
            arg8[0].o = *(r10_4 + sx.q(rdx_34))
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r10_4 + sx.q(temp0_833)), 0x10)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r10_4 + sx.q(temp0_836)), 0x20)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r10_4 + sx.q(temp0_839)), 0x30)
            arg16 = _mm256_add_ps(temp0_791, temp0_840)
            arg8 = _mm256_insertf128_ps(arg8, arg9[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
            temp0_765[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_765[0].o)
            temp0_765[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_765[0].o, temp0_624[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_624[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
            temp0_765[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_765[0].o, arg11[0].o)
            temp0_765[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_765[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            int64_t rax_127 = sx.q(zmm1[0])
            int64_t rcx_44 = sx.q(temp0_765[0])
            int32_t temp0_854 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 1)
            temp0_840[0].o = *(r10_4 + rcx_44)
            int32_t temp0_855 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 2)
            temp0_840[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_840[0].o, *(r10_4 + sx.q(temp0_854)), 0x10)
            int32_t temp0_857 = __vpextrd_gpr32d_xmmdq_immb(temp0_765[0].o, 3)
            temp0_765[0].o = *(r10_4 + rax_127)
            temp0_840[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_840[0].o, *(r10_4 + sx.q(temp0_855)), 0x20)
            int64_t rax_130 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            temp0_840[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_840[0].o, *(r10_4 + sx.q(temp0_857)), 0x30)
            int32_t temp0_861 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            temp0_765[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_765[0].o, *(r10_4 + rax_130), 0x10)
            int32_t temp0_863 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            arg6[0].o = *(r10_4 + rdi_6 + 4)
            temp0_765[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_765[0].o, *(r10_4 + sx.q(temp0_861)), 0x20)
            temp0_765[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_765[0].o, *(r10_4 + sx.q(temp0_863)), 0x30)
            zmm0 = _mm256_insertf128_ps(temp0_765, temp0_840[0].o, 1)
            arg9[0].o = *(r10_4 + r14_4 + 4)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg17[0].o, temp0_624[0].o)
            temp0_840[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg10[0].o, temp0_624[0].o)
            float temp0_870[0x8] = _mm256_mul_ps(arg15, _mm256_sub_ps(zmm0, arg8))
            arg10 = _mm256_add_ps(arg8, temp0_870)
            temp0_870[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r10_4 + r12_2 + 4), 0x10)
            temp0_870[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_870[0].o, *(r10_4 + r13_2 + 4), 0x20)
            temp0_870[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_870[0].o, *(r10_4 + r9_5 + 4), 0x30)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r10_4 + r15_2 + 4), 0x10)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r10_4 + rdx_27 + 4), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r10_4 + r8_5 + 4), 0x30)
            arg6 = _mm256_insertf128_ps(arg6, temp0_870[0].o, 1)
            temp0_870[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_840[0].o, arg14[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            temp0_870[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_870[0].o, 2)
            float rax_134 = temp0_870[0]
            int32_t temp0_883 = __vpextrd_gpr32d_xmmdq_immb(temp0_870[0].o, 1)
            int32_t temp0_884 = __vpextrd_gpr32d_xmmdq_immb(temp0_870[0].o, 2)
            int32_t temp0_885 = __vpextrd_gpr32d_xmmdq_immb(temp0_870[0].o, 3)
            temp0_870[0].o = *(r10_4 + sx.q(rax_134) + 4)
            int64_t rdx_40 = sx.q(arg8[0])
            int32_t temp0_886 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1)
            int32_t temp0_887 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            int32_t temp0_888 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3)
            arg8[0].o = *(r10_4 + rdx_40 + 4)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r10_4 + sx.q(temp0_886) + 4), 0x10)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r10_4 + sx.q(temp0_887) + 4), 0x20)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r10_4 + sx.q(temp0_888) + 4), 0x30)
            temp0_870[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_870[0].o, 
                *(r10_4 + sx.q(temp0_883) + 4), 0x10)
            temp0_870[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_870[0].o, 
                *(r10_4 + sx.q(temp0_884) + 4), 0x20)
            temp0_870[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_870[0].o, 
                *(r10_4 + sx.q(temp0_885) + 4), 0x30)
            zmm0 = _mm256_insertf128_ps(temp0_870, arg8[0].o, 1)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_624[0].o, arg11[0].o)
            temp0_624[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_624[0].o, arg14[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_memdq(temp0_624[0].o, var_620.o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_640.o)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            int64_t rax_139 = sx.q(arg8[0])
            int32_t temp0_902 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1)
            int32_t temp0_903 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            int32_t temp0_904 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3)
            arg8[0].o = *(r10_4 + rax_139 + 4)
            float rax_140 = arg9[0]
            int32_t temp0_905 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            int32_t temp0_906 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            int32_t temp0_907 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
            arg9[0].o = *(r10_4 + sx.q(rax_140) + 4)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r10_4 + sx.q(temp0_905) + 4), 0x10)
            float temp0_910[0x8] = _mm256_mul_ps(arg15, _mm256_sub_ps(zmm0, arg6))
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r10_4 + sx.q(temp0_906) + 4), 0x20)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(r10_4 + sx.q(temp0_907) + 4), 0x30)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r10_4 + sx.q(temp0_902) + 4), 0x10)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r10_4 + sx.q(temp0_903) + 4), 0x20)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(r10_4 + sx.q(temp0_904) + 4), 0x30)
            float temp0_916[0x8] = _mm256_add_ps(arg6, temp0_910)
            arg6 = _mm256_insertf128_ps(arg8, arg9[0].o, 1)
            temp0_840[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_624[0].o, temp0_840[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_840[0].o, 2)
            int32_t temp0_922 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int64_t rcx_55 = sx.q(zmm1[0])
            int32_t temp0_923 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_924 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_925 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(r10_4 + rcx_55 + 4)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_4 + sx.q(temp0_923) + 4), 0x10)
            float rcx_57 = arg5[0]
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_4 + sx.q(temp0_924) + 4), 0x20)
            int32_t temp0_928 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r10_4 + sx.q(temp0_925) + 4), 0x30)
            int32_t temp0_930 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = *(r10_4 + sx.q(rcx_57) + 4)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_4 + sx.q(temp0_922) + 4), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_4 + sx.q(temp0_928) + 4), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r10_4 + sx.q(temp0_930) + 4), 0x30)
            zmm1 = _mm256_add_ps(arg6, 
                _mm256_mul_ps(arg15, _mm256_sub_ps(_mm256_insertf128_ps(arg5, zmm1[0].o, 1), arg6)))
            arg5 = var_760_4
            float temp0_940[0x8] =
                _mm256_add_ps(arg16, _mm256_mul_ps(_mm256_sub_ps(arg10, arg16), arg5))
            zmm0 = _mm256_add_ps(temp0_940, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(temp0_916, 
                            _mm256_mul_ps(arg5, _mm256_sub_ps(zmm1, temp0_916))), 
                        temp0_940), 
                    var_740_4))
            zmm3 = var_600.32
            arg14[0].o = zx.o(0)
            zmm1 = _mm256_cmp_ps(zmm3, arg14, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_949[0x8] = _mm256_rsqrt_ps(zmm3)
                float temp0_951[0x8] = _mm256_mul_ps(temp0_949, _mm256_mul_ps(zmm3, temp0_949))
                float temp0_954[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_949, _mm256_sub_ps(data_142fc9480, temp0_951)), 
                    data_142fc94a0)
                float temp0_955[0x8] = _mm256_rcp_ps(temp0_954)
                float temp0_956[0x8] = _mm256_mul_ps(temp0_955, temp0_954)
                arg6 = data_142fc94c0
                arg5 = _mm256_add_ps(zmm0, _mm256_mul_ps(temp0_955, _mm256_sub_ps(arg6, temp0_956)))
                zmm0 = _mm256_blendv_ps(zmm0, arg5, zmm1)
            
            arg4 = var_7a0
            r15 = var_7c0
            arg3 = var_7e0
            arg7 = arg7
            rcx = arg25
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, var_700_1)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_964[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_572)
                float temp0_965[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_574)
                float temp0_966[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_576)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_964, var_500_1)
                float temp0_968[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_965, var_4e0_1)
                arg6 = __vaddps_ymmqq_ymmqq_memqq(temp0_966, var_4c0_1)
                var_500_1 = _mm256_maskstore_ps(zmm1, arg5)
                var_4e0_1 = _mm256_maskstore_ps(zmm1, temp0_968)
                var_4c0_1 = _mm256_maskstore_ps(zmm1, arg6)
                zmm0 = _mm256_add_ps(arg7, zmm0)
                arg7 = _mm256_blendv_ps(arg7, zmm0, zmm1)
            
            zmm3 = var_5e0_1
            rax_80 += 8
            rdx_24 += 0x20
        while (rax_80 s< rax_79)
        
        if (rax_80 s< rcx)
            goto label_140077dfb
    zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    zmm0[0].o ^= arg5[0].o
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    zmm1[0].o ^= arg5[0].o
    zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
    int32_t temp0_2222[0x8] = __vandps_ymmqq_ymmqq_memqq(zmm0, var_500_1)
    zmm1 = _mm256_hadd_ps(temp0_2222, temp0_2222)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    arg5 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_4e0_1)
    float temp0_2226[0x8] = _mm256_hadd_ps(arg5, arg5)
    float temp0_2227[0x8] = _mm256_hadd_ps(temp0_2226, temp0_2226)
    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm0, var_4c0_1)
    arg6[0].o = _mm256_extractf128_ps(temp0_2227[0].o, 1)
    float temp0_2231[0x8] = _mm256_hadd_ps(zmm3, zmm3)
    temp0_2227[0].o = temp0_2227[0].o f+ arg6[0]
    float temp0_2232[0x8] = _mm256_hadd_ps(temp0_2231, temp0_2231)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_2227[0].o, 0x10)
    temp0_2227[0].o = _mm256_extractf128_ps(temp0_2232[0].o, 1)
    temp0_2227[0].o = temp0_2232[0].o f+ temp0_2227[0]
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_2227[0].o, 0x20)
    temp0_2227[0].o = __vmovsd_xmmdq_memq(*arg24)
    temp0_2227[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_2227[0].o, arg24[1].d, 0x20)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_2227[0].o)
    *arg24 = zmm1[0]
    *(arg24 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    arg24[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
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
    int32_t var_810_1 = zmm1[0]
    float temp0_8 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float var_4a0_1[0x8] = arg6
    float temp0_9 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm1[0].o = __vmovsd_xmmdq_memq(*r15)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r15[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_820_1 = zmm0[0]
    float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_14 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rax_6 = ((rcx s>> 0x1f u>> 0x1d) + rcx) & 0xfffffff8
    int32_t var_680
    int32_t rax_7
    
    if (rax_6 s<= 0)
        rax_7 = 0
        
        if (0 s< rcx)
        label_1400769d5:
            var_600.32 = arg6
            zmm0[0].o = zx.o(rax_7)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
            arg13[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
            arg5[0].o = zx.o(rcx)
            arg16[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            arg15[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg13[0].o)
            float var_800_4[0x8] = zmm0
            arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
            arg10 = _mm256_insertf128_ps(arg14, arg15[0].o, 1)
            float temp0_982[0x8] = _mm256_maskload_ps(arg10, *(arg21 + sx.q(rax_7 << 2)))
            arg8[0].o = _mm256_extractf128_ps(temp0_982[0].o, 1)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_982[0].o, temp0_982[0].o)
            temp0_982[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, temp0_982[0].o)
            arg7 = _mm256_and_ps(arg10, _mm256_insertf128_ps(temp0_982, arg8[0].o, 1))
            int64_t rax_154 = sx.q(arg7[0])
            int64_t r11_5 = arg20 + (rax_154 << 2)
            arg8[0].o = *(arg20 + (rax_154 << 2))
            int64_t rcx_60 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
            int64_t r10_5 = arg20 + (rcx_60 << 2)
            int64_t rbx_40 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
            int64_t r12_3 = arg20 + (rbx_40 << 2)
            int64_t rax_157 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
            int64_t rdx_49 = arg20 + (rax_157 << 2)
            arg9[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            int64_t rdi_13 = sx.q(arg9[0])
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_60 << 2)), 0x10)
            int32_t temp0_995 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            arg8[0].o = *(arg20 + (rdi_13 << 2))
            int64_t rcx_62 = sx.q(temp0_995)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_62 << 2)), 0x10)
            int64_t rdi_14 = arg20 + (rdi_13 << 2)
            int64_t r14_5 = arg20 + (rcx_62 << 2)
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg20 + (rbx_40 << 2)), 0x20)
            int32_t temp0_998 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            arg17[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(arg20 + (rax_157 << 2)), 0x30)
            int64_t rcx_64 = sx.q(temp0_998)
            int64_t rbx_42 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rcx_64 << 2)), 0x20)
            arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(arg20 + (rbx_42 << 2)), 0x30)
            int64_t rcx_65 = arg20 + (rcx_64 << 2)
            int64_t rbx_43 = arg20 + (rbx_42 << 2)
            arg9 = __vandps_ymmqq_ymmqq_memqq(arg10, data_142fc9520)
            arg11 = __vandps_ymmqq_ymmqq_memqq(arg10, data_142fc9540)
            zmm0[0].o = *(zx.q(arg11[0]) + r11_5)
            uint64_t rax_158 = zx.q(arg9[0])
            zmm1[0].o = *(rax_158 + r11_5)
            arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            arg6[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            zmm3[0].o = *(zx.q(arg6[0]) + rdi_14)
            uint64_t rax_159 = zx.q(arg5[0])
            arg7[0].o = *(rax_159 + rdi_14)
            uint64_t rdi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_15 + r14_5), 0x10)
            uint64_t rax_160 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_160 + r14_5), 0x10)
            uint64_t rdi_16 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_16 + rcx_65), 0x20)
            uint64_t rax_161 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_161 + rcx_65), 0x20)
            uint64_t rcx_66 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_66 + rbx_43), 0x30)
            uint64_t rax_162 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_162 + rbx_43), 0x30)
            uint64_t rcx_67 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_67 + r10_5), 0x10)
            uint64_t rax_163 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_163 + r10_5), 0x10)
            uint64_t rcx_68 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_68 + r12_3), 0x20)
            uint64_t rax_164 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_164 + r12_3), 0x20)
            uint64_t rax_165 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_165 + rdx_49), 0x30)
            uint64_t rax_166 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_166 + rdx_49), 0x30)
            arg6 = _mm256_insertf128_ps(arg17, arg8[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm1, arg5[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
            int32_t var_380_1[0x8] = zmm1
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            float temp0_1035[0x8] = _mm256_broadcast_ss(arg19[3])
            float var_8c0_5[0x8] = temp0_1035
            float var_8a0_5[0x8] = temp0_1035
            float var_880_7[0x8] = temp0_1035
            float var_860_3[0x8] = temp0_1035
            float temp0_1036[0x8] = _mm256_broadcast_ss(arg19[1])
            float temp0_1037[0x8] = _mm256_mul_ps(zmm0, temp0_1036)
            float temp0_1038[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_1039[0x8] = _mm256_mul_ps(arg6, temp0_1038)
            float temp0_1040[0x8] = _mm256_broadcast_ss(*arg19)
            float temp0_1041[0x8] = _mm256_mul_ps(zmm1, temp0_1038)
            zmm1 = _mm256_mul_ps(zmm1, temp0_1040)
            float temp0_1043[0x8] = _mm256_sub_ps(temp0_1037, temp0_1041)
            float temp0_1044[0x8] = _mm256_mul_ps(temp0_1035, arg11)
            float temp0_1046[0x8] = _mm256_sub_ps(temp0_1039, _mm256_mul_ps(zmm0, temp0_1040))
            zmm1 = _mm256_sub_ps(zmm1, _mm256_mul_ps(arg6, temp0_1036))
            float temp0_1049[0x8] = _mm256_sub_ps(temp0_1044, temp0_1044)
            float temp0_1050[0x8] = _mm256_add_ps(temp0_1043, temp0_1043)
            float temp0_1051[0x8] = _mm256_add_ps(temp0_1046, temp0_1046)
            zmm1 = _mm256_add_ps(zmm1, zmm1)
            float temp0_1053[0x8] = _mm256_add_ps(temp0_1049, temp0_1049)
            float var_780_5[0x8] = temp0_1050
            float var_760_5[0x8] = temp0_1051
            int32_t var_740_5[0x8] = zmm1
            float var_720_3[0x8] = temp0_1053
            float temp0_1054[0x8] = _mm256_mul_ps(temp0_1035, temp0_1050)
            float temp0_1055[0x8] = _mm256_mul_ps(temp0_1035, temp0_1051)
            float temp0_1056[0x8] = _mm256_mul_ps(temp0_1035, zmm1)
            float temp0_1057[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1054, arg6)
            float temp0_1058[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1055, var_380_1)
            float temp0_1059[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1056, zmm0)
            float var_180_1[0x8] = temp0_1057
            float var_160_1[0x8] = temp0_1058
            float var_140_1[0x8] = temp0_1059
            float var_120_1[0x8] =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_1035, temp0_1053), arg11)
            float temp0_1062[0x8] = _mm256_broadcast_ss(arg19[1])
            float temp0_1063[0x8] = _mm256_mul_ps(zmm1, temp0_1062)
            float temp0_1064[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_1066[0x8] = _mm256_sub_ps(temp0_1063, _mm256_mul_ps(temp0_1051, temp0_1064))
            float temp0_1067[0x8] = _mm256_broadcast_ss(*arg19)
            float temp0_1068[0x8] = _mm256_mul_ps(temp0_1051, temp0_1067)
            zmm1 = _mm256_mul_ps(zmm1, temp0_1067)
            zmm1 = _mm256_sub_ps(_mm256_mul_ps(temp0_1050, temp0_1064), zmm1)
            float temp0_1073[0x8] = _mm256_sub_ps(temp0_1068, _mm256_mul_ps(temp0_1050, temp0_1062))
            float temp0_1074[0x8] = _mm256_add_ps(temp0_1057, temp0_1066)
            zmm1 = _mm256_add_ps(temp0_1058, zmm1)
            float temp0_1076[0x8] = _mm256_add_ps(temp0_1059, temp0_1073)
            zmm3 = _mm256_add_ps(temp0_1074, _mm256_broadcast_ss(arg19[4]))
            arg5 = _mm256_broadcast_ss(arg19[5])
            float temp0_1080[0x8] = _mm256_add_ps(zmm1, arg5)
            zmm1 = _mm256_broadcast_ss(arg19[6])
            float temp0_1082[0x8] = _mm256_add_ps(temp0_1076, zmm1)
            float temp0_1083[0x8] = _mm256_broadcast_ss(var_810_1)
            float temp0_1084[0x8] = _mm256_cmp_ps(temp0_1083, zmm3, 1)
            temp0_1076[0].o = _mm256_extractf128_ps(temp0_1084[0].o, 1)
            temp0_1076[0].o &= arg15[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1084[0].o, arg14[0].o)
            temp0_1076[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1076[0].o)
            temp0_1076[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1076[0].o, temp0_1076[0].o)
            var_7e0.32 = zmm3
            float var_240_1[0x8] = zmm3
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1076[0].o) != 0)
                var_8c0_5 = _mm256_maskstore_ps(temp0_1084, temp0_1083)
            
            arg8 = _mm256_insertf128_ps(var_800_4, arg13[0].o, 1)
            arg9 = _mm256_insertf128_ps(arg16, arg16[0].o, 1)
            zmm0 = _mm256_andnot_ps(temp0_1084, arg10)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm0 = _mm256_xor_ps(temp0_1084, _mm256_cmp_ps(arg11, arg11, 0xf))
                arg5 = _mm256_broadcast_ss(var_820_1)
                zmm1 = _mm256_cmp_ps(var_7e0.32, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg10)) != 0)
                    var_8c0_5 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                zmm1 = _mm256_and_ps(zmm0, arg10)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm1 = var_7e0.32
                    var_8c0_5 = _mm256_maskstore_ps(zmm0, zmm1)
            
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
            zmm0[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1 = _mm256_broadcast_ss(temp0_8)
            float temp0_1112[0x8] = _mm256_cmp_ps(zmm1, temp0_1080, 1)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1112[0].o, 1)
            zmm3[0].o &= arg14[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1112[0].o, arg5[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1112[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                var_8a0_5 = _mm256_maskstore_ps(temp0_1112, zmm1)
            
            int32_t temp0_1119[0x8] = _mm256_andnot_ps(temp0_1112, arg10)
            
            if (_mm256_movemask_ps(temp0_1119) != 0)
                temp0_1119[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_1119[0].o, temp0_1119[0].o)
                zmm0 = _mm256_xor_ps(temp0_1112, _mm256_cmp_ps(temp0_1119, temp0_1119, 0xf))
                arg5 = _mm256_broadcast_ss(temp0_13)
                zmm1 = _mm256_cmp_ps(temp0_1080, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg10)) != 0)
                    var_8a0_5 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg10)) != 0)
                    var_8a0_5 = _mm256_maskstore_ps(zmm0, temp0_1080)
            
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
            zmm1 = _mm256_broadcast_ss(temp0_9)
            float temp0_1136[0x8] = _mm256_cmp_ps(zmm1, temp0_1082, 1)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1136[0].o, 1)
            zmm3[0].o &= arg14[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1136[0].o, arg5[0].o)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1136[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                var_880_7 = _mm256_maskstore_ps(temp0_1136, zmm1)
            
            var_7a0.32 = arg9
            float var_800_5[0x8] = arg8
            arg5[0].o = zx.o(0)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_1136, arg10)) != 0)
                zmm0 = _mm256_xor_ps(temp0_1136, _mm256_cmp_ps(arg5, arg5, 0xf))
                arg5 = _mm256_broadcast_ss(temp0_14)
                zmm1 = _mm256_cmp_ps(temp0_1082, arg5, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg10)) != 0)
                    var_880_7 = _mm256_maskstore_ps(zmm3, arg5)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg10)) != 0)
                    var_880_7 = _mm256_maskstore_ps(zmm0, temp0_1082)
            
            var_6c0.32 = temp0_1080
            var_6a0.32 = temp0_1082
            float temp0_1157[0x8] = _mm256_broadcast_ss(*r15)
            float temp0_1158[0x8] = _mm256_sub_ps(var_8c0_5, temp0_1157)
            float temp0_1159[0x8] = _mm256_broadcast_ss(*(r15 + 4))
            zmm1 = _mm256_sub_ps(var_8a0_5, temp0_1159)
            float temp0_1161[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_1162[0x8] = _mm256_div_ps(temp0_1158, temp0_1161)
            float temp0_1163[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, temp0_1163)
            arg5[0].o = arg3[1].d
            arg11 = _mm256_cvttps_epi32(temp0_1162)
            zmm0 = _mm256_cvttps_epi32(zmm1)
            float temp0_1169[0x8] =
                _mm256_add_ps(_mm256_mul_ps(temp0_1163, _mm256_cvtepi32_ps(zmm0)), temp0_1159)
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 0x20)
            arg9[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
            zmm1[0].o = _mm_permute_ps(arg9[0].o, 0x55)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            int32_t var_400_1[0x8] = zmm1
            zmm1 = _mm256_add_ps(zmm1, temp0_1169)
            temp0_1169[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            temp0_1163[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_1163[0].o, temp0_1163[0].o)
            temp0_1169[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1169[0].o, temp0_1163[0].o)
            temp0_1163[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, temp0_1163[0].o)
            zmm3 = _mm256_insertf128_ps(temp0_1163, temp0_1169[0].o, 1)
            float temp0_1181[0x8] = _mm256_cmp_ps(zmm1, var_8a0_5, 1)
            temp0_1169[0].o = _mm256_extractf128_ps(temp0_1181[0].o, 1)
            temp0_1169[0].o &= arg14[0].o
            arg6 = var_7a0.32
            arg16[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg6[0].o, var_800_5[0].o)
            arg6[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1181[0].o, arg16[0].o)
            temp0_1169[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1169[0].o)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0)
            arg6 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
            arg12 = _mm256_broadcast_ss(r15[1].d)
            var_7c0.32 = var_880_7
            float temp0_1190[0x8] = _mm256_div_ps(_mm256_sub_ps(var_880_7, arg12), arg6)
            temp0_1169[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1169[0].o, temp0_1169[0].o)
            char temp0_1192 = __vpmovmskb_gpr32d_xmmdq(temp0_1169[0].o)
            arg5 = _mm256_cvttps_epi32(temp0_1190)
            var_680.32 = temp0_1161
            float temp0_1195[0x8] = _mm256_mul_ps(temp0_1161, _mm256_cvtepi32_ps(arg11))
            float var_520_1[0x8] = arg5
            float temp0_1197[0x8] = _mm256_mul_ps(arg6, _mm256_cvtepi32_ps(arg5))
            float temp0_1198[0x8] = _mm256_add_ps(temp0_1195, temp0_1157)
            float temp0_1199[0x8] = _mm256_add_ps(temp0_1197, arg12)
            temp0_1197[0].o = _mm_permute_ps(arg9[0].o, 0)
            arg8 = _mm256_insertf128_ps(temp0_1197, temp0_1197[0].o, 1)
            float temp0_1202[0x8] = _mm256_add_ps(arg8, temp0_1198)
            arg9[0].o = _mm_permute_ps(arg9[0].o, 0xaa)
            arg17 = _mm256_blendv_ps(zmm3, arg11, _mm256_cmp_ps(temp0_1202, var_8c0_5, 1))
            arg9 = _mm256_insertf128_ps(arg9, arg9[0].o, 1)
            float var_8c0_6[0x8] = arg17
            zmm1 = _mm256_cmp_ps(zmm1, var_8a0_5, 5)
            
            if (temp0_1192 != 0)
                arg11 = zmm0
            
            float temp0_1208[0x8] = _mm256_add_ps(arg9, temp0_1199)
            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg5[0].o &= arg14[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm1[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1208[0].o)
            bool cond:4_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
            var_8a0_5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_8a0_5[0].o, var_8a0_5[0].o)
            
            if (not(cond:4_1))
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8a0_5[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_8a0_5[0].o)
                zmm3 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            
            float temp0_1219[0x8] = _mm256_blendv_ps(zmm3, arg11, temp0_1181)
            float var_8a0_6[0x8] = temp0_1219
            arg5 = var_7c0.32
            zmm1 = _mm256_cmp_ps(temp0_1208, arg5, 5)
            float temp0_1221[0x8] = _mm256_cmp_ps(temp0_1208, arg5, 1)
            temp0_1208[0].o = _mm256_extractf128_ps(temp0_1221[0].o, 1)
            temp0_1208[0].o &= arg14[0].o
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1221[0].o, arg16[0].o)
            temp0_1208[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1208[0].o)
            temp0_1208[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1208[0].o, temp0_1208[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1208[0].o) != 0)
                arg11 = var_520_1
            
            temp0_1208[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            temp0_1208[0].o &= arg14[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm1[0].o)
            temp0_1208[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1208[0].o)
            temp0_1208[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1208[0].o, temp0_1208[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1208[0].o) != 0)
                zmm1 = var_520_1
                temp0_1208[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                temp0_1208[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1208[0].o, var_8a0_5[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8a0_5[0].o)
                zmm3 = _mm256_insertf128_ps(zmm1, temp0_1208[0].o, 1)
            
            float temp0_1236[0x8] = _mm256_blendv_ps(zmm3, arg11, temp0_1221)
            zmm3 = var_680.32
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(arg17)), 
                temp0_1157)
            float temp0_1242[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(temp0_1163, _mm256_cvtepi32_ps(temp0_1219)), temp0_1159)
            float var_880_8[0x8] = temp0_1236
            float temp0_1245[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg6, _mm256_cvtepi32_ps(temp0_1236)), arg12)
            zmm1 = _mm256_add_ps(arg8, zmm1)
            float temp0_1247[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1242, var_400_1)
            float temp0_1248[0x8] = _mm256_add_ps(arg9, temp0_1245)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_8c0_5, zmm1), zmm3)
            arg8 = var_8a0_5
            float temp0_1252[0x8] = _mm256_div_ps(_mm256_sub_ps(arg8, temp0_1247), temp0_1163)
            zmm3 = var_7c0.32
            zmm0 = _mm256_div_ps(_mm256_sub_ps(zmm3, temp0_1248), arg6)
            int32_t var_780_6[0x8] = zmm1
            float var_760_6[0x8] = temp0_1252
            float var_740_6[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_8a0_5[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, var_8a0_5[0].o)
            temp0_1252[0].o = zmm0[0].o & arg14[0].o
            zmm3[0].o = zmm1[0].o & arg16[0].o
            temp0_1252[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1252[0].o)
            temp0_1252[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1252[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1252[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(0)
                var_8c0_6 = _mm256_maskstore_ps(zmm0, zmm1)
                var_780_6 = _mm256_maskstore_ps(zmm0, zmm1)
                arg17 = var_8c0_6
            
            zmm1 = __vsubps_ymmqq_ymmqq_memqq(var_8c0_5, var_7e0.32)
            arg15 = var_800_5
            arg13 = var_7a0.32
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            int32_t rax_185 = *arg4
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm3[0].o = zx.o(rax_185 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, zmm3[0].o)
            var_8c0_5[0].o = zmm0[0].o & arg14[0].o
            arg6[0].o &= zmm3[0].o
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8c0_5[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
                zmm3[0].o = zx.o(rax_185 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_8c0_6 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_780_6 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
            
            zmm3 = __vsubps_ymmqq_ymmqq_memqq(arg8, var_6c0.32)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            var_8c0_5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_6[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_6[4].o)
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
            float temp0_1290[0x8] = _mm256_sub_ps(var_7c0.32, var_6a0.32)
            zmm1 = _mm256_add_ps(zmm1, var_8c0_5)
            arg5 = _mm256_mul_ps(zmm3, zmm3)
            var_8c0_5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            int32_t rdx_51 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            arg8[0].o = zx.o(rdx_51 - 1)
            arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(arg8[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
            arg8[0].o = zmm3[0].o & arg14[0].o
            var_8c0_5[0].o &= arg6[0].o
            var_8c0_5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, arg8[0].o)
            var_8c0_5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, temp0_1290[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(var_8c0_5[0].o) != 0)
                zmm3 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
                arg6[0].o = zx.o(rdx_51 - 2)
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
                var_8a0_6 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(arg6, arg6[0].o, 1))
                arg6 = data_142fc95a0
                var_760_6 = _mm256_maskstore_ps(zmm3, arg6)
            
            zmm1 = _mm256_add_ps(zmm1, arg5)
            float temp0_1307[0x8] = _mm256_mul_ps(temp0_1290, temp0_1290)
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_880_8[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_880_8[4].o)
            var_8c0_5[0].o = zmm3[0].o & arg14[0].o
            arg6[0].o &= arg5[0].o
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8c0_5[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1307[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                arg5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_880_8 = _mm256_maskstore_ps(arg5, zmm3)
                var_740_6 = _mm256_maskstore_ps(arg5, zmm3)
            
            arg17 = var_880_8
            zmm0 = _mm256_add_ps(zmm1, temp0_1307)
            var_7e0.32 = zmm0
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            int32_t rdx_54 = arg4[2]
            zmm0[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
            zmm1[0].o = zx.o(rdx_54 - 1)
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
                zmm1[0].o = zx.o(rdx_54 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                float temp0_1330[0x8] =
                    _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_740_6 = _mm256_maskstore_ps(zmm0, zmm1)
                arg17 = temp0_1330
            
            zmm0[0].o = zx.o(*(arg18 + 4))
            arg8[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg11[0].o = var_8c0_6[0].o
            arg6[0].o = var_8b0
            zmm3[0].o = var_8a0_6[0].o
            temp0_1163[0].o = var_8a0_6[4].o
            arg14[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg11[0].o)
            arg16[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, temp0_1163[0].o)
            var_680.o = arg9[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
            var_8c0_5[0].o = zmm0[0].o
            zmm1[0].o = zx.o(*(arg18 + 8))
            var_8c0_5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_8c0_5[0].o)
            var_8a0_5[0].o = arg5[0].o
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, var_8c0_5[0].o)
            var_6c0.o = zmm1[0].o
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
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_1163[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, var_8c0_5[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg17[0].o)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            arg5 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
            var_6a0.32 = arg6
            arg13 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg6, var_7c0.o, 1)
            arg5 = _mm256_and_ps(arg13, arg5)
            int32_t temp0_1363 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_1364 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_1365 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 3)
            float rdi_17 = arg5[0]
            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            int32_t temp0_1367 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_1368 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_1369 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            float* rcx_72 = *(arg18 + 0x10)
            arg5[0].o = *(rcx_72 + sx.q(arg5[0]))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_72 + sx.q(temp0_1367)), 0x10)
            zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(temp0_1163[0].o, zmm1[0].o)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_72 + sx.q(temp0_1368)), 0x20)
            arg15[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_72 + sx.q(temp0_1369)), 0x30)
            arg6[0].o = *(rcx_72 + sx.q(rdi_17))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_72 + sx.q(temp0_1363)), 0x10)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg5[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_8c0_5[0].o)
            arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, var_8c0_5[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg17[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            int32_t temp0_1385[0x8] = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm1, arg9[0].o, 1))
            int32_t temp0_1386 = __vextractps_gpr32_xmmdq_immb(temp0_1385[0].o, 1)
            int32_t temp0_1387 = __vextractps_gpr32_xmmdq_immb(temp0_1385[0].o, 2)
            int32_t temp0_1388 = __vextractps_gpr32_xmmdq_immb(temp0_1385[0].o, 3)
            int32_t rbx_50 = temp0_1385[0]
            temp0_1385[0].o = _mm256_extractf128_ps(temp0_1385[0].o, 1)
            int32_t temp0_1390 = __vpextrd_gpr32d_xmmdq_immb(temp0_1385[0].o, 1)
            int32_t temp0_1391 = __vpextrd_gpr32d_xmmdq_immb(temp0_1385[0].o, 2)
            int32_t temp0_1392 = __vpextrd_gpr32d_xmmdq_immb(temp0_1385[0].o, 3)
            int32_t r8_8 = temp0_1385[0]
            temp0_1385[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_72 + sx.q(temp0_1364)), 0x20)
            temp0_1163[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1385[0].o, 
                *(rcx_72 + sx.q(temp0_1365)), 0x30)
            temp0_1385[0].o = *(rcx_72 + sx.q(r8_8))
            temp0_1385[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1385[0].o, 
                *(rcx_72 + sx.q(temp0_1390)), 0x10)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1385[0].o, 
                *(rcx_72 + sx.q(temp0_1391)), 0x20)
            temp0_1385[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_72 + sx.q(temp0_1392)), 0x30)
            arg6 = __vandps_ymmqq_ymmqq_memqq(arg13, zmm0)
            zmm0[0] = __vextractps_memd_xmmdq_immb(arg6[0].o, 1)
            zmm3[0].o = *(rcx_72 + sx.q(rbx_50))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_72 + sx.q(temp0_1386)), 0x10)
            int32_t temp0_1403 = __vextractps_gpr32_xmmdq_immb(arg6[0].o, 2)
            temp0_1385[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_1385[0].o, var_8c0_5[0].o)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, var_8c0_5[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
            temp0_1385[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_1385[0].o, arg17[0].o)
            temp0_1385[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1385[0].o, 2)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            zmm1 = _mm256_insertf128_ps(temp0_1385, arg5[0].o, 1)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_72 + sx.q(temp0_1387)), 0x20)
            float r13_6 = arg6[0]
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_72 + sx.q(temp0_1388)), 0x30)
            int32_t temp0_1413 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
            arg5[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            int32_t temp0_1415[0x8] = _mm256_and_ps(arg13, zmm1)
            int32_t temp0_1416 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_1417 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            float r8_9 = arg5[0]
            int32_t temp0_1418 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = _mm256_extractf128_ps(temp0_1415[0].o, 1)
            int64_t rbx_54 = sx.q(arg5[0])
            int32_t temp0_1420 = __vextractps_gpr32_xmmdq_immb(temp0_1415[0].o, 1)
            int32_t temp0_1421 = __vextractps_gpr32_xmmdq_immb(temp0_1415[0].o, 2)
            int32_t temp0_1422 = __vextractps_gpr32_xmmdq_immb(temp0_1415[0].o, 3)
            int32_t r9_6 = temp0_1415[0]
            temp0_1415[0].o = *(rcx_72 + rbx_54)
            int64_t rbx_56 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            temp0_1415[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1415[0].o, *(rcx_72 + rbx_56), 0x10)
            int32_t temp0_1425 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_1426 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = *(rcx_72 + sx.q(r9_6))
            temp0_1415[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1415[0].o, 
                *(rcx_72 + sx.q(temp0_1425)), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1415[0].o, 
                *(rcx_72 + sx.q(temp0_1426)), 0x30)
            temp0_1415[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_72 + sx.q(temp0_1420)), 0x10)
            int64_t r13_7 = sx.q(r13_6)
            int64_t r9_8 = sx.q(zmm0[0])
            int64_t r14_8 = sx.q(temp0_1403)
            int64_t rdx_60 = sx.q(r8_9)
            int64_t rsi_30 = sx.q(temp0_1416)
            int64_t rbx_59 = sx.q(temp0_1417)
            int64_t r8_10 = sx.q(temp0_1418)
            arg5[0].o = *(rcx_72 + rdx_60)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_72 + rsi_30), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_72 + rbx_59), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_72 + r8_10), 0x30)
            int64_t rax_196 = sx.q(temp0_1413)
            arg9[0].o = *(rcx_72 + r13_7)
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rcx_72 + r9_8), 0x10)
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rcx_72 + r14_8), 0x20)
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rcx_72 + rax_196), 0x30)
            arg9 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
            temp0_1415[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1415[0].o, 
                *(rcx_72 + sx.q(temp0_1421)), 0x20)
            arg11[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1415[0].o, 
                *(rcx_72 + sx.q(temp0_1422)), 0x30)
            temp0_1415[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg8[0].o, var_680.o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg8[0].o, var_8c0_5[0].o)
            arg5 = var_780_6
            arg14 = _mm256_add_ps(arg9, 
                _mm256_mul_ps(arg5, 
                    _mm256_sub_ps(_mm256_insertf128_ps(temp0_1163, arg15[0].o, 1), arg9)))
            arg9[0].o = *(rax_159 + rcx_72 + rdx_60)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_160 + rcx_72 + rsi_30), 0x10)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_161 + rcx_72 + rbx_59), 0x20)
            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm3[0].o = *(rax_158 + rcx_72 + r13_7)
            arg15[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, var_8c0_5[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_1415[0].o, var_8c0_5[0].o)
            zmm1 =
                _mm256_mul_ps(arg5, _mm256_sub_ps(_mm256_insertf128_ps(arg11, arg6[0].o, 1), zmm0))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_162 + rcx_72 + r8_10), 0x30)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_163 + rcx_72 + r9_8), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_164 + rcx_72 + r14_8), 0x20)
            arg10 = _mm256_add_ps(zmm0, zmm1)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_166 + rcx_72 + rax_196), 0x30)
            zmm0 = _mm256_insertf128_ps(zmm0, arg6[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg12[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg17[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1464[0x8] = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm3, zmm1[0].o, 1))
            int64_t rax_199 = sx.q(temp0_1464[0])
            int32_t temp0_1465 = __vpextrd_gpr32d_xmmdq_immb(temp0_1464[0].o, 1)
            int32_t temp0_1466 = __vpextrd_gpr32d_xmmdq_immb(temp0_1464[0].o, 2)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1464[0].o, 1)
            arg6[0].o = *(rax_159 + sx.q(zmm3[0]) + rcx_72)
            void* rdi_30 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)) + rcx_72
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_160 + rdi_30), 0x10)
            void* rdi_33 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)) + rcx_72
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_161 + rdi_33), 0x20)
            int32_t temp0_1472 = __vpextrd_gpr32d_xmmdq_immb(temp0_1464[0].o, 3)
            temp0_1464[0].o = *(rax_158 + rax_199 + rcx_72)
            void* rax_203 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)) + rcx_72
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_162 + rax_203), 0x30)
            temp0_1464[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1464[0].o, 
                *(rax_163 + sx.q(temp0_1465) + rcx_72), 0x10)
            temp0_1464[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1464[0].o, 
                *(rax_164 + sx.q(temp0_1466) + rcx_72), 0x20)
            temp0_1464[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1464[0].o, 
                *(rax_166 + sx.q(temp0_1472) + rcx_72), 0x30)
            zmm1 = _mm256_mul_ps(arg5, 
                _mm256_sub_ps(_mm256_insertf128_ps(temp0_1464, zmm3[0].o, 1), zmm0))
            float temp0_1481[0x8] = _mm256_add_ps(zmm0, zmm1)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, arg17[0].o)
            var_8c0_5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, arg12[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(var_8c0_5[0].o, var_6c0.o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_8a0_5[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1489[0x8] = _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm3, zmm1[0].o, 1))
            void* rdx_70 = sx.q(temp0_1489[0]) + rcx_72
            int32_t temp0_1490 = __vpextrd_gpr32d_xmmdq_immb(temp0_1489[0].o, 1)
            int32_t temp0_1491 = __vpextrd_gpr32d_xmmdq_immb(temp0_1489[0].o, 2)
            int32_t temp0_1492 = __vpextrd_gpr32d_xmmdq_immb(temp0_1489[0].o, 3)
            zmm3[0].o = *(rax_158 + rdx_70)
            temp0_1489[0].o = _mm256_extractf128_ps(temp0_1489[0].o, 1)
            arg9[0].o = *(rax_159 + sx.q(temp0_1489[0]) + rcx_72)
            void* rdx_76 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1489[0].o, 1)) + rcx_72
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_160 + rdx_76), 0x10)
            void* rdx_79 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1489[0].o, 2)) + rcx_72
            arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_161 + rdx_79), 0x20)
            void* rdx_82 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_1489[0].o, 3)) + rcx_72
            temp0_1489[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rax_162 + rdx_82), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_163 + sx.q(temp0_1490) + rcx_72), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_164 + sx.q(temp0_1491) + rcx_72), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_166 + sx.q(temp0_1492) + rcx_72), 0x30)
            arg9 = _mm256_insertf128_ps(zmm3, temp0_1489[0].o, 1)
            temp0_1489[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_8c0_5[0].o, arg8[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            temp0_1489[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_1489[0].o, 2)
            int32_t temp0_1509[0x8] =
                _mm256_and_ps(arg13, _mm256_insertf128_ps(zmm3, temp0_1489[0].o, 1))
            void* rdx_84 = sx.q(temp0_1509[0]) + rcx_72
            int32_t temp0_1510 = __vpextrd_gpr32d_xmmdq_immb(temp0_1509[0].o, 1)
            int32_t temp0_1511 = __vpextrd_gpr32d_xmmdq_immb(temp0_1509[0].o, 2)
            int32_t temp0_1512 = __vpextrd_gpr32d_xmmdq_immb(temp0_1509[0].o, 3)
            zmm3[0].o = *(rax_158 + rdx_84)
            temp0_1509[0].o = _mm256_extractf128_ps(temp0_1509[0].o, 1)
            arg6[0].o = *(rax_159 + sx.q(temp0_1509[0]) + rcx_72)
            int32_t temp0_1514 = __vpextrd_gpr32d_xmmdq_immb(temp0_1509[0].o, 1)
            int32_t temp0_1515 = __vpextrd_gpr32d_xmmdq_immb(temp0_1509[0].o, 2)
            int32_t temp0_1516 = __vpextrd_gpr32d_xmmdq_immb(temp0_1509[0].o, 3)
            temp0_1509[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                *(rax_160 + sx.q(temp0_1514) + rcx_72), 0x10)
            temp0_1509[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1509[0].o, 
                *(rax_161 + sx.q(temp0_1515) + rcx_72), 0x20)
            temp0_1509[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_1509[0].o, 
                *(rax_162 + sx.q(temp0_1516) + rcx_72), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_163 + sx.q(temp0_1510) + rcx_72), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_164 + sx.q(temp0_1511) + rcx_72), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_166 + sx.q(temp0_1512) + rcx_72), 0x30)
            zmm1 = _mm256_add_ps(arg9, 
                _mm256_mul_ps(arg5, 
                    _mm256_sub_ps(_mm256_insertf128_ps(zmm3, temp0_1509[0].o, 1), arg9)))
            float temp0_1529[0x8] =
                _mm256_add_ps(arg14, _mm256_mul_ps(_mm256_sub_ps(arg10, arg14), var_760_6))
            var_8c0_5[0].o = var_7c0.o
            zmm1 = _mm256_mul_ps(var_760_6, _mm256_sub_ps(zmm1, temp0_1481))
            zmm0 = _mm256_add_ps(temp0_1529, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(_mm256_add_ps(temp0_1481, zmm1), temp0_1529), var_740_6))
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm3 = var_7e0.32
            zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
            var_760_6[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_6a0.o)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o &= var_8c0_5[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_760_6[0].o, zmm1[0].o)
            var_760_6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(var_760_6[0].o) != 0)
                float temp0_1543[0x8] = _mm256_rsqrt_ps(zmm3)
                float temp0_1545[0x8] = _mm256_mul_ps(temp0_1543, _mm256_mul_ps(zmm3, temp0_1543))
                float temp0_1548[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_1543, _mm256_sub_ps(data_142fc9480, temp0_1545)), 
                    data_142fc94a0)
                float temp0_1549[0x8] = _mm256_rcp_ps(temp0_1548)
                float temp0_1550[0x8] = _mm256_mul_ps(temp0_1549, temp0_1548)
                float temp0_1553[0x8] = _mm256_add_ps(zmm0, 
                    _mm256_mul_ps(temp0_1549, _mm256_sub_ps(data_142fc94c0, temp0_1550)))
                temp0_1549[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1 = _mm256_insertf128_ps(temp0_1549, zmm1[0].o, 1)
                zmm0 = _mm256_blendv_ps(zmm0, temp0_1553, zmm1)
            
            zmm3 = var_800_5
            arg6 = var_7a0.32
            zmm1[0].o = arg22
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            float temp0_1561[0x8] = _mm256_sub_ps(zmm0, zmm1)
            float temp0_1562[0x8] = __vcmpps_ymmqq_ymmqq_memqq_immb(temp0_1561, data_142fc94e0, 1)
            zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            zmm1[0].o = _mm256_extractf128_ps(temp0_1562[0].o, 1)
            zmm1[0].o &= var_8c0_5[0].o
            arg6[0].o = __vandps_xmmdq_xmmdq_xmmdq(temp0_1562[0].o, zmm3[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1561[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) == 0)
                arg6 = var_600.32
            else
                zmm3 = _mm256_insertf128_ps(zmm3, var_8c0_5[0].o, 1)
                float temp0_1570[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_1561, var_240_1)
                float temp0_1571[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_1561, temp0_1080)
                float temp0_1572[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_1561, temp0_1082)
                float temp0_1573[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1570, var_4a0_1)
                float temp0_1574[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1571, var_480_1)
                arg8 = __vaddps_ymmqq_ymmqq_memqq(temp0_1572, var_460_1)
                arg5 = _mm256_and_ps(temp0_1562, zmm3)
                var_4a0_1 = _mm256_maskstore_ps(arg5, temp0_1573)
                var_480_1 = _mm256_maskstore_ps(arg5, temp0_1574)
                var_460_1 = _mm256_maskstore_ps(arg5, arg8)
                arg6 = var_600.32
                float temp0_1580[0x8] = _mm256_add_ps(arg6, temp0_1561)
                arg5[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                arg6 = _mm256_blendv_ps(arg6, temp0_1580, _mm256_insertf128_ps(arg5, zmm1[0].o, 1))
    else
        zmm0[0].o = arg22
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
        var_680.32 = zmm0
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int32_t rdx = 0
        rax_7 = 0
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        
        do
            var_600.32 = arg6
            int64_t rax_8 = sx.q(rdx)
            int128_t* rcx_1 = arg21
            zmm0[0].o = *(rcx_1 + rax_8)
            zmm1[0].o = *(rcx_1 + rax_8 + 0x10)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            int64_t rdi_1 = sx.q(zmm0[0])
            int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t r14_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            int64_t rsi_1 = sx.q(zmm1[0])
            int64_t rcx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            int64_t rbx_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            int64_t rax_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm0[0].o = *(arg20 + (rsi_1 << 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg20 + (rcx_3 << 2)), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg20 + (rbx_4 << 2)), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg20 + (rax_13 << 2)), 0x30)
            zmm1[0].o = *(arg20 + (rsi_1 << 2) + 4)
            arg5[0].o = *(arg20 + (rdi_1 << 2))
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r10_1 << 2)), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r14_1 << 2)), 0x20)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r11_1 << 2)), 0x30)
            zmm3[0].o = *(arg20 + (rdi_1 << 2) + 4)
            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg20 + (rcx_3 << 2) + 4), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg20 + (rbx_4 << 2) + 4), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg20 + (rax_13 << 2) + 4), 0x30)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg20 + (r10_1 << 2) + 4), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r14_1 << 2) + 4), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg20 + (r11_1 << 2) + 4), 0x30)
            zmm3[0].o = *(arg20 + (rdi_1 << 2) + 8)
            arg6[0].o = *(arg20 + (rsi_1 << 2) + 8)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg20 + (rcx_3 << 2) + 8), 0x10)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg20 + (rbx_4 << 2) + 8), 0x20)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg20 + (rax_13 << 2) + 8), 0x30)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg20 + (r10_1 << 2) + 8), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg20 + (r14_1 << 2) + 8), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg20 + (r11_1 << 2) + 8), 0x30)
            zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            arg5 = _mm256_insertf128_ps(zmm3, arg6[0].o, 1)
            int32_t var_760_1[0x8] = zmm1
            float var_720_1[0x8] = arg14
            float temp0_50[0x8] = _mm256_broadcast_ss(arg19[3])
            float var_8c0_1[0x8] = temp0_50
            float var_8a0_1[0x8] = temp0_50
            float var_880_1[0x8] = temp0_50
            float var_860_1[0x8] = temp0_50
            arg6 = _mm256_broadcast_ss(arg19[1])
            float temp0_52[0x8] = _mm256_mul_ps(arg5, arg6)
            float temp0_53[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_54[0x8] = _mm256_mul_ps(zmm0, temp0_53)
            float temp0_55[0x8] = _mm256_broadcast_ss(*arg19)
            float temp0_56[0x8] = _mm256_mul_ps(zmm1, temp0_55)
            zmm1 = _mm256_sub_ps(temp0_52, _mm256_mul_ps(zmm1, temp0_53))
            float temp0_60[0x8] = _mm256_sub_ps(temp0_54, _mm256_mul_ps(arg5, temp0_55))
            float temp0_62[0x8] = _mm256_sub_ps(temp0_56, _mm256_mul_ps(zmm0, arg6))
            zmm1 = _mm256_add_ps(zmm1, zmm1)
            float temp0_64[0x8] = _mm256_add_ps(temp0_60, temp0_60)
            float temp0_65[0x8] = _mm256_add_ps(temp0_62, temp0_62)
            float temp0_66[0x8] = _mm256_mul_ps(temp0_50, zmm1)
            float temp0_67[0x8] = _mm256_mul_ps(temp0_50, temp0_64)
            float temp0_68[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_66, zmm0)
            float temp0_69[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_67, var_760_1)
            float temp0_71[0x8] =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_50, temp0_65), arg5)
            float temp0_72[0x8] = _mm256_mul_ps(temp0_65, arg6)
            float temp0_73[0x8] = _mm256_mul_ps(zmm1, temp0_53)
            float temp0_74[0x8] = _mm256_mul_ps(temp0_64, temp0_55)
            float temp0_77[0x8] =
                _mm256_add_ps(temp0_68, _mm256_sub_ps(temp0_72, _mm256_mul_ps(temp0_64, temp0_53)))
            float temp0_80[0x8] =
                _mm256_add_ps(temp0_69, _mm256_sub_ps(temp0_73, _mm256_mul_ps(temp0_65, temp0_55)))
            zmm1 = _mm256_add_ps(temp0_71, _mm256_sub_ps(temp0_74, _mm256_mul_ps(zmm1, arg6)))
            zmm3 = _mm256_broadcast_ss(arg19[4])
            float temp0_85[0x8] = _mm256_add_ps(temp0_77, zmm3)
            float temp0_87[0x8] = _mm256_add_ps(temp0_80, _mm256_broadcast_ss(arg19[5]))
            float temp0_89[0x8] = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg19[6]))
            float temp0_90[0x8] = _mm256_broadcast_ss(var_810_1)
            zmm1 = _mm256_cmp_ps(temp0_90, temp0_85, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_8c0_1 = _mm256_maskstore_ps(zmm1, temp0_90)
            
            float temp0_94[0x8] = _mm256_cmp_ps(arg14, arg14, 0xf)
            int32_t temp0_95[0x8] = _mm256_xor_ps(zmm1, temp0_94)
            
            if (_mm256_movemask_ps(temp0_95) != 0)
                zmm3 = _mm256_broadcast_ss(var_820_1)
                float temp0_98[0x8] = _mm256_cmp_ps(temp0_85, zmm3, 1)
                arg6 = _mm256_and_ps(temp0_98, temp0_95)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_8c0_1 = _mm256_maskstore_ps(arg6, zmm3)
                
                int32_t temp0_102[0x8] = _mm256_andnot_ps(temp0_98, temp0_95)
                
                if (_mm256_movemask_ps(temp0_102) != 0)
                    var_8c0_1 = _mm256_maskstore_ps(temp0_102, temp0_85)
            
            float temp0_105[0x8] = _mm256_broadcast_ss(temp0_8)
            zmm1 = _mm256_cmp_ps(temp0_105, temp0_87, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_8a0_1 = _mm256_maskstore_ps(zmm1, temp0_105)
            
            int32_t temp0_109[0x8] = _mm256_xor_ps(zmm1, temp0_94)
            
            if (_mm256_movemask_ps(temp0_109) != 0)
                zmm3 = _mm256_broadcast_ss(temp0_13)
                float temp0_112[0x8] = _mm256_cmp_ps(temp0_87, zmm3, 1)
                arg6 = _mm256_and_ps(temp0_112, temp0_109)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_8a0_1 = _mm256_maskstore_ps(arg6, zmm3)
                
                int32_t temp0_116[0x8] = _mm256_andnot_ps(temp0_112, temp0_109)
                
                if (_mm256_movemask_ps(temp0_116) != 0)
                    var_8a0_1 = _mm256_maskstore_ps(temp0_116, temp0_87)
            
            float temp0_119[0x8] = _mm256_broadcast_ss(temp0_9)
            zmm1 = _mm256_cmp_ps(temp0_119, temp0_89, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_880_1 = _mm256_maskstore_ps(zmm1, temp0_119)
            
            zmm0 = _mm256_xor_ps(zmm1, temp0_94)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_125[0x8] = _mm256_broadcast_ss(temp0_14)
                zmm1 = _mm256_cmp_ps(temp0_89, temp0_125, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_880_1 = _mm256_maskstore_ps(zmm3, temp0_125)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_880_1 = _mm256_maskstore_ps(zmm0, temp0_89)
            
            var_660.32 = temp0_85
            var_640.32 = temp0_87
            var_620.32 = temp0_89
            float temp0_133[0x8] = _mm256_broadcast_ss(*r15)
            float temp0_134[0x8] = _mm256_sub_ps(var_8c0_1, temp0_133)
            float temp0_135[0x8] = _mm256_broadcast_ss(*(r15 + 4))
            zmm1 = _mm256_sub_ps(var_8a0_1, temp0_135)
            float temp0_137[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_138[0x8] = _mm256_div_ps(temp0_134, temp0_137)
            arg9 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, arg9)
            float temp0_141[0x8] = _mm256_broadcast_ss(r15[1].d)
            var_5a0.32 = var_880_1
            float temp0_142[0x8] = _mm256_sub_ps(var_880_1, temp0_141)
            arg6[0].o = arg3[1].d
            zmm3[0].o = _mm_permute_ps(arg6[0].o, 0)
            arg16 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
            float temp0_145[0x8] = _mm256_div_ps(temp0_142, arg16)
            zmm3 = _mm256_cvttps_epi32(temp0_138)
            arg15 = _mm256_cvttps_epi32(zmm1)
            arg10 = _mm256_cvttps_epi32(temp0_145)
            float temp0_150[0x8] = _mm256_mul_ps(temp0_137, _mm256_cvtepi32_ps(zmm3))
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 0x20)
            temp0_145[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            temp0_145[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_145[0].o, arg6[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            arg6 = _mm256_insertf128_ps(arg6, temp0_145[0].o, 1)
            float temp0_159[0x8] = _mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg15))
            float temp0_161[0x8] = _mm256_mul_ps(arg16, _mm256_cvtepi32_ps(arg10))
            var_560.32 = temp0_133
            float temp0_162[0x8] = _mm256_add_ps(temp0_150, temp0_133)
            var_580.32 = temp0_135
            float temp0_163[0x8] = _mm256_add_ps(temp0_159, temp0_135)
            var_5c0.32 = temp0_141
            float temp0_164[0x8] = _mm256_add_ps(temp0_161, temp0_141)
            zmm1[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
            temp0_161[0].o = _mm_permute_ps(zmm1[0].o, 0)
            arg12 = _mm256_insertf128_ps(temp0_161, temp0_161[0].o, 1)
            float temp0_168[0x8] = _mm256_add_ps(arg12, temp0_162)
            temp0_161[0].o = _mm_permute_ps(zmm1[0].o, 0x55)
            arg13 = _mm256_insertf128_ps(temp0_161, temp0_161[0].o, 1)
            float temp0_171[0x8] = _mm256_add_ps(arg13, temp0_163)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
            arg14 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            var_540.32 = var_8c0_1
            arg5 = _mm256_blendv_ps(arg6, zmm3, _mm256_cmp_ps(temp0_168, var_8c0_1, 1))
            float var_8c0_2[0x8] = arg5
            zmm1 = _mm256_cmp_ps(temp0_171, var_8a0_1, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = arg15
            
            float temp0_178[0x8] = _mm256_add_ps(arg14, temp0_164)
            float temp0_179[0x8] = _mm256_cmp_ps(temp0_171, var_8a0_1, 5)
            var_8a0_1[0].o = _mm256_extractf128_ps(temp0_179[0].o, 1)
            var_8a0_1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_179[0].o, var_8a0_1[0].o)
            var_8a0_1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_8a0_1[0].o, temp0_178[0].o)
            bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(var_8a0_1[0].o) == 0
            temp0_179[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_179[0].o, temp0_179[0].o)
            
            if (not(cond:3_1))
                arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_179[0].o)
                var_8a0_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, temp0_179[0].o)
                arg6 = _mm256_insertf128_ps(var_8a0_1, arg6[0].o, 1)
            
            float temp0_189[0x8] = _mm256_blendv_ps(arg6, zmm3, zmm1)
            float var_8a0_2[0x8] = temp0_189
            arg17 = var_5a0.32
            zmm1 = _mm256_cmp_ps(temp0_178, arg17, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = arg10
            
            float temp0_192[0x8] = _mm256_cmp_ps(temp0_178, arg17, 5)
            var_8a0_1[0].o = _mm256_extractf128_ps(temp0_192[0].o, 1)
            temp0_192[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_192[0].o, var_8a0_1[0].o)
            temp0_192[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_192[0].o, temp0_192[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_192[0].o) != 0)
                temp0_192[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                temp0_192[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_192[0].o, temp0_179[0].o)
                arg10[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, temp0_179[0].o)
                arg6 = _mm256_insertf128_ps(arg10, temp0_192[0].o, 1)
            
            float temp0_201[0x8] = _mm256_blendv_ps(arg6, zmm3, zmm1)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_137, _mm256_cvtepi32_ps(arg5)), 
                var_560.32)
            float temp0_207[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg9, _mm256_cvtepi32_ps(temp0_189)), var_580.32)
            float var_880_2[0x8] = temp0_201
            float temp0_210[0x8] = __vaddps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg16, _mm256_cvtepi32_ps(temp0_201)), var_5c0.32)
            zmm1 = _mm256_add_ps(arg12, zmm1)
            float temp0_212[0x8] = _mm256_add_ps(arg13, temp0_207)
            float temp0_213[0x8] = _mm256_add_ps(arg14, temp0_210)
            arg11 = var_540.32
            zmm1 = _mm256_div_ps(_mm256_sub_ps(arg11, zmm1), temp0_137)
            float temp0_217[0x8] = _mm256_div_ps(_mm256_sub_ps(var_8a0_1, temp0_212), arg9)
            float temp0_219[0x8] = _mm256_div_ps(_mm256_sub_ps(arg17, temp0_213), arg16)
            int32_t var_780_2[0x8] = zmm1
            float var_760_2[0x8] = temp0_217
            float var_740_2[0x8] = temp0_219
            temp0_219[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            temp0_219[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_219[0].o, temp0_179[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_179[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, temp0_219[0].o, 1)
            bool cond:6_1 = _mm256_movemask_ps(zmm0) == 0
            var_8a0_1[0].o = zx.o(0)
            
            if (not(cond:6_1))
                var_8c0_2 = _mm256_maskstore_ps(zmm0, var_8a0_1)
                var_780_2 = _mm256_maskstore_ps(zmm0, var_8a0_1)
                arg5 = var_8c0_2
            
            int32_t rax_32 = *arg4
            zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            zmm1[0].o = zx.o(rax_32 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm3 = var_640.32
            arg6 = var_660.32
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rax_32 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                var_8c0_2 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                var_780_2 = _mm256_maskstore_ps(zmm0, data_142fc95a0)
            
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(temp0_179[0].o, var_8a0_2[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(temp0_179[0].o, var_8a0_2[4].o)
            zmm1 = _mm256_sub_ps(arg11, arg6)
            zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_8a0_2 = _mm256_maskstore_ps(zmm0, var_8a0_1)
                var_760_2 = _mm256_maskstore_ps(zmm0, var_8a0_1)
            
            float temp0_244[0x8] = _mm256_sub_ps(var_8a0_1, zmm3)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            int32_t rax_35 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(var_8a0_2[0].o, 1)
            arg6[0].o = zx.o(rax_35 - 1)
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            var_8a0_2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_8a0_2[0].o, arg6[0].o)
            arg5 = _mm256_insertf128_ps(var_8a0_2, zmm3[0].o, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                zmm3[0].o = zx.o(rax_35 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_8a0_2 = _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_760_2 = _mm256_maskstore_ps(arg5, data_142fc95a0)
            
            float temp0_256[0x8] = __vsubps_ymmqq_ymmqq_memqq(arg17, var_620.32)
            zmm3 = _mm256_mul_ps(temp0_244, temp0_244)
            temp0_244[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(temp0_179[0].o, var_880_2[0].o)
            arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(temp0_179[0].o, var_880_2[4].o)
            zmm1 = _mm256_add_ps(zmm1, var_8a0_1)
            zmm0 = _mm256_insertf128_ps(temp0_244, arg6[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_880_2 = _mm256_maskstore_ps(zmm0, var_8a0_1)
                var_740_2 = _mm256_maskstore_ps(zmm0, var_8a0_1)
            
            arg13 = var_880_2
            float temp0_265[0x8] = _mm256_mul_ps(temp0_256, temp0_256)
            zmm1 = _mm256_add_ps(zmm1, zmm3)
            int32_t rax_38 = arg4[2]
            temp0_256[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            zmm3[0].o = zx.o(rax_38 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            temp0_256[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_256[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
            arg5 = _mm256_insertf128_ps(zmm3, temp0_256[0].o, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                zmm3[0].o = zx.o(rax_38 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                float temp0_275[0x8] =
                    _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                zmm3 = data_142fc95a0
                var_740_2 = _mm256_maskstore_ps(arg5, zmm3)
                arg13 = temp0_275
            
            float temp0_277[0x8] = _mm256_add_ps(zmm1, temp0_265)
            temp0_277[0].o = zx.o(*(arg18 + 4))
            arg9[0].o = __vpshufd_xmmdq_xmmdq_immb(temp0_277[0].o, 0)
            zmm3[0].o = var_8c0_2[0].o
            arg12[0].o = var_8b0
            var_8a0_1[0].o = var_8a0_2[0].o
            temp0_137[0].o = var_8a0_2[4].o
            arg16[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
            arg14[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
            temp0_179[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, var_8a0_1[0].o)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, temp0_137[0].o)
            zmm1[0].o = zx.o(*(arg18 + 8))
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg17[0].o, arg6[0].o)
            var_640.o = zmm1[0].o
            temp0_277[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_179[0].o, arg6[0].o)
            var_620.o = temp0_277[0].o
            temp0_277[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_277[0].o, arg13[0].o)
            arg11[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            temp0_277[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_277[0].o, 2)
            int32_t temp0_289 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 1)
            int32_t temp0_290 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 2)
            float rdx_2 = temp0_277[0]
            int32_t temp0_291 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 3)
            temp0_277[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
            int32_t* rdi_3 = *(arg18 + 0x10)
            temp0_277[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_277[0].o, 2)
            int64_t r14_2 = sx.q(rdx_2)
            int64_t rsi_2 = sx.q(temp0_289)
            int64_t rdx_3 = sx.q(temp0_290)
            int64_t r11_2 = sx.q(temp0_277[0])
            int64_t r12_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 1))
            int64_t r13_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 2))
            int32_t temp0_296 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 3)
            temp0_277[0].o = *(rdi_3 + r11_2)
            temp0_277[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_277[0].o, *(rdi_3 + r12_1), 0x10)
            temp0_277[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_277[0].o, *(rdi_3 + r13_1), 0x20)
            int64_t rcx_14 = sx.q(temp0_296)
            temp0_277[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_277[0].o, *(rdi_3 + rcx_14), 0x30)
            arg5[0].o = *(rdi_3 + r14_2)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + rsi_2), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + rdx_3), 0x20)
            int64_t r10_2 = sx.q(temp0_291)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + r10_2), 0x30)
            arg15 = _mm256_insertf128_ps(arg5, temp0_277[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            temp0_277[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, temp0_277[0].o)
            temp0_179[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_179[0].o, arg9[0].o)
            arg17[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg9[0].o)
            temp0_277[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_137[0].o)
            temp0_277[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_277[0].o, arg6[0].o)
            temp0_277[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_277[0].o, arg11[0].o)
            temp0_277[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_277[0].o, 2)
            int32_t temp0_315 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 1)
            int32_t temp0_316 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 2)
            int32_t temp0_317 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 3)
            float r9 = temp0_277[0]
            temp0_277[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_8a0_1[0].o)
            temp0_277[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_277[0].o, arg6[0].o)
            temp0_277[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_277[0].o, arg13[0].o)
            temp0_277[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_277[0].o, 2)
            int32_t temp0_322 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 1)
            arg5[0].o = *(rdi_3 + sx.q(r9))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_315)), 0x10)
            int32_t temp0_324 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 2)
            int32_t temp0_325 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 3)
            float rax_43 = temp0_277[0]
            temp0_277[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_316)), 0x20)
            temp0_277[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_277[0].o, *(rdi_3 + sx.q(temp0_317)), 0x30)
            arg5[0].o = *(rdi_3 + sx.q(rax_43))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_322)), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_324)), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_3 + sx.q(temp0_325)), 0x30)
            arg5 = _mm256_insertf128_ps(arg5, temp0_277[0].o, 1)
            temp0_277[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(temp0_137[0].o, zmm1[0].o)
            var_8a0_1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_8a0_1[0].o, zmm1[0].o)
            temp0_137[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, var_8a0_1[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg16[0].o, temp0_277[0].o)
            arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
            temp0_137[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_137[0].o, arg6[0].o)
            temp0_137[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_137[0].o, arg13[0].o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            temp0_137[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_137[0].o, 2)
            float r8_2 = arg9[0]
            int32_t temp0_342 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            int32_t temp0_343 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            int32_t temp0_344 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
            arg9[0].o = *(rdi_3 + sx.q(r8_2))
            int32_t temp0_345 = __vpextrd_gpr32d_xmmdq_immb(temp0_137[0].o, 1)
            float temp0_346[0x8] = _mm256_sub_ps(arg5, arg15)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_342)), 0x10)
            int32_t temp0_348 = __vpextrd_gpr32d_xmmdq_immb(temp0_137[0].o, 2)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_343)), 0x20)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_344)), 0x30)
            float rax_47 = temp0_137[0]
            int32_t temp0_351 = __vpextrd_gpr32d_xmmdq_immb(temp0_137[0].o, 3)
            arg14 = var_780_2
            float temp0_352[0x8] = _mm256_mul_ps(arg14, temp0_346)
            temp0_137[0].o = *(rdi_3 + sx.q(rax_47))
            temp0_137[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_137[0].o, *(rdi_3 + sx.q(temp0_345)), 0x10)
            temp0_137[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_137[0].o, *(rdi_3 + sx.q(temp0_348)), 0x20)
            temp0_137[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_137[0].o, *(rdi_3 + sx.q(temp0_351)), 0x30)
            arg15 = _mm256_add_ps(arg15, temp0_352)
            arg8 = _mm256_insertf128_ps(temp0_137, arg9[0].o, 1)
            temp0_352[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_8a0_1[0].o)
            temp0_277[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_277[0].o)
            temp0_277[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_277[0].o, arg6[0].o)
            temp0_352[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_352[0].o, arg6[0].o)
            temp0_352[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_352[0].o, arg13[0].o)
            temp0_277[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_277[0].o, arg11[0].o)
            temp0_277[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_277[0].o, 2)
            temp0_352[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_352[0].o, 2)
            int64_t rax_50 = sx.q(temp0_352[0])
            int64_t rdx_8 = sx.q(temp0_277[0])
            int32_t temp0_366 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 1)
            zmm3[0].o = *(rdi_3 + rdx_8)
            int32_t temp0_367 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 2)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_3 + sx.q(temp0_366)), 0x10)
            int32_t temp0_369 = __vpextrd_gpr32d_xmmdq_immb(temp0_277[0].o, 3)
            temp0_277[0].o = *(rdi_3 + rax_50)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_3 + sx.q(temp0_367)), 0x20)
            int64_t rax_53 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_352[0].o, 1))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_3 + sx.q(temp0_369)), 0x30)
            int32_t temp0_373 = __vpextrd_gpr32d_xmmdq_immb(temp0_352[0].o, 2)
            temp0_277[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_277[0].o, *(rdi_3 + rax_53), 0x10)
            int32_t temp0_375 = __vpextrd_gpr32d_xmmdq_immb(temp0_352[0].o, 3)
            var_8a0_1[0].o = *(rdi_3 + r11_2 + 4)
            temp0_277[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_277[0].o, *(rdi_3 + sx.q(temp0_373)), 0x20)
            temp0_277[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_277[0].o, *(rdi_3 + sx.q(temp0_375)), 0x30)
            zmm0 = _mm256_insertf128_ps(temp0_277, zmm3[0].o, 1)
            arg9[0].o = *(rdi_3 + r14_2 + 4)
            temp0_352[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg17[0].o, arg6[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(temp0_179[0].o, arg6[0].o)
            float temp0_382[0x8] = _mm256_mul_ps(arg14, _mm256_sub_ps(zmm0, arg8))
            arg10 = _mm256_add_ps(arg8, temp0_382)
            temp0_382[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_1[0].o, *(rdi_3 + r12_1 + 4), 0x10)
            temp0_382[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_382[0].o, *(rdi_3 + r13_1 + 4), 0x20)
            temp0_382[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(temp0_382[0].o, *(rdi_3 + rcx_14 + 4), 0x30)
            var_8a0_1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + rsi_2 + 4), 0x10)
            var_8a0_1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_1[0].o, *(rdi_3 + rdx_3 + 4), 0x20)
            var_8a0_1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(var_8a0_1[0].o, *(rdi_3 + r10_2 + 4), 0x30)
            arg7 = _mm256_insertf128_ps(var_8a0_1, temp0_382[0].o, 1)
            temp0_382[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(temp0_352[0].o, arg11[0].o)
            arg8[0].o = __vpslld_xmmdq_xmmdq_immb(arg8[0].o, 2)
            temp0_382[0].o = __vpslld_xmmdq_xmmdq_immb(temp0_382[0].o, 2)
            float rax_58 = temp0_382[0]
            int32_t temp0_395 = __vpextrd_gpr32d_xmmdq_immb(temp0_382[0].o, 1)
            int32_t temp0_396 = __vpextrd_gpr32d_xmmdq_immb(temp0_382[0].o, 2)
            int32_t temp0_397 = __vpextrd_gpr32d_xmmdq_immb(temp0_382[0].o, 3)
            temp0_382[0].o = *(rdi_3 + sx.q(rax_58) + 4)
            int64_t rdx_16 = sx.q(arg8[0])
            int32_t temp0_398 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1)
            int32_t temp0_399 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
            int32_t temp0_400 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3)
            arg8[0].o = *(rdi_3 + rdx_16 + 4)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_398) + 4), 0x10)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_399) + 4), 0x20)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg8[0].o, *(rdi_3 + sx.q(temp0_400) + 4), 0x30)
            temp0_382[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_382[0].o, 
                *(rdi_3 + sx.q(temp0_395) + 4), 0x10)
            temp0_382[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_382[0].o, 
                *(rdi_3 + sx.q(temp0_396) + 4), 0x20)
            temp0_382[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_382[0].o, 
                *(rdi_3 + sx.q(temp0_397) + 4), 0x30)
            zmm0 = _mm256_insertf128_ps(temp0_382, arg8[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg11[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg8[0].o, var_620.o)
            arg9[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_640.o)
            arg9[0].o = __vpslld_xmmdq_xmmdq_immb(arg9[0].o, 2)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            int64_t rax_63 = sx.q(arg6[0])
            int32_t temp0_414 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
            int32_t temp0_415 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
            int32_t temp0_416 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
            arg6[0].o = *(rdi_3 + rax_63 + 4)
            float rax_64 = arg9[0]
            int32_t temp0_417 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
            int32_t temp0_418 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
            int32_t temp0_419 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
            arg9[0].o = *(rdi_3 + sx.q(rax_64) + 4)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_417) + 4), 0x10)
            float temp0_422[0x8] = _mm256_mul_ps(arg14, _mm256_sub_ps(zmm0, arg7))
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_418) + 4), 0x20)
            arg9[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg9[0].o, *(rdi_3 + sx.q(temp0_419) + 4), 0x30)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_3 + sx.q(temp0_414) + 4), 0x10)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_3 + sx.q(temp0_415) + 4), 0x20)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_3 + sx.q(temp0_416) + 4), 0x30)
            float temp0_428[0x8] = _mm256_add_ps(arg7, temp0_422)
            arg6 = _mm256_insertf128_ps(arg6, arg9[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm3[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_352[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            temp0_352[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_434 = __vpextrd_gpr32d_xmmdq_immb(temp0_352[0].o, 1)
            int64_t rcx_21 = sx.q(zmm1[0])
            int32_t temp0_435 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_436 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_437 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rdi_3 + rcx_21 + 4)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_3 + sx.q(temp0_435) + 4), 0x10)
            float rcx_23 = temp0_352[0]
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_3 + sx.q(temp0_436) + 4), 0x20)
            int32_t temp0_440 = __vpextrd_gpr32d_xmmdq_immb(temp0_352[0].o, 2)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_3 + sx.q(temp0_437) + 4), 0x30)
            int32_t temp0_442 = __vpextrd_gpr32d_xmmdq_immb(temp0_352[0].o, 3)
            temp0_352[0].o = *(rdi_3 + sx.q(rcx_23) + 4)
            temp0_352[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_352[0].o, 
                *(rdi_3 + sx.q(temp0_434) + 4), 0x10)
            temp0_352[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_352[0].o, 
                *(rdi_3 + sx.q(temp0_440) + 4), 0x20)
            temp0_352[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_352[0].o, 
                *(rdi_3 + sx.q(temp0_442) + 4), 0x30)
            zmm1 = _mm256_add_ps(arg6, 
                _mm256_mul_ps(arg14, 
                    _mm256_sub_ps(_mm256_insertf128_ps(temp0_352, zmm1[0].o, 1), arg6)))
            arg5 = var_760_2
            float temp0_452[0x8] =
                _mm256_add_ps(arg15, _mm256_mul_ps(_mm256_sub_ps(arg10, arg15), arg5))
            zmm0 = _mm256_add_ps(temp0_452, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(temp0_428, 
                            _mm256_mul_ps(arg5, _mm256_sub_ps(zmm1, temp0_428))), 
                        temp0_452), 
                    var_740_2))
            zmm3 = temp0_277
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            zmm1 = _mm256_cmp_ps(zmm3, arg14, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_462[0x8] = _mm256_rsqrt_ps(zmm3)
                float temp0_464[0x8] = _mm256_mul_ps(temp0_462, _mm256_mul_ps(zmm3, temp0_462))
                float temp0_467[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_462, _mm256_sub_ps(data_142fc9480, temp0_464)), 
                    data_142fc94a0)
                zmm3 = _mm256_rcp_ps(temp0_467)
                float temp0_469[0x8] = _mm256_mul_ps(zmm3, temp0_467)
                arg5 = _mm256_add_ps(zmm0, 
                    _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, temp0_469)))
                zmm0 = _mm256_blendv_ps(zmm0, arg5, zmm1)
            
            arg4 = var_7a0
            r15 = var_7c0
            arg3 = var_7e0
            rcx = arg25
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, var_680.32)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
            
            if (_mm256_movemask_ps(zmm1) == 0)
                arg6 = var_600.32
            else
                float temp0_477[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_85)
                float temp0_478[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_87)
                float temp0_479[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm0, temp0_89)
                arg5 = __vaddps_ymmqq_ymmqq_memqq(temp0_477, var_4a0_1)
                zmm3 = __vaddps_ymmqq_ymmqq_memqq(temp0_478, var_480_1)
                float temp0_482[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_479, var_460_1)
                var_4a0_1 = _mm256_maskstore_ps(zmm1, arg5)
                var_480_1 = _mm256_maskstore_ps(zmm1, zmm3)
                var_460_1 = _mm256_maskstore_ps(zmm1, temp0_482)
                arg6 = var_600.32
                zmm0 = _mm256_add_ps(arg6, zmm0)
                arg6 = _mm256_blendv_ps(arg6, zmm0, zmm1)
            
            rax_7 += 8
            rdx += 0x20
        while (rax_7 s< rax_6)
        
        if (rax_7 s< rcx)
            goto label_1400769d5
    zmm1 = var_480_1
    float temp0_2199[0x8] = _mm256_hadd_ps(var_4a0_1, var_4a0_1)
    float temp0_2200[0x8] = _mm256_hadd_ps(temp0_2199, temp0_2199)
    zmm3[0].o = _mm256_extractf128_ps(temp0_2200[0].o, 1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    temp0_2200[0].o = temp0_2200[0].o f+ zmm3[0]
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    float temp0_2205[0x8] = _mm256_hadd_ps(var_460_1, var_460_1)
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    float temp0_2206[0x8] = _mm256_hadd_ps(temp0_2205, temp0_2205)
    temp0_2200[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2200[0].o, zmm1[0].o, 0x10)
    zmm1[0].o = _mm256_extractf128_ps(temp0_2206[0].o, 1)
    zmm1[0].o = temp0_2206[0].o f+ zmm1[0]
    temp0_2200[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2200[0].o, zmm1[0].o, 0x20)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg24)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg24[1].d, 0x20)
    temp0_2200[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_2200[0].o, zmm1[0].o)
    *arg24 = temp0_2200[0]
    *(arg24 + 4) = __vextractps_memd_xmmdq_immb(temp0_2200[0].o, 1)
    arg24[1].d = __vextractps_memd_xmmdq_immb(temp0_2200[0].o, 2)
    zmm0 = _mm256_hadd_ps(arg6, arg6)
float temp0_2243[0x8] = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(temp0_2243[0].o, 1)
temp0_2243[0].o = temp0_2243[0].o f+ zmm1[0]
temp0_2243[0].o = temp0_2243[0].o f+ *arg23
*arg23 = temp0_2243[0]
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
return arg23
