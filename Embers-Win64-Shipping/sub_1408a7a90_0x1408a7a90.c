// 函数: sub_1408a7a90
// 地址: 0x1408a7a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4]
int128_t zmm6
uint32_t zmm8_1[0x4]
uint32_t zmm9_1[0x4]
uint32_t zmm10[0x4]
zmm0, zmm6, zmm8_1, zmm9_1, zmm10 = sub_1408a7300(arg1, *arg1, arg2, arg3)
int128_t zmm13 = 0x3f800000
int64_t rdi = sx.q(*(arg1 + 0x410))
uint32_t result[0x4] = _mm_and_ps(zmm0, 0x7fffffff)
result[0] = result[0] f+ result[0]
result[0] = result[0] f- 1f

if (rdi s> 1)
    uint32_t zmm1[0x4] = *(arg1 + 0x414)
    void* r8_1 = 1
    float zmm3_1 = 0.211324871f
    int128_t var_28_1 = zmm6
    uint32_t var_68_1[0x4] = zmm10
    uint32_t arg_8 = zmm1[0]
    
    do
        zmm13.d = zmm13.d f* *(arg1 + 0x418)
        uint32_t zmm2[0x4] = zx.o(0)
        uint32_t r11_1 = zx.d(*(r8_1 + arg1))
        zmm9_1[0] = zmm9_1[0] f* zmm1[0]
        zmm8_1[0] = zmm8_1[0] f* zmm1[0]
        uint32_t arg_10 = zmm9_1[0]
        zmm9_1[0] = zmm9_1[0] f+ zmm8_1[0]
        uint32_t arg_18 = zmm8_1[0]
        uint32_t zmm5_1[0x4] = zmm8_1
        zmm9_1[0] = zmm9_1[0] f* 0.366025418f
        zmm9_1[0] = zmm9_1[0] f+ zmm8_1[0]
        zmm9_1[0] = zmm9_1[0] f+ zmm9_1[0]
        int32_t r9_1 = int.d(zmm9_1[0])
        int32_t r10_1 = int.d(zmm9_1[0])
        zmm0 = zx.o(0)
        
        if (zmm9_1[0] f< 0f)
            r10_1 -= 1
        
        bool cond:1_1 = zmm9_1[0] f< 0f
        zmm0[0] = float.s(r10_1)
        
        if (cond:1_1)
            r9_1 -= 1
        
        zmm1 = zx.o(0)
        zmm1[0] = float.s(r9_1)
        zmm2[0] = float.s(r9_1 + r10_1)
        zmm2[0] = zmm2[0] f* zmm3_1
        zmm0[0] = zmm0[0] f- zmm2[0]
        zmm1[0] = zmm1[0] f- zmm2[0]
        zmm9_1[0] = zmm9_1[0] f- zmm0[0]
        zmm0 = zx.o(0)
        zmm5_1[0] = zmm5_1[0] f- zmm1[0]
        zmm9_1[0] = zmm9_1[0] f- 0.577350259f
        bool cond:2_1 = zmm9_1[0] f<= zmm5_1[0]
        zmm2 = zmm5_1
        zmm5_1[0] = zmm5_1[0] f* zmm5_1[0]
        uint32_t zmm4_1[0x4] = zmm5_1
        int32_t rdx_1
        rdx_1.b = cond:2_1
        zmm4_1[0] = zmm4_1[0] f- 0.577350259f
        int32_t rsi_1
        rsi_1.b = zmm9_1[0] f> zmm5_1[0]
        zmm0[0] = float.s(rsi_1)
        zmm9_1[0] = zmm9_1[0] f- zmm0[0]
        zmm0 = zx.o(0)
        zmm0[0] = float.s(rdx_1)
        zmm9_1[0] = zmm9_1[0] f+ zmm3_1
        zmm2[0] = zmm2[0] f- zmm0[0]
        zmm9_1[0] = zmm9_1[0] f* zmm9_1[0]
        zmm2[0] = zmm2[0] f+ zmm3_1
        zmm3_1 = 0.5f f- zmm9_1[0] f- zmm5_1[0]
        
        if (zmm3_1 >= 0f)
            zmm3_1 = zmm3_1 * zmm3_1
            uint64_t rcx_2 =
                zx.q(arg1[zx.q(zx.d(arg1[zx.q(zx.d(r9_1.b) + r11_1)]) + zx.d(r10_1.b)) + 0x200])
            zmm5_1[0] = zmm5_1[0] f* *((rcx_2 << 2) + 0x142dfcdf0)
            zmm9_1[0] = zmm9_1[0] f* *((rcx_2 << 2) + 0x142dfcdc0)
            zmm5_1[0] = zmm5_1[0] f+ zmm9_1[0]
            zmm5_1[0] = zmm5_1[0] f* zmm3_1 * zmm3_1
        else
            zmm5_1 = zx.o(0)
        
        zmm9_1[0] = zmm9_1[0] f* zmm9_1[0]
        zmm2[0] = zmm2[0] f* zmm2[0]
        zmm3_1 = 0.5f f- zmm9_1[0] f- zmm2[0]
        
        if (zmm3_1 >= 0f)
            zmm3_1 = zmm3_1 * zmm3_1
            uint64_t rcx_6 = zx.q(arg1[
                zx.q(zx.d(arg1[zx.q(zx.d(rdx_1.b + r9_1.b) + r11_1)]) + zx.d(rsi_1.b + r10_1.b))
                + 0x200])
            zmm2[0] = zmm2[0] f* *((rcx_6 << 2) + 0x142dfcdf0)
            zmm9_1[0] = zmm9_1[0] f* *((rcx_6 << 2) + 0x142dfcdc0)
            zmm2[0] = zmm2[0] f+ zmm9_1[0]
            zmm2[0] = zmm2[0] f* zmm3_1 * zmm3_1
        else
            zmm2 = zx.o(0)
        
        zmm9_1[0] = zmm9_1[0] f* zmm9_1[0]
        zmm4_1[0] = zmm4_1[0] f* zmm4_1[0]
        zmm3_1 = 0.5f f- zmm9_1[0] f- zmm4_1[0]
        
        if (zmm3_1 >= 0f)
            zmm3_1 = zmm3_1 * zmm3_1
            uint64_t rcx_10 = zx.q(arg1[
                zx.q(zx.d(arg1[zx.q(zx.d(r9_1.b + 1) + r11_1)]) + zx.d(r10_1.b + 1)) + 0x200])
            zmm4_1[0] = zmm4_1[0] f* *((rcx_10 << 2) + 0x142dfcdf0)
            zmm9_1[0] = zmm9_1[0] f* *((rcx_10 << 2) + 0x142dfcdc0)
            zmm4_1[0] = zmm4_1[0] f+ zmm9_1[0]
            zmm4_1[0] = zmm4_1[0] f* zmm3_1 * zmm3_1
        else
            zmm4_1 = zx.o(0)
        
        zmm8_1 = arg_18
        zmm2[0] = zmm2[0] f+ zmm5_1[0]
        zmm9_1 = arg_10
        r8_1 += 1
        zmm3_1 = 0.211324871f
        zmm1 = arg_8
        zmm2[0] = zmm2[0] f+ zmm4_1[0]
        zmm2[0] = zmm2[0] f* 70f
        uint32_t temp0[0x4] = _mm_and_ps(zmm2, 0x7fffffff)
        temp0[0] = temp0[0] f* 2f
        temp0[0] = temp0[0] f- 1f
        temp0[0] = temp0[0] f* zmm13.d
        result[0] = result[0] f+ temp0[0]
    while (r8_1 s< rdi)

result[0] = result[0] f* *(arg1 + 0x420)
return result
