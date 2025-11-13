// 函数: sub_1426c3fa0
// 地址: 0x1426c3fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rbx = arg2[1].d
int32_t rbx_1 = rbx - 1
float zmm7[0x4] = arg4
float zmm8[0x4] = arg3

if (rbx - 1 s>= 0)
    void* r13_1 = &arg1[3]
    char* r15_1 = sx.q(rbx_1)
    int64_t rdi_2 = r15_1 * 0x18
    int64_t r12_2 = sx.q(rbx_1 + 1) * 0x18
    int64_t rbp_1 = rdi_2
    int32_t temp2_1
    
    do
        int64_t rax_1 = *arg2
        int32_t zmm1 = *(rdi_2 + rax_1 + 4)
        uint128_t zmm0 = *(rdi_2 + rax_1)
        zmm7[0] = zmm7[0] f+ *(rdi_2 + rax_1 + 8)
        int32_t var_128 = zmm0.d
        int32_t var_124_1 = zmm1
        float var_120_1 = zmm7[0]
        zmm8[0] = zmm8[0] f+ *(rdi_2 + rax_1 + 8)
        zmm1 = *(rdi_2 + rax_1 + 4)
        int32_t var_11c = (*(rdi_2 + rax_1)).d
        int32_t var_118_1 = zmm1
        float var_114_1 = zmm8[0]
        void var_e8
        memset(&var_e8, 0, 0x88)
        int32_t var_e0_1 = 0x3f800000
        int32_t rcx_3
        int32_t zmm6_1
        result, rcx_3, zmm6_1, zmm7, zmm8 = sub_141ec6a20(*arg1, &var_e8, &var_11c, &var_128, 
            (arg1[0x11].d).b, r13_1, &data_143f3a660)
        char r13_2 = result.b
        
        if (result.b != 0)
            result = *arg2
            int32_t var_d0
            zmm0.d = var_d0.d f+ zmm6_1
            int64_t var_100_1 = 0
            int32_t var_108_1 = zmm0.d
            int32_t var_d8
            int32_t var_d4
            zmm0.q = (_mm_unpacklo_ps(var_d8, var_d4[0].q)).q
            *(rdi_2 + result) = zmm0
            uint128_t var_110 = zmm0
            *(rdi_2 + result + 0x10) = var_100_1
        else if (*(arg1 + 0x8c) == 1)
            rcx_3 = arg2[1].d
            int32_t rax_4 = rcx_3 - rbx_1
            
            if (rax_4 != 1)
                int64_t rcx_4 = *arg2
                memmove(rcx_4 + rbp_1, r12_2 + rcx_4, (rax_4 - 1) * 0x18)
                rcx_3 = arg2[1].d
            
            result = zx.q(rcx_3 - 1)
            arg2[1].d = result.d
        
        if (rbx_1 s>= 0 && rbx_1 s< arg1[0x13].d)
            result = arg1[0x12]
            rcx_3.b = r13_2 != 0
            *(r15_1 + result) = rcx_3.b
        
        r12_2 -= 0x18
        r13_1 = &arg1[3]
        rbp_1 -= 0x18
        r15_1 -= 1
        rdi_2 -= 0x18
        temp2_1 = rbx_1
        rbx_1 -= 1
    while (temp2_1 - 1 s>= 0)

return result
