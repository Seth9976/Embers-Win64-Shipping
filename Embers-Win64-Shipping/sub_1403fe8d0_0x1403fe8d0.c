// 函数: sub_1403fe8d0
// 地址: 0x1403fe8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t j_2 = sx.q(arg4)
int64_t rdi = sx.q(arg4 * 2)
uint64_t result_1 = arg1
uint64_t result = zx.q(arg5)

if (result.d s> 0)
    int128_t zmm6
    int128_t var_28_1 = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    int128_t zmm8 = (*(*(arg3 + 0x38) + ((j_2 * arg2) << 3))):4.d
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        void* rcx = *(arg3 + 0x38)
        result = result_1
        int64_t j_1 = j_2
        void* rdx = rcx
        int64_t j
        
        do
            float zmm1 = *(rdx + 4)
            float zmm5 = *(result + (rdi << 3))
            zmm7 = *(result + (j_2 << 3))
            float zmm0 = zmm1
            zmm6 = zmm7
            zmm7.d = zmm7.d f* zmm1
            zmm6.d = zmm6.d f* *rdx
            zmm1 = *(rcx + 4)
            float zmm3 = *(result + (j_2 << 3) + 4)
            float zmm4 = zmm5 f* *rcx
            zmm0 = zmm0 * zmm3
            zmm3 = zmm3 f* *rdx
            result += 8
            rdx += arg2 << 3
            zmm6.d = zmm6.d f- zmm0
            zmm7.d = zmm7.d f+ zmm3
            zmm3 = *(result + (rdi << 3) - 4)
            zmm0 = zmm1 * zmm3
            zmm3 = zmm3 f* *rcx
            rcx += arg2 << 4
            zmm4 = zmm4 - zmm0
            zmm5 = zmm5 * zmm1 + zmm3
            float zmm2 = zmm4 f+ zmm6.d
            zmm3 = zmm5 f+ zmm7.d
            zmm7.d = zmm7.d f- zmm5
            zmm6.d = zmm6.d f- zmm4
            zmm7.d = zmm7.d f* zmm8.d
            zmm6.d = zmm6.d f* zmm8.d
            *(result + (j_2 << 3) - 8) = *(result - 8) - zmm2 * 0.5f
            *(result + (j_2 << 3) - 4) = *(result - 4) - zmm3 * 0.5f
            zmm3 = zmm3 f+ *(result - 4)
            *(result - 8) = zmm2 f+ *(result - 8)
            *(result - 4) = zmm3
            *(result + (rdi << 3) - 8) = zmm7.d f+ *(result + (j_2 << 3) - 8)
            *(result + (rdi << 3) - 4) = *(result + (j_2 << 3) - 4) f- zmm6.d
            zmm6.d = zmm6.d f+ *(result + (j_2 << 3) - 4)
            zmm0 = *(result + (j_2 << 3) - 8) f- zmm7.d
            *(result + (j_2 << 3) - 4) = zmm6.d
            *(result + (j_2 << 3) - 8) = zmm0
            j = j_1
            j_1 -= 1
        while (j != 1)
        result_1 += sx.q(arg6) << 3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
