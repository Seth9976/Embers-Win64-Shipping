// 函数: sub_1408a8ef0
// 地址: 0x1408a8ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4]
uint128_t zmm6_1
uint128_t zmm7_1
zmm0, zmm6_1, zmm7_1 = sub_1408a89c0(arg1, *arg1, arg2, arg3)
int64_t r14 = sx.q(*(arg1 + 0x410))
uint32_t result[0x4] = __andps_xmmxud_memxud(zmm0, data_142d3f770)
result[0] = result[0] f+ result[0]
int128_t zmm9 = 0x3f800000
result[0] = result[0] f- 1f

if (r14 s> 1)
    int32_t r11_1 = *(arg1 + 0x408)
    void* rdi_1 = 1
    int128_t zmm10 = *(arg1 + 0x414)
    int128_t zmm15 = *(arg1 + 0x418)
    
    do
        zmm7_1.d = zmm7_1.d f* zmm10.d
        uint128_t zmm3 = zx.o(0)
        zmm6_1.d = zmm6_1.d f* zmm10.d
        int32_t zmm4_1 = (zx.o(0)).d
        int32_t rcx = int.d(zmm7_1.d)
        int32_t rdx_1 = int.d(zmm6_1.d)
        
        if (zmm7_1.d f< 0f)
            rcx -= 1
        
        zmm9.d = zmm9.d f* zmm15.d
        
        if (zmm6_1.d f< 0f)
            rdx_1 -= 1
        
        uint128_t zmm1
        uint128_t zmm2
        
        if (r11_1 == 0)
            zmm0 = _mm_cvtepi32_ps(zx.o(rcx))
            zmm1 = _mm_cvtepi32_ps(zx.o(rdx_1))
            zmm3.d = zmm7_1.d f- zmm0[0]
            zmm4_1 = zmm6_1.d f- zmm1.d
        else if (r11_1 == 1)
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rcx)
            zmm2.d = zmm7_1.d f- zmm0[0]
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rdx_1)
            zmm1.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm3.d = 3f f- zmm1.d
            zmm3.d = zmm3.d f* zmm2.d
            zmm2.d = zmm6_1.d f- zmm0[0]
            zmm1.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm4_1 = (3f f- zmm1.d) f* zmm2.d
        else if (r11_1 == 2)
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rcx)
            zmm1.d = zmm7_1.d f- zmm0[0]
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rdx_1)
            zmm3.d = zmm1.d f* 6f
            zmm3.d = zmm3.d f- 15f
            zmm3.d = zmm3.d f* zmm1.d
            zmm3.d = zmm3.d f+ 10f
            zmm3.d = zmm3.d f* zmm1.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm1.d = zmm6_1.d f- zmm0[0]
            zmm4_1 = ((zmm1.d f* 6f f- 15f) f* zmm1.d f+ 10f) f* zmm1.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm4_1 = zmm4_1 f* zmm1.d
        
        uint32_t r10_1 = zx.d(*(rdi_1 + arg1))
        rdi_1 += 1
        uint32_t r9_1 = zx.d(rcx.b)
        uint32_t r8_3 = zx.d(rcx.b + 1)
        uint32_t rdx_2 = zx.d(arg1[zx.q(zx.d(rdx_1.b) + r10_1)])
        zmm0 = *(&data_142dfce50 + (zx.q(arg1[zx.q(r9_1 + rdx_2)]) << 2))
        zmm2.d = (*(&data_142dfce50 + (zx.q(arg1[zx.q(rdx_2 + r8_3)]) << 2))).d f- zmm0[0]
        uint32_t rdx_3 = zx.d(arg1[zx.q(zx.d(rdx_1.b + 1) + r10_1)])
        zmm2.d = zmm2.d f* zmm3.d
        zmm2.d = zmm2.d f+ zmm0[0]
        zmm0 = *(&data_142dfce50 + (zx.q(arg1[zx.q(r9_1 + rdx_3)]) << 2))
        zmm1.d = (*(&data_142dfce50 + (zx.q(arg1[zx.q(rdx_3 + r8_3)]) << 2))).d f- zmm0[0]
        zmm1.d = zmm1.d f* zmm3.d
        zmm1.d = zmm1.d f+ zmm0[0]
        zmm1.d = zmm1.d f- zmm2.d
        zmm1.d = zmm1.d f* zmm4_1
        zmm1.d = zmm1.d f+ zmm2.d
        zmm1.d = __andps_xmmxud_memxud(zmm1, data_142d3f770).d f* 2f
        zmm1.d = zmm1.d f- 1f
        zmm1.d = zmm1.d f* zmm9.d
        result[0] = result[0] f+ zmm1.d
    while (rdi_1 s< r14)

result[0] = result[0] f* *(arg1 + 0x420)
return result
