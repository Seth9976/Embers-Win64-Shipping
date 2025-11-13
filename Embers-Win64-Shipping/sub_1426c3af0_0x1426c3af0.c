// 函数: sub_1426c3af0
// 地址: 0x1426c3af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rbx = arg2[1].d
int32_t rbx_1 = rbx - 1
float zmm7[0x4] = arg4
float zmm8[0x4] = arg3

if (rbx - 1 s>= 0)
    char* r15_1 = sx.q(rbx_1)
    int64_t rdi_2 = r15_1 * 0x18
    int64_t r12_2 = sx.q(rbx_1 + 1) * 0x18
    int64_t r13_1 = rdi_2
    int32_t temp2_1
    
    do
        int64_t rax_1 = *arg2
        int32_t zmm1 = *(rdi_2 + rax_1 + 4)
        uint128_t zmm0 = *(rdi_2 + rax_1)
        zmm7[0] = zmm7[0] f+ *(rdi_2 + rax_1 + 8)
        int32_t var_138 = zmm0.d
        int32_t var_134_1 = zmm1
        float var_130_1 = zmm7[0]
        zmm8[0] = zmm8[0] f+ *(rdi_2 + rax_1 + 8)
        zmm1 = *(rdi_2 + rax_1 + 4)
        int32_t var_12c = (*(rdi_2 + rax_1)).d
        int32_t var_128_1 = zmm1
        float var_124_1 = zmm8[0]
        void var_e8
        memset(&var_e8, 0, 0x88)
        void* rcx_2 = *arg1
        int32_t var_104_1 = arg1[1].d
        int32_t var_e0_1 = 0x3f800000
        char rax_3 = (arg1[0x11].d).b
        int32_t var_108 = 2
        int32_t rcx_3
        int32_t zmm6_1
        result, rcx_3, zmm6_1, zmm7, zmm8 = sub_141ecd380(rcx_2, &var_e8, &var_12c, &var_138, 
            &data_14399f720, rax_3, &var_108, &arg1[3], &data_143f3a660)
        
        if (result.b != 0)
            int64_t rax_4 = *arg2
            int32_t var_d0
            zmm0.d = var_d0.d f+ zmm6_1
            int64_t var_110_1 = 0
            int32_t var_118_1 = zmm0.d
            int32_t var_d8
            int32_t var_d4
            zmm0.q = (_mm_unpacklo_ps(var_d8, var_d4[0].q)).q
            *(rdi_2 + rax_4) = zmm0
            uint128_t var_120 = zmm0
            *(rdi_2 + rax_4 + 0x10) = var_110_1
            result = zx.q(result.b)
        else if (*(arg1 + 0x8c) == 1)
            rcx_3 = arg2[1].d
            int32_t rax_6 = rcx_3 - rbx_1
            
            if (rax_6 != 1)
                int64_t rcx_4 = *arg2
                memmove(rcx_4 + r13_1, r12_2 + rcx_4, (rax_6 - 1) * 0x18)
                rcx_3 = arg2[1].d
            
            arg2[1].d = rcx_3 - 1
            result = zx.q(result.b)
        
        if (rbx_1 s>= 0 && rbx_1 s< arg1[0x13].d)
            bool cond:1_1 = result.b != 0
            result = arg1[0x12]
            rcx_3.b = cond:1_1
            *(r15_1 + result) = rcx_3.b
        
        r12_2 -= 0x18
        r13_1 -= 0x18
        r15_1 -= 1
        rdi_2 -= 0x18
        temp2_1 = rbx_1
        rbx_1 -= 1
    while (temp2_1 - 1 s>= 0)

return result
