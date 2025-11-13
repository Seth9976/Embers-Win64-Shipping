// 函数: sub_1409184d0
// 地址: 0x1409184d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140918410(arg1, &arg_8, arg2, arg3)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    int64_t rax_2 = *arg1 + rax * 0x48
    
    if (rax_2 != 0)
        return rax_2 + 0x30

return sub_1409182c0(arg1, arg2, arg3) __tailcall
