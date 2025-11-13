// 函数: sub_14195cdb0
// 地址: 0x14195cdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140a5d650(arg1, &arg_8, arg2, arg3)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    int64_t rax_2 = *arg1 + rax * 0x28
    
    if (rax_2 != 0)
        return rax_2 + 0x10

return sub_14195cbb0(arg1, arg2, arg3) __tailcall
