// 函数: sub_1403ff580
// 地址: 0x1403ff580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg4)
uint64_t result_1 = arg1
int64_t rdi = sx.q((r14 * 2).d)
uint64_t result = zx.q(arg5)

if (result.d s> 0)
    int128_t zmm6
    int128_t var_28_1 = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    uint64_t i_1 = zx.q(result.d)
    int128_t zmm8 = (*(*(arg3 + 0x38) + ((r14 * arg2) << 3))):4.d ^ data_142d3f780
    uint64_t i
    
    do
        int128_t* rcx = *(arg3 + 0x38)
        result = result_1
        int32_t j_1 = r14.d
        void* rdx = rcx
        int32_t j
        
        do
            float zmm2 = *(rdx + 4)
            zmm6 = *rdx
            int128_t zmm5 = *rcx
            rdx += arg2 << 3
            float zmm0 = zmm2 f* *(result + (r14 << 3) + 4)
            int128_t zmm3 = *(result + (r14 << 3))
            result += 8
            zmm7 = zmm3
            zmm3.d = zmm3.d f* zmm2
            zmm2 = *(rcx + 4)
            zmm7.d = zmm7.d f* zmm6.d
            zmm6.d = zmm6.d f* *(result + (r14 << 3) - 4)
            rcx = &rcx[arg2]
            zmm7.d = zmm7.d f+ zmm0
            zmm6.d = zmm6.d f- zmm3.d
            zmm3 = *(result + (rdi << 3) - 8)
            float zmm4 = zmm3.d
            zmm3.d = zmm3.d f* zmm2
            zmm4 = zmm4 f* zmm5.d
            zmm5.d = zmm5.d f* *(result + (rdi << 3) - 4)
            zmm4 = zmm4 + zmm2 f* *(result + (rdi << 3) - 4)
            zmm5.d = zmm5.d f- zmm3.d
            zmm2 = zmm4 f+ zmm7.d
            zmm3.d = zmm5.d f+ zmm6.d
            zmm6.d = zmm6.d f- zmm5.d
            zmm7.d = zmm7.d f- zmm4
            zmm6.d = zmm6.d f* zmm8.d
            zmm7.d = zmm7.d f* zmm8.d
            *(result + (r14 << 3) - 8) = *(result - 8) - zmm2 * 0.5f
            *(result + (r14 << 3) - 4) = *(result - 4) - zmm3.d * 0.5f
            zmm3.d = zmm3.d f+ *(result - 4)
            *(result - 8) = zmm2 f+ *(result - 8)
            *(result - 4) = zmm3.d
            *(result + (rdi << 3) - 8) = zmm6.d f+ *(result + (r14 << 3) - 8)
            *(result + (rdi << 3) - 4) = *(result + (r14 << 3) - 4) f- zmm7.d
            zmm7.d = zmm7.d f+ *(result + (r14 << 3) - 4)
            zmm0 = *(result + (r14 << 3) - 8) f- zmm6.d
            *(result + (r14 << 3) - 4) = zmm7.d
            *(result + (r14 << 3) - 8) = zmm0
            j = j_1
            j_1 -= 1
        while (j != 1)
        result_1 += sx.q(arg6) << 3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
