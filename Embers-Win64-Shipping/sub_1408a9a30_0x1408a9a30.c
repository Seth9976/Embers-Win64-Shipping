// 函数: sub_1408a9a30
// 地址: 0x1408a9a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm10 = arg3
uint128_t zmm11 = arg2
uint128_t result_1
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
uint128_t zmm9_1
result_1, zmm6, zmm7, zmm8, zmm9_1 = sub_1408a8bb0(arg1, *arg1, arg2, arg3, arg4.d)
uint128_t result = result_1
int128_t zmm15 = 0x3f800000
int32_t arg_8 = result_1.d

if (*(arg1 + 0x410) s> 1)
    uint128_t zmm2 = 0x40c00000
    int32_t zmm3 = 0x41700000
    float zmm4_1 = 10f
    int32_t rbp_1 = *(arg1 + 0x408)
    void* i = 1
    uint128_t var_38_1 = zmm6
    uint128_t var_48_1 = zmm7
    uint128_t var_58_1 = zmm8
    int128_t zmm13 = *(arg1 + 0x414)
    
    do
        zmm15.d = zmm15.d f* *(arg1 + 0x418)
        zmm6 = zx.o(0)
        zmm11.d = zmm11.d f* zmm13.d
        zmm7 = zx.o(0)
        zmm10.d = zmm10.d f* zmm13.d
        zmm8 = zx.o(0)
        int32_t r9_1 = int.d(zmm11.d)
        int32_t rcx = int.d(zmm10.d)
        
        if (zmm11.d f< 0f)
            r9_1 -= 1
        
        zmm9_1.d = zmm9_1.d f* zmm13.d
        int32_t rdx_1 = int.d(zmm9_1.d)
        
        if (zmm10.d f< 0f)
            rcx -= 1
        
        if (zmm9_1.d f< 0f)
            rdx_1 -= 1
        
        if (rbp_1 == 0)
            zmm6.d = zmm11.d f- _mm_cvtepi32_ps(zx.o(r9_1)).d
            zmm8.d = zmm9_1.d f- _mm_cvtepi32_ps(zx.o(rdx_1)).d
            zmm7.d = zmm10.d f- _mm_cvtepi32_ps(zx.o(rcx)).d
        else if (rbp_1 == 1)
            result_1.d = float.s(r9_1)
            zmm2.d = zmm11.d f- result_1.d
            result_1.d = float.s(rcx)
            result.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm6.d = 3f f- result.d
            zmm6.d = zmm6.d f* zmm2.d
            zmm2.d = zmm10.d f- result_1.d
            result_1.d = float.s(rdx_1)
            result.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm7.d = 3f f- result.d
            zmm7.d = zmm7.d f* zmm2.d
            zmm2.d = zmm9_1.d f- result_1.d
            result.d = zmm2.d f+ zmm2.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm8.d = 3f f- result.d
            zmm8.d = zmm8.d f* zmm2.d
        else if (rbp_1 == 2)
            result_1.d = float.s(r9_1)
            result.d = zmm11.d f- result_1.d
            result_1.d = float.s(rcx)
            zmm6.d = result.d f* zmm2.d
            zmm6.d = zmm6.d f- zmm3
            zmm6.d = zmm6.d f* result.d
            zmm6.d = zmm6.d f+ zmm4_1
            zmm6.d = zmm6.d f* result.d
            result.d = result.d f* result.d
            zmm6.d = zmm6.d f* result.d
            result.d = zmm10.d f- result_1.d
            result_1.d = float.s(rdx_1)
            zmm7.d = result.d f* zmm2.d
            zmm7.d = zmm7.d f- zmm3
            zmm7.d = zmm7.d f* result.d
            zmm7.d = zmm7.d f+ zmm4_1
            zmm7.d = zmm7.d f* result.d
            result.d = result.d f* result.d
            zmm7.d = zmm7.d f* result.d
            result.d = zmm9_1.d f- result_1.d
            zmm8.d = result.d f* zmm2.d
            zmm8.d = zmm8.d f- zmm3
            zmm8.d = zmm8.d f* result.d
            zmm8.d = zmm8.d f+ zmm4_1
            zmm8.d = zmm8.d f* result.d
            result.d = result.d f* result.d
            zmm8.d = zmm8.d f* result.d
        
        uint32_t rbx_1 = zx.d(*(i + arg1))
        i += 1
        uint32_t rdi_1 = zx.d(r9_1.b)
        uint32_t r10_1 = zx.d(rcx.b)
        uint32_t r9_2 = zx.d(rcx.b + 1)
        uint32_t r8_3 = zx.d(arg1[zx.q(zx.d(rdx_1.b) + rbx_1)])
        uint32_t rdx_2 = zx.d(arg1[zx.q(r10_1 + r8_3)])
        result_1 = *(&data_142dfce50 + (zx.q(arg1[zx.q(rdi_1 + rdx_2)]) << 2))
        uint32_t rsi_1 = zx.d(r9_1.b + 1)
        uint32_t r11_2 = zx.d(arg1[zx.q(r9_2 + r8_3)])
        zmm3 = *(&data_142dfce50 + (zx.q(arg1[zx.q(r11_2 + rdi_1)]) << 2))
        float zmm5_1 = (*(&data_142dfce50 + (zx.q(arg1[zx.q(rsi_1 + rdx_2)]) << 2)) f- result_1.d)
            f* zmm6.d f+ result_1.d
        uint32_t r8_4 = zx.d(arg1[zx.q(zx.d(rdx_1.b + 1) + rbx_1)])
        uint32_t rdx_3 = zx.d(arg1[zx.q(r10_1 + r8_4)])
        result_1 = *(&data_142dfce50 + (zx.q(arg1[zx.q(rdx_3 + rdi_1)]) << 2))
        uint32_t rdx_4 = zx.d(arg1[zx.q(r9_2 + r8_4)])
        result = *(&data_142dfce50 + (zx.q(arg1[zx.q(rdi_1 + rdx_4)]) << 2))
        zmm4_1 = (*(&data_142dfce50 + (zx.q(arg1[zx.q(rsi_1 + rdx_3)]) << 2)) f- result_1.d)
            f* zmm6.d f+ result_1.d
        zmm2.d = (*(&data_142dfce50 + (zx.q(arg1[zx.q(rsi_1 + r11_2)]) << 2))).d f- zmm3
        result_1.d = (*(&data_142dfce50 + (zx.q(arg1[zx.q(rsi_1 + rdx_4)]) << 2))).d f- result.d
        zmm2.d = zmm2.d f* zmm6.d
        result_1.d = result_1.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm3
        zmm3 = 0x41700000
        result_1.d = result_1.d f+ result.d
        zmm2.d = zmm2.d f- zmm5_1
        result_1.d = result_1.d f- zmm4_1
        zmm2.d = zmm2.d f* zmm7.d
        result_1.d = result_1.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm5_1
        result_1.d = result_1.d f+ zmm4_1
        zmm4_1 = 10f
        result_1.d = result_1.d f- zmm2.d
        result_1.d = result_1.d f* zmm8.d
        result_1.d = result_1.d f+ zmm2.d
        zmm2 = 0x40c00000
        result_1.d = result_1.d f* zmm15.d
        result.d = arg_8.d f+ result_1.d
        arg_8 = result.d
    while (i s< sx.q(*(arg1 + 0x410)))

result.d = result.d f* *(arg1 + 0x420)
return result
