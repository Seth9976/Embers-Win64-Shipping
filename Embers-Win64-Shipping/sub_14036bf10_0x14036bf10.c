// 函数: sub_14036bf10
// 地址: 0x14036bf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg14[0].o
int128_t var_58 = arg13[0].o
int128_t var_68 = arg12[0].o
int128_t var_78 = arg11[0].o
int128_t var_88 = arg10[0].o
int128_t var_98 = arg9[0].o
int128_t var_a8 = arg8[0].o
int128_t var_b8 = arg7[0].o
int128_t var_c8 = arg6[0].o
int128_t var_d8 = arg5[0].o
int32_t r10_4 = ((arg2 s>> 0x1f u>> 0x1d) + arg2) & 0xfffffff8
int32_t rbx
uint64_t rdi_3
double zmm0[0x4]
float zmm1[0x8]
float zmm2[0x8]
float zmm3[0x8]
double zmm4[0x4]
float zmm5[0x8]

if (r10_4 s<= 0)
    rbx = 0
    rdi_3 = 0
    
    if (0 s< arg2)
    label_14036c328:
        zmm0[0].o = zx.o(rbx)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
        zmm1 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
        float var_240_1[0x8] = zmm1
        zmm1[0].o = zx.o(arg2)
        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
        float var_260_1[0x8] = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
        arg7 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
        uint64_t rdx = rdi_3 * 3
        zmm2[0].o = *(arg16 + (rdx << 2))
        zmm3[0].o = *(arg16 + (rdx << 2) + 0x10)
        zmm4[0].o = *(arg16 + (rdx << 2) + 0x20)
        zmm5[0].o = *(arg16 + (rdx << 2) + 0x30)
        arg5[0].o = *(arg16 + (rdx << 2) + 0x40)
        arg6[0].o = *(arg16 + (rdx << 2) + 0x50)
        arg9[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x10)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x9e)
        arg10[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x8c)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg9[0].o, zmm0[0].o, 0xd2)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x8c)
        arg9[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0xc4)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm5[0].o, 0x10)
        zmm4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 0x9e)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 0x8c)
        float var_280_1[0x8] = _mm256_insertf128_ps(arg10, zmm2[0].o, 1)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0xd2)
        zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm5[0].o, 0x8c)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg6[0].o, 0xc4)
        zmm4 = _mm256_insertf128_ps(arg9, zmm0[0].o, 1)
        zmm0 = _mm256_maskload_ps(arg7, *(arg4 + sx.q(rbx << 2)))
        uint64_t i = zx.q(_mm256_movemask_ps(arg7))
        double var_220[0x4] = zmm0
        int256_t var_360_1
        int256_t var_340_1
        int256_t var_320_1
        
        do
            uint64_t rbx_5
            uint64_t rflags_2
            
            if (i == 0)
                rbx_5 = 0x40
            else
                rbx_5, rflags_2 = _bit_scan_forward(i)
            zmm0[0].o = _mm256_extractf128_ps(var_240_1[0].o, 1)
            arg6[0].o = _mm256_extractf128_ps(var_260_1[0].o, 1)
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            int128_t var_470_1 = zmm0[0].o
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_260_1[0].o, var_240_1[0].o)
            arg10 = _mm256_insertf128_ps(arg7, zmm0[0].o, 1)
            int64_t rbx_6 = sx.q(*(&var_220 + (rbx_5 << 2)))
            zmm2 = zmm0
            zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            var_240_1[0].o = zx.o(rbx_6.d)
            var_240_1[0].o = __vpshufd_xmmdq_xmmdq_immb(var_240_1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_240_1[0].o, zmm0[0].o)
            arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_240_1[0].o, zmm2[0].o)
            arg10 = _mm256_and_ps(_mm256_insertf128_ps(arg9, zmm0[0].o, 1), arg10)
            double var_380_2[0x4] = zmm4
            float var_460_1[0x8]
            __builtin_memcpy(&var_460_1, 
                "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x"
            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80"
            "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80"
            "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x80)
            arg12 = _mm256_mul_ps(var_280_1, _mm256_broadcast_ss(arg15[rbx_6 * 0x10]))
            arg13 = _mm256_mul_ps(var_280_1, _mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 1]))
            arg11 = _mm256_mul_ps(var_280_1, _mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 2]))
            float var_160_2[0x8] = arg12
            float var_140_2[0x8] = arg13
            float var_120_2[0x8] = arg11
            float var_100_2[0x8] =
                _mm256_mul_ps(var_280_1, _mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 3]))
            zmm1 = _mm256_mul_ps(zmm3, _mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 4]))
            arg8 = _mm256_mul_ps(zmm3, _mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 5]))
            arg14 = _mm256_mul_ps(zmm3, _mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 6]))
            zmm5 = _mm256_mul_ps(zmm3, _mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 7]))
            float var_1e0_2[0x8] = zmm1
            arg5 = __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 8]), zmm4)
            double var_1c0_2[0x4] = arg8
            arg6 = __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 9]), zmm4)
            float var_1a0_2[0x8] = arg14
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 0xa]), zmm4)
            float var_180_2[0x8] = zmm5
            zmm5 = _mm256_add_ps(arg5, 
                __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 0xc]), 
                    var_460_1))
            float var_440_1[0x8]
            arg5 = _mm256_add_ps(arg6, 
                __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 0xd]), 
                    var_440_1))
            float var_420_1[0x8]
            arg6 = __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rbx_6 * 0x10 + 0xe]), 
                var_420_1)
            zmm2 = _mm256_add_ps(zmm2, arg6)
            zmm1 = _mm256_add_ps(_mm256_add_ps(arg12, zmm1), zmm5)
            zmm5 = _mm256_add_ps(_mm256_add_ps(arg13, arg8), arg5)
            var_360_1 = _mm256_maskstore_ps(arg10, zmm1)
            zmm1 = _mm256_add_ps(arg11, arg14)
            var_340_1 = _mm256_maskstore_ps(arg10, zmm5)
            zmm1 = _mm256_add_ps(zmm1, zmm2)
            var_320_1 = _mm256_maskstore_ps(arg10, zmm1)
            zmm0[0].o &= var_470_1
            zmm1[0].o = arg9[0].o & arg7[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            i &= zx.q(not.d(__vpmovmskb_gpr32d_xmmdq(zmm0[0].o))) | 0xffffffffffffff00
        while (i != 0)
        
        zmm0[0].o = var_360_1.o
        zmm1[0].o = var_360_1:0x10.o
        zmm2[0].o = var_340_1.o
        zmm3[0].o = var_340_1:0x10.o
        zmm4[0].o = var_320_1.o
        zmm5[0].o = var_320_1:0x10.o
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x30)
        arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0x49)
        arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 4)
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0x6c)
        *(arg1 + (rdx << 2)) = arg5[0].o
        arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm0[0].o, 4)
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0x6c)
        *(arg1 + (rdx << 2) + 0x10) = arg5[0].o
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x33)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0xe2)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
        *(arg1 + (rdx << 2) + 0x20) = zmm0[0].o
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x30)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm5[0].o, 0x49)
        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 4)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x6c)
        *(arg1 + (rdx << 2) + 0x30) = zmm0[0].o
        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 4)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x6c)
        *(arg1 + (rdx << 2) + 0x40) = zmm0[0].o
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x33)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0xe2)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
        *(arg1 + (rdx << 2) + 0x50) = zmm0[0].o
