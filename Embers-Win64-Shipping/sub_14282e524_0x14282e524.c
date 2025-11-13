// 函数: sub_14282e524
// 地址: 0x14282e524
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
char* rdi = arg4
void* rbx = arg3
void* result

if (arg2 == 0)
label_14282e5af:
    result = -ffffffffffffffff
else
    char var_138[0x100]
    memset(&var_138, 0, 0x100)
    void* rcx_1 = arg5 + rdi
    
    while (rdi != rcx_1)
        uint64_t rax_2 = zx.q(*rdi)
        rdi = &rdi[1]
        var_138[rax_2] = 1
    
    if (arg2 - 1 u< rbx)
        rbx = arg2 - 1
    
    char* rbx_1 = rbx + arg1
    
    while (var_138[zx.q(*rbx_1)] != 0)
        if (rbx_1 == arg1)
            goto label_14282e5af
        
        rbx_1 -= 1
    
    result = rbx_1 - arg1

__security_check_cookie(rax_1 ^ &var_158)
return result
