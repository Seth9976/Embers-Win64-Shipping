// 函数: sub_1426c41e0
// 地址: 0x1426c41e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rsi = arg3[1].d
int32_t rsi_1 = rsi - 1

if (rsi - 1 s>= 0)
    int64_t r14_2 = sx.q(rsi_1) * 0x18
    int64_t r12_1 = r14_2
    int64_t r15_2 = sx.q(rsi_1 + 1) * 0x18
    int32_t temp1_1
    
    do
        int64_t* rbx_2 = *arg3 + r14_2
        void var_b8
        memset(&var_b8, 0, 0x88)
        int32_t* rax_2 = arg2
        int32_t var_114_1 = (*(arg1 + 0xc)).d
        int64_t zmm1
        zmm1.d = (*rbx_2).d f- *rax_2
        float var_118_1 = arg1[1].d
        float var_110_1 = arg1[2].d
        float zmm0_1 = *(rbx_2 + 4) f- rax_2[1]
        int32_t var_128 = zmm1.d
        zmm1.d = rbx_2[1].d.d f- rax_2[2]
        int32_t var_b0_1 = 0x3f800000
        float var_124_1 = zmm0_1
        int32_t var_11c = 1
        int32_t var_120_1 = zmm1.d
        void var_d8
        float var_c8[0x4]
        float (* rax_4)[0x4] = sub_140ade170(sub_140adf3c0(&var_128, &var_d8), &var_c8)
        void* rcx_4 = *arg1
        char rax_6 = (arg1[0x11].d).b
        float var_e8[0x4] = *rax_4
        result = sub_141ecd380(rcx_4, &var_b8, arg2, rbx_2, &var_e8, rax_6, &var_11c, &arg1[3], 
            &data_143f3a660)
        
        if (result.b != 0)
            int32_t var_a0
            int32_t var_100_1 = var_a0
            result = *arg3
            int64_t var_f8_1 = 0
            int64_t var_a8
            uint128_t zmm0_3
            zmm0_3.q = var_a8
            uint128_t var_108 = zmm0_3
            *(r14_2 + result) = zmm0_3
            *(r14_2 + result + 0x10) = var_f8_1
        else if (*(arg1 + 0x8c) == 1)
            int32_t rcx_5 = arg3[1].d
            int32_t rax_9 = rcx_5 - rsi_1
            
            if (rax_9 != 1)
                int64_t rcx_6 = *arg3
                memmove(rcx_6 + r12_1, r15_2 + rcx_6, (rax_9 - 1) * 0x18)
                rcx_5 = arg3[1].d
            
            result = zx.q(rcx_5 - 1)
            arg3[1].d = result.d
        
        r15_2 -= 0x18
        r12_1 -= 0x18
        r14_2 -= 0x18
        temp1_1 = rsi_1
        rsi_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
