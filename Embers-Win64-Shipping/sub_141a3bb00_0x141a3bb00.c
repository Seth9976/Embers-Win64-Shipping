// 函数: sub_141a3bb00
// 地址: 0x141a3bb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* result_1 = sub_140d3c6e0(arg1)
void* result = zx.q(data_143f29fb0)

if (arg1[4] == result.d)
    goto label_141a3bb6e

if (result_1 != 0)
    void* rcx = *(arg1 + 8)
    
    if (rcx != 0)
        result = sub_141a4c440(rcx + 0xd0, &arg1[4])
        
        if (result != 0)
            result = sub_141a52920(result)
            result_1 = result
        label_141a3bb6e:
            
            if (result_1 != 0)
                int32_t var_138[0x40]
                sub_141a413f0(arg1, &var_138, result_1)
                int32_t var_140_1 = 0
                int32_t (* var_148_1)[0x40]
                var_148_1.o = (&var_138).o
                
                for (int32_t i = 0; i s>= 0; i += 1)
                    if (i s>= (*var_148_1)[0x42])
                        break
                    
                    int32_t (* rax_3)[0x40] = var_148_1[1][0].q
                    int32_t (* r8)[0x40] = var_148_1
                    int32_t (* rdx_2)[0x40] = var_148_1
                    
                    if (rax_3 != 0)
                        r8 = rax_3
                    
                    if (rax_3 != 0)
                        rdx_2 = rax_3
                    
                    sub_141a3ae20(&arg2[1], &(*rdx_2)[sx.q(i) * 8], *(r8 + (sx.q(i) << 5) + 8), 
                        arg2)
                
                result = sub_141a3bc60(arg1, &var_138, arg2, nullptr)
                int64_t var_38
                
                if (var_38 != 0)
                    result = sub_140a74f90(var_38)

__security_check_cookie(rax_1 ^ &var_168)
return result
