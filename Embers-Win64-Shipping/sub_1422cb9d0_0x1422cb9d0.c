// 函数: sub_1422cb9d0
// 地址: 0x1422cb9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t r8
r8.b = 1
int64_t* result = (*(*rcx + 0xb0))(rcx, u"r.SSS.Burley.AlwaysUpdateParametersFromSeparable", r8)
int64_t rbx = 0
int64_t* result_1

if (result == 0)
    result_1 = nullptr
else
    int64_t rdx_1 = *result
    result = (*(rdx_1 + 0x58))(result, rdx_1)
    result_1 = result

if (data_143de5480 != 0)
    result = GetCurrentThreadId()
    rbx.b = result.d != data_143de5470

if (*(result_1 + (rbx << 2)) == 1)
    sub_1422a7550(arg1[0xd].d, &arg1[5], &arg1[7])
    sub_1422a7550(*(arg1 + 0x6c), arg1 + 0x2c, arg1 + 0x3c)
    sub_1422a7550(arg1[0xe].d, &arg1[6], &arg1[8])
    float zmm0_4[0x4] = 0x3f800000
    float temp0_2[0x4] =
        __maxss_xmmss_memss(__maxss_xmmss_memss(arg1[7].d[0], *(arg1 + 0x3c))[0], arg1[8].d)
    
    if (not(temp0_2[0] <= 1f))
        zmm0_4[0] = 1f / temp0_2[0]
        float zmm1_1[0x4] = zmm0_4
        zmm0_4 = 0x3dcccccd
        *(arg1 + 0x38) = _mm_mul_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0), *(arg1 + 0x38))
        temp0_2[0] = temp0_2[0] f* *(arg1 + 0x54)
        
        if (not(temp0_2[0] < 0.100000001f))
            zmm0_4 = __minss_xmmss_memss(temp0_2[0], 0x42480000)
        
        arg1[9].d = zmm0_4[0]

return result
