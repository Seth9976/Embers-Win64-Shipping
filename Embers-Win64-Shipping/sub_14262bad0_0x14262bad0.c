// 函数: sub_14262bad0
// 地址: 0x14262bad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int32_t rbx = 0
int128_t zmm7
int128_t var_28 = zmm7
int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9
int128_t zmm10
int128_t var_58 = zmm10
uint64_t r8 = zx.q(arg4 - 1)
int128_t zmm11
int128_t var_68 = zmm11
void* const* result

if (arg4 s<= 0)
label_14262bc1d:
    result.b = 0
else
    zmm9 = *(arg1 + 8)
    uint32_t rdx = (r8 * 3).d
    zmm10 = *arg1
    uint32_t r9 = 0
    zmm7 = data_143b502a4
    int32_t* r10_1 = arg3
    int64_t rcx_1 = sx.q(r8.d) * 0xc
    
    while (true)
        float zmm5 = *(rcx_1 + arg3)
        zmm8 = *(rcx_1 + arg3 + 8)
        float zmm3 = *r10_1 - zmm5
        float zmm4 = r10_1[2] f- zmm8.d
        float zmm2 = zmm4 * zmm4 + zmm3 * zmm3
        float zmm1 = (zmm9.d f- zmm8.d) * zmm4 + (zmm10.d - zmm5) * zmm3
        
        if (not(zmm2 <= 0f))
            zmm1 = zmm1 / zmm2
        
        if (zmm1 >= 0f)
            zmm1 = _mm_min_ss(zmm1, 0x3f800000)
        else
            zmm1 = (zx.o(0)).d
        
        float zmm0 = zmm1
        zmm1 = zmm1 * zmm4 f+ zmm8.d f- zmm9.d
        zmm0 = zmm0 * zmm3 + zmm5 f- zmm10.d
        
        if (not(zmm1 * zmm1 + zmm0 * zmm0 f>= zmm7.d)
                && sub_142624980(arg2, &arg3[sx.q(rdx)], &arg3[sx.q(r9)]) f< zmm7.d)
            result.b = 1
            break
        
        rdx = r9
        rcx_1 = r10_1 - arg3
        rbx += 1
        r9 += 3
        r10_1 = &r10_1[3]
        
        if (rbx s>= arg4)
            goto label_14262bc1d

return result
