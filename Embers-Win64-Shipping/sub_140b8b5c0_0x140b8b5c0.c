// 函数: sub_140b8b5c0
// 地址: 0x140b8b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t var_178[0x6]
sub_140b78360(&var_178)
uint64_t rbx

if (sub_140b7f4e0(&var_178, arg2, arg4) != 0)
    int64_t var_188
    int64_t* rax_3 = sub_140b18970(&var_188, arg2)
    int32_t rdx_2 = rax_3[1].d
    int16_t* r8_1
    
    if (rdx_2 == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_3
    
    int32_t rcx_3 = rdx_2 - 1
    
    if (rdx_2 == 0)
        rcx_3 = 0
    
    int32_t rax_4 = sub_1405969c0(rcx_3, r8_1)
    int64_t rcx_4 = var_188
    int32_t var_110_1 = rax_4
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    uint64_t var_160
    
    if (&var_160 != arg3)
        int32_t rbx_1 = arg3[1].d
        int64_t rdi_1 = *arg3
        int32_t var_158_1 = rbx_1
        int32_t var_154
        
        if (rbx_1 != 0 || var_154 != 0)
            sub_1405a4c70(&var_160, rbx_1, var_154)
            memcpy(var_160, rdi_1, rbx_1 * 2)
        else
            int32_t var_154_1 = 0
    
    rbx = zx.q(sub_140b8aa60(&var_178, arg2, arg4))
else
    rbx.b = 0

sub_140b78da0(&var_178)
__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(rbx.b)
