// 函数: sub_141df18e0
// 地址: 0x141df18e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t* rdi = arg1
int32_t var_70
sub_141df3bf0(arg1, &var_70)
int64_t rsi = 0
int32_t rbp = 0
int64_t var_40 = 0
int32_t r14 = 4
int32_t var_38 = 0
int64_t* var_68
*var_68 = *arg3
var_68[5] = 0
int32_t var_34 = 4
void var_60
memmove(&var_68[1], &var_60, 0x20)
int64_t rcx_1 = var_68[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
    r14 = var_34
    rbp = var_38
    rsi = var_40

int32_t rax_3 = var_70
var_68[5] = rsi
var_68[6].d = rbp
*(var_68 + 0x34) = r14
var_68[7].d = 0xffffffff
int32_t var_78
sub_141df7b50(rdi, &var_78, arg2, var_68, rax_3, nullptr)
int32_t* rax_4 = *(rdi + 0x100)

if (rax_4 != 0)
    rdi = rax_4

void* result = (sx.q(var_78) << 6) + 8 + rdi
__security_check_cookie(rax_1 ^ &var_a8)
return result
