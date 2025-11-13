// 函数: sub_1413a9ef0
// 地址: 0x1413a9ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ec6f58 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec6f58)
    
    if (data_143ec6f58 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_7 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.SeparateTranslucencyScreenPercentage", r8_3)
        
        if (rax_7 != 0)
            int64_t rdx_1 = *rax_7
            rax_7 = (*(rdx_1 + 0x60))(rax_7, rdx_1)
        
        data_143ec6f50 = rax_7
        _Init_thread_footer(&data_143ec6f58)

float zmm1[0x4] = zx.o(0)
float zmm0[0x4] = *(data_143ec6f50 + 4)
zmm0[0] = zmm0[0] * 0.00999999978f

if (not(zmm0[0] < 0f))
    zmm1 = __minss_xmmss_memss(zmm0[0], 0x42c80000)

zmm1[0] = zmm1[0] - 1f

if (not(__andps_xmmxud_memxud(zmm1, data_142d3f770)[0] >= 0.00100000005f) && arg2 != 0)
    zmm1 = 0x3f000000

int32_t r8_2 = 1
int64_t rax_3 = *(arg1 + 0x37c)
int32_t rdx = 1
float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x37c)))
temp0_3[0] = temp0_3[0] * zmm1[0]
int32_t rcx = int.d(temp0_3[0])
float result[0x4] = _mm_cvtepi32_ps(zx.o((rax_3 u>> 0x20).d))

if (rcx s>= 1)
    rdx = rcx

*(arg1 + 0x38c) = rdx
result[0] = result[0] * zmm1[0]
int32_t rax_5 = int.d(result[0])

if (rax_5 s>= 1)
    r8_2 = rax_5

*(arg1 + 0x390) = r8_2
*(arg1 + 0x39c) = zmm1[0]
return result
