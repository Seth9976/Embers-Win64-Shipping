// 函数: sub_142420660
// 地址: 0x142420660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)
int32_t i = 1

if (rcx != 0)
    (**rcx)(rcx, 1)

int32_t rax_2 = *(arg1 + 0x40)
float zmm1[0x4] = *arg2
zmm1[0] = zmm1[0] f+ *arg3
float zmm2 = *(arg2 + 4)

if (rax_2 + 1 s> 1)
    uint64_t* rbx_1 = nullptr
    int128_t zmm7 = 0x40c90fdb
    int128_t zmm6
    zmm6.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_2)).d
    
    do
        *(rbx_1 + *(arg1 + 0x38)) = *arg2
        *(rbx_1 + *(arg1 + 0x38) + 0x10) = *(arg1 + 0x28)
        int64_t rax_5 = *(arg1 + 0x38)
        *(rbx_1 + rax_5 + 0x20) = zmm1[0]
        *(rbx_1 + rax_5 + 0x24) = zmm2
        int64_t rax_6 = *(arg1 + 0x38)
        uint128_t zmm0 = *(arg1 + 0x28)
        float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(i))
        *(rbx_1 + rax_6 + 0x30) = zmm0
        temp0_2[0] = temp0_2[0] f* zmm7.d
        temp0_2[0] = temp0_2[0] f* zmm6.d
        zmm0, zmm6, zmm7 = __libm_sse2_sincosf_(temp0_2)
        int64_t rax_7 = *(arg1 + 0x38)
        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 1)
        zmm1[0] = zmm1[0] f* *arg3
        i += 1
        zmm2 = zmm0.d f* arg3[1]
        zmm1[0] = zmm1[0] f+ *arg2
        zmm2 = zmm2 f+ *(arg2 + 4)
        *(rbx_1 + rax_7 + 0x40) = zmm1[0]
        *(rbx_1 + rax_7 + 0x44) = zmm2
        *(rbx_1 + *(arg1 + 0x38) + 0x50) = *(arg1 + 0x28)
        rbx_1 = &rbx_1[0xc]
    while (i s< rax_2 + 1)

int64_t* result = j_sub_140a82f30(0x60)
void*** result_1 = result

if (result == 0)
    *(arg1 + 0x48) = 0
else
    int64_t rcx_1 = *(arg1 + 0x50)
    *result_1 = &data_143283728
    result_1[1] = data_143dbb1f0
    result_1[2] = 0
    result_1[3].b = 0
    result_1[4] = 0
    uint128_t zmm0_1 = data_14399f5c0
    *result_1 = &data_14328aaf8
    result_1[7] = rcx_1
    result_1[8] = 0
    result_1[9] = 0
    *(result_1 + 0x28) = zmm0_1
    result_1[0xa] = 0
    result_1[0xb] = 0
    
    if (&result_1[0xa] != arg1 + 0x38)
        int64_t rbp = sx.q(*(arg1 + 0x40))
        int64_t r14_1 = *(arg1 + 0x38)
        result_1[0xb].d = rbp.d
        
        if (rbp.d != 0)
            sub_1409da0d0(&result_1[0xa], rbp.d, 0)
            memcpy(result_1[0xa], r14_1, (rbp * 0x60).d)
        else
            *(result_1 + 0x5c) = 0
    
    result = result_1[0xa]
    result_1[1] = *result
    *(arg1 + 0x48) = result_1

return result
