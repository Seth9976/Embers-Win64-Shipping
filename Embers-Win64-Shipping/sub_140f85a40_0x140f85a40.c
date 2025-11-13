// 函数: sub_140f85a40
// 地址: 0x140f85a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
char var_178 = data_1439ae51c
int32_t var_44 = 4
void* var_50 = nullptr
int32_t var_48 = 0
char var_40 = 0
sub_140de8410(arg1, arg3, &var_178)
void var_170
int32_t rbx_2

if (var_48 s<= 0)
    rbx_2 = arg6
else
    int128_t zmm1 = arg2[1]
    void* rdi_1 = &var_170
    
    if (var_50 != 0)
        rdi_1 = var_50
    
    int128_t var_1a8 = *arg2
    int128_t var_198_1 = zmm1
    var_198_1:8.q = arg1
    int128_t var_188_1 = arg2[2]
    rbx_2 = sub_140e1f680(*(rdi_1 + 0x38), &var_1a8, rdi_1, arg4, arg5, arg6 + 1, arg7, 
        sub_140e25600(arg1, arg8))

sub_140d94d20(&var_170)
__security_check_cookie(rax_1 ^ &var_1e8)
return zx.q(rbx_2)
