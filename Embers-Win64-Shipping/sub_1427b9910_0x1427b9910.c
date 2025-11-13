// 函数: sub_1427b9910
// 地址: 0x1427b9910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x80)
void* rdi
float result[0x4]

if (r8 == 0)
    rdi = arg1 + 0x90
    *rdi = data_143dbb0c0
    *(rdi + 0x10) = data_143dbb0d0
    *(rdi + 0x20) = data_143dbb0e0
else if (r8 != 1)
    void* rcx = *(arg1 + 0x78)
    float zmm3[0x4] = data_143dbb1f8
    float zmm2[0x4] = data_143dbb1fc
    void* rdx_2 = sx.q(*(arg1 + 0x80)) * 0x70 + rcx
    int128_t zmm6 = data_143dbb200
    float zmm1[0x4]
    
    while (rcx != rdx_2)
        zmm1 = *(rcx + 0x20)
        rcx += 0x70
        zmm3[0] = zmm3[0] + zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        zmm2[0] = zmm2[0] + temp0_1[0]
        zmm6.d = zmm6.d f+ temp0_2[0]
    
    float result_1[0x4] = data_143f889a0
    rdi = arg1 + 0x90
    zmm1 = 0x3f800000
    zmm1[0] = 1f / _mm_cvtepi32_ps(zx.o(r8))[0]
    result = result_1
    result_1 = __andps_xmmxud_memxud(result_1, data_143f889b0)
    zmm3[0] = zmm3[0] * zmm1[0]
    zmm6.d = zmm6.d f* zmm1[0]
    zmm2[0] = zmm2[0] * zmm1[0]
    float temp0_5[0x4] = _mm_unpacklo_ps(zmm3, zmm6.q)
    *(rdi + 0x20) = result_1
    float temp0_6[0x4] = _mm_unpacklo_ps(zmm2, 0)
    result[0].q = zx.o(0) u>> 0x40
    *(rdi + 0x10) = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
    *rdi = _mm_shuffle_ps(zx.o(0), result, 0xc4)
    void* rsi_1 = *(arg1 + 0x78)
    void* r14_2 = sx.q(*(arg1 + 0x80)) * 0x70 + rsi_1
    
    if (rsi_1 != r14_2)
        void* rbx_1 = rsi_1 + 0x50
        
        do
            *(rbx_1 - 0x10) = *(rbx_1 - 0x40)
            *rbx_1 = *(rbx_1 - 0x30)
            *(rbx_1 + 0x10) = *(rbx_1 - 0x20)
            sub_140ae0920(rbx_1 - 0x10, rdi)
            rsi_1 += 0x70
            rbx_1 += 0x70
        while (rsi_1 != r14_2)
else
    void* rax_1 = *(arg1 + 0x78)
    rdi = arg1 + 0x90
    *rdi = *(rax_1 + 0x10)
    *(rdi + 0x10) = *(rax_1 + 0x20)
    *(rdi + 0x20) = *(rax_1 + 0x30)
    void* rax_2 = *(arg1 + 0x78)
    *(rax_2 + 0x40) = data_143dbb0c0
    *(rax_2 + 0x50) = data_143dbb0d0
    *(rax_2 + 0x60) = data_143dbb0e0

*(arg1 + 0xc0) = *rdi
*(arg1 + 0xd0) = *(rdi + 0x10)
result = *(rdi + 0x20)
*(arg1 + 0xe0) = result
return result
