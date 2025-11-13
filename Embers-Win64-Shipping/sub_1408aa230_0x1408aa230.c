// 函数: sub_1408aa230
// 地址: 0x1408aa230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm10 = arg2
uint32_t zmm0[0x4]
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8_1
uint128_t zmm9_1
zmm0, zmm6, zmm7, zmm8_1, zmm9_1 = sub_1408a8bb0(arg1, *arg1, arg2, arg3, arg4.d)
bool cond:0 = *(arg1 + 0x410) s<= 1
uint32_t result[0x4] = 0x3f800000
result[0] = 1f f- __andps_xmmxud_memxud(zmm0, data_142d3f770)[0]
zmm0 = 0x3f800000
uint32_t result_1 = result[0]

if (not(cond:0))
    uint128_t zmm2 = 0x41200000
    int32_t rbp_1 = *(arg1 + 0x408)
    void* r15_1 = 1
    uint128_t var_38_1 = zmm6
    uint128_t var_48_1 = zmm7
    int128_t zmm12 = *(arg1 + 0x414)
    int64_t rax_28
    
    do
        zmm0[0] = zmm0[0] f* *(arg1 + 0x418)
        float zmm5_1 = (zx.o(0)).d
        zmm10.d = zmm10.d f* zmm12.d
        zmm6 = zx.o(0)
        zmm9_1.d = zmm9_1.d f* zmm12.d
        zmm7 = zx.o(0)
        int32_t r9_1 = int.d(zmm10.d)
        int32_t rcx = int.d(zmm9_1.d)
        
        if (zmm10.d f< 0f)
            r9_1 -= 1
        
        zmm8_1.d = zmm8_1.d f* zmm12.d
        uint32_t var_d8_1 = zmm0[0]
        int32_t rdx_1 = int.d(zmm8_1.d)
        
        if (zmm9_1.d f< 0f)
            rcx -= 1
        
        if (zmm8_1.d f< 0f)
            rdx_1 -= 1
        
        uint128_t zmm1
        
        if (rbp_1 == 0)
            zmm5_1 = zmm10.d f- _mm_cvtepi32_ps(zx.o(r9_1))[0]
            zmm0 = _mm_cvtepi32_ps(zx.o(rdx_1))
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx))
            zmm7.d = zmm8_1.d f- zmm0[0]
            zmm6.d = zmm9_1.d f- zmm1.d
        else if (rbp_1 == 1)
            zmm0 = zx.o(0)
            zmm0[0] = float.s(r9_1)
            zmm2.d = zmm10.d f- zmm0[0]
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rcx)
            zmm1.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm5_1 = (3f f- zmm1.d) f* zmm2.d
            zmm2.d = zmm9_1.d f- zmm0[0]
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rdx_1)
            zmm1.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm6.d = 3f f- zmm1.d
            zmm6.d = zmm6.d f* zmm2.d
            zmm2.d = zmm8_1.d f- zmm0[0]
            zmm1.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm7.d = 3f f- zmm1.d
            zmm7.d = zmm7.d f* zmm2.d
        else if (rbp_1 == 2)
            zmm0 = zx.o(0)
            zmm0[0] = float.s(r9_1)
            zmm1.d = zmm10.d f- zmm0[0]
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rcx)
            zmm5_1 = ((zmm1.d * 6f - 15f) f* zmm1.d f+ zmm2.d) f* zmm1.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm5_1 = zmm5_1 f* zmm1.d
            zmm1.d = zmm9_1.d f- zmm0[0]
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rdx_1)
            zmm6.d = zmm1.d f* 6f
            zmm6.d = zmm6.d f- 15f
            zmm6.d = zmm6.d f* zmm1.d
            zmm6.d = zmm6.d f+ zmm2.d
            zmm6.d = zmm6.d f* zmm1.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm6.d = zmm6.d f* zmm1.d
            zmm1.d = zmm8_1.d f- zmm0[0]
            zmm7.d = zmm1.d f* 6f
            zmm7.d = zmm7.d f- 15f
            zmm7.d = zmm7.d f* zmm1.d
            zmm7.d = zmm7.d f+ zmm2.d
            zmm7.d = zmm7.d f* zmm1.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm7.d = zmm7.d f* zmm1.d
        
        uint32_t rbx_1 = zx.d(*(r15_1 + arg1))
        r15_1 += 1
        uint32_t rdi_1 = zx.d(r9_1.b)
        uint32_t r10_1 = zx.d(rcx.b)
        uint32_t r9_2 = zx.d(rcx.b + 1)
        uint32_t r8_3 = zx.d(arg1[zx.q(zx.d(rdx_1.b) + rbx_1)])
        uint32_t rdx_2 = zx.d(arg1[zx.q(r10_1 + r8_3)])
        zmm0 = *(&data_142dfce50 + (zx.q(arg1[zx.q(rdi_1 + rdx_2)]) << 2))
        uint32_t rsi_1 = zx.d(r9_1.b + 1)
        uint32_t r11_2 = zx.d(arg1[zx.q(r9_2 + r8_3)])
        zmm1 = *(&data_142dfce50 + (zx.q(arg1[zx.q(r11_2 + rdi_1)]) << 2))
        float zmm4_1 = (*(&data_142dfce50 + (zx.q(arg1[zx.q(rsi_1 + rdx_2)]) << 2)) f- zmm0[0])
            * zmm5_1 f+ zmm0[0]
        uint32_t r8_4 = zx.d(arg1[zx.q(zx.d(rdx_1.b + 1) + rbx_1)])
        uint32_t rdx_3 = zx.d(arg1[zx.q(r10_1 + r8_4)])
        zmm0 = *(&data_142dfce50 + (zx.q(arg1[zx.q(rdx_3 + rdi_1)]) << 2))
        result = *(&data_142dfce50 + (zx.q(arg1[zx.q(rsi_1 + rdx_3)]) << 2))
        uint32_t rdx_4 = zx.d(arg1[zx.q(r9_2 + r8_4)])
        result[0] = result[0] f- zmm0[0]
        uint64_t rax_23 = zx.q(arg1[zx.q(rdi_1 + rdx_4)])
        result[0] = result[0] f* zmm5_1
        result[0] = result[0] f+ zmm0[0]
        zmm0 = *(&data_142dfce50 + (rax_23 << 2))
        zmm2.d = (*(&data_142dfce50 + (zx.q(arg1[zx.q(rsi_1 + r11_2)]) << 2))).d f- zmm1.d
        zmm2.d = zmm2.d f* zmm5_1
        zmm2.d = zmm2.d f+ zmm1.d
        rax_28 = sx.q(*(arg1 + 0x410))
        zmm1.d = (*(&data_142dfce50 + (zx.q(arg1[zx.q(rsi_1 + rdx_4)]) << 2))).d f- zmm0[0]
        zmm2.d = zmm2.d f- zmm4_1
        zmm1.d = zmm1.d f* zmm5_1
        zmm2.d = zmm2.d f* zmm6.d
        zmm1.d = zmm1.d f+ zmm0[0]
        zmm0 = var_d8_1
        zmm2.d = zmm2.d f+ zmm4_1
        zmm1.d = zmm1.d f- result[0]
        zmm1.d = zmm1.d f* zmm6.d
        zmm1.d = zmm1.d f+ result[0]
        result = result_1
        zmm1.d = zmm1.d f- zmm2.d
        zmm1.d = zmm1.d f* zmm7.d
        zmm1.d = zmm1.d f+ zmm2.d
        zmm2 = 0x41200000
        zmm1.d = __andps_xmmxud_memxud(zmm1, data_142d3f770).d f- 1f
        zmm1.d = zmm1.d f* zmm0[0]
        result[0] = result[0] f+ zmm1.d
        result_1 = result[0]
    while (r15_1 s< rax_28)

return result
