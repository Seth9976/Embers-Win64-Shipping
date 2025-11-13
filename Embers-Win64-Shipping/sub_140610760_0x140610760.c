// 函数: sub_140610760
// 地址: 0x140610760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(data_143f5b298 + 0x788)
void* result = (*(*rcx + 0x150))(rcx)

if (result == 0)
    return result

int64_t* rbx = *(arg1 + 0x10)
int128_t zmm7 = 0x447a0000
int32_t performanceCount
float zmm0[0x2]

if (*(arg1 + 0x18) == 0)
    QueryPerformanceCounter(&performanceCount)
    
    if (rbx[1].b == 0 && *rbx != 0)
        zmm0 = float.d(zx.q(performanceCount))
    label_1406107ec:
        rbx[0x15] = zmm0
        rbx[1].b = 1
        rbx[2]
        (**rbx[0x16])()
else if (rbx[1].b == 0 && *rbx != 0)
    zmm0 = *(result + 0x520)
    zmm0[0] = zmm0[0] * 1000f
    zmm0 = _mm_cvtps_pd(zmm0)
    goto label_1406107ec

int64_t* rbx_1 = *(arg1 + 0x10)

while (rbx_1[1].b != 0)
    if (*(arg1 + 0x18) == 0)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        zmm0 = float.d(zx.q(performanceCount_1.d))
    else
        zmm0 = *(result + 0x520)
        zmm0[0] = zmm0[0] f* zmm7.d
        zmm0 = _mm_cvtps_pd(zmm0)
    
    performanceCount.q = zmm0
    int128_t zmm6_1
    zmm6_1, zmm7 = sub_140615f20(rbx_1, &performanceCount, zmm0)
    sub_140b73230(zmm6_1)
    rbx_1 = *(arg1 + 0x10)

return 0
