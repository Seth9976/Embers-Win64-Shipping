// 函数: sub_142b3dbd0
// 地址: 0x142b3dbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_258 = -2
void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* var_248
sub_142b3d620(&var_248, arg1, 0, arg4)
int32_t rdi_1

if (*arg4 s> 0)
    rdi_1 = 0
else
    int64_t* rcx_1 = var_248
    
    if (rcx_1 != 0)
        void var_240
        (*(*rcx_1 + 8))(rcx_1, arg2, &var_240, arg4)
        void var_238
        sub_142b454b0(&var_238, arg2, arg4)
        void var_1f8
        sub_142b4a750(&var_1f8, arg2, arg4)
        
        if (*arg4 s> 0)
            rdi_1 = 0
        else
            int32_t rax_3 = sub_142b3ee30(&var_240, arg2, arg3, 0, arg4)
            rdi_1 = rax_3 + sub_142b3ead0(&var_240, arg3, 0, rax_3, arg4)
    else
        *arg4 = 5
        rdi_1 = 0

sub_142ab73b0(&var_248)
__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rdi_1)
