// 函数: sub_140b4b4d0
// 地址: 0x140b4b4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = arg1
int32_t var_18
sub_140b4d450(arg1, &var_18)
int128_t* var_10
*var_10 = *arg2
var_10[1] = *arg3
var_10[2].d = 0xffffffff
int32_t arg_8
sub_140b4f700(rbp, &arg_8, sub_140a6b260(var_10, 0x10), var_10, var_18, nullptr)
int32_t* rax_1 = *(rbp + 0xa00)

if (rax_1 != 0)
    rbp = rax_1

return sx.q(arg_8) * 0x28 + 0x10 + rbp
