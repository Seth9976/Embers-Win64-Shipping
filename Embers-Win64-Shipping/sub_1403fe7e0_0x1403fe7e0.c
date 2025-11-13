// 函数: sub_1403fe7e0
// 地址: 0x1403fe7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg5)
uint64_t result_1 = arg1

if (result.d s> 0)
    void* rbp_1 = *(arg3 + 0x38)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        result = result_1
        int64_t rcx = result_1 + (sx.q(arg4) << 3)
        void* rdx = rbp_1
        
        if (arg4 s> 0)
            uint64_t j_1 = zx.q(arg4)
            uint64_t j
            
            do
                float zmm5 = *(rdx + 4)
                float zmm1 = *rcx
                float zmm3 = *rdx
                result += 8
                rdx += arg2 << 3
                rcx += 8
                float zmm4 = zmm1 * zmm3 - zmm5 f* *(rcx - 4)
                zmm5 = zmm5 * zmm1 + zmm3 f* *(rcx - 4)
                *(rcx - 8) = *(result - 8) - zmm4
                *(rcx - 4) = *(result - 4) - zmm5
                zmm5 = zmm5 f+ *(result - 4)
                *(result - 8) = zmm4 f+ *(result - 8)
                *(result - 4) = zmm5
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        result_1 += sx.q(arg6) << 3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
