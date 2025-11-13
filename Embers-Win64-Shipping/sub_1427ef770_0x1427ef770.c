// 函数: sub_1427ef770
// 地址: 0x1427ef770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = arg7
*r12 = 0xffffffff
int32_t result = (*(*arg1 + 0xc8))()
int32_t rbx = 0

if (result != 0)
    do
        int64_t rax_1 = *arg1
        arg7 = nullptr
        int32_t var_198
        void** const* var_190
        int16_t* var_188
        int64_t* var_180
        int64_t var_178
        int64_t var_170
        int32_t var_168
        (*(rax_1 + 0xd0))(arg1, &arg7, 1, zx.q(rbx), var_198, var_190, var_188, var_180, var_178, 
            var_170, var_168)
        float var_c8[0x4]
        int32_t zmm6_1
        int32_t zmm7_1
        int32_t zmm8_1
        arg4, zmm6_1, zmm7_1, zmm8_1 = sub_141ecfe50(&var_c8, arg7, arg1, arg4)
        int64_t var_150_1 = 0
        int64_t var_158 = 0
        char var_146_1 = 0
        int16_t var_148_1 = arg8[1].w
        int128_t* rax_7
        
        if ((*(arg8 + 8) | *arg8 | *(arg8 + 0xc) | *(arg8 + 4)) == 0)
            int64_t* rcx_2 = arg7
            void var_a8
            rax_7 = (*(*rcx_2 + 0xb0))(rcx_2, &var_a8)
        else
            int128_t var_d8
            rax_7 = &var_d8
            var_d8 = *arg8
        
        int64_t* rcx_3 = arg7
        var_158.o = *rax_7
        void var_98
        (*(*rcx_3 + 0x40))(rcx_3, &var_98)
        int128_t zmm0_1 = data_142fc5a80
        var_168 = zmm8_1
        var_170 = arg10
        var_178 = arg9
        var_180 = &var_158
        int64_t var_130_1 = 0
        int64_t var_128_1 = 0
        int16_t var_118_1 = 0
        int64_t var_114_1 = 0
        int32_t var_10c_1 = 0
        char var_f0_1 = 0
        int64_t var_e8_1 = 0
        int64_t var_e0_1 = 0
        int16_t arg_20
        var_188 = &arg_20
        void** const var_138 = &data_14325a568
        var_190 = &var_138
        var_198 = zmm7_1
        int32_t var_120_1 = 0xffffffff
        arg_20 = *arg5
        (*(*arg2 + 0x2f8))(arg2, &var_98, &var_c8, arg3, var_198, var_190, var_188, var_180, 
            var_178, var_170, var_168)
        
        if (var_f0_1 != 0)
            arg4 = zmm0_1:0xc.d
            
            if (not(arg4.d f>= zmm6_1))
                *arg6 = var_130_1.o
                arg6[1].q = var_120_1.q
                *(arg6 + 0x18) = var_118_1
                *(arg6 + 0x1c) = var_114_1.o
                *(arg6 + 0x2c) = zmm0_1:4.d.d
                arg6[3].d = zmm0_1:8.d.d
                *(arg6 + 0x34) = arg4.d
                int32_t var_f8
                *(arg6 + 0x38) = var_f8
                *r12 = rbx
        
        rbx += 1
    while (rbx u< result)

result.b = *r12 != 0xffffffff
return result
