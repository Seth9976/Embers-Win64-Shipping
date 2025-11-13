// 函数: sub_141737500
// 地址: 0x141737500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *(arg1 + 0x38)
float zmm5 = arg4
arg4 = *(arg1 + 0x34)
bool cond:0 = arg4 <= zmm4[0]
int64_t zmm2 = *(arg1 + 0x3c)
float zmm0 = arg4 * *arg2
zmm4[0] = zmm4[0] * arg2[1]
float var_28 = zmm0
float var_24 = zmm4[0]
float var_20 = zmm2.d * arg2[2]

if (cond:0 || not(arg4 f> zmm2.d))
    arg4 = _mm_max_ss(zmm2.d, zmm4[0])

int64_t* rcx = *(arg1 + 0x10)
int32_t result = (*(*rcx + 0x50))(rcx, &var_28, arg3, arg4 * zmm5)

if (result != 0xffffffff)
    int128_t* r8 = *arg3
    void* rcx_2 = r8 + sx.q(arg3[1].d) * 0xc
    
    if (r8 != rcx_2)
        do
            float zmm1[0x4] = *r8
            zmm2 = *(r8 + 4)
            zmm0 = *(r8 + 8)
            zmm1[0] = zmm1[0] f* *(arg1 + 0x28)
            zmm2.d = zmm2.d f* *(arg1 + 0x2c)
            zmm0 = zmm0 f* *(arg1 + 0x30)
            *r8 = (_mm_unpacklo_ps(zmm1, zmm2)).q
            *(r8 + 8) = zmm0
            r8 += 0xc
        while (r8 != rcx_2)

return result
