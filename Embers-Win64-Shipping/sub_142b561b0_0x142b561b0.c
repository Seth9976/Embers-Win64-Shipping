// 函数: sub_142b561b0
// 地址: 0x142b561b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12
int64_t* var_10 = r12
uint64_t result = *(arg1 + 0x60)
char rbp = arg3
uint128_t zmm7
uint128_t var_48 = zmm7
uint128_t zmm6 = arg2

if (result == 0)
label_142b56304:
    result.b = 0
else
    uint64_t var_50
    uint64_t r14_1 = var_50
    uint64_t var_58
    uint64_t rsi_1 = var_58
    int64_t var_60
    zmm7 = zx.o(var_60)
    
    while (true)
        r12.b = 0
        result = sub_142ae72d0(result, 0)
        uint128_t zmm0 = zx.o(*result)
        
        if (zmm0.q f> zmm6.q)
        label_142b563a1:
            var_60.o = *result
            rsi_1 = var_58
            zmm7 = zx.o(var_60)
            r14_1 = *(result + 0x10)
        else
            if (rbp != 0)
                zmm0.q f- zmm6.q
            
            if (rbp != 0 && not(is_unordered.q(zmm0.q, zmm6.q)) && zmm0.q f== zmm6.q)
                goto label_142b563a1
            
            void* rcx_1 = *(arg1 + 0x60)
            int32_t rbx_1 = *(rcx_1 + 8)
            result = sub_142ae72d0(rcx_1, rbx_1 - 1)
            uint64_t result_1 = result
            zmm0 = zx.o(*result)
            
            if (rbp != 0)
                zmm0.q f- zmm6.q
            
            if (rbp != 0 && not(is_unordered.q(zmm0.q, zmm6.q)) && zmm0.q f== zmm6.q)
                goto label_142b563a1
            
            if (zmm6.q f< zmm0.q)
                int32_t i = rbx_1 - 2
                
                while (i s> 0)
                    uint64_t result_2 = sub_142ae72d0(*(arg1 + 0x60), i)
                    zmm0 = zx.o(*result_2)
                    
                    if (zmm6.q f> zmm0.q)
                        break
                    
                    if (rbp == 0)
                        zmm0.q f- zmm6.q
                        
                        if (not(is_unordered.q(zmm0.q, zmm6.q)) && zmm0.q f== zmm6.q)
                            break
                    
                    i -= 1
                    result_1 = result_2
                
                zmm7 = zx.o(*result_1)
                rsi_1 = *(result_1 + 8)
                r14_1 = *(result_1 + 0x10)
            else
                void* rcx_2 = *(arg1 + 0x58)
                
                if (rcx_2 != 0)
                    int64_t* rax = sub_142ae72d0(rcx_2, 0)
                    uint64_t rax_1 = sub_142ae72d0(*(arg1 + 0x58), 1)
                    int64_t rdi_1 = *rax
                    r14_1 = rax_1
                    int32_t rax_2 = sub_141b60020(rax_1)
                    int64_t arg_8
                    char rax_4 = (*(rdi_1 + 0x40))(rax, zmm6, zx.q(sub_1405f8de0(r14_1)), 
                        zx.q(rax_2), rbp, &arg_8)
                    int64_t rdi_2 = *r14_1
                    int32_t rax_5 = sub_141b60020(rax)
                    int64_t var_68
                    result = (*(rdi_2 + 0x40))(r14_1, zmm6, zx.q(sub_1405f8de0(rax)), zx.q(rax_5), 
                        rbp, &var_68)
                    zmm0 = zx.o(arg_8)
                    
                    if (rax_4 == 0)
                        if (result.b == 0)
                            goto label_142b56304
                        
                        goto label_142b56332
                    
                    if (result.b == 0)
                    label_142b56343:
                        rsi_1 = r14_1
                        zmm7 = zmm0
                        r14_1 = rax
                    else
                    label_142b56332:
                        zmm7 = zx.o(var_68)
                        
                        if (zmm7.q f> zmm0.q)
                            goto label_142b56343
                        
                        rsi_1 = rax
                    
                    r12.b = 1
                
                if (r12.b == 0)
                    goto label_142b56304
        
        int32_t rax_7 = sub_1405f8de0(r14_1)
        
        if (sub_1405f8de0(rsi_1) == rax_7)
            int32_t rax_9 = sub_141b60020(r14_1)
            
            if (sub_141b60020(rsi_1).d == rax_9)
                if (r12.b != 0)
                    goto label_142b56304
                
                result = *(arg1 + 0x60)
                rbp = 0
                zmm6 = zmm7
                
                if (result == 0)
                    goto label_142b56304
                
                continue
        
        *arg4 = zmm7.q
        *arg5 = rsi_1
        *arg6 = r14_1
        result.b = 1
        break

return result
