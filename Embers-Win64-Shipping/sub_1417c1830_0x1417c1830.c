// 函数: sub_1417c1830
// 地址: 0x1417c1830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(*(arg1 + 0x24))
int64_t zmm0 = *(arg1 + 0x30)
int32_t rax = *(arg1 + 0x2c)
uint128_t zmm6 = zmm1
zmm1.d = zmm1.d f* *(arg1 + 0x30)
uint64_t result = zx.q(*(arg1 + 0x38))
zmm6.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f* *(arg1 + 0x34)
int32_t var_90 = result.d
int64_t var_98 = zmm0
zmm0.d = rax.d f* *(arg1 + 0x38)
zmm6.d = zmm6.d f+ zmm1.d
int32_t rcx = *(arg1 + 0x3c)
zmm6.d = zmm6.d f+ zmm0.d
int32_t var_8c = zmm6.d

if (rcx == 0)
    return sub_1417beb00(arg1, arg2, &var_98, arg3)

if (rcx == 1)
    return sub_1417bd080(arg1, arg2, &var_98, arg3)

if (rcx == 2)
    return sub_1417bda30(arg1, arg2, &var_98, arg3)

if (rcx == 3)
    return sub_1417be2c0(arg1, arg2, &var_98, arg3)

if (rcx == 4)
    result = *arg2
    int64_t rbp_1 = sx.q(*(result + 8))
    
    if (rbp_1 s> 0)
        int64_t rdi_1 = 0
        int128_t zmm10 = var_98:4.d
        int128_t zmm11 = var_98.d
        
        do
            int64_t r15_1 = **arg2
            *(*arg3 + (sx.q(*(r15_1 + (rdi_1 << 3) + 4)) << 2)) = *(arg1 + 0x1c)
            int64_t rdx_1 = sx.q(*(r15_1 + (rdi_1 << 3))) * 3
            result = arg2[1]
            int64_t rcx_5 = *result
            zmm0.d = zmm11.q.d f* *(rcx_5 + (rdx_1 << 2))
            zmm1.d = var_90.d f* *(rcx_5 + (rdx_1 << 2) + 8)
            float zmm2 = zmm10.d f* *(rcx_5 + (rdx_1 << 2) + 4) f+ zmm0.d f+ zmm1.d f- zmm6.d
            
            if (not(zmm2 >= -9.99999994e-09f))
                zmm0.d = 1f - zmm2 f/ *(arg1 + 0x20)
                zmm0.d = zmm0.d f+ 1f
                zmm0 = logf(zmm0.d)
                result = *arg3
                zmm0.d = zmm0.d f* 0.434294492f
                zmm0.d = zmm0.d f* *(arg1 + 0x10)
                *(result + (sx.q(*(r15_1 + (rdi_1 << 3) + 4)) << 2)) = zmm0.d
            
            rdi_1 += 1
        while (rdi_1 s< rbp_1)

return result
