// 函数: sub_1414fdff0
// 地址: 0x1414fdff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr

if ((*(arg2 + 0x9c) & 0x400000) != 0)
    int64_t* rcx = *(arg2 + 0x80)
    uint64_t rdx = zx.q(*(arg1 + 0x10))
    int64_t arg_10 = 0
    int64_t* rax_1 = (*(*rcx + 0x40))(rcx, rdx, &arg_10)
    int64_t r15_1 = arg_10
    
    if (r15_1 == 0)
        r15_1 = *(arg2 + 0x80)
    
    result = sub_1421270f0(rax_1)
    
    if (result != 0)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        int128_t zmm9
        int128_t var_78_1 = zmm9
        int128_t zmm10
        int128_t var_88_1 = zmm10
        int128_t zmm11
        int128_t var_98_1 = zmm11
        int128_t zmm12
        int128_t var_a8_1 = zmm12
        uint8_t rcx_3 = (*(arg2 + 0x9c) u>> 0x17).b & 7
        int64_t var_158
        int128_t var_150
        void* var_140
        void* var_130
        int128_t var_118
        
        if (rcx_3 == 0)
            int64_t* rbx_3 = *(arg2 + 0x78)
            char var_1a0_4 = 1
            int32_t var_1a8_4 = 0
            void** rax_19
            int512_t zmm0_1
            rax_19, zmm0_1 =
                sub_142127800(rax_1, &var_130, &data_143ef0740, (*(*rbx_3 + 0x40))(rbx_3), arg5)
            int64_t var_138_1 = rax_19[1]
            int64_t rax_21 = *rbx_3
            var_140 = *rax_19
            zmm7 = var_140.o
            char var_1a0_5 = 1
            int32_t var_1a8_5 = 0
            void** rax_23 =
                sub_142127800(rax_1, &var_130, &data_143ef08a0, (*(rax_21 + 0x40))(rbx_3), zmm0_1)
            int64_t var_138_2 = rax_23[1]
            int64_t rax_25 = data_1439b6028
            var_140 = *rax_23
            int128_t zmm6_2 = var_140.o
            *(arg1 + 0x28) = rax_25
            var_158 = sub_141261c60(arg2)
            int32_t rax_27 = sub_141261c10(arg2, rax_1, &var_158)
            int32_t rax_28 = sub_141261bd0(arg2, rax_1, &var_158)
            void* rdx_15 = *(arg1 + 0x18)
            char var_1a0_6 = 0
            var_150 = zx.o(0)
            sub_141458e70(&var_150, rdx_15, arg4, arg2, arg6, 0)
            var_118 = zmm7
            int128_t var_108_1
            __builtin_memset(&var_108_1, 0, 0x20)
            int128_t var_e8_2 = zmm6_2
            uint64_t rax_31 = zx.q(*(arg4 + 0x30) - 0x8000) << 0x30 | zx.q(*(arg2 + 0x98))
            int128_t var_d8_1
            __builtin_memset(&var_d8_1, 0, 0x30)
            var_1a0_6.q = rax_1
            int32_t var_1a8_6
            var_1a8_6.q = r15_1
            result = sub_1410e6100(arg1, arg2, arg3, arg4, var_1a8_6, nullptr, arg1 + 0x28, 
                &var_118, rax_27, rax_28, rax_31, 0, &var_150)
        else if (rcx_3 u> 1)
            if (rcx_3 u<= 4)
                char var_1a0
                var_1a0.q = arg4
                result = sub_1414f0a60(arg1, arg2, arg3, arg6, arg5, result, var_1a0, r15_1, rax_1)
            else if (rcx_3 == 5)
                int64_t* rbx_1 = *(arg2 + 0x78)
                char var_1a0_1 = 1
                int32_t var_1a8_1 = 0
                void** rax_4
                int512_t zmm0
                rax_4, zmm0 =
                    sub_142127800(rax_1, &var_130, &data_143ef0cc0, (*(*rbx_1 + 0x40))(rbx_1), arg5)
                var_150:8.q = rax_4[1]
                var_150.q = *rax_4
                zmm7 = var_150
                char var_1a0_2 = 1
                int32_t var_1a8_2 = 0
                void** rax_8 =
                    sub_142127800(rax_1, &var_130, &data_143ef0e20, (*(*rbx_1 + 0x40))(rbx_1), zmm0)
                var_150:8.q = rax_8[1]
                var_150.q = *rax_8
                int128_t zmm6_1 = var_150
                *(arg1 + 0x28) = data_1439b7310
                var_158 = sub_141261c60(arg2)
                int32_t rax_12 = sub_141261c10(arg2, rax_1, &var_158)
                int32_t rax_13 = sub_141261bd0(arg2, rax_1, &var_158)
                char var_1a0_3 = 0
                var_140.o = zx.o(0)
                sub_141458e70(&var_140, *(arg1 + 0x18), arg4, arg2, arg6, 0)
                var_118 = zmm7
                int128_t var_108
                __builtin_memset(&var_108, 0, 0x20)
                int128_t var_e8_1 = zmm6_1
                uint64_t rax_16 = zx.q(*(arg4 + 0x30) - 0x8000) << 0x30 | zx.q(*(arg2 + 0x98))
                int128_t var_d8
                __builtin_memset(&var_d8, 0, 0x30)
                var_1a0_3.q = rax_1
                int32_t var_1a8_3
                var_1a8_3.q = r15_1
                result = sub_1410e6100(arg1, arg2, arg3, arg4, var_1a8_3, nullptr, arg1 + 0x28, 
                    &var_118, rax_12, rax_13, rax_16, 0, &var_140)

return result
