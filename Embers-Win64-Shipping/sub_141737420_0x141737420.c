// 函数: sub_141737420
// 地址: 0x141737420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *(arg1 + 0x38)
float zmm5 = arg4[0]
arg4 = *(arg1 + 0x34)
bool cond:0 = arg4[0] <= zmm4
float zmm2[0x4] = *(arg1 + 0x3c)
float zmm1 = zmm4 * arg2[1]
float var_18 = arg4[0] * *arg2
float var_14 = zmm1
float var_10 = zmm2[0] * arg2[2]

if (cond:0 || not(arg4[0] > zmm2[0]))
    arg4 = _mm_max_ss(zmm2[0], zmm4)

void* rcx = *(arg1 + 0x10)
arg4[0] = arg4[0] * zmm5
int32_t result = sub_141737810(rcx, &var_18, arg3, arg4)

if (result != 0xffffffff)
    int128_t* r8 = *arg3
    void* rcx_2 = r8 + sx.q(arg3[1].d) * 0xc
    
    if (r8 != rcx_2)
        do
            float zmm1_1[0x4] = *r8
            int64_t zmm2_1 = *(r8 + 4)
            float zmm0_1 = *(r8 + 8)
            zmm1_1[0] = zmm1_1[0] f* *(arg1 + 0x28)
            zmm2_1.d = zmm2_1.d f* *(arg1 + 0x2c)
            zmm0_1 = zmm0_1 f* *(arg1 + 0x30)
            *r8 = (_mm_unpacklo_ps(zmm1_1, zmm2_1)).q
            *(r8 + 8) = zmm0_1
            r8 += 0xc
        while (r8 != rcx_2)

return result
