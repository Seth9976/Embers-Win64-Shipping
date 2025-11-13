// 函数: sub_1422e4ef0
// 地址: 0x1422e4ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx
int64_t rdi_1

if (*(arg1 + 0xadd) != 0)
    rdi_1 = data_143f55b48
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

int32_t rcx_1
int32_t rdx
uint128_t zmm1
int32_t zmm3

if (*(arg1 + 0xadd) == 0 || *(rdi_1 + (rcx << 2)) == 0)
    rcx_1 = *(arg1 + 0x264)
    rdx = *(arg1 + 0x25c)
    zmm3 = 0x3f800000
    zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x260) - *(arg1 + 0x258))).d
        f/ _mm_cvtepi32_ps(zx.o(rcx_1 - rdx))[0]
else
    zmm3 = *(arg1 + 0x280)
    zmm1 = *(arg1 + 0x294)
    rcx_1 = *(arg1 + 0x264)
    rdx = *(arg1 + 0x25c)

float zmm2[0x4] = zx.o(0)
int32_t rax_7 = *(arg1 + 0x260) - *(arg1 + 0x258)
int32_t rcx_2 = rcx_1 - rdx
zmm2[0] = float.s(rcx_2)
zmm2[0] = zmm2[0] * 0.5f
zmm2[0] = zmm2[0] f* zmm1.d
zmm1.d = float.s(rax_7)
zmm1.d = zmm1.d f* 0.5f
zmm1.d = zmm1.d f* zmm3
float result[0x4] = _mm_max_ss(zmm2[0], zmm1.d)
zmm1.d = float.s(rcx_2 * rax_7)
result[0] = result[0] * 3.14159274f
result[0] = result[0] * result[0]
result[0] = result[0] f/ zmm1.d
return result
