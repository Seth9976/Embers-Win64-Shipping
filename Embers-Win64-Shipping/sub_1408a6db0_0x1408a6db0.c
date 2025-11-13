// 函数: sub_1408a6db0
// 地址: 0x1408a6db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm9 = arg3
uint128_t zmm10 = arg2
uint32_t zmm0[0x4]
uint128_t zmm7
uint128_t zmm8
zmm0, zmm7, zmm8 = sub_1408a5b40(arg1, *arg1, arg2, arg3)
uint32_t zmm6[0x4] = 0x3f800000
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm0, data_142d3f770)
int64_t rbp = sx.q(*(arg1 + 0x410))
uint128_t result
result.d = 1f f- temp0[0]
int128_t zmm12 = 0x3f800000
int32_t arg_8 = result.d

if (rbp s> 1)
    int32_t r11_1 = *(arg1 + 0x408)
    uint128_t zmm2 = 0x41700000
    float zmm3_1 = 10f
    void* rdi_1 = 1
    uint128_t var_38_1 = zmm7
    uint128_t var_48_1 = zmm8
    int128_t zmm13 = *(arg1 + 0x414)
    
    do
        zmm12.d = zmm12.d f* *(arg1 + 0x418)
        zmm7 = zx.o(0)
        zmm10.d = zmm10.d f* zmm13.d
        zmm8 = zx.o(0)
        zmm9.d = zmm9.d f* zmm13.d
        int32_t rcx = int.d(zmm10.d)
        int32_t rdx_1 = int.d(zmm9.d)
        
        if (zmm10.d f< 0f)
            rcx -= 1
        
        if (zmm9.d f< 0f)
            rdx_1 -= 1
        
        if (r11_1 == 0)
            zmm0 = _mm_cvtepi32_ps(zx.o(rcx))
            result = _mm_cvtepi32_ps(zx.o(rdx_1))
            zmm7.d = zmm10.d f- zmm0[0]
            zmm8.d = zmm9.d f- result.d
        else if (r11_1 == 1)
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rcx)
            zmm2.d = zmm10.d f- zmm0[0]
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rdx_1)
            result.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm7.d = 3f f- result.d
            zmm7.d = zmm7.d f* zmm2.d
            zmm2.d = zmm9.d f- zmm0[0]
            result.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm8.d = 3f f- result.d
            zmm8.d = zmm8.d f* zmm2.d
        else if (r11_1 == 2)
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rcx)
            result.d = zmm10.d f- zmm0[0]
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rdx_1)
            zmm7.d = result.d f* 6f
            zmm7.d = zmm7.d f- zmm2.d
            zmm7.d = zmm7.d f* result.d
            zmm7.d = zmm7.d f+ zmm3_1
            zmm7.d = zmm7.d f* result.d
            result.d = result.d f* result.d
            zmm7.d = zmm7.d f* result.d
            result.d = zmm9.d f- zmm0[0]
            zmm8.d = result.d f* 6f
            zmm8.d = zmm8.d f- zmm2.d
            zmm8.d = zmm8.d f* result.d
            zmm8.d = zmm8.d f+ zmm3_1
            zmm8.d = zmm8.d f* result.d
            result.d = result.d f* result.d
            zmm8.d = zmm8.d f* result.d
        
        uint32_t r9_1 = zx.d(*(rdi_1 + arg1))
        result = _mm_cvtepi32_ps(zx.o(rdx_1))
        uint32_t r8_3 = zx.d(rcx.b)
        rdi_1 += 1
        uint32_t r10_2 = zx.d(rcx.b + 1)
        uint32_t rdx_2 = zx.d(arg1[zx.q(zx.d(rdx_1.b) + r9_1)])
        zmm2.d = zmm9.d f- result.d
        zmm0 = _mm_cvtepi32_ps(zx.o(rcx))
        uint64_t rax_6 = zx.q(arg1[zx.q(r8_3 + rdx_2) + 0x200])
        result.d = zmm2.d f* *((rax_6 << 2) + 0x142dfcdf0)
        uint128_t zmm4_1
        zmm4_1.d = zmm10.d f- zmm0[0]
        zmm0 = zmm4_1
        zmm0[0] = zmm0[0] f* *((rax_6 << 2) + 0x142dfcdc0)
        float zmm5_1 = zmm4_1.d f- zmm6[0]
        uint64_t rax_8 = zx.q(arg1[zx.q(r10_2 + rdx_2) + 0x200])
        zmm6 = zmm2
        zmm6[0] = zmm6[0] f- 1f
        result.d = result.d f+ zmm0[0]
        zmm2.d = zmm2.d f* *((rax_8 << 2) + 0x142dfcdf0)
        zmm3_1 = zmm5_1 f* *((rax_8 << 2) + 0x142dfcdc0) f+ zmm2.d
        zmm2 = 0x41700000
        uint32_t rdx_3 = zx.d(arg1[zx.q(zx.d(rdx_1.b + 1) + r9_1)])
        uint64_t rax_12 = zx.q(arg1[zx.q(rdx_3 + r8_3) + 0x200])
        zmm6[0] = zmm6[0] f* *((rax_12 << 2) + 0x142dfcdf0)
        zmm4_1.d = zmm4_1.d f* *((rax_12 << 2) + 0x142dfcdc0)
        zmm3_1 = (zmm3_1 f- result.d) f* zmm7.d f+ result.d
        uint64_t rax_14 = zx.q(arg1[zx.q(rdx_3 + r10_2) + 0x200])
        zmm6[0] = zmm6[0] f+ zmm4_1.d
        zmm6[0] = zmm6[0] f* *((rax_14 << 2) + 0x142dfcdf0)
        zmm6[0] = zmm6[0] f+ zmm5_1 f* *((rax_14 << 2) + 0x142dfcdc0)
        zmm6[0] = zmm6[0] f- zmm6[0]
        zmm6[0] = zmm6[0] f* zmm7.d
        zmm6[0] = zmm6[0] f+ zmm6[0]
        zmm6[0] = zmm6[0] f- zmm3_1
        zmm6[0] = zmm6[0] f* zmm8.d
        zmm6[0] = zmm6[0] f+ zmm3_1
        zmm3_1 = 10f
        uint32_t temp0_6[0x4] = __andps_xmmxud_memxud(zmm6, data_142d3f770)
        temp0_6[0] = temp0_6[0] f- 1f
        temp0_6[0] = temp0_6[0] f* zmm12.d
        result.d = arg_8.d f+ temp0_6[0]
        zmm6 = 0x3f800000
        arg_8 = result.d
    while (rdi_1 s< rbp)

return result
