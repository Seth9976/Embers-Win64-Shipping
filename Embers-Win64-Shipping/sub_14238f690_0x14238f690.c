// 函数: sub_14238f690
// 地址: 0x14238f690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg6
int64_t var_98 = 0
int32_t var_90 = 0
int128_t* r10_2 = zx.q(*(arg1 + 0x30) * arg3) + *(arg1 + 0x28)
uint64_t rdx = zx.q(arg3)
float zmm0[0x4] = *(r10_2 + 4)
float zmm1[0x4] = *(r10_2 + 8)
float zmm3[0x4] = *r10_2
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm0[0]
uint64_t arg_8 = rdx
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = 0x3f800000
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
var_98.o = temp0_3
float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), arg4[1])
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *arg4)
float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), arg4[3])
float temp0_10[0x4] = _mm_add_ps(temp0_7, temp0_5)
float temp0_14[0x4] = _mm_add_ps(
    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), arg4[2]), temp0_9), 
    temp0_10)
float var_90_1 = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)[0]
*r13 = (_mm_unpacklo_ps(temp0_14, _mm_shuffle_ps(temp0_14, temp0_14, 0x55)[0].q)).q
r13[1].d = var_90_1
int64_t rcx = *(arg2 + 0x60)
float zmm2[0x4]

if (*(arg2 + 0x81) == 0)
    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx + (rdx << 3))), 0), 0)
    float temp0_28[0x4] = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0) | zmm1), 
        data_142dd3fb0)
    zmm2 = temp0_28
    zmm0 = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
    zmm1 = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
else
    zmm1 = data_142dd3fc0
    zmm2 = _mm_unpacklo_epi16(zx.o(*(rcx + zx.q(rdx.d) * 0x10)), 0)
    zmm1 = (zmm1 & __pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f90)) | zmm2
    zmm2 = _mm_mul_ps(data_142dd3fa0, _mm_cvtepi32_ps(zmm1))
    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)

int32_t var_8c = 0
float zmm6[0x4] = var_98.o
zmm6[0] = zmm2[0]
int64_t var_88 = 0
float temp0_31[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_31[0] = zmm0[0]
int32_t var_80 = 0
float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
temp0_32[0] = zmm1[0]
float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
var_98.o = temp0_33
float temp0_35[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_33, temp0_33, 0x55), arg4[1])
float temp0_37[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_33, temp0_33, 0), *arg4)
float temp0_39[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_33, temp0_33, 0xff), arg4[3])
float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_35)
zmm6 = _mm_add_ps(
    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_33, temp0_33, 0xaa), arg4[2]), temp0_39), 
    temp0_40)
zmm6[0] = zmm6[0] * zmm6[0]
float zmm7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float zmm8[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] + zmm8[0]
float arg_18
float zmm4[0x4]

if (zmm7[0] <= 9.99999994e-09f)
    zmm6 = zx.o(0)
    zmm7 = zx.o(0)
    zmm8 = zx.o(0)
