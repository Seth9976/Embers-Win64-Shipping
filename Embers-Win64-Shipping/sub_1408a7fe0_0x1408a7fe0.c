// 函数: sub_1408a7fe0
// 地址: 0x1408a7fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm14 = arg3
uint128_t zmm15 = arg2
uint128_t result_1
int128_t zmm6
uint128_t zmm7
uint128_t zmm8
int128_t zmm10
result_1, zmm6, zmm7, zmm8, zmm10 = sub_1408a7300(arg1, *arg1, arg2, arg3)
int64_t rdi = sx.q(*(arg1 + 0x410))
uint128_t result = result_1
int128_t zmm13 = 0x3f800000

if (rdi s> 1)
    result_1 = *(arg1 + 0x414)
    void* r8_1 = 1
    float zmm3_1 = 0.211324871f
    int128_t var_18_1 = zmm6
    uint128_t var_28_1 = zmm7
    uint128_t var_38_1 = zmm8
    int128_t var_58_1 = zmm10
    uint128_t zmm11
    uint128_t var_68_1 = zmm11
    int32_t result_2 = result_1.d
    
    do
        zmm13.d = zmm13.d f* *(arg1 + 0x418)
        uint32_t r11_1 = zx.d(*(r8_1 + arg1))
        zmm14.d = zmm14.d f* result_1.d
        zmm15.d = zmm15.d f* result_1.d
        uint128_t result_3
        result_3.d = zmm15.d f+ zmm14.d
        result_3.d = result_3.d f* 0.366025418f
        result_1 = result_3
        result_3.d = result_3.d f+ zmm14.d
        result_1.d = result_1.d f+ zmm15.d
        int32_t r9_1 = int.d(result_3.d)
        int32_t r10_1 = int.d(result_1.d)
        
        if (result_1.d f< 0f)
            r10_1 -= 1
        
        result_1.d = float.s(r10_1)
        
        if (result_3.d f< 0f)
            r9_1 -= 1
        
        result_3.d = float.s(r9_1)
        uint128_t zmm2
        zmm2.d = float.s(r9_1 + r10_1)
        zmm2.d = zmm2.d f* zmm3_1
        result_1.d = result_1.d f- zmm2.d
        result_3.d = result_3.d f- zmm2.d
        zmm11.d = zmm15.d f- result_1.d
        uint128_t zmm5_1
        zmm5_1.d = zmm14.d f- result_3.d
        zmm8.d = zmm11.d f- 0.577350259f
        result_3.d = zmm5_1.d f* zmm5_1.d
        int32_t rdx_1
        rdx_1.b = zmm11.d f<= zmm5_1.d
        uint128_t zmm4_1
        zmm4_1.d = zmm5_1.d f- 0.577350259f
        int32_t rsi_1
        rsi_1.b = zmm11.d f> zmm5_1.d
        result_1.d = float.s(rsi_1)
        zmm7.d = zmm11.d f- result_1.d
        result_1.d = float.s(rdx_1)
        zmm7.d = zmm7.d f+ zmm3_1
        zmm2.d = zmm5_1.d f- result_1.d
        result_1.d = zmm11.d f* zmm11.d
        zmm2.d = zmm2.d f+ zmm3_1
        zmm3_1 = 0.5f f- result_1.d f- result_3.d
        
        if (zmm3_1 >= 0f)
            zmm3_1 = zmm3_1 * zmm3_1
            uint64_t rcx_2 =
                zx.q(arg1[zx.q(zx.d(arg1[zx.q(zx.d(r9_1.b) + r11_1)]) + zx.d(r10_1.b)) + 0x200])
            zmm5_1.d = zmm5_1.d f* *((rcx_2 << 2) + 0x142dfcdf0)
            zmm11.d = zmm11.d f* *((rcx_2 << 2) + 0x142dfcdc0)
            zmm5_1.d = zmm5_1.d f+ zmm11.d
            zmm5_1.d = zmm5_1.d f* zmm3_1 * zmm3_1
        else
            zmm5_1 = zx.o(0)
        
        result_1.d = zmm7.d f* zmm7.d
        result_3.d = zmm2.d f* zmm2.d
        zmm3_1 = 0.5f f- result_1.d f- result_3.d
        
        if (zmm3_1 >= 0f)
            zmm3_1 = zmm3_1 * zmm3_1
            uint64_t rcx_6 = zx.q(arg1[
                zx.q(zx.d(arg1[zx.q(zx.d(rdx_1.b + r9_1.b) + r11_1)]) + zx.d(rsi_1.b + r10_1.b))
                + 0x200])
            zmm2.d = zmm2.d f* *((rcx_6 << 2) + 0x142dfcdf0)
            zmm7.d = zmm7.d f* *((rcx_6 << 2) + 0x142dfcdc0)
            zmm2.d = zmm2.d f+ zmm7.d
            zmm2.d = zmm2.d f* zmm3_1 * zmm3_1
        else
            zmm2 = zx.o(0)
        
        result_1.d = zmm8.d f* zmm8.d
        result_3.d = zmm4_1.d f* zmm4_1.d
        zmm3_1 = 0.5f f- result_1.d f- result_3.d
        
        if (zmm3_1 >= 0f)
            zmm3_1 = zmm3_1 * zmm3_1
            uint64_t rcx_10 = zx.q(arg1[
                zx.q(zx.d(arg1[zx.q(zx.d(r9_1.b + 1) + r11_1)]) + zx.d(r10_1.b + 1)) + 0x200])
            zmm4_1.d = zmm4_1.d f* *((rcx_10 << 2) + 0x142dfcdf0)
            zmm8.d = zmm8.d f* *((rcx_10 << 2) + 0x142dfcdc0)
            zmm4_1.d = zmm4_1.d f+ zmm8.d
            zmm4_1.d = zmm4_1.d f* zmm3_1 * zmm3_1
        else
            zmm4_1 = zx.o(0)
        
        zmm3_1 = 0.211324871f
        r8_1 += 1
        result_1 = result_2
        zmm2.d = zmm2.d f* 70f
        zmm5_1.d = zmm5_1.d f* 70f
        zmm4_1.d = zmm4_1.d f* 70f
        zmm2.d = zmm2.d f+ zmm5_1.d
        zmm2.d = zmm2.d f+ zmm4_1.d
        zmm2.d = zmm2.d f* zmm13.d
        result.d = result.d f+ zmm2.d
    while (r8_1 s< rdi)

result.d = result.d f* *(arg1 + 0x420)
return result