else
    rbx = 0
    zmm0 = data_142fc95a0
    
    do
        uint64_t r14_1 = zx.q(rbx)
        uint64_t r15_1 = r14_1 * 3
        zmm1[0].o = *(arg16 + (r15_1 << 2))
        zmm2[0].o = *(arg16 + (r15_1 << 2) + 0x10)
        zmm3[0].o = *(arg16 + (r15_1 << 2) + 0x20)
        zmm4[0].o = *(arg16 + (r15_1 << 2) + 0x30)
        zmm5[0].o = *(arg16 + (r15_1 << 2) + 0x40)
        arg5[0].o = *(arg16 + (r15_1 << 2) + 0x50)
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x10)
        arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x9e)
        arg8[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg6[0].o, 0x8c)
        arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg6[0].o, 0xd2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x8c)
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0xc4)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 0x10)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg5[0].o, 0x9e)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x8c)
        zmm1 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0xd2)
        zmm2 = _mm256_insertf128_ps(arg6, zmm2[0].o, 1)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 0x8c)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5[0].o, 0xc4)
        zmm3 = _mm256_insertf128_ps(arg7, zmm3[0].o, 1)
        int64_t rsi_1 = sx.q(rbx << 2)
        zmm4[0].o = *(arg4 + rsi_1)
        zmm4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, *(arg4 + rsi_1 + 0x10), 1)
        double var_200[0x4] = zmm4
        int256_t var_300_1
        int256_t var_2e0_1
        int256_t var_2c0_1
        uint64_t rsi_4
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 &= rsi_4)
            uint64_t rsi_2
            uint64_t rflags_1
            
            if (i_1 == 0)
                rsi_2 = 0x40
            else
                rsi_2, rflags_1 = _bit_scan_forward(i_1)
            int64_t rdi_1 = sx.q(*(&var_200 + (rsi_2 << 2)))
            zmm5[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            arg5[0].o = zx.o(rdi_1.d)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
            zmm5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
            rsi_4 = not.q(zx.q(_mm256_movemask_ps(zmm5)))
            float var_380_1[0x8] = zmm3
            float var_460[0x8]
            __builtin_memcpy(&var_460, 
                "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x"
            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80"
            "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80"
            "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x80)
            arg5 = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg15[rdi_1 * 0x10]))
            arg6 = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 1]))
            arg7 = _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 2]))
            float var_160_1[0x8] = arg5
            double var_140_1[0x4] = arg6
            double var_120_1[0x4] = arg7
            double var_100_1[0x4] =
                _mm256_mul_ps(zmm1, _mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 3]))
            arg8 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 4]))
            arg9 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 5]))
            arg10 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 6]))
            arg11 = _mm256_mul_ps(zmm2, _mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 7]))
            double var_1e0_1[0x4] = arg8
            float var_1c0_1[0x8] = arg9
            arg12 = __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 8]), zmm3)
            float var_1a0_1[0x8] = arg10
            arg13 = __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 9]), zmm3)
            float var_180_1[0x8] = arg11
            arg11 = __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 0xa]), zmm3)
            arg12 = _mm256_add_ps(arg12, 
                __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 0xc]), var_460))
            float var_440[0x8]
            arg13 = _mm256_add_ps(arg13, 
                __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 0xd]), var_440))
            float var_420[0x8]
            arg14 =
                __vmulps_ymmqq_ymmqq_memqq(_mm256_broadcast_ss(arg15[rdi_1 * 0x10 + 0xe]), var_420)
            arg11 = _mm256_add_ps(arg11, arg14)
            arg5 = _mm256_add_ps(_mm256_add_ps(arg5, arg8), arg12)
            arg6 = _mm256_add_ps(_mm256_add_ps(arg6, arg9), arg13)
            arg7 = _mm256_add_ps(arg7, arg10)
            var_300_1 = _mm256_maskstore_ps(zmm5, arg5)
            arg5 = _mm256_add_ps(arg7, arg11)
            var_2e0_1 = _mm256_maskstore_ps(zmm5, arg6)
            var_2c0_1 = _mm256_maskstore_ps(zmm5, arg5)
        
        zmm1[0].o = var_300_1.o
        zmm2[0].o = var_300_1:0x10.o
        zmm3[0].o = var_2e0_1.o
        zmm4[0].o = var_2e0_1:0x10.o
        zmm5[0].o = var_2c0_1.o
        arg7[0].o = var_2c0_1:0x10.o
        arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x30)
        arg5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm5[0].o, 0x49)
        arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg5[0].o, 4)
        arg6[0].o = _mm_permute_ps(arg6[0].o, 0x6c)
        *(arg1 + (r15_1 << 2)) = arg6[0].o
        arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 4)
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0x6c)
        *(arg1 + (r15_1 << 2) + 0x10) = arg5[0].o
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x33)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xe2)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
        *(arg1 + (r15_1 << 2) + 0x20) = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0x30)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg7[0].o, 0x49)
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 4)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x6c)
        *(arg1 + (r15_1 << 2) + 0x30) = zmm1[0].o
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 4)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x6c)
        *(arg1 + (r15_1 << 2) + 0x40) = zmm1[0].o
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 0x33)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg7[0].o, 0xe2)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
        *(arg1 + (r15_1 << 2) + 0x50) = zmm1[0].o
        rbx = r14_1.d + 8
    while (rbx s< r10_4)
    
    rdi_3 = zx.q(rbx)
    
    if (rbx s< arg2)
        goto label_14036c328
arg5[0].o = var_d8
arg6[0].o = var_c8
arg7[0].o = var_b8
arg8[0].o = var_a8
arg9[0].o = var_98
arg10[0].o = var_88
arg11[0].o = var_78
arg12[0].o = var_68
arg13[0].o = var_58
arg14[0].o = var_48
_mm256_zeroupper()
return arg15