else
    zmm4 = 0x3f000000
    zmm3 = zx.o(0)
    zmm1 = 0x3f000000
    zmm3[0] = zmm7[0]
    float temp0_47[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_47[0] = temp0_47[0] * temp0_47[0]
    zmm3[0] = zmm3[0] * temp0_47[0]
    zmm1[0] = 0.5f - zmm3[0]
    temp0_47[0] = temp0_47[0] * zmm1[0]
    temp0_47[0] = temp0_47[0] + temp0_47[0]
    temp0_47[0] = temp0_47[0] * temp0_47[0]
    zmm3[0] = zmm3[0] * temp0_47[0]
    zmm4[0] = 0.5f - zmm3[0]
    temp0_47[0] = temp0_47[0] * zmm4[0]
    temp0_47[0] = temp0_47[0] + temp0_47[0]
    arg_18 = temp0_47[0]
    zmm8[0] = zmm8[0] * temp0_47[0]
    zmm7[0] = zmm7[0] * temp0_47[0]
    zmm6[0] = zmm6[0] * temp0_47[0]

float var_90_2 = zmm8[0]
*(r13 + 0xc) = (_mm_unpacklo_ps(zmm6, zmm7[0].q)).q
*(r13 + 0x14) = var_90_2
int64_t rcx_1 = *(arg2 + 0x60)

if (*(arg2 + 0x81) == 0)
    zmm4 = data_142dd3fd0
    zmm6 = data_142dd3fb0
    zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_1 + (rdx << 3))), 0), 0)
    float temp0_65[0x4] =
        _mm_cvtepi32_ps((zmm4 & __pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f80)) | zmm2)
    zmm1 = zx.o(*(rcx_1 + (rdx << 3) + 4))
    float temp0_66[0x4] = _mm_mul_ps(zmm6, temp0_65)
    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, 0), 0)
    zmm4 &= __pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80)
    float temp0_70[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
    zmm8 = temp0_70
    float temp0_71[0x4] = _mm_cvtepi32_ps(zmm4 | zmm1)
    zmm4 = temp0_66
    float temp0_72[0x4] = _mm_mul_ps(zmm6, temp0_71)
    float temp0_73[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xaa)
    zmm8[0] = zmm8[0] * temp0_72[0]
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
    temp0_66[0] = temp0_66[0] * temp0_74[0]
    float temp0_75[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)
    zmm4[0] = zmm4[0] * temp0_75[0]
    zmm8[0] = zmm8[0] - temp0_66[0]
    temp0_70[0] = temp0_70[0] * temp0_75[0]
    temp0_73[0] = temp0_73[0] * temp0_74[0]
    temp0_73[0] = temp0_73[0] * temp0_72[0]
    float temp0_76[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xff)
    temp0_73[0] = temp0_73[0] - temp0_70[0]
    zmm8[0] = zmm8[0] * temp0_76[0]
    zmm4[0] = zmm4[0] - temp0_73[0]
    temp0_73[0] = temp0_73[0] * temp0_76[0]
    zmm4[0] = zmm4[0] * temp0_76[0]
    zmm7 = temp0_73
else
    zmm4 = data_142dd3fc0
    float zmm5[0x4] = data_142dd3fa0
    uint64_t rax_5 = rdx * 2
    zmm2 = _mm_unpacklo_epi16(zx.o(*(rcx_1 + (rax_5 << 3))), 0)
    float temp0_51[0x4] =
        _mm_cvtepi32_ps((zmm4 & __pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f90)) | zmm2)
    zmm1 = zx.o(*(rcx_1 + (rax_5 << 3) + 8))
    float temp0_52[0x4] = _mm_mul_ps(zmm5, temp0_51)
    zmm1 = _mm_unpacklo_epi16(zmm1, 0)
    zmm4 = (zmm4 & __pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90)) | zmm1
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0x55)
    float temp0_56[0x4] = _mm_cvtepi32_ps(zmm4)
    zmm4 = temp0_52
    zmm8 = temp0_55
    float temp0_57[0x4] = _mm_mul_ps(zmm5, temp0_56)
    zmm7 = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)
    zmm8[0] = zmm8[0] * temp0_57[0]
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)
    temp0_52[0] = temp0_52[0] * temp0_59[0]
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa)
    zmm4[0] = zmm4[0] * temp0_60[0]
    zmm8[0] = zmm8[0] - temp0_52[0]
    temp0_55[0] = temp0_55[0] * temp0_60[0]
    zmm7[0] = zmm7[0] * temp0_59[0]
    zmm7[0] = zmm7[0] * temp0_57[0]
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
    zmm7[0] = zmm7[0] - temp0_55[0]
    zmm8[0] = zmm8[0] * temp0_61[0]
    zmm4[0] = zmm4[0] - zmm7[0]
    zmm7[0] = zmm7[0] * temp0_61[0]
    zmm4[0] = zmm4[0] * temp0_61[0]

