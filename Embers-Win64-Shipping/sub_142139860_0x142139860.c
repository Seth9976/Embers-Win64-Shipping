// 函数: sub_142139860
// 地址: 0x142139860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408d9160(arg1, arg2, arg3)
int32_t rax
int512_t zmm1
int128_t zmm6
rax, zmm1, zmm6 = sub_140b4e7c0(arg1, &data_1439a9478)

if (rax s>= 0x1a)
    sub_1408d9160(arg1, &arg2[3], zmm1)
    int64_t* rcx_3 = arg1[1]
    int32_t* rdx_3 = *rcx_3
    
    if (&rdx_3[1] u<= rcx_3[1])
        arg2[8] = *rdx_3
        int64_t* rax_4 = arg1[1]
        *rax_4 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[8], zmm1)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[8], 4)
    
    int64_t* rcx_5 = arg1[1]
    int32_t* r8_1 = *rcx_5
    
    if (&r8_1[1] u<= rcx_5[1])
        arg2[9] = *r8_1
        int64_t* rax_8 = arg1[1]
        *rax_8 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[9], zmm1)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[9], 4)
    
    int64_t* rcx_7 = arg1[1]
    int32_t* r8_2 = *rcx_7
    
    if (&r8_2[1] u<= rcx_7[1])
        arg2[0xa] = *r8_2
        int64_t* rax_12 = arg1[1]
        *rax_12 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[0xa], zmm1)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0xa], 4)
    
    int64_t* rcx_9 = arg1[1]
    int32_t* r8_3 = *rcx_9
    
    if (&r8_3[1] u<= rcx_9[1])
        arg2[0xb] = *r8_3
        int64_t* rax_16 = arg1[1]
        *rax_16 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[0xb], zmm1)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0xb], 4)
else
    int128_t var_18_1 = zmm6
    int32_t arg_8
    sub_1409ac740(arg1, &arg_8, zmm1)
    float temp0_5[0x4] = __addps_xmmps_memps(
        __mulps_xmmps_memps(
            _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg_8), 0), 0)), 
            data_143280740), 
        data_142d3f7e0)
    zmm1.o = temp0_5
    int32_t var_20_1 = _mm_shuffle_ps(temp0_5, temp0_5, 0xaa).d
    zmm1.o = _mm_shuffle_ps(zmm1.o, temp0_5, 0x55)
    *(arg2 + 0xc) = (_mm_unpacklo_ps(temp0_5, zmm1.q)).q
    arg2[5] = var_20_1
    sub_1409ac740(arg1, &arg_8, zmm1)
    zmm1.o = zx.o(arg_8)
    zmm1.o = _mm_unpacklo_epi8(zmm1.o, 0)
    zmm1.o = _mm_unpacklo_epi16(zmm1.o, 0)
    *(arg2 + 0x20) = __addps_xmmps_memps(
        __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1.o), data_143280740), data_142d3f7e0)

sub_1409ac7a0(arg1, &arg2[0xc], zmm1)
sub_1409ac7a0(arg1, &arg2[0xe], zmm1)
return arg1
