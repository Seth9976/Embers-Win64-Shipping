// 函数: sub_141b2c7a0
// 地址: 0x141b2c7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg4[0x86]

if (result != 0)
    result = *(result + 0x60)
    
    if (result != 0)
        if (arg7 == 0)
        label_141b2c80f:
            
            if (arg14 != 0)
                sub_141f477c0(arg4, 2)
            
            void* rax = sub_141b211f0(arg4)
            int64_t var_68
            void** const var_58
            int64_t arg_20
            int32_t arg_30
            
            if (rax != 0)
                sub_141b21360(arg1 + 0x30, &arg_20, &arg_30)
                int64_t zmm0_2 = *(arg3 + 0x2d0)
                int64_t rbx_1 = arg_20
                var_58 = &data_143050858
                var_68 = zmm0_2
                int64_t (* var_50_1)(int64_t* arg1) = sub_141b30080
                int32_t var_60_1 = *(arg3 + 0x2d8)
                sub_1405c5900(arg3 + 0xf8, rbx_1, &var_58, rax, *(arg3 + 0x2dc), &var_68)
                int512_t zmm3
                zmm3.o = arg8
                int64_t* var_b0_1
                var_b0_1.d = arg10
                char var_b8_1
                var_b8_1.d = arg9
                return (*(*(rax + 0x268) + 0x28))(rax + 0x268, arg7, 
                    zx.q((rbx_1 u>> 0x20).d * 0x17 + rbx_1.d), zmm3, var_b8_1, var_b0_1, arg11)
            
            result = sub_141f3b9f0(arg4)
            void* result_1 = result
            
            if (result != 0)
                result = sub_140d21950(result_1, sub_141ae8e30())
                
                if (result != 0)
                    int64_t rdx_4 = *result
                    result = (*(rdx_4 + 0x10))(result, rdx_4)
                    result_1 = result
            
            if (result_1 != 0)
                int32_t var_78
                sub_141b1fc70(arg1 + 0x58, &var_78, &arg_30)
                int64_t rax_7 = sx.q(var_78)
                void* const rax_9
                
                if (rax_7.d == 0xffffffff)
                    rax_9 = nullptr
                else
                    rax_9 = rax_7 * 0x1c + *(arg1 + 0x58)
                
                void* rcx_10 = rax_9 + 8
                
                if (rax_9 == 0)
                    rcx_10 = nullptr
                
                int32_t rax_10
                
                if (rcx_10 == 0)
                    rax_10 = -1
                else
                    rax_10 = *(rcx_10 + 8)
                
                uint32_t zmm1[0x4] = *(arg7 + 0x94)
                uint32_t zmm2[0x4] = 0x3f800000
                bool cond:2_1 = __andps_xmmxud_memxud(zmm1, data_142d3f770)[0] f> 9.99999994e-09f
                arg_20.d = rax_10
                
                if (not(cond:2_1))
                    zmm1 = 0x3f800000
                
                zmm2[0] = 1f f/ zmm1[0]
                uint32_t var_a0_1 = arg10[0]
                zmm2[0] = zmm2[0] f* arg8
                zmm2[0] = zmm2[0] f* arg9
                char var_a8
                var_a8.d = zmm2[0]
                char var_b8
                var_b8.q = arg7
                int64_t var_70
                sub_140d3a3a0(&var_70, 
                    sub_141e2f070(arg5, arg4, result_1, &arg_20, var_b8, zmm2[0], var_a8, var_a0_1, 
                        0, arg11, arg12))
                int32_t rdx_8
                result, rdx_8 = sub_140d3e110(&var_70)
                
                if (result.b != 0)
                    int32_t r9_5 = (arg_30 - arg6) ^ arg6 u>> 0xd
                    int32_t r8_8 = (0x9e3779b9 - arg6 - r9_5) ^ r9_5 << 8
                    int32_t rdx_12 = (arg6 - r8_8 - r9_5) ^ r8_8 u>> 0xd
                    int32_t r9_8 = (r9_5 - r8_8 - rdx_12) ^ rdx_12 u>> 0xc
                    int32_t r8_11 = (r8_8 - r9_8 - rdx_12) ^ r9_8 << 0x10
                    int32_t rdx_15 = (rdx_12 - r8_11 - r9_8) ^ r8_11 u>> 5
                    int32_t r9_11 = (r9_8 - r8_11 - rdx_15) ^ rdx_15 u>> 3
                    int32_t r8_14 = (r8_11 - r9_11 - rdx_15) ^ r9_11 << 0xa
                    void* rax_29 = sub_141aefef0(arg1 + 0x58, 
                        (rdx_15 - r8_14 - r9_11) ^ r8_14 u>> 0xf, &arg_30)
                    *rax_29 = var_70
                    *(rax_29 + 8) = arg_20.d
                    sub_140d3a3a0(&var_78, arg7)
                    var_78.q = var_78.q
                    sub_141b21360(arg1 + 0x30, &var_68, &var_78)
                    sub_140d3a3a0(&var_78, result_1)
                    void** const var_48 = &data_143059ad8
                    int64_t var_40_1 = var_78.q
                    int32_t var_38_1 = arg_20.d
                    void* rax_33 = sub_140d3c6e0(&var_70)
                    int64_t var_50
                    var_50.d = *(arg3 + 0x2d8)
                    char rdx_23 = *(arg3 + 0x2dc)
                    var_58 = *(arg3 + 0x2d0)
                    sub_1405c5900(arg3 + 0xf8, var_68, &var_48, rax_33, rdx_23, &var_58)
                    result = sub_141e02fc0(result_1, arg_20.d)
                    *(result + 0x28) = arg12
                
                if (arg13 != 0)
                    rdx_8.b = 2
                    return sub_141e0ba10(result_1, rdx_8.b)
        else
            int64_t rcx = *(arg7 + 0x38)
            
            if (rcx != 0 && result == rcx)
                goto label_141b2c80f

return result
