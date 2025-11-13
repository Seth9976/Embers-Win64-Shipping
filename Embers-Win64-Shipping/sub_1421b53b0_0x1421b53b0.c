// 函数: sub_1421b53b0
// 地址: 0x1421b53b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rbx = 0
int64_t** var_40 = nullptr
int32_t var_38 = 0
int32_t var_34 = 2
char var_68 = 1
void var_50
int64_t* result = sub_1421b79f0(arg1, &var_50, arg3, arg4)

if (var_38 s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t** rcx = &var_50
        
        if (var_40 != 0)
            rcx = var_40
        
        void var_58
        result = sub_1421268c0(*(rcx + rdi_1), &var_58, arg4)
        rbx += 1
        rdi_1 += 8
        *arg2 |= *result
    while (rbx s< var_38)

if (var_40 != 0)
    result = sub_140a74f90(var_40)

__security_check_cookie(rax_1 ^ &var_88)
return result
