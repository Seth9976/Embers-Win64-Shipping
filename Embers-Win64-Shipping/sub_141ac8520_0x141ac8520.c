// 函数: sub_141ac8520
// 地址: 0x141ac8520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1].d
float result = rax - 2
int64_t result_1 = sx.q(result)

if (rax - 2 s>= 0)
    float zmm0[0x4]
    int64_t zmm1
    
    if (result_1 s>= 3)
        uint64_t i_1 = (result_1 + 1) u>> 2
        int64_t* rdx = result_1 * 0x3c
        result_1 += neg.q(i_1) << 2
        uint64_t i
        
        do
            int64_t rcx = *arg1
            zmm0 = *(rdx + rcx + 0xc)
            zmm1 = zmm0[0].q
            zmm0[0] = zmm0[0] f* arg2[2]
            zmm0[0] = zmm0[0] f* *arg2
            zmm0[0] = zmm0[0] f+ *(rdx + rcx + 0x44)
            zmm1.d = zmm1.d f* arg2[1]
            zmm0[0] = zmm0[0] f+ *(rdx + rcx + 0x3c)
            zmm1.d = zmm1.d f+ *(rdx + rcx + 0x40)
            float var_10_1 = zmm0[0]
            *(rdx + rcx) = (_mm_unpacklo_ps(zmm0, zmm1)).q
            *(rdx + rcx + 8) = var_10_1
            int64_t rcx_1 = *arg1
            zmm0 = *(rdx + rcx_1 - 0x30)
            zmm1 = zmm0[0].q
            zmm0[0] = zmm0[0] f* arg2[2]
            zmm0[0] = zmm0[0] f* *arg2
            zmm0[0] = zmm0[0] f+ *(rdx + rcx_1 + 8)
            zmm1.d = zmm1.d f* arg2[1]
            zmm0[0] = zmm0[0] f+ *(rdx + rcx_1)
            zmm1.d = zmm1.d f+ *(rdx + rcx_1 + 4)
            float var_10_2 = zmm0[0]
            *(rdx + rcx_1 - 0x3c) = (_mm_unpacklo_ps(zmm0, zmm1)).q
            *(rdx + rcx_1 - 0x34) = var_10_2
            int64_t rcx_2 = *arg1
            zmm0 = *(rdx + rcx_2 - 0x6c)
            zmm1 = zmm0[0].q
            zmm0[0] = zmm0[0] f* arg2[2]
            zmm0[0] = zmm0[0] f* *arg2
            zmm0[0] = zmm0[0] f+ *(rdx + rcx_2 - 0x34)
            zmm1.d = zmm1.d f* arg2[1]
            zmm0[0] = zmm0[0] f+ *(rdx + rcx_2 - 0x3c)
            zmm1.d = zmm1.d f+ *(rdx + rcx_2 - 0x38)
            float var_10_3 = zmm0[0]
            *(rdx + rcx_2 - 0x78) = (_mm_unpacklo_ps(zmm0, zmm1)).q
            *(rdx + rcx_2 - 0x70) = var_10_3
            int64_t rcx_3 = *arg1
            zmm0 = *(rdx + rcx_3 - 0xa8)
            zmm1 = zmm0[0].q
            zmm0[0] = zmm0[0] f* arg2[2]
            zmm0[0] = zmm0[0] f* *arg2
            zmm0[0] = zmm0[0] f+ *(rdx + rcx_3 - 0x70)
            zmm1.d = zmm1.d f* arg2[1]
            zmm0[0] = zmm0[0] f+ *(rdx + rcx_3 - 0x78)
            zmm1.d = zmm1.d f+ *(rdx + rcx_3 - 0x74)
            result = zmm0[0]
            *(rdx + rcx_3 - 0xb4) = (_mm_unpacklo_ps(zmm0, zmm1)).q
            *(rdx + rcx_3 - 0xac) = result
            rdx -= 0xf0
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (result_1 s>= 0)
        int64_t* rdx_1 = result_1 * 0x3c
        int64_t result_2
        
        do
            int64_t rcx_4 = *arg1
            zmm0 = *(rdx_1 + rcx_4 + 0xc)
            zmm1 = zmm0[0].q
            zmm0[0] = zmm0[0] f* arg2[2]
            zmm0[0] = zmm0[0] f* *arg2
            zmm0[0] = zmm0[0] f+ *(rdx_1 + rcx_4 + 0x44)
            zmm1.d = zmm1.d f* arg2[1]
            zmm0[0] = zmm0[0] f+ *(rdx_1 + rcx_4 + 0x3c)
            zmm1.d = zmm1.d f+ *(rdx_1 + rcx_4 + 0x40)
            result = zmm0[0]
            *(rdx_1 + rcx_4) = (_mm_unpacklo_ps(zmm0, zmm1)).q
            *(rdx_1 + rcx_4 + 8) = result
            rdx_1 -= 0x3c
            result_2 = result_1
            result_1 -= 1
        while (result_2 - 1 s>= 0)

return result