int32_t var_8c_1 = 0
zmm6 = var_98.o
zmm6[0] = zmm7[0]
int64_t var_88_1 = 0
float temp0_77[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_77[0] = zmm4[0]
int32_t var_80_1 = 0
float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc6)
temp0_78[0] = zmm8[0]
float temp0_79[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xc9)
var_98.o = temp0_79
float temp0_81[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_79, temp0_79, 0x55), arg4[1])
float temp0_83[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_79, temp0_79, 0), *arg4)
float temp0_85[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_79, temp0_79, 0xff), arg4[3])
float temp0_86[0x4] = _mm_add_ps(temp0_83, temp0_81)
zmm6 = _mm_add_ps(
    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_79, temp0_79, 0xaa), arg4[2]), temp0_85), 
    temp0_86)
zmm6[0] = zmm6[0] * zmm6[0]
zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] + zmm8[0]

if (zmm7[0] <= 9.99999994e-09f)
    zmm6 = zx.o(0)
    zmm7 = zx.o(0)
    zmm8 = zx.o(0)
else
    zmm4 = 0x3f000000
    zmm3 = zx.o(0)
    zmm1 = 0x3f000000
    zmm3[0] = zmm7[0]
    float temp0_93[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_93[0] = temp0_93[0] * temp0_93[0]
    zmm3[0] = zmm3[0] * temp0_93[0]
    zmm1[0] = 0.5f - zmm3[0]
    temp0_93[0] = temp0_93[0] * zmm1[0]
    temp0_93[0] = temp0_93[0] + temp0_93[0]
    temp0_93[0] = temp0_93[0] * temp0_93[0]
    zmm3[0] = zmm3[0] * temp0_93[0]
    zmm4[0] = 0.5f - zmm3[0]
    temp0_93[0] = temp0_93[0] * zmm4[0]
    temp0_93[0] = temp0_93[0] + temp0_93[0]
    arg_18 = temp0_93[0]
    zmm8[0] = zmm8[0] * temp0_93[0]
    zmm7[0] = zmm7[0] * temp0_93[0]
    zmm6[0] = zmm6[0] * temp0_93[0]

float var_90_3 = zmm8[0]
r13[3] = (_mm_unpacklo_ps(zmm6, zmm7[0].q)).q
r13[4].d = var_90_3
int64_t rcx_2 = *(arg2 + 0x60)
int64_t var_98_1 = 0

if (*(arg2 + 0x81) == 0)
    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_2 + (rdx << 3) + 4)), 0), 0)
    zmm0 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0) | zmm1), 
        data_142dd3fb0)
else
    zmm1 = _mm_unpacklo_epi16(zx.o(*(rcx_2 + rdx * 0x10 + 8)), 0)
    zmm0 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0) | zmm1), 
        data_142dd3fa0)

var_98_1.o = zmm0
int32_t var_8c_2 = 0
zmm6 = var_98_1.o
zmm6[0] = var_98_1.d[0]
int64_t var_88_2 = 0
float temp0_104[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_104[0] = var_98_1:4.d[0]
int32_t var_80_2 = 0
float temp0_105[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xc6)
temp0_105[0] = 0
float temp0_106[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0xc9)
var_98_1.o = temp0_106
float temp0_108[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_106, temp0_106, 0x55), arg5[1])
float temp0_110[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_106, temp0_106, 0), *arg5)
float temp0_112[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_106, temp0_106, 0xff), arg5[3])
float temp0_113[0x4] = _mm_add_ps(temp0_110, temp0_108)
zmm6 = _mm_add_ps(
    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_106, temp0_106, 0xaa), arg5[2]), 
        temp0_112), 
    temp0_113)
zmm6[0] = zmm6[0] * zmm6[0]
zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] + zmm8[0]

if (zmm7[0] <= 9.99999994e-09f)
    zmm6 = zx.o(0)
    zmm7 = zx.o(0)
    zmm8 = zx.o(0)
