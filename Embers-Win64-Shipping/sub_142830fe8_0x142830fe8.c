// 函数: sub_142830fe8
// 地址: 0x142830fe8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void var_178
char var_138[0x110]
int32_t rax_2 = sub_1428312b8(arg2, &var_138, &var_178)
int32_t var_188
int32_t* var_180
int64_t result

if (sub_142830970(arg1, &var_178, rax_2, &var_180, &var_188) == 0)
    int32_t* rax_5 = sub_142831378(0x80000000, 0x7fffffff, 0, 0, 0, 0)
    int64_t var_198_1
    var_198_1.d = 1
    *rax_5 = arg3
    result = sub_142830f18(arg1, &var_178, rax_2, rax_5, var_198_1.d)
else if (var_188 == 1)
    int32_t* rcx_2 = var_180
    int32_t r8_2 = rcx_2[2]
    
    if (arg3 s>= r8_2)
        r8_2 = arg3
        
        if (arg3 s> rcx_2[3])
            r8_2 = rcx_2[3]
    
    int64_t rax_4 = *(rcx_2 + 0x18)
    *rcx_2 = r8_2
    
    if (rax_4 != 0)
        rax_4(*(rcx_2 + 0x20), arg2)
    
    result = 1
else
    result = 0

__security_check_cookie(rax_1 ^ &var_1b8)
return result
