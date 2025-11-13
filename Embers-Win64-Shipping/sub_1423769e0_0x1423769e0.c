// 函数: sub_1423769e0
// 地址: 0x1423769e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm9 = *(arg1 + 0x538)
int128_t zmm10 = *arg2
double result

if (not(zmm10.d f!= zmm9.d) && not((*(arg1 + 0x53c)).d f!= *(arg2 + 4)))
    result = *(arg1 + 0x540)
    
    if (result.d f== *(arg2 + 8))
        return result

double zmm5 = *(arg1 + 0x53c)
*(arg1 + 0x5ac) = zmm10.d
int128_t zmm6 = *(arg1 + 0x540)
float zmm1[0x2] = zmm6.q
int128_t zmm7 = *(arg2 + 4)
*(arg1 + 0x5b0) = zmm7.d
zmm7.d = zmm7.d f+ zmm5.d
int128_t zmm8 = *(arg2 + 8)
*(arg1 + 0x5b4) = zmm8.d
zmm8.d = zmm8.d f+ zmm6.d
result.d = zmm5.d f* *(arg2 + 4)
zmm1[0] = zmm1[0] f* *(arg2 + 8)
double zmm3
zmm3.d = zmm9.q.d f* *arg2
*(arg1 + 0x5d8) = zmm9.d
zmm9.d = zmm9.d f+ zmm10.d
zmm7.d = zmm7.d f* 0.5f
zmm3.d = zmm3.d f+ result.d
zmm8.d = zmm8.d f* 0.5f
zmm9.d = zmm9.d f* 0.5f
*(arg1 + 0x5dc) = zmm5.d
zmm3.d = zmm3.d f+ zmm1[0]
*(arg1 + 0x5e0) = zmm6.d
zmm1 = *(arg1 + 4)
*(arg1 + 0x5b8) = zmm9.d
result.d = zmm1.d f* 0.5f
zmm3.d = zmm3.d f* 0.5f
zmm1[0] = zmm1[0] f- result.d
*(arg1 + 0x5bc) = zmm7.d
*(arg1 + 0x5c0) = zmm8.d
float zmm2 = 0.5f f- zmm3.d
zmm3 = *(arg1 + 0x548)
*(arg1 + 0x5c8) = zmm3
zmm1[0] = zmm1[0] * zmm2
zmm1[0] = zmm1[0] f+ result.d
*(arg1 + 0x5d0) = _mm_cvtps_pd(zmm1) + zmm3
return sub_14236c400(arg1, arg1 + 0x5b8)
