// 函数: sub_1408a68b0
// 地址: 0x1408a68b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm9 = arg3
uint128_t zmm10 = arg2
uint128_t result
uint128_t zmm7
uint128_t zmm8
result, zmm7, zmm8 = sub_1408a5b40(arg1, *arg1, arg2, arg3)
int64_t rbp = sx.q(*(arg1 + 0x410))
uint128_t zmm6 = 0x3f800000
int32_t arg_8 = result.d
int128_t zmm12 = 0x3f800000

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
        
        uint128_t zmm1
        
        if (r11_1 == 0)
            zmm7.d = zmm10.d f- _mm_cvtepi32_ps(zx.o(rcx)).d
            zmm8.d = zmm9.d f- _mm_cvtepi32_ps(zx.o(rdx_1)).d
        else if (r11_1 == 1)
            result.d = float.s(rcx)
            zmm2.d = zmm10.d f- result.d
            result.d = float.s(rdx_1)
            zmm1.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm7.d = 3f f- zmm1.d
            zmm7.d = zmm7.d f* zmm2.d
            zmm2.d = zmm9.d f- result.d
            zmm1.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm8.d = 3f f- zmm1.d
            zmm8.d = zmm8.d f* zmm2.d
        else if (r11_1 == 2)
            result.d = float.s(rcx)
            zmm1.d = zmm10.d f- result.d
            result.d = float.s(rdx_1)
            zmm7.d = zmm1.d f* 6f
            zmm7.d = zmm7.d f- zmm2.d
            zmm7.d = zmm7.d f* zmm1.d
            zmm7.d = zmm7.d f+ zmm3_1
            zmm7.d = zmm7.d f* zmm1.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm7.d = zmm7.d f* zmm1.d
            zmm1.d = zmm9.d f- result.d
            zmm8.d = zmm1.d f* 6f
            zmm8.d = zmm8.d f- zmm2.d
            zmm8.d = zmm8.d f* zmm1.d
            zmm8.d = zmm8.d f+ zmm3_1
            zmm8.d = zmm8.d f* zmm1.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm8.d = zmm8.d f* zmm1.d
        
        uint32_t r9_1 = zx.d(*(rdi_1 + arg1))
        zmm1 = _mm_cvtepi32_ps(zx.o(rdx_1))
        uint32_t r8_3 = zx.d(rcx.b)
        rdi_1 += 1
        uint32_t r10_2 = zx.d(rcx.b + 1)
        uint32_t rdx_2 = zx.d(arg1[zx.q(zx.d(rdx_1.b) + r9_1)])
        result = _mm_cvtepi32_ps(zx.o(rcx))
        uint64_t rax_6 = zx.q(arg1[zx.q(r8_3 + rdx_2) + 0x200])
        zmm2.d = zmm9.d f- zmm1.d
        uint128_t zmm4_1
        zmm4_1.d = zmm10.d f- result.d
        zmm1.d = zmm2.d f* *((rax_6 << 2) + 0x142dfcdf0)
        float zmm5_1 = zmm4_1.d f- zmm6.d
        result.d = zmm4_1.d f* *((rax_6 << 2) + 0x142dfcdc0)
        zmm6.d = zmm2.d f- 1f
        uint64_t rax_8 = zx.q(arg1[zx.q(r10_2 + rdx_2) + 0x200])
        zmm1.d = zmm1.d f+ result.d
        zmm2.d = zmm2.d f* *((rax_8 << 2) + 0x142dfcdf0)
        zmm3_1 = zmm5_1 f* *((rax_8 << 2) + 0x142dfcdc0) f+ zmm2.d
        zmm2 = 0x41700000
        uint32_t rdx_3 = zx.d(arg1[zx.q(zx.d(rdx_1.b + 1) + r9_1)])
        uint64_t rax_12 = zx.q(arg1[zx.q(rdx_3 + r8_3) + 0x200])
        result.d = zmm6.d f* *((rax_12 << 2) + 0x142dfcdf0)
        zmm4_1.d = zmm4_1.d f* *((rax_12 << 2) + 0x142dfcdc0)
        zmm3_1 = (zmm3_1 f- zmm1.d) f* zmm7.d f+ zmm1.d
        uint64_t rax_14 = zx.q(arg1[zx.q(rdx_3 + r10_2) + 0x200])
        result.d = result.d f+ zmm4_1.d
        zmm6.d = zmm6.d f* *((rax_14 << 2) + 0x142dfcdf0)
        zmm6.d = zmm6.d f+ zmm5_1 f* *((rax_14 << 2) + 0x142dfcdc0)
        zmm6.d = zmm6.d f- result.d
        zmm6.d = zmm6.d f* zmm7.d
        zmm6.d = zmm6.d f+ result.d
        zmm6.d = zmm6.d f- zmm3_1
        zmm6.d = zmm6.d f* zmm8.d
        zmm6.d = zmm6.d f+ zmm3_1
        zmm3_1 = 10f
        zmm6.d = zmm6.d f* zmm12.d
        result.d = arg_8.d f+ zmm6.d
        zmm6 = 0x3f800000
        arg_8 = result.d
    while (rdi_1 s< rbp)

result.d = result.d f* *(arg1 + 0x420)
return result
