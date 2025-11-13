// 函数: sub_140397600
// 地址: 0x140397600
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

int16_t zmm0[0x8] = *arg4
int16_t zmm1[0x8] = *arg6
uint64_t zmm2[0x2] = *arg7
uint64_t zmm3[0x2] = *arg11
uint16_t temp0_1[0x8] = __vpcmpeqw_xmmdq_xmmdq_xmmdq(arg5, arg5)
int16_t temp0_2[0x8] = __vpsubw_xmmdq_xmmdq_xmmdq(zmm0, temp0_1)
int16_t temp0_3[0x8] = __vpsubw_xmmdq_xmmdq_xmmdq(zmm1, temp0_1)
zmm0 = __vpsrlw_xmmdq_xmmdq_immb(temp0_2, 1)
zmm1 = __vpsrlw_xmmdq_xmmdq_immb(temp0_3, 1)
int16_t temp0_6[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(zmm0, temp0_1)
uint16_t temp0_7[0x8] = __vpsllw_xmmdq_xmmdq_immb(*arg8, 1)
int256_t zmm5
zmm5.o = zx.o(0)
int64_t rcx = arg1 + (arg2 << 1)
int64_t r9_1 = arg9 + (arg2 << 1)
int64_t r10_2 = arg10 + (arg2 << 1)
int64_t r11_2 = arg13 + (arg2 << 1)
int64_t rdx = neg.q(arg2)
int16_t zmm9[0x8] = *(rcx + (rdx << 1))
int16_t zmm10[0x8] = *(rcx + (rdx << 1) + 0x10)
int16_t zmm6[0x8] = __vpabsw_xmmdq_xmmdq(zmm9)
int16_t zmm11[0x8] = __vpabsw_xmmdq_xmmdq(zmm10)
zmm7.o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm6, temp0_6)
zmm0 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(temp0_6, temp0_6)
int16_t temp0_12[0x8] = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm11, zmm0)
int64_t rdx_1
int16_t zmm8[0x8]

if (not((zmm7.o | temp0_12) == zx.o(0) ? 1 : 0))
    int16_t temp0_17[0x8] = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm6, zmm1)
    zmm1 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1, zmm1)
    int16_t temp0_19[0x8] = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm11, zmm1)
    int16_t temp0_20[0x8] = __vpmulhw_xmmdq_xmmdq_xmmdq(temp0_17, zmm2)
    zmm2 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2, zmm2)
    int16_t temp0_22[0x8] = __vpmulhw_xmmdq_xmmdq_xmmdq(temp0_19, zmm2)
    int16_t temp0_23[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_20, temp0_17)
    int16_t temp0_24[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_22, temp0_19)
    int16_t temp0_25[0x8] = __vpmulhw_xmmdq_xmmdq_xmmdq(temp0_23, temp0_7)
    arg5 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(temp0_7, temp0_7)
    int16_t temp0_27[0x8] = __vpmulhw_xmmdq_xmmdq_xmmdq(temp0_24, arg5)
    zmm8 = __vpsignw_xmmdq_xmmdq_xmmdq(temp0_25, zmm9) & zmm7.o
    zmm13 = __vpsignw_xmmdq_xmmdq_xmmdq(temp0_27, zmm10) & temp0_12
    *(r9_1 + (rdx << 1)) = zmm8
    *(r9_1 + (rdx << 1) + 0x10) = zmm13
    zmm8 = __vpabsw_xmmdq_xmmdq(zmm8)
    zmm13 = __vpabsw_xmmdq_xmmdq(zmm13)
    int16_t temp0_32[0x8] = __vpmullw_xmmdq_xmmdq_xmmdq(zmm8, zmm3)
    zmm3 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm3, zmm3)
    int16_t temp0_34[0x8] = __vpmullw_xmmdq_xmmdq_xmmdq(zmm13, zmm3)
    zmm8 = __vpsrlw_xmmdq_xmmdq_immb(temp0_32, 1)
    zmm13 = __vpsrlw_xmmdq_xmmdq_immb(temp0_34, 1)
    int16_t temp0_37[0x8] = __vpsignw_xmmdq_xmmdq_xmmdq(zmm8, zmm9)
    int16_t temp0_38[0x8] = __vpsignw_xmmdq_xmmdq_xmmdq(zmm13, zmm10)
    *(r10_2 + (rdx << 1)) = temp0_37
    *(r10_2 + (rdx << 1) + 0x10) = temp0_38
    zmm8 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(temp0_37, zx.o(0))
    zmm13 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(temp0_38, zx.o(0))
    zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(
        zmm8 & not.o(__vpsubw_xmmdq_xmmdq_xmmdq(*(r11_2 + (rdx << 1)), zmm7.o)), 
        zmm13 & not.o(__vpsubw_xmmdq_xmmdq_xmmdq(*(r11_2 + (rdx << 1) + 0x10), temp0_12)))
    rdx_1 = rdx + 0x10
else
    *(r9_1 + (rdx << 1)) = zmm5
    *(r10_2 + (rdx << 1)) = zmm5
    rdx_1 = rdx + 0x10
    zmm1 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1, zmm1)
    zmm2 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2, zmm2)
    zmm3 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm3, zmm3)
    arg5 = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(temp0_7, temp0_7)
    zmm8 = zx.o(0)

