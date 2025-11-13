// 函数: sub_140b81d70
// 地址: 0x140b81d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void var_178
sub_140a96170(&var_178)
int32_t var_158[0x50]
sub_140b78360(&var_158)
int64_t* rdi

if (sub_140b7f4e0(&var_158, arg2, &var_178) != 0)
    sub_140b81e60(&var_158, arg2, arg3)
    rdi.b = 1
else
    rdi.b = 0

sub_140b78da0(&var_158)
int64_t* var_170
uint64_t result

if (var_170 == 0)
    result = zx.q(rdi.b)
else
    var_170[1].d -= 1
    
    if (var_170[1].d == 1)
        int64_t rdx_2 = *var_170
        (*rdx_2)(var_170, rdx_2)
        int32_t rsi_1 = *(var_170 + 0xc)
        *(var_170 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *var_170
            (*(r8_2 + 8))(var_170, zx.q(rsi_1), r8_2)
    
    result = zx.q(rdi.b)

__security_check_cookie(rax_1 ^ &var_198)
return result
