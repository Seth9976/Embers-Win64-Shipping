// 函数: sub_140869220
// 地址: 0x140869220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
int32_t arg_8
sub_140759010(&arg1[0x17], &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const r8_2

if (rax.d == 0xffffffff)
    r8_2 = nullptr
else
    r8_2 = rax * 0x58 + arg1[0x17]

int64_t* rax_1 = r8_2 + 0x28

if (r8_2 == 0)
    rax_1 = nullptr

if (rax_1 != 0)
    rdi = rax_1

char rax_2 = sub_140838640(arg1, rdi)

if (rax_2 != 0)
    void var_38
    sub_140868df0(&arg1[0x17], sub_140866170(arg1, &var_38, rdi))
    int64_t var_20
    
    if (var_20 != 0)
        sub_140a74f90(var_20)

return zx.q(rax_2)
