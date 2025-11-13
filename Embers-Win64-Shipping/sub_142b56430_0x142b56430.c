// 函数: sub_142b56430
// 地址: 0x142b56430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x60)
char r15 = arg3
uint128_t zmm6 = arg2

if (result == 0)
label_142b56566:
    result.b = 0
else
    while (true)
        result = sub_142ae72d0(result, 0)
        uint128_t zmm0 = zx.o(*result)
        
        if (r15 != 0)
            zmm0.q f- zmm6.q
        
        uint128_t var_60
        uint64_t rdi_3
        uint64_t r14_1
        
        if (r15 == 0 || is_unordered.q(zmm0.q, zmm6.q) || not(zmm0.q f== zmm6.q))
            if (zmm6.q f<= zmm0.q)
                goto label_142b56566
            
            void* rcx_1 = *(arg1 + 0x60)
            int32_t rbx_2 = *(rcx_1 + 8) - 1
            result = sub_142ae72d0(rcx_1, rbx_2)
            zmm0 = zx.o(*result)
            
            if (r15 != 0)
                zmm0.q f- zmm6.q
            
            if (r15 != 0 && not(is_unordered.q(zmm0.q, zmm6.q)) && zmm0.q f== zmm6.q)
                goto label_142b565df
            
            if (zmm6.q f<= zmm0.q)
                int32_t rbx_5 = rbx_2 - 1
                
                if (rbx_2 - 1 s>= 0)
                    int32_t temp1_1
                    
                    do
                        result = sub_142ae72d0(*(arg1 + 0x60), rbx_5)
                        zmm0 = zx.o(*result)
                        
                        if (zmm6.q f> zmm0.q)
                            break
                        
                        if (r15 != 0)
                            zmm0.q f- zmm6.q
                            
                            if (not(is_unordered.q(zmm0.q, zmm6.q)) && zmm0.q f== zmm6.q)
                                break
                        
                        temp1_1 = rbx_5
                        rbx_5 -= 1
                    while (temp1_1 - 1 s>= 0)
                
                goto label_142b565df
            
            void* rcx_2 = *(arg1 + 0x58)
            
            if (rcx_2 == 0)
                goto label_142b565df
            
            int64_t* rax = sub_142ae72d0(rcx_2, 0)
            uint64_t rax_1 = sub_142ae72d0(*(arg1 + 0x58), 1)
            int64_t rdi_1 = *rax
            r14_1 = rax_1
            int32_t rax_2 = sub_141b60020(rax_1)
            int64_t arg_8
            char rax_4 =
                (*(rdi_1 + 0x48))(rax, zmm6, zx.q(sub_1405f8de0(r14_1)), zx.q(rax_2), r15, &arg_8)
            int64_t rdi_2 = *r14_1
            int32_t rax_5 = sub_141b60020(rax)
            int64_t var_68
            result =
                (*(rdi_2 + 0x48))(r14_1, zmm6, zx.q(sub_1405f8de0(rax)), zx.q(rax_5), r15, &var_68)
            arg2 = zx.o(arg_8)
            
            if (rax_4 == 0)
                if (result.b == 0)
                    goto label_142b56566
                
                goto label_142b56589
            
            if (result.b == 0)
            label_142b5659e:
                rdi_3 = r14_1
                var_60.q = arg2.q
                r14_1 = rax
            else
            label_142b56589:
                zmm0 = zx.o(var_68)
                
                if (arg2.q f> zmm0.q)
                    goto label_142b5659e
                
                var_60.q = zmm0.q
                rdi_3 = rax
        else
        label_142b565df:
            var_60 = *result
            rdi_3 = var_60:8.q
            r14_1 = result[2]
        
        int32_t rax_7 = sub_1405f8de0(r14_1)
        
        if (sub_1405f8de0(rdi_3) == rax_7)
            int32_t rax_9 = sub_141b60020(r14_1)
            
            if (sub_141b60020(rdi_3) == rax_9)
                result = *(arg1 + 0x60)
                r15 = 0
                zmm6 = zx.o(var_60.q)
                
                if (result == 0)
                    goto label_142b56566
                
                continue
        
        *arg4 = var_60.q
        *arg5 = rdi_3
        *arg6 = r14_1
        result.b = 1
        break

return result
