// 函数: sub_141f818d0
// 地址: 0x141f818d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[0x10].d != 0)
    uint128_t zmm0
    zmm0.d = arg4.d f- arg3.d
    int32_t result_1 = 0
    uint64_t r12_1 = 0
    uint64_t var_78 = 0
    zmm0.d = zmm0.d f/ arg2.d
    int64_t var_70_1 = 0
    zmm0.d = zmm0.d f- 1f
    int32_t rdx_1 = int.d(zmm0.d)
    
    if (rdx_1 s> 0)
        sub_1405c5570(&var_78, rdx_1)
        result_1 = var_70_1.d
        r12_1 = var_78
    
    uint128_t zmm6
    zmm6.d = arg2.d f+ arg3.d
    uint128_t zmm9
    
    if (not(zmm6.d f>= arg4.d))
        uint128_t zmm8
        
        do
            zmm0, zmm6, zmm8, zmm9 = sub_141f87210(arg1, zmm6, zx.o(0))
            int64_t result_2 = sx.q(result_1)
            result_1 = (result_2 + 1).d
            var_70_1.d = result_1
            
            if (result_1 s> var_70_1:4.d)
                sub_1405a4d70(&var_78)
                result_1 = var_70_1.d
                r12_1 = var_78
            
            *(r12_1 + (result_2 << 3)) = zmm6.d
            zmm6.d = zmm6.d f+ zmm9.d
            *(r12_1 + (result_2 << 3) + 4) = zmm0.d
        while (zmm6.d f< zmm8.d)
    
    result = sx.q(result_1)
    uint64_t rbp_1 = r12_1
    int64_t r13_1 = r12_1 + (result << 3)
    
    if (r12_1 != r13_1)
        do
            int64_t r8_1 = sx.q(arg1[0x10].d)
            int32_t rbx_1 = 0
            zmm9 = *(rbp_1 + 4)
            result = nullptr
            zmm6 = *rbp_1
            int32_t arg_8
            void* rcx_7
            int32_t r8_4
            
            if (r8_1.d s<= 0)
            label_141f81a43:
                int32_t rdi_1 = 0
                int32_t rax_1 = data_143a2d8ec + 1
                int64_t rbx_2 = 0
                data_143a2d8ec = rax_1
                arg_8 = rax_1
                
                if (r8_1.d s> 0)
                    int32_t* rax_2 = arg1[0xf]
                    
                    while (not(zmm6.d f<= *rax_2))
                        rdi_1 += 1
                        rbx_2 += 1
                        rax_2 = &rax_2[2]
                        
                        if (rbx_2 s>= r8_1)
                            break
                
                int32_t rsi_1 = arg1[0x10].d
                arg1[0x10].d = rsi_1 + 1
                
                if (rsi_1 + 1 s> *(arg1 + 0x84))
                    sub_1405a4d70(&arg1[0xf])
                
                int64_t rdx_4 = arg1[0xf] + (sx.q(rdi_1) << 3)
                memmove(rdx_4 + 8, rdx_4, (rsi_1 - rdi_1) << 3)
                int64_t rax_5 = arg1[0xf]
                rcx_7 = &arg1[1]
                r8_4 = rdi_1
                *(rax_5 + (rbx_2 << 3)) = zmm6.d
                *(rax_5 + (rbx_2 << 3) + 4) = zmm9.d
            else
                uint128_t* r9_1 = arg1[0xf]
                uint128_t* rcx_3 = r9_1
                
                while (true)
                    arg2 = *rcx_3
                    zmm0.d = arg2.d f- zmm6.d
                    
                    if (_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999975e-05f)
                        *(r9_1 + (result << 3) + 4) = zmm9.d
                        
                        if (rbx_1 s< 0)
                            goto label_141f81ad9
                        
                        result = (*(*arg1 + 8))(arg1)
                        
                        if (rbx_1 s>= result.d)
                            goto label_141f81ad9
                        
                        rcx_7 = &arg1[1]
                        
                        if (rbx_1 s< arg1[0xc].d)
                            result = *(rcx_7 + 0x50)
                            
                            if (result + (sx.q(rbx_1) << 2) != 0)
                                goto label_141f81ad9
                        
                        r8_4 = rbx_1
                        int32_t rax_8 = data_143a2d8ec + 1
                        data_143a2d8ec = rax_8
                        arg_8 = rax_8
                        break
                    
                    if (arg2.d f> zmm6.d)
                        goto label_141f81a43
                    
                    rbx_1 += 1
                    result += 1
                    rcx_3 += 8
                    
                    if (result s>= r8_1)
                        goto label_141f81a43
            
            result = sub_141f7f180(rcx_7, &arg_8, r8_4)
        label_141f81ad9:
            rbp_1 += 8
        while (rbp_1 != r13_1)
    
    if (r12_1 != 0)
        return sub_140a74f90(r12_1)

return result
