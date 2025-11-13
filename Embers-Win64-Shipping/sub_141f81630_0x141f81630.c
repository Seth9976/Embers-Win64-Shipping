// 函数: sub_141f81630
// 地址: 0x141f81630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[0xf].d != 0)
    uint128_t zmm0
    zmm0.d = arg5.d f- arg3.d
    int32_t result_1 = 0
    uint64_t r14_1 = 0
    uint64_t var_68 = 0
    zmm0.d = zmm0.d f/ arg2.d
    int64_t var_60_1 = 0
    zmm0.d = zmm0.d f- 1f
    int32_t rdx_1 = int.d(zmm0.d)
    
    if (rdx_1 s> 0)
        arg4 = sub_1405c5570(&var_68, rdx_1)
        result_1 = var_60_1.d
        r14_1 = var_68
    
    uint128_t zmm6
    zmm6.d = arg2.d f+ arg3.d
    
    if (not(zmm6.d f>= arg5.d))
        uint128_t zmm7
        
        do
            int32_t zmm8_1
            zmm0, arg4, zmm6, zmm7, zmm8_1 = sub_141f86ef0(arg1, zmm6, zx.o(0))
            int64_t result_2 = sx.q(result_1)
            result_1 = (result_2 + 1).d
            var_60_1.d = result_1
            
            if (result_1 s> var_60_1:4.d)
                arg4 = sub_1405a4d70(&var_68)
                result_1 = var_60_1.d
                r14_1 = var_68
            
            *(r14_1 + (result_2 << 3)) = zmm6.d
            zmm6.d = zmm6.d f+ zmm8_1
            *(r14_1 + (result_2 << 3) + 4) = zmm0.d
        while (zmm6.d f< zmm7.d)
    
    result = sx.q(result_1)
    uint64_t rbp_1 = r14_1
    int64_t r15_1 = r14_1 + (result << 3)
    
    if (r14_1 != r15_1)
        do
            int64_t rcx_3 = sx.q(arg1[0xf].d)
            int32_t rbx_1 = 0
            arg5 = *(rbp_1 + 4)
            int64_t rax = 0
            arg3 = *rbp_1
            int32_t arg_8
            
            if (rcx_3.d s<= 0)
            label_141f8179a:
                int32_t rax_2 = data_143a2d8ec + 1
                int32_t var_70_1 = rax_2
                char var_78_1 = 0
                data_143a2d8ec = rax_2
                result, arg4 = sub_141f7f6d0(arg1, &arg_8, arg3.d, arg4)
            else
                void* r8_1 = arg1[0xe]
                uint128_t* rcx_4 = r8_1 + 4
                
                while (true)
                    arg2 = *rcx_4
                    zmm0.d = arg2.d f- arg3.d
                    
                    if (_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999975e-05f)
                        *(rax * 0x1c + r8_1 + 8) = arg5.d
                        int32_t rax_5
                        
                        if (rbx_1 s>= 0)
                            rax_5, arg4 = (*(*arg1 + 8))(arg1)
                        
                        if (rbx_1 s< 0 || rbx_1 s>= rax_5)
                            result = nullptr
                            arg_8 = 0
                        else
                            int64_t rdi_1 = sx.q(rbx_1)
                            
                            if (rbx_1 s>= arg1[0xc].d || arg1[0xb] + (rdi_1 << 2) == 0)
                                int32_t rax_8 = data_143a2d8ec + 1
                                data_143a2d8ec = rax_8
                                arg_8 = rax_8
                                arg4 = sub_141f7f180(&arg1[1], &arg_8, rbx_1)
                            
                            if (rbx_1 s>= arg1[0xc].d)
                                result = zx.q(*nullptr)
                                arg_8 = result.d
                            else
                                result = zx.q(*(arg1[0xb] + (rdi_1 << 2)))
                                arg_8 = result.d
                        
                        break
                    
                    if (arg2.d f> arg3.d)
                        goto label_141f8179a
                    
                    rbx_1 += 1
                    rax += 1
                    rcx_4 += 0x1c
                    
                    if (rax s>= rcx_3)
                        goto label_141f8179a
            rbp_1 += 8
        while (rbp_1 != r15_1)
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
