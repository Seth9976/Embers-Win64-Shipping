// 函数: sub_140addc80
// 地址: 0x140addc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
uint32_t zmm7[0x4]
uint32_t var_28[0x4] = zmm7
uint32_t zmm8[0x4]
uint32_t var_38[0x4] = zmm8
uint32_t zmm9[0x4] = arg2
int128_t zmm10
int128_t var_58 = zmm10
int128_t zmm11
int128_t var_68 = zmm11
int128_t zmm12
int128_t var_78 = zmm12
int128_t* rdx_1
uint32_t zmm2[0x4]

if (result.d s>= 4)
    rdx_1 = *arg1
    zmm6 = rdx_1[2].d
    zmm7 = *(rdx_1 + 0x18)
    zmm11 = *(rdx_1 + 4)
    zmm12 = *(rdx_1 + 8)
    zmm2 = *(rdx_1 + 0x1c)
    zmm6[0] = zmm6[0] f- zmm12.d
    uint32_t zmm3[0x4] = rdx_1[1].d
    zmm2[0] = zmm2[0] f- zmm11.d
    arg2 = *(rdx_1 + 0x14)
    zmm3[0] = zmm3[0] f- zmm11.d
    zmm10 = *rdx_1
    arg2[0] = arg2[0] f- zmm12.d
    float zmm4 = *(rdx_1 + 0xc)
    zmm7[0] = zmm7[0] f- zmm10.d
    zmm4 = zmm4 f- zmm10.d
    zmm8 = zmm2
    zmm6[0] = zmm6[0] f* zmm3[0]
    zmm8[0] = zmm8[0] f* arg2[0]
    zmm6[0] = zmm6[0] f* zmm4
    zmm8[0] = zmm8[0] f- zmm6[0]
    zmm2[0] = zmm2[0] f* zmm4
    zmm7[0] = zmm7[0] f* zmm3[0]
    zmm7[0] = zmm7[0] f* arg2[0]
    zmm7[0] = zmm7[0] f- zmm2[0]
    zmm6[0] = zmm6[0] f- zmm7[0]
    zmm8[0] = zmm8[0] f* zmm8[0]
    zmm7[0] = zmm7[0] f* zmm7[0]
    zmm6[0] = zmm6[0] f* zmm6[0]
    zmm6[0] = zmm6[0] f+ zmm8[0]
    zmm6[0] = zmm6[0] f+ zmm7[0]
    
    if (not(zmm6[0] f== 1f))
        if (zmm6[0] f>= 9.99999994e-09f)
            uint32_t zmm5[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
            zmm2 = 0x3f000000
            zmm6[0] = zmm6[0] f* 0.5f
            zmm5[0] = zmm5[0] f* zmm5[0]
            zmm6[0] = zmm6[0] f* zmm5[0]
            zmm2[0] = 0.5f f- zmm6[0]
            zmm5[0] = zmm5[0] f* zmm2[0]
            zmm5[0] = zmm5[0] f+ zmm5[0]
            zmm5[0] = zmm5[0] f* zmm5[0]
            zmm6[0] = zmm6[0] f* zmm5[0]
            zmm5[0] = zmm5[0] f* (0.5f f- zmm6[0])
            zmm5[0] = zmm5[0] f+ zmm5[0]
            zmm8[0] = zmm8[0] f* zmm5[0]
            zmm6[0] = zmm6[0] f* zmm5[0]
            zmm7[0] = zmm7[0] f* zmm5[0]
        else
            zmm8 = data_143dbb1f8
            zmm6 = data_143dbb1fc
            zmm7 = data_143dbb200

if (result.d s< 4 || result.d s<= 3)
label_140adde5a:
    result.b = 1
else
    int64_t result_1 = result
    result = 0x24
    int64_t rcx = 3
    
    while (true)
        zmm2 = *(result + rdx_1 + 4)
        uint32_t zmm0[0x4] = *(result + rdx_1)
        zmm2[0] = zmm2[0] f- zmm11.d
        arg2 = *(result + rdx_1 + 8)
        zmm0[0] = zmm0[0] f- zmm10.d
        arg2[0] = arg2[0] f- zmm12.d
        zmm2[0] = zmm2[0] f* zmm6[0]
        zmm0[0] = zmm0[0] f* zmm8[0]
        arg2[0] = arg2[0] f* zmm7[0]
        zmm2[0] = zmm2[0] f+ zmm0[0]
        zmm2[0] = zmm2[0] f+ arg2[0]
        
        if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> zmm9[0])
            result.b = 0
            break
        
        rcx += 1
        result += 0xc
        
        if (rcx s>= result_1)
            goto label_140adde5a

return result
