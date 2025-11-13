// 函数: sub_1423ddbf0
// 地址: 0x1423ddbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4] = arg2
float zmm6[0x4] = zx.o(0)

if (arg3 != 0 && (*(*arg1 + 0x2d0))() != 0)
    bool cond:2_1 = arg1[0xf8].b == 2
    zmm6 = 0x3f800000
    zmm6[0] = 1f f/ arg1[0x176].d
    
    if (not(cond:2_1))
        zmm6 = _mm_max_ss((*(arg1 + 0x7c4))[0], zmm6[0])
    
    if (arg1[0xf9].b != 2)
        zmm6 = _mm_min_ss((*(arg1 + 0x7cc))[0], zmm6[0])

int64_t rdi = data_143f5b4b8
int64_t rcx
int64_t rbx_1

if (data_143de5480 == 0)
    rbx_1 = 0
    rcx = 0
else
    rbx_1 = 0
    rcx.b = GetCurrentThreadId() != data_143de5470

float zmm0[0x4]

if (*(rdi + (rcx << 2)) != 0)
    bool cond:4_1 = data_143de5480 == 0
    arg2 = data_143f5b7d4
    int64_t rdi_1 = data_143f5b4d0
    arg2[0] = arg2[0] + zmm8[0]
    data_143f5b7d4 = arg2[0]
    int64_t rcx_1
    
    if (cond:4_1)
        rcx_1 = 0
    else
        uint32_t rax_4 = GetCurrentThreadId()
        arg2 = data_143f5b7d4
        rcx_1.b = rax_4 != data_143de5470
    
    uint128_t zmm2
    zmm2.d = _mm_cvtepi32_ps(zx.o(*(rdi_1 + (rcx_1 << 2)))).d f* 0.00100000005f
    zmm0 = zmm2
    zmm0[0] = zmm0[0] + 1f
    
    if (not(arg2[0] <= zmm0[0]))
        zmm6 = sub_140b73230(zmm2)
        data_143f5b7d4 = 0

int64_t rdi_2 = data_143f5b4e8
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

if (*(rdi_2 + (rcx_2 << 2)) != 0)
    int32_t rax_6 = rand()
    arg2 = data_143a303a8
    float temp0_4[0x4] = _mm_cvtepi32_ps(zx.o(rax_6))
    temp0_4[0] = temp0_4[0] * 0.000305185094f
    temp0_4[0] = temp0_4[0] - 5f
    arg2[0] = arg2[0] + temp0_4[0]
    zmm0 = 0x41000000
    
    if (not(arg2[0] < 8f))
        zmm0 = __minss_xmmss_memss(arg2[0], 0x42000000)
    
    data_143a303a8 = zmm0[0]
    return zmm0

int64_t rdi_3 = data_143f5b4a0
int64_t rsi_1 = rdi_3
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    uint32_t rax_7 = GetCurrentThreadId()
    rdi_3 = data_143f5b4a0
    rcx_3.b = rax_7 != data_143de5470

if (0f f>= *(rsi_1 + (rcx_3 << 2)))
    return zmm6

if (data_143de5480 != 0)
    rbx_1.b = GetCurrentThreadId() != data_143de5470

return *(rdi_3 + (rbx_1 << 2))
