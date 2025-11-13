// 函数: sub_1428310f0
// 地址: 0x1428310f0
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
    int64_t var_198_1
    var_198_1.d = 2
    result =
        sub_142830f18(arg1, &var_178, rax_2, sub_142831478(arg3, nullptr, 0, 0, 0), var_198_1.d)
else if (var_188 == 2)
    int32_t* rbx_1 = var_180
    int64_t rcx_2 = *rbx_1
    
    if (rcx_2 != 0)
        free(rcx_2)
    
    char* rax_6
    
    if (arg3 == 0)
        rax_6 = nullptr
    else
        rax_6 = strcpy(malloc(strlen(arg3) + 1), arg3)
    
    int64_t r9_1 = *(rbx_1 + 0x20)
    *rbx_1 = rax_6
    
    if (r9_1 != 0)
        r9_1(*(rbx_1 + 0x28), arg2, rax_6)
    
    result = 1
else
    result = 0

__security_check_cookie(rax_1 ^ &var_1b8)
return result
