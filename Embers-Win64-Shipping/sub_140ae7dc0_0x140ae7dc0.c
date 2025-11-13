// 函数: sub_140ae7dc0
// 地址: 0x140ae7dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void var_1a8
void** var_1a0
int64_t* rbx = *SymBuffer::end(sub_140b4cb20(&var_1a0, arg1), &var_1a8)
sub_140a1d9d0(*(*rbx + 8), arg2, arg3)

if ((*(*(*rbx + 8) + 0x28) & 1) != 0)
    sub_140aef990(arg2)

sub_140b4cbb0(&var_1a0)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
