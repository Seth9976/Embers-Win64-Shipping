// 函数: sub_142825994
// 地址: 0x142825994
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t* result = __security_cookie ^ &var_d8
int64_t* result_1 = result

if (arg2[2] != 0)
    result = sub_14060ab60(arg2, U"?&=")
    
    if (result.b != 0)
        result = sub_14060ab60(arg2, U"!")
        
        if (result.b != 0)
            void* var_98
            int128_t* rax_1 = sub_142825e4c(&var_98, arg2)
            result = sub_14281bf14(*(arg1 + 8), rax_1)
            int64_t var_60
            char var_78
            
            if (var_60 u>= 0x10)
                result = sub_14058ba50(var_78.q, var_60 + 1)
            int128_t var_68_1 = data_143702ea0
            char var_78_1 = 0
            int64_t var_80
            
            if (var_80 u>= 0x10)
                result = sub_14058ba50(var_98, var_80 + 1)

if (arg3 != 0)
    int128_t var_a8_1 = zx.o(0)
    char var_b8
    void* var_48
    sub_140593830(&var_b8, sub_142825ddc(&var_48))
    result = sub_14281bccc(*(arg1 + 8), &var_b8)
    int64_t rdx_9 = var_a8_1:8.q
    
    if (rdx_9 u>= 0x10)
        result = sub_14058ba50(var_b8.q, rdx_9 + 1)
    
    int128_t var_a8_2 = data_143702ea0
    var_b8 = 0
    int64_t var_30
    
    if (var_30 u>= 0x10)
        result = sub_14058ba50(var_48, var_30 + 1)

__security_check_cookie(result_1 ^ &var_d8)
return result
