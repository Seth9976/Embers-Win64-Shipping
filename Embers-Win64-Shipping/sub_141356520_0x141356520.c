// 函数: sub_141356520
// 地址: 0x141356520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t i = 0

if (*(arg1 + 0x44) u> 0)
    do
        result = *(arg1 + 0x40)
        
        if (not(test_bit(result, i)))
            void* rcx = *(arg1 + 0x58)
            int64_t rsi_1 = *(arg1 + 0x60)
            void* r14_2 = sx.q(i) * 0x5240 + **(arg1 + 0x38)
            int32_t var_c8 = *(rcx + 0x44)
            uint128_t zmm0 = *(r14_2 + 0x1598)
            int64_t* rcx_1 = *(r14_2 + 0x5150)
            int32_t var_c4_1 = *(rcx + 0x48)
            int64_t rax_4 = zmm0.q
            int32_t var_c0_1 = rax_4.d
            uint32_t var_bc_1 = (rax_4 u>> 0x20).d
            int64_t rax_6 = _mm_bsrli_si128(zmm0, 8).q
            int32_t var_b8_1 = rax_6.d
            uint32_t var_b4_1 = (rax_6 u>> 0x20).d
            int128_t var_88
            sub_1419a2ec0(rcx_1, &var_88, &data_143ed5e80, 0)
            int64_t rax_8 = *(arg1 + 0x48)
            int128_t zmm2 = var_88
            int64_t var_90_1 = *(arg1 + 0x50)
            int64_t var_38_1 = data_14395da00
            int64_t var_30_1 = data_14395d9e8
            int64_t var_28_1 = data_1439c9210
            void* var_a8_1 = arg1 + 0x48
            int128_t var_78 = arg2.o
            int64_t var_68_1 = rsi_1
            int128_t var_58 = zmm2
            int128_t var_48_1 = rax_8.o
            result = sub_141338690(arg2, r14_2, &var_c8, &var_c8, &var_58, 0, &var_78)
        
        i += 1
    while (i u< *(arg1 + 0x44))

return result
