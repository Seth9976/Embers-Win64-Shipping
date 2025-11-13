// 函数: sub_1426811a0
// 地址: 0x1426811a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint64_t r8 = zx.q(arg1[1].d)

if (r8.d != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x55555556, arg2[1].d)
    uint32_t rdx_1 = (r8 * 3).d
    
    if (rdx_1 s> *(arg2 + 0xc))
        sub_1405dadb0(arg2, rdx_1)
        r8 = zx.q(arg1[1].d)
    
    int32_t rdx_3 = r8.d s/ 3
    
    if (rdx_3 s> *(arg3 + 0xc))
        sub_1405dadb0(arg3, rdx_3)
        r8 = zx.q(arg1[1].d)
    
    int64_t i_3 = sx.q(r8.d)
    
    if (r8.d s> 0)
        int64_t rbp_1 = 0
        int128_t zmm6
        int128_t var_38_1 = zmm6
        int128_t zmm7
        int128_t var_48_1 = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        int64_t i
        
        do
            float (* rcx_2)[0x4] = *arg1
            
            if (arg4[3].b == 0)
                *(arg4 + 0xc) = *(rcx_2 + rbp_1)
                int32_t rax_3 = *(rcx_2 + rbp_1 + 8)
                *(arg4 + 0x14) = rax_3
                *arg4 = *(arg4 + 0xc)
                arg4[1].d = rax_3
                arg4[3].b = 1
            else
                int64_t zmm0 = __minss_xmmss_memss((*arg4).d, *(rcx_2 + rbp_1)).q
                int32_t zmm1 = *(arg4 + 0xc)
                *arg4 = zmm0.d
                *(arg4 + 4) = __minss_xmmss_memss((*(rcx_2 + rbp_1 + 4)).d, *(arg4 + 4)).q.d
                arg4[1].d = __minss_xmmss_memss((*(rcx_2 + rbp_1 + 8)).d, arg4[1].d).q.d
                int32_t temp0_5 = __maxss_xmmss_memss(zmm1, *(rcx_2 + rbp_1))
                zmm0 = arg4[2].d
                *(arg4 + 0xc) = temp0_5
                arg4[2].d = __maxss_xmmss_memss(zmm0.d, *(rcx_2 + rbp_1 + 4)).q.d
                *(arg4 + 0x14) = __maxss_xmmss_memss(*(rcx_2 + rbp_1 + 8), *(arg4 + 0x14))
            
            int64_t r14_1 = sx.q(arg2[1].d)
            zmm6 = *(rcx_2 + rbp_1) ^ 0x80000000
            zmm8 = *(rcx_2 + rbp_1 + 8)
            zmm7 = *(rcx_2 + rbp_1 + 4) ^ 0x80000000
            int32_t rax_4 = (r14_1 + 1).d
            arg2[1].d = rax_4
            
            if (rax_4 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            *(*arg2 + (r14_1 << 2)) = zmm6.d
            int64_t r14_2 = sx.q(arg2[1].d)
            int32_t rax_6 = (r14_2 + 1).d
            arg2[1].d = rax_6
            
            if (rax_6 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            *(*arg2 + (r14_2 << 2)) = zmm8.d
            int64_t r14_3 = sx.q(arg2[1].d)
            int32_t rax_8 = (r14_3 + 1).d
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            rbp_1 += 0xc
            *(*arg2 + (r14_3 << 2)) = zmm7.d
            i = i_3
            i_3 -= 1
        while (i != 1)
        r8 = zx.q(arg1[1].d)
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = muls.dp.d(0x55555556, r8.d)
    result = zx.q(temp4_1 u>> 0x1f)
    int32_t i_4 = temp4_1 + result.d
    
    if (i_4 s> 0)
        int32_t rdi_1 = (temp0_1 u>> 0x1f) + temp0_1 + 1
        uint64_t i_2 = zx.q(i_4)
        uint64_t i_1
        
        do
            int64_t rsi_1 = sx.q(arg3[1].d)
            int32_t rax_10 = (rsi_1 + 1).d
            arg3[1].d = rax_10
            
            if (rax_10 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rsi_1 << 2)) = rdi_1 + 1
            int64_t rsi_2 = sx.q(arg3[1].d)
            int32_t rax_12 = (rsi_2 + 1).d
            arg3[1].d = rax_12
            
            if (rax_12 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rsi_2 << 2)) = rdi_1
            int64_t rsi_3 = sx.q(arg3[1].d)
            int32_t rax_14 = (rsi_3 + 1).d
            arg3[1].d = rax_14
            
            if (rax_14 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            result = *arg3
            int32_t rdx_12 = rdi_1 - 1
            rdi_1 += 3
            *(result + (rsi_3 << 2)) = rdx_12
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