while (true)
    zmm9 = *(rcx + (rdx_1 << 1))
    zmm10 = *(rcx + (rdx_1 << 1) + 0x10)
    zmm6 = __vpabsw_xmmdq_xmmdq(zmm9)
    zmm11 = __vpabsw_xmmdq_xmmdq(zmm10)
    zmm7.o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm6, zmm0)
    int16_t temp0_47[0x8] = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm11, zmm0)
    
    if (not((zmm7.o | temp0_47) == zx.o(0) ? 1 : 0))
        int16_t temp0_54[0x8] = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm6, zmm1)
        int16_t temp0_55[0x8] = __vpaddsw_xmmdq_xmmdq_xmmdq(zmm11, zmm1)
        int16_t temp0_56[0x8] = __vpmulhw_xmmdq_xmmdq_xmmdq(temp0_54, zmm2)
        int16_t temp0_57[0x8] = __vpmulhw_xmmdq_xmmdq_xmmdq(temp0_55, zmm2)
        int16_t temp0_58[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_56, temp0_54)
        int16_t temp0_59[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_57, temp0_55)
        int16_t temp0_60[0x8] = __vpmulhw_xmmdq_xmmdq_xmmdq(temp0_58, arg5)
        int16_t temp0_61[0x8] = __vpmulhw_xmmdq_xmmdq_xmmdq(temp0_59, arg5)
        int16_t zmm14[0x8] = __vpsignw_xmmdq_xmmdq_xmmdq(temp0_60, zmm9) & zmm7.o
        zmm13 = __vpsignw_xmmdq_xmmdq_xmmdq(temp0_61, zmm10) & temp0_47
        *(r9_1 + (rdx_1 << 1)) = zmm14
        *(r9_1 + (rdx_1 << 1) + 0x10) = zmm13
        zmm14 = __vpabsw_xmmdq_xmmdq(zmm14)
        zmm13 = __vpabsw_xmmdq_xmmdq(zmm13)
        int16_t temp0_66[0x8] = __vpmullw_xmmdq_xmmdq_xmmdq(zmm14, zmm3)
        int16_t temp0_67[0x8] = __vpmullw_xmmdq_xmmdq_xmmdq(zmm13, zmm3)
        zmm14 = __vpsrlw_xmmdq_xmmdq_immb(temp0_66, 1)
        zmm13 = __vpsrlw_xmmdq_xmmdq_immb(temp0_67, 1)
        int16_t temp0_70[0x8] = __vpsignw_xmmdq_xmmdq_xmmdq(zmm14, zmm9)
        int16_t temp0_71[0x8] = __vpsignw_xmmdq_xmmdq_xmmdq(zmm13, zmm10)
        *(r10_2 + (rdx_1 << 1)) = temp0_70
        *(r10_2 + (rdx_1 << 1) + 0x10) = temp0_71
        zmm14 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(temp0_70, zx.o(0))
        zmm13 = __vpcmpeqw_xmmdq_xmmdq_xmmdq(temp0_71, zx.o(0))
        zmm11 = *(r11_2 + (rdx_1 << 1) + 0x10)
        int16_t temp0_74[0x8] = __vpsubw_xmmdq_xmmdq_xmmdq(*(r11_2 + (rdx_1 << 1)), zmm7.o)
        zmm13 &= not.o(__vpsubw_xmmdq_xmmdq_xmmdq(zmm11, temp0_47))
        zmm8 = __vpmaxsw_xmmdq_xmmdq_xmmdq(
            __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm14 & not.o(temp0_74)), zmm13)
        int64_t temp1_1 = rdx_1
        rdx_1 += 0x10
        
        if (temp1_1 == -0x10)
            zmm7.o = __vpshufd_xmmdq_xmmdq_immb(zmm8, 0xe)
            int16_t temp0_79[0x8] = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)
            zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(temp0_79, 0xe)
            int16_t temp0_81[0x8] = __vpmaxsw_xmmdq_xmmdq_xmmdq(temp0_79, zmm7.o)
            zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(temp0_81, 1)
            *arg12 = __vpmaxsw_xmmdq_xmmdq_xmmdq(temp0_81, zmm7.o)[0]
            _mm256_zeroupper()
            return 
    else
        *(r9_1 + (rdx_1 << 1)) = zmm5
        *(r10_2 + (rdx_1 << 1)) = zmm5
        int64_t temp2_1 = rdx_1
        rdx_1 += 0x10
        
        if (temp2_1 == -0x10)
            break

zmm7.o = __vpshufd_xmmdq_xmmdq_immb(zmm8, 0xe)
int16_t temp0_49[0x8] = __vpmaxsw_xmmdq_xmmdq_xmmdq(zmm8, zmm7.o)
zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(temp0_49, 0xe)
int16_t temp0_51[0x8] = __vpmaxsw_xmmdq_xmmdq_xmmdq(temp0_49, zmm7.o)
zmm7.o = __vpshuflw_xmmdq_xmmdq_immb(temp0_51, 1)
*arg12 = __vpmaxsw_xmmdq_xmmdq_xmmdq(temp0_51, zmm7.o)[0]
_mm256_zeroupper()
