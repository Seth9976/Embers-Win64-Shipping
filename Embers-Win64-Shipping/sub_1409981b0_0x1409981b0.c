// 函数: sub_1409981b0
// 地址: 0x1409981b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
float zmm6[0x4] = arg2[2].d
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
int32_t i = 0

if (*(arg3 + 0x20) s> 0)
    int64_t* rdi_1 = *arg2
    int64_t* r12_1 = nullptr
    int64_t r13_1 = sx.q(arg2[1].d)
    int64_t rdx_1 = sx.q(*(arg2 + 0xc)) << 4
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int64_t arg_8 = rdx_1
    
    do
        bool cond:1_1 = (*(arg3 + 0x10) & 1) == 0
        float (* rcx)[0x4] = *(r12_1 + *(arg3 + 0x18))
        float zmm0[0x4] = rcx[r13_1]
        float zmm1[0x4] = *(rcx + rdx_1)
        float var_e8[0x4] = zmm0
        float var_d8[0x4] = zmm1
        int128_t* rax_1
        
        if (cond:1_1)
            float (* rax_2)[0x4] = &var_e8
            
            if (temp0[0] > 0.5f)
                rax_2 = &var_d8
            
            float var_b8[0x4]
            rax_1 = &var_b8
            var_b8 = *rax_2
        else
            float var_c8[0x4]
            rax_1 = &var_c8
            var_c8 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, zmm0), temp0), zmm0)
        
        int64_t rsi_1 = sx.q(rdi_1[1].d)
        zmm7 = *rax_1
        char var_a8_1 = 1
        int64_t var_68_1 = 0
        result = (rsi_1 + 1).d
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            result = sub_14090a6a0(rdi_1)
            rdx_1 = arg_8
        
        r12_1 = &r12_1[2]
        int64_t* rcx_4 = rsi_1 * 0x60 + *rdi_1
        *(rcx_4 + 0x10) = var_a8_1.o
        rcx_4[1].d = i
        i += 1
        *(rcx_4 + 0x20) = zmm7
        *rcx_4 = arg1
        float var_88[0x4]
        *(rcx_4 + 0x30) = var_88
        float var_78[0x4]
        *(rcx_4 + 0x40) = var_78
        *(rcx_4 + 0x50) = var_68_1.o
    while (i s< *(arg3 + 0x20))

return result
