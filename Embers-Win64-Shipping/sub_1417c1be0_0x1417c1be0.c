// 函数: sub_1417c1be0
// 地址: 0x1417c1be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg2
float zmm3 = *(arg1 + 0x10)
int64_t rbx = sx.q(*(result + 8))

if (rbx s> 0)
    int64_t r10_1 = 0
    
    do
        int64_t r8 = **arg2
        int64_t rdx = sx.q(*(r8 + (r10_1 << 3))) * 3
        int64_t rcx = *arg2[1]
        float zmm2 = *(arg1 + 0x18) f- *(rcx + (rdx << 2) + 4)
        float zmm1 = *(arg1 + 0x14) f- *(rcx + (rdx << 2))
        uint128_t zmm0
        zmm0.d = (*(arg1 + 0x1c)).d f- *(rcx + (rdx << 2) + 8)
        zmm0.d = zmm0.d f* zmm0.d
        
        if (zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0.d >= zmm3 * zmm3)
            result = zx.q(*(arg1 + 0x24))
        else
            result = zx.q(*(arg1 + 0x20))
        
        int32_t rcx_1 = *(arg1 + 0x28)
        zmm0 = _mm_cvtepi32_ps(zx.o(result.d))
        
        if (rcx_1 == 0)
            result = *arg3
            *(result + (sx.q(*(r8 + (r10_1 << 3) + 4)) << 2)) = int.d(zmm0.d)
        else if (rcx_1 == 1)
            result = zx.q(*(arg1 + 0x20))
        label_1417c1c88:
            int64_t rdx_1 = *arg3
            int64_t rcx_3 = sx.q(*(r8 + (r10_1 << 3) + 4))
            
            if (*(rdx_1 + (rcx_3 << 2)) != result.d)
                result = zx.q(int.d(zmm0.d))
                *(rdx_1 + (rcx_3 << 2)) = result.d
        else if (rcx_1 == 2)
            result = zx.q(*(arg1 + 0x24))
            goto label_1417c1c88
        
        r10_1 += 1
    while (r10_1 s< rbx)

return result
