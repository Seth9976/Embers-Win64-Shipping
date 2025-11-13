// 函数: sub_141edbda0
// 地址: 0x141edbda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x5c0))()

if (result.b != 0 && (*(arg1 + 0x8a) & 1) != 0)
    int64_t* result_1 = arg1[0x97]
    
    if (result_1 == 0)
        result = (*(arg1[0x28] + 0x28))(&arg1[0x28])
        result_1 = result
        arg1[0x97] = result
    
    int64_t* rsi_1 = arg7
    int64_t r12
    
    if (arg9 == 0 || rsi_1 != 0)
        r12.b = 0
    label_141edbe5b:
        result = sub_141ee63a0(result_1, arg2[0])
        
        if (result.d != 0xffffffff)
            float __saved_zmm6_1[0x4] = arg5
            sub_141ed54b0(result_1, result.d, arg1)
            int64_t rbx_1 = arg8
            float var_78
            int64_t var_68
            int32_t rcx_4
            uint128_t zmm0_1
            float zmm1[0x4]
            int64_t zmm2_1
            
            if (arg10 == 0)
                uint64_t* rax_3 = sub_14200cce0(&var_68, arg3, arg1)
                arg5 = zx.o(*rax_3)
                rcx_4 = rax_3[1].d
            else
                sub_141ea3bd0(rsi_1, rbx_1, &var_78, &var_68)
                int32_t* rax_2 = arg3
                zmm1 = var_78
                zmm1[0] = zmm1[0] f+ *rax_2
                int32_t var_70
                zmm0_1.d = var_70.d f+ rax_2[2]
                int32_t var_74
                zmm2_1.d = var_74.d f+ rax_2[1]
                rcx_4 = zmm0_1.d
                arg5 = _mm_unpacklo_ps(zmm1, zmm2_1)
            
            zmm2_1 = arg2[0].q
            int32_t rax_5 = arg4[1].d
            int64_t rax_6 = *arg1
            float* var_a8_1 = &var_78
            var_78.q = *arg4
            var_68 = arg5.q
            (*(rax_6 + 0xa98))(arg1, result_1, zmm2_1, &var_68, var_a8_1, rsi_1, rbx_1, arg9, 
                arg10, arg11, var_78, rax_5, var_68, rcx_4, arg6, __saved_zmm6_1)
            int64_t* rcx_8 = arg1[0x16]
            
            if (rcx_8 != 0)
                int32_t var_60_3 = rcx_4
                var_68 = arg5.q
                var_a8_1.b = 1
                float zmm8[0x4]
                sub_141f49c70(rcx_8, &var_68, 0, 0, arg5, arg2, zmm8, var_a8_1.b)
            
            int32_t rax_9 = arg4[1].d
            *(arg1 + 0xc4) = *arg4
            *(arg1 + 0xcc) = rax_9
            int64_t r15_2 = *(arg1[0x29] + 0x298)
            (*(*arg1 + 0x5b0))(arg1, zx.q(arg11))
            
            if (r12.b != 0 && r15_2 != 0)
                void* rax_12 = arg1[0x16]
                
                if (rax_12 != 0)
                    zmm1 = *(rax_12 + 0x1d0)
                    int64_t rax_13 = *arg1
                    var_78 = zmm1[0]
                    zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    rsi_1 = nullptr
                    float var_70_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                    int32_t var_74_1 = zmm0_1.d
                    var_a8_1 = nullptr
                    (*(rax_13 + 0x8a0))(arg1, &var_78, &arg1[0x5e], 0, 0)
                    
                    if (((arg1[0x5e].d).b & 3) != 3)
                        int32_t arg_8
                        arg_8.q = 0
                        rbx_1 = 0
                    else
                        int64_t* rax_16 = sub_140d3c6e0(arg1 + 0x36c)
                        rbx_1 = *(arg1 + 0x374)
                        rsi_1 = rax_16
            
            int64_t r9_2
            r9_2.b = 1
            (*(*arg1 + 0x6f0))(arg1, rsi_1, rbx_1, r9_2, var_a8_1)
            (*(*arg1 + 0x9c0))(arg1)
            int64_t rax_19 = *arg1
            *(arg1 + 0x387) |= 0x20
            (*(rax_19 + 0x618))(arg1)
            void* rcx_15 = arg1[0x16]
            float* rax_20
            
            if (rcx_15 == 0)
                int32_t var_60_4 = data_143dbb200
                rax_20 = &var_68
                var_68 = data_143dbb1f8.q
            else
                zmm1 = *(rcx_15 + 0x1d0)
                rax_20 = &var_78
                var_78 = zmm1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                float var_70_3 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                int32_t var_74_2 = zmm0_1.d
            
            int32_t rax_22 = rax_20[2]
            arg1[0x4a] = *rax_20
            arg1[0x4b].d = rax_22
            
            if (rcx_15 == 0)
                var_68.o = data_14399f720
            else
                var_68.o = *(rcx_15 + 0x1c0)
            
            int32_t rax_23 = *(arg1 + 0xcc)
            *(arg1 + 0x240) = var_68.o
            *(arg1 + 0x25c) = *(arg1 + 0xc4)
            *(arg1 + 0x264) = rax_23
            result = (*(*arg1 + 0x460))(arg1)
            result_1[0x14].d |= 1
    else
        r12.b = 1
        
        if (arg10 == 0)
            goto label_141edbe5b

return result