else
    zmm4 = 0x3f000000
    zmm3 = zx.o(0)
    zmm1 = 0x3f000000
    zmm3[0] = zmm7[0]
    float temp0_120[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_120[0] = temp0_120[0] * temp0_120[0]
    zmm3[0] = zmm3[0] * temp0_120[0]
    zmm1[0] = 0.5f - zmm3[0]
    temp0_120[0] = temp0_120[0] * zmm1[0]
    temp0_120[0] = temp0_120[0] + temp0_120[0]
    temp0_120[0] = temp0_120[0] * temp0_120[0]
    zmm3[0] = zmm3[0] * temp0_120[0]
    zmm4[0] = 0.5f - zmm3[0]
    temp0_120[0] = temp0_120[0] * zmm4[0]
    temp0_120[0] = temp0_120[0] + temp0_120[0]
    arg_18 = temp0_120[0]
    zmm8[0] = zmm8[0] * temp0_120[0]
    zmm7[0] = zmm7[0] * temp0_120[0]
    zmm6[0] = zmm6[0] * temp0_120[0]

float var_90_4 = zmm8[0]
uint64_t r12 = 0
*(r13 + 0x24) = (_mm_unpacklo_ps(zmm6, zmm7[0].q)).q
*(r13 + 0x2c) = var_90_4
uint64_t result = zx.q(*(arg2 + 0x78))

if (result.d != 0)
    uint64_t r8 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    
    do
        int64_t rcx_3 = *(arg2 + 0x68)
        
        if (*(arg2 + 0x80) == 0)
            int64_t rsi_3 = (result << 2) * rdx + rcx_3
            uint32_t rbx_1 = zx.d(*(rsi_3 + (r12 << 2) + 2))
            int32_t rdi_3 = (rbx_1 & 0xffff8000) << 0x10
            int16_t rax_13 = rbx_1.w & 0x7c00
            
            if (rax_13 == 0)
                int32_t rbx_2 = rbx_1 & 0x3ff
                
                if (rbx_2 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r8 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_2))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    r8 = zx.q(data_14401b1a0)
                    ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                    int32_t rdx_1 = 0xa - int.d(zmm0[0])
                    arg6.d = (rbx_2 << (rdx_1.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_1) << 0x17 & 0x7f800000) | rdi_3
                else
                    arg6.d = rdi_3
            else if (rax_13 != 0x7c00)
                arg6.d = ((rbx_1 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_1 & 0x3ff) << 0xd | rdi_3
            else
                arg6.d = rdi_3 | 0x477fe000
            
            uint32_t rbx_9 = zx.d(*(rsi_3 + (r12 << 2)))
            float rdi_7 = (rbx_9 & 0xffff8000) << 0x10
            int16_t rax_28 = rbx_9.w & 0x7c00
            
            if (rax_28 == 0)
                int32_t rbx_10 = rbx_9 & 0x3ff
                
                if (rbx_10 != 0)
                    if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r8 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.q(rbx_10))
                    zmm0 = logf(zmm0[0])
                    zmm0[0] = zmm0[0] f* data_143cda910
                    int32_t rdx_2 = 0xa - int.d(zmm0[0])
                    arg_18 = (rbx_10 << (rdx_2.b + 0xd) & 0x7fffff)
                        | ((0x71 - rdx_2) << 0x17 & 0x7f800000) | rdi_7
                else
                    arg_18 = rdi_7
            else if (rax_28 != 0x7c00)
                arg_18 = ((rbx_9 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_9 & 0x3ff) << 0xd | rdi_7
            else
                arg_18 = rdi_7 | 0x477fe000
            
            zmm0 = arg_18
            zmm1 = arg6.d
            rdx = arg_8
            r8 = zx.q(data_14401b1a0)
            ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        else
            int64_t rax_12 = result * rdx + zx.q(r12.d)
            zmm0 = *(rcx_3 + (rax_12 << 3))
            zmm1 = *(rcx_3 + (rax_12 << 3) + 4)
        
        r13[r12 + 6].d = zmm0[0]
        *(&r13[r12] + 0x34) = zmm1[0]
        r12 = zx.q(r12.d + 1)
        result = zx.q(*(arg2 + 0x78))
    while (r12.d u< result.d)

return result
