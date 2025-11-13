// 函数: sub_140fc6f10
// 地址: 0x140fc6f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t rdi = 0
int64_t var_1a8 = 0
void var_148
sub_1405eb940(&var_148, arg2)
int64_t var_198
int64_t var_40
(*(*arg1 + 0x40))(arg1, &var_198, var_40, 0, 0, 0, 0)
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

void* var_160
int32_t var_158

if (var_158 s<= 0)
    rdi = 0x30
else
    int64_t* rcx_3 = *(var_160 + 0x18)
    (*(*arg3 + 0x50))(arg3, (*(*rcx_3 + 0x58))(rcx_3, &var_1a8))
    int64_t rcx_5 = var_1a8
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

sub_14094ab00(&var_160)
int64_t var_178

if (var_178 != 0)
    sub_140a74f90(var_178)

int64_t var_188

if (var_188 != 0)
    sub_140a74f90(var_188)

int64_t rcx_9 = var_198

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_1e8)
return zx.q(rdi)
