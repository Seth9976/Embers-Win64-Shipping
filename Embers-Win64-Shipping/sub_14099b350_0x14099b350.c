// 函数: sub_14099b350
// 地址: 0x14099b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_20 = arg4
int128_t zmm6
int128_t var_48 = zmm6
uint128_t var_a8
uint128_t var_98
int64_t arg_18
int32_t arg_28
int32_t arg_30
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if ((*(arg3 + 0x10) & 1) == 0)
    zmm0 = *arg5
    zmm1 = *(arg5 + 4)
    zmm2 = *(arg5 + 8)
    bool cond:2_1
    
    if (zmm0.d f<= zmm1.d)
        result = &arg_28
        cond:2_1 = zmm1.d f<= zmm2.d
    else
        result = &arg_20
        cond:2_1 = zmm0.d f<= zmm2.d
    
    if (cond:2_1)
        result = &arg_30
    
    int32_t i = 0
    
    if (*(arg3 + 0x20) s> 0)
        int64_t rdx_2 = sx.q(*result)
        int64_t r13_2 = 0
        arg_18 = rdx_2
        
        do
            int64_t r15_2 = sx.q(arg1[1].d)
            zmm6 = data_142d3f660
            int32_t var_90_1 = *(*(*(arg3 + 0x18) + r13_2) + (rdx_2 << 2))
            result = zx.q((r15_2 + 1).d)
            arg1[1].d = result.d
            
            if (result.d s> *(arg1 + 0xc))
                result = sub_14090a6a0(arg1)
                rdx_2 = arg_18
            
            r13_2 += 0x10
            int64_t* rcx_9 = r15_2 * 0x60 + *arg1
            *(rcx_9 + 0x10) = 5.o
            rcx_9[1].d = i
            i += 1
            *(rcx_9 + 0x20) = zmm6
            *rcx_9 = arg2
            *(rcx_9 + 0x30) = var_a8
            *(rcx_9 + 0x40) = var_98
            *(rcx_9 + 0x50) = 0.o
        while (i s< *(arg3 + 0x20))
else
    int32_t i_1 = 0
    
    if (*(arg3 + 0x20) s> 0)
        int64_t r8 = sx.q(arg_28)
        int64_t r13_1 = 0
        int64_t rdx = sx.q(arg4)
        int64_t r9 = sx.q(arg_30)
        arg_18 = rdx
        int128_t zmm7 = *(arg5 + 4)
        int128_t zmm8 = *arg5
        int128_t zmm9 = *(arg5 + 8)
        
        do
            int64_t r15_1 = sx.q(arg1[1].d)
            zmm6 = data_142d3f660
            int64_t rcx = *(*(arg3 + 0x18) + r13_1)
            result = zx.q((r15_1 + 1).d)
            zmm0 = zx.o(*(rcx + (r8 << 2)))
            zmm1 = zx.o(*(rcx + (r9 << 2)))
            zmm2 = _mm_cvtepi32_ps(zx.o(*(rcx + (rdx << 2))))
            arg1[1].d = result.d
            zmm2.d = zmm2.d f* zmm8.d
            zmm0.d = _mm_cvtepi32_ps(zmm0).d f* zmm7.d
            zmm1.d = _mm_cvtepi32_ps(zmm1).d f* zmm9.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            int32_t var_94_1 = zmm2.d
            
            if (result.d s> *(arg1 + 0xc))
                result = sub_14090a6a0(arg1)
                rdx = arg_18
                r8 = sx.q(arg_28)
                r9 = sx.q(arg_30)
            
            r13_1 += 0x10
            int64_t* rcx_4 = r15_1 * 0x60 + *arg1
            *(rcx_4 + 0x10) = 4.o
            rcx_4[1].d = i_1
            i_1 += 1
            *(rcx_4 + 0x20) = zmm6
            *rcx_4 = arg2
            *(rcx_4 + 0x30) = var_a8
            *(rcx_4 + 0x40) = var_98
            *(rcx_4 + 0x50) = 0.o
        while (i_1 s< *(arg3 + 0x20))
return result
