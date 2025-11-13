// 函数: sub_1406b15f0
// 地址: 0x1406b15f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* rcx = *arg1
char var_38 = arg2
void var_37
int64_t* var_30
(*(*rcx + 0x20))(rcx, &var_30, &var_38, &var_37, var_38)
int64_t* rcx_1 = var_30
int64_t var_20
int64_t var_18
char rbx

if (var_20 != 1)
    rbx = var_38
else
    int64_t* rax_3 = &var_30
    
    if (var_18 u>= 0x10)
        rax_3 = rcx_1
    
    rbx = *rax_3

if (var_18 u>= 0x10)
    int64_t* rax_4 = rcx_1
    
    if (var_18 + 1 u>= 0x1000)
        rcx_1 = rcx_1[-1]
        
        if (rax_4 - rcx_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_1)

__security_check_cookie(rax_1 ^ &var_58)
return zx.q(rbx)
