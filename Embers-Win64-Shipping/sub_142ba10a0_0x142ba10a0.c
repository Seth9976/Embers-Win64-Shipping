// 函数: sub_142ba10a0
// 地址: 0x142ba10a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int512_t zmm0
zmm0.o = (*"0 1 2 3 4 5 6 7 8 9")[0].o
int128_t var_38
int128_t* result_1 = &var_38
int32_t rsi = 0
void* result = zx.q(zmm0.d)
int64_t r14
r14.b = 0
int32_t var_48 = 0
__builtin_strcpy(&var_38, "0 1 2 3 4 5 6 7 8 9")

if (result.b == 0)
    *(arg1 + 0x28) = 1
else
    while (true)
        int32_t var_44
        int32_t var_40
        result = sub_142ba67f0(result_1, arg1, &var_40, &var_44)
        result_1 = result
        
        if (var_44 u<= 1)
            int32_t rbx_1 = var_40
            result, zmm0 = sub_142b91d10(**(arg1 + 0x30), rbx_1, 0x803, &var_48, zmm0)
            
            if (rbx_1 != 0)
                if (r14.b == 0)
                    rsi = var_48
                    r14.b = 1
                else if (var_48 != rsi)
                    *(arg1 + 0x28) = 0
                    break
        
        if (*result_1 == 0)
            *(arg1 + 0x28) = 1
            break

__security_check_cookie(rax_1 ^ &var_68)
return result
