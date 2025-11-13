// 函数: sub_141cbc5b0
// 地址: 0x141cbc5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8 = arg4

if (arg3 == 0)
    zmm8 = 0x3f800000

int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int32_t i_2 = int.d(zmm8.d)
wchar16 const* const var_98 = u"RayIntersect"
int32_t var_90 = 0xbf800000
wchar16 const* const var_80 = u"s/Run"
int32_t var_8c = 0xbf800000
int128_t zmm7 = zx.o(0)

if (i_2 s<= 1)
    i_2 = 1

*arg2 = var_98.o
int128_t zmm1
zmm1.d = 0x3cd1cc10
float temp0[0x4] = _mm_unpacklo_ps(zx.o(0), 0x3f800000)
arg2[1] = zmm1
arg2[2].q = temp0.q
int128_t var_88_1 = zmm1
float zmm0[0x4]

if (i_2 != 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        QueryPerformanceCounter(&performanceCount_1)
        int128_t zmm6
        zmm6.q = float.d(performanceCount_1)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm0, zmm6, zmm7, zmm8 = sub_141cbce60()
        zmm1.d = data_143f35844.d f+ zmm0[0]
        data_143f35844 = zmm1.d
        int64_t performanceCount[0x2]
        QueryPerformanceCounter(&performanceCount)
        zmm0 = zx.o(0)
        zmm0[0].q = float.d(performanceCount[0])
        zmm0[0].q = zmm0[0].q f* data_143d796f8
        zmm0[0].q = zmm0[0].q f- zmm6.q
        zmm7.d = zmm7.d f+ _mm_cvtpd_ps(zmm0)[0]
        i = i_1
        i_1 -= 1
    while (i != 1)

zmm0 = zx.o(0)
*(arg2 + 8) = zmm7.d
arg2[2].d = 0x42b40000
wchar16 const* const var_80_1 = u"s/Run"
int32_t var_90_1 = 0xbf800000
int32_t var_8c_1 = 0xbf800000
zmm0[0] = float.s(zx.q(i_2))
var_98 = u"Fractal"
zmm1.d = zmm7.d f/ zmm0[0]
zmm0 = var_98.o
*(arg2 + 0xc) = zmm1.d
*(arg2 + 0x28) = zmm0
zmm1.d = 0x3cea4a8c
*(arg2 + 0x38) = zmm1
int128_t var_88_2 = zmm1
float temp0_2[0x4] = _mm_unpacklo_ps(zx.o(0), 0x3fc00000)
*(arg2 + 0x48) = temp0_2.q
int32_t* rax_1
int512_t zmm1_1
rax_1, zmm1_1 = sub_141cbd310(&performanceCount_1, zmm8.d, sub_141cbccd0, temp0_2)
arg2[3].d = *rax_1
uint64_t rcx_5 = zx.q(data_14401b1a0)
*(arg2 + 0x34) = rax_1[1]
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(arg2 + 0x48) = 0x42b40000
int32_t result = *(0x14 + *(ThreadLocalStoragePointer + (rcx_5 << 3)))

if (data_143cd80cc s> result)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    result = 0
    int64_t* rcx_7 = data_143f0f180
    zmm1_1.o = data_142d3f800
    __builtin_memset(&var_98, 0xff, 0x20)
    int128_t var_78
    __builtin_memset(&var_78, 0, 0x1c)
    
    if (rcx_7 != 0)
        result = (*(*rcx_7 + 0x1f0))(zx.o(0), &var_98)
    
    if (arg3 != 0)
        int64_t* rax_4
        int512_t zmm1_2
        rax_4, zmm1_2 = sub_140b58260(&performanceCount_1, u"Renderer", 1)
        j_sub_140b3db50()
        result = sub_140b404d0(&data_143de7d78, *rax_4, zmm1_2)
        
        if (result.b != 0)
            int64_t rbx_2 = *sub_140b58260(&performanceCount_1, u"Renderer", 1)
            j_sub_140b3db50()
            int64_t* rax_6 = sub_140b3da90(&data_143de7d78, rbx_2)
            int64_t r8 = *rax_6
            result = (*(r8 + 0xb8))(rax_6, arg2, r8)
            float zmm0_2 = *(arg2 + 0x58) f+ arg2[8].d f+ *(arg2 + 0xa8) f+ arg2[0xd].d f+
                *(arg2 + 0xf8) f+ arg2[0x12].d f+ *(arg2 + 0x148)
            
            if (not(zmm0_2 >= 0.150000006f))
                result = (*(*rax_6 + 0xb8))(rax_6, arg2, zmm8.d * 0.100000001f)
                zmm0_2 = *(arg2 + 0x58) f+ arg2[8].d f+ *(arg2 + 0xa8) f+ arg2[0xd].d f+
                    *(arg2 + 0xf8) f+ arg2[0x12].d f+ *(arg2 + 0x148)
                
                if (not(zmm0_2 >= 0.150000006f))
                    return (*(*rax_6 + 0xb8))(rax_6, arg2, zmm8.d)

return result
