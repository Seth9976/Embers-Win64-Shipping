// 函数: sub_14099bd80
// 地址: 0x14099bd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_20 = arg4
uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t var_b8
int64_t arg_18
int32_t arg_28
int32_t arg_30
uint128_t zmm0
uint128_t zmm1
float zmm2

if ((*(arg3 + 0x10) & 1) == 0)
    zmm0 = *arg5
    zmm1 = *(arg5 + 4)
    zmm2 = *(arg5 + 8)
    bool cond:2_1
    
    if (zmm0.d f<= zmm1.d)
        result = &arg_28
        cond:2_1 = zmm1.d f<= zmm2
    else
        result = &arg_20
        cond:2_1 = zmm0.d f<= zmm2
    
    if (cond:2_1)
        result = &arg_30
    
    int32_t i = 0
    
    if (*(arg3 + 0x20) s> 0)
        int64_t r13_2 = 0
        int64_t rdx_2 = sx.q(*result) * 3
        arg_18 = rdx_2
        
        do
            int64_t r14_1 = sx.q(arg1[1].d)
            zmm6 = data_142d3f660
            int64_t rcx_5 = *(*(arg3 + 0x18) + r13_2)
            int32_t var_c0_2 = *(rcx_5 + (rdx_2 << 2) + 8)
            result = zx.q((r14_1 + 1).d)
            uint64_t var_c8_2 = *(rcx_5 + (rdx_2 << 2))
            arg1[1].d = result.d
            
            if (result.d s> *(arg1 + 0xc))
                result = sub_14090a6a0(arg1)
                rdx_2 = arg_18
            
            r13_2 += 0x10
            int64_t* rcx_9 = r14_1 * 0x60 + *arg1
            *(rcx_9 + 0x10) = 2.o
            rcx_9[1].d = i
            i += 1
            *(rcx_9 + 0x20) = zmm6
            *rcx_9 = arg2
            *(rcx_9 + 0x30) = var_c8_2.o
            *(rcx_9 + 0x40) = var_b8
            *(rcx_9 + 0x50) = 0.o
        while (i s< *(arg3 + 0x20))
else
    int32_t i_1 = 0
    
    if (*(arg3 + 0x20) s> 0)
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int64_t r13_1 = 0
        int64_t rdx = sx.q(arg4) * 3
        arg_18 = rdx
        int64_t r8 = sx.q(arg_28) * 3
        int64_t var_128_1 = r8
        int64_t r9 = sx.q(arg_30) * 3
        int64_t var_120_1 = r9
        int128_t zmm8 = *(arg5 + 8)
        int128_t zmm9 = *(arg5 + 4)
        int128_t zmm10 = *arg5
        
        do
            int64_t r15_1 = sx.q(arg1[1].d)
            zmm7 = data_142d3f660
            int64_t rcx = *(*(arg3 + 0x18) + r13_1)
            zmm0.d = (*(rcx + (r8 << 2))).d f* zmm9.d
            zmm1.d = (*(rcx + (r9 << 2))).d f* zmm8.d
            zmm6.d = (*(rcx + (rdx << 2))).d f* zmm10.d
            int64_t zmm5
            zmm5.d = (*(rcx + (rdx << 2) + 4)).d f* zmm10.d
            zmm6.d = zmm6.d f+ zmm0.d
            zmm0.d = (*(rcx + (r8 << 2) + 4)).d f* zmm9.d
            zmm6.d = zmm6.d f+ zmm1.d
            zmm1.d = (*(rcx + (r9 << 2) + 4)).d f* zmm8.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm0.d = (*(rcx + (r8 << 2) + 8)).d f* zmm9.d
            zmm5.d = zmm5.d f+ zmm1.d
            zmm2 = *(rcx + (rdx << 2) + 8) f* zmm10.d f+ zmm0.d
            zmm1.d = (*(rcx + (r9 << 2) + 8)).d f* zmm8.d
            uint64_t var_c8_1 = (_mm_unpacklo_ps(zmm6, zmm5)).q
            float var_c0_1 = zmm2 f+ zmm1.d
            result = zx.q((r15_1 + 1).d)
            arg1[1].d = result.d
            
            if (result.d s> *(arg1 + 0xc))
                result = sub_14090a6a0(arg1)
                rdx = arg_18
                r8 = var_128_1
                r9 = var_120_1
            
            r13_1 += 0x10
            int64_t* rcx_4 = r15_1 * 0x60 + *arg1
            *(rcx_4 + 0x10) = 2.o
            rcx_4[1].d = i_1
            i_1 += 1
            *(rcx_4 + 0x20) = zmm7
            *rcx_4 = arg2
            *(rcx_4 + 0x30) = var_c8_1.o
            *(rcx_4 + 0x40) = var_b8
            *(rcx_4 + 0x50) = 0.o
        while (i_1 s< *(arg3 + 0x20))
return result
