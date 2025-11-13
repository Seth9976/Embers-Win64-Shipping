// 函数: sub_141775b80
// 地址: 0x141775b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
float zmm1 = arg3
float zmm5[0x4] = *(arg2 + 4)
bool cond:0 = zmm3[0] >= zmm5[0]
float zmm4[0x4]

if (not(cond:0))
    zmm4 = *(arg2 + 8)

float zmm6[0x4]

if (cond:0 || zmm3[0] >= zmm4[0])
    zmm4 = *(arg2 + 8)
    zmm6 = _mm_min_ss(zmm4[0], zmm5[0])
else
    zmm6 = zmm3

float zmm7[0x4]

if (zmm3[0] <= zmm5[0] || zmm3[0] <= zmm4[0])
    zmm7 = _mm_max_ss(zmm5[0], zmm4[0])
else
    zmm7 = zmm3

if (not(zmm1 <= 0f) && not(zmm6[0] <= 0f))
    int64_t zmm0
    zmm0.d = zmm7[0].q.d f/ zmm6[0]
    
    if (not(zmm0.d f<= zmm1))
        zmm0 = zmm7[0].q
        zmm3[0] = zmm3[0] - zmm6[0]
        arg3 = zmm7[0]
        zmm5[0] = zmm5[0] - zmm6[0]
        arg3 = arg3 / zmm1
        zmm4[0] = zmm4[0] - zmm6[0]
        zmm7[0] = zmm7[0] - arg3
        zmm0.d = zmm0.d f- zmm6[0]
        zmm1 = 1f f/ zmm0.d
        zmm3[0] = zmm3[0] * zmm1
        zmm5[0] = zmm5[0] * zmm1
        zmm4[0] = zmm4[0] * zmm1
        zmm3[0] = zmm3[0] * zmm7[0]
        zmm5[0] = zmm5[0] * zmm7[0]
        zmm4[0] = zmm4[0] * zmm7[0]
        zmm3[0] = zmm3[0] + arg3
        zmm5[0] = zmm5[0] + arg3
        zmm4[0] = zmm4[0] + arg3
        *arg1 = zmm3[0]
        *(arg1 + 4) = zmm5[0]
        arg1[1].d = zmm4[0]
        return arg1

int32_t rax_1 = *(arg2 + 8)
*arg1 = *arg2
arg1[1].d = rax_1
return arg1
