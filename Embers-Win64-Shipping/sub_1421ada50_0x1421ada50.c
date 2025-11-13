// 函数: sub_1421ada50
// 地址: 0x1421ada50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 0

void* rdi = *(*(arg1 + 0x1d0) + 0x80)
int64_t rax_2 = sx.q(*(arg1 + 0x280))
void* var_58 = rdi
int32_t rdx

if (rax_2.d s< 0 || rax_2.d s>= *(arg1 + 0x1f0))
    rdx = -1
else
    rdx = *(*(arg1 + 0x1e8) + (rax_2 << 2))

uint128_t zmm1
zmm1.d = float.s(data_143f4d87c)
uint128_t zmm7
zmm7.d = float.s(zx.q(rdx))
uint128_t zmm0
zmm0.d = zmm7.d f/ zmm1.d
truncf(zmm0.d)
zmm1.d = float.s(data_143f4d880)
uint128_t zmm6
zmm6.d = zmm0.d f/ zmm1.d
truncf(zmm6.d)
zmm6.d = zmm6.d f- zmm6.d
zmm1.d = float.s(data_143f4d87c)
zmm7.d = zmm7.d f/ zmm1.d
truncf(zmm7.d)
int32_t r12 = 0
zmm7.d = zmm7.d f- zmm7.d

if (arg3 s> 0)
    int32_t rax_5 = *(arg1 + 0x284)
    
    while (true)
        if (rax_5 s<= 0)
            if (*arg4 s>= *(arg1 + 0x1f0))
                int32_t rax_8 = sub_1421ad9d0(rdi)
                
                if (rax_8 == 0xffffffff)
                    return zx.q(r12)
                
                int64_t rsi_1 = sx.q(*(arg1 + 0x1f0))
                int32_t rcx_3 = (rsi_1 + 1).d
                *(arg1 + 0x1f0) = rcx_3
                
                if (rcx_3 s> *(arg1 + 0x1f4))
                    sub_1405a4cf0(arg1 + 0x1e8)
                
                *(*(arg1 + 0x1e8) + (rsi_1 << 2)) = rax_8
                *(arg1 + 0x280) = rsi_1.d
                int64_t rsi_2 = sx.q(*(arg1 + 0x220))
                int32_t rax_10 = (rsi_2 + 1).d
                *(arg1 + 0x220) = rax_10
                
                if (rax_10 s> *(arg1 + 0x224))
                    sub_1406105e0(arg1 + 0x218)
                
                *(*(arg1 + 0x218) + (rsi_2 << 2)) = 0
                int64_t rsi_3 = sx.q(*(arg1 + 0x230))
                int32_t rax_12 = (rsi_3 + 1).d
                *(arg1 + 0x230) = rax_12
                
                if (rax_12 s> *(arg1 + 0x234))
                    sub_1405a4cf0(arg1 + 0x228)
                
                *(*(arg1 + 0x228) + (rsi_3 << 2)) = rax_8
                sub_1405b2ba0(arg1 + 0x1f8, 1)
                *(*(arg1 + 0x1e0) + 0x210) = 1
            else
                *(arg1 + 0x280) = sub_1421b3fb0(arg1 + 0x1f8, 0)
            
            *arg4 += 1
            zmm1.d = float.s(data_143f4d87c)
            zmm6.d = float.s(zx.q(*(*(arg1 + 0x1e8) + (sx.q(*(arg1 + 0x280)) << 2))))
            zmm7.d = zmm6.d f/ zmm1.d
            truncf(zmm7.d)
            zmm7.d = zmm7.d f- zmm7.d
            zmm1.d = float.s(data_143f4d87c)
            zmm6.d = zmm6.d f/ zmm1.d
            truncf(zmm6.d)
            zmm0.d = float.s(data_143f4d880)
            zmm6.d = zmm6.d f/ zmm0.d
            truncf(zmm6.d)
            zmm6.d = zmm6.d f- zmm6.d
            *(arg1 + 0x284) = 0x10
        
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rax_16 = (rdi_1 + 1).d
        arg2[1].d = rax_16
        
        if (rax_16 s> *(arg2 + 0xc))
            sub_140775520(arg2)
        
        void* r8 = *arg2 + rdi_1 * 0x48
        
        if (r8 != 0)
            __builtin_memset(r8, 0, 0x48)
        
        r12 += 1
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(0x10 - *(arg1 + 0x284))
        int32_t rdx_7 = temp0_1 & 3
        int32_t rax_20 = temp1_1 + rdx_7
        zmm0 = _mm_cvtepi32_ps(zx.o(data_143a2ee34))
        zmm1.d = _mm_cvtepi32_ps(zx.o((rax_20 & 3) - rdx_7)).d f/ zmm0.d
        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rax_20 s>> 2))
        zmm1.d = zmm1.d f+ zmm7.d
        *(r8 + 0x40) = zmm1.d
        zmm2.d = zmm2.d f/ _mm_cvtepi32_ps(zx.o(data_143a2ee38)).d
        zmm2.d = zmm2.d f+ zmm6.d
        *(r8 + 0x44) = zmm2.d
        *(r8 + 0x38) = *(arg1 + 0x280)
        *(arg1 + 0x284) -= 1
        rax_5 = *(arg1 + 0x284)
        
        if (r12 s>= arg3)
            break
        
        rdi = var_58

return zx.q(arg3)
