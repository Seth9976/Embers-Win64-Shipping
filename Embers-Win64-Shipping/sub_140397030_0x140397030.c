// 函数: sub_140397030
// 地址: 0x140397030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t zmm13[0x8]
int16_t var_28[0x8] = zmm13
_mm256_zeroupper()
int256_t zmm7

if (arg3 != 0)
    int64_t i_1 = neg.q(arg2)
    zmm7.o = zx.o(0)
    int64_t i
    
    do
        *(arg10 + (arg2 << 1) + (i_1 << 1)) = zmm7
        *(arg9 + (arg2 << 1) + (i_1 << 1)) = zmm7
        i = i_1
        i_1 += 0x10
    while (i s< -0x10)
    *arg12 = 0
    _mm256_zeroupper()
    return 

int16_t zmm0[0x8]
int16_t zmm1[0x8]
int16_t zmm2[0x8]
int16_t zmm3[0x8]
int256_t zmm5
int16_t zmm6[0x8]
int16_t zmm8[0x8]
int16_t zmm9[0x8]
int16_t zmm10[0x8]
int16_t zmm11[0x8]
int16_t zmm12[0x8]

if (arg2 == 0x10)
    zmm9 = *arg1
    zmm10 = arg1[1]
    zmm5.o = zx.o(0)
    zmm0 = __vpaddw_xmmdq_xmmdq_xmmdq(*arg4, __vpcmpeqw_xmmdq_xmmdq_xmmdq(arg5, arg5))
    zmm6 = __vpabsw_xmmdq_xmmdq(zmm9)
    zmm11 = __vpabsw_xmmdq_xmmdq(zmm10)
    zmm7.o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm6, zmm0)
    zmm12 = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm11, __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0, zmm0))
    
    if (not((zmm7.o | zmm12) == zx.o(0) ? 1 : 0))
        zmm1 = *arg6
        zmm2 = *arg7
        zmm3 = *arg11
        arg5 = *arg8
        zmm6 = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm6, zmm1)
        zmm11 = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm11, __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1, zmm1))
        zmm8 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm6, zmm2)
        zmm13 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm11, __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2, zmm2))
        zmm8 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm8, zmm6)
        zmm13 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm13, zmm11)
        zmm8 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm8, arg5)
        zmm13 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm13, __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg5, arg5))
        zmm8 = __vpsignw_xmmdq_xmmdq_xmmdq(zmm8, zmm9) & zmm7.o
        zmm13 = __vpsignw_xmmdq_xmmdq_xmmdq(zmm13, zmm10) & zmm12
        *arg9 = zmm8
        *(arg9 + 0x10) = zmm13
        zmm8 = __vpmullw_xmmdq_xmmdq_xmmdq(zmm8, zmm3)
        zmm13 = __vpmullw_xmmdq_xmmdq_xmmdq(zmm13, __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm3, zmm3))
        *arg10 = zmm8
        *(arg10 + 0x10) = zmm13
        zmm6 = *arg13
        zmm11 = arg13[1]
        zmm8 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm8, zx.o(0))
        zmm13 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm13, zx.o(0))
        zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8 & not.o(__vpsubw_xmmdq_xmmdq_xmmdq(zmm6, zmm7.o)), 
            zmm13 & not.o(__vpsubw_xmmdq_xmmdq_xmmdq(zmm11, zmm12)))
        zmm7.o = __vpshufd_xmmdq_xmmdq_immb(zmm8, 0xe)
        zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)
        zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(zmm8, 0xe)
        zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)
        zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(zmm8, 1)
        *arg12 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)[0]
        _mm256_zeroupper()
        return 
    
    *arg9 = zmm5
    *arg10 = zmm5
    *arg12 = 0
    _mm256_zeroupper()
    return 

zmm1 = *arg6
zmm2 = *arg7
zmm3 = *arg11
zmm0 = __vpaddw_xmmdq_xmmdq_xmmdq(*arg4, __vpcmpeqw_xmmdq_xmmdq_xmmdq(arg5, arg5))
arg5 = *arg8
zmm5.o = zx.o(0)
void* rcx_1 = arg1 + (arg2 << 1)
void* r9_3 = arg9 + (arg2 << 1)
void* r10_3 = arg10 + (arg2 << 1)
void* r11_3 = &(*arg13)[arg2]
int64_t rdx_1 = neg.q(arg2)
zmm9 = *(rcx_1 + (rdx_1 << 1))
zmm10 = *(rcx_1 + (rdx_1 << 1) + 0x10)
zmm6 = __vpabsw_xmmdq_xmmdq(zmm9)
zmm11 = __vpabsw_xmmdq_xmmdq(zmm10)
zmm7.o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm6, zmm0)
zmm0 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0, zmm0)
zmm12 = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm11, zmm0)
int64_t rdx_2

