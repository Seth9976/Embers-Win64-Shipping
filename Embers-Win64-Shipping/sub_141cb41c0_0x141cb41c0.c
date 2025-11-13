// 函数: sub_141cb41c0
// 地址: 0x141cb41c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
sub_141c910f0(arg1, arg2)
int64_t* i = *arg3

for (void* rdi_1 = &i[sx.q(arg3[1].d) * 3]; i != rdi_1; i = &i[3])
    int64_t var_38
    sub_140596d10(&var_38, &i[1])
    char var_28_1 = 1
    sub_141c8f820(&arg1[8], i, &var_38)
    
    if (var_28_1 != 0)
        int64_t rcx_3 = var_38
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)

__security_check_cookie(rax_1 ^ &var_58)
return arg1