if (not((zmm7.o | zmm12) == zx.o(0) ? 1 : 0))
    zmm6 = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm6, zmm1)
    zmm1 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1, zmm1)
    zmm11 = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm11, zmm1)
    zmm8 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm6, zmm2)
    zmm2 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2, zmm2)
    zmm13 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm11, zmm2)
    zmm8 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm8, zmm6)
    zmm13 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm13, zmm11)
    zmm8 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm8, arg5)
    arg5 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg5, arg5)
    zmm13 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm13, arg5)
    zmm8 = __vpsignw_xmmdq_xmmdq_xmmdq(zmm8, zmm9) & zmm7.o
    zmm13 = __vpsignw_xmmdq_xmmdq_xmmdq(zmm13, zmm10) & zmm12
    *(r9_3 + (rdx_1 << 1)) = zmm8
    *(r9_3 + (rdx_1 << 1) + 0x10) = zmm13
    zmm8 = __vpmullw_xmmdq_xmmdq_xmmdq(zmm8, zmm3)
    zmm3 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm3, zmm3)
    zmm13 = __vpmullw_xmmdq_xmmdq_xmmdq(zmm13, zmm3)
    *(r10_3 + (rdx_1 << 1)) = zmm8
    *(r10_3 + (rdx_1 << 1) + 0x10) = zmm13
    zmm8 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm8, zx.o(0))
    zmm13 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm13, zx.o(0))
    zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(
        zmm8 & not.o(__vpsubw_xmmdq_xmmdq_xmmdq(*(r11_3 + (rdx_1 << 1)), zmm7.o)), 
        zmm13 & not.o(__vpsubw_xmmdq_xmmdq_xmmdq(*(r11_3 + (rdx_1 << 1) + 0x10), zmm12)))
    rdx_2 = rdx_1 + 0x10
else
    *(r9_3 + (rdx_1 << 1)) = zmm5
    *(r10_3 + (rdx_1 << 1)) = zmm5
    rdx_2 = rdx_1 + 0x10
    zmm1 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1, zmm1)
    zmm2 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2, zmm2)
    zmm3 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm3, zmm3)
    arg5 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg5, arg5)
    zmm8 = zx.o(0)

while (true)
    zmm9 = *(rcx_1 + (rdx_2 << 1))
    zmm10 = *(rcx_1 + (rdx_2 << 1) + 0x10)
    zmm6 = __vpabsw_xmmdq_xmmdq(zmm9)
    zmm11 = __vpabsw_xmmdq_xmmdq(zmm10)
    zmm7.o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm6, zmm0)
    zmm12 = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm11, zmm0)
    
    if (not((zmm7.o | zmm12) == zx.o(0) ? 1 : 0))
        zmm6 = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm6, zmm1)
        zmm11 = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm11, zmm1)
        int16_t zmm14[0x8] = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm6, zmm2)
        zmm13 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm11, zmm2)
        zmm14 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm14, zmm6)
        zmm13 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm13, zmm11)
        zmm14 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm14, arg5)
        zmm13 = __vpmulhw_xmmdq_xmmdq_xmmdq(zmm13, arg5)
        zmm14 = __vpsignw_xmmdq_xmmdq_xmmdq(zmm14, zmm9) & zmm7.o
        zmm13 = __vpsignw_xmmdq_xmmdq_xmmdq(zmm13, zmm10) & zmm12
        *(r9_3 + (rdx_2 << 1)) = zmm14
        *(r9_3 + (rdx_2 << 1) + 0x10) = zmm13
        zmm14 = __vpmullw_xmmdq_xmmdq_xmmdq(zmm14, zmm3)
        zmm13 = __vpmullw_xmmdq_xmmdq_xmmdq(zmm13, zmm3)
        *(r10_3 + (rdx_2 << 1)) = zmm14
        *(r10_3 + (rdx_2 << 1) + 0x10) = zmm13
        zmm14 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm14, zx.o(0))
        zmm13 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm13, zx.o(0))
        zmm11 = *(r11_3 + (rdx_2 << 1) + 0x10)
        zmm6 = __vpsubw_xmmdq_xmmdq_xmmdq(*(r11_3 + (rdx_2 << 1)), zmm7.o)
        zmm13 &= not.o(__vpsubw_xmmdq_xmmdq_xmmdq(zmm11, zmm12))
        zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(__vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm14 & not.o(zmm6)), 
            zmm13)
        int64_t temp1_1 = rdx_2
        rdx_2 += 0x10
        
        if (temp1_1 == -0x10)
            zmm7.o = __vpshufd_xmmdq_xmmdq_immb(zmm8, 0xe)
            zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)
            zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(zmm8, 0xe)
            zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)
            zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(zmm8, 1)
            *arg12 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)[0]
            _mm256_zeroupper()
            return 
    else
        *(r9_3 + (rdx_2 << 1)) = zmm5
        *(r10_3 + (rdx_2 << 1)) = zmm5
        int64_t temp2_1 = rdx_2
        rdx_2 += 0x10
        
        if (temp2_1 == -0x10)
            break

zmm7.o = __vpshufd_xmmdq_xmmdq_immb(zmm8, 0xe)
zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)
zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(zmm8, 0xe)
zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)
zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(zmm8, 1)
*arg12 = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)[0]
_mm256_zeroupper()
