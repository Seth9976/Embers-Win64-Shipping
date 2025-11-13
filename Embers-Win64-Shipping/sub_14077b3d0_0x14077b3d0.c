// 函数: sub_14077b3d0
// 地址: 0x14077b3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14077b320(arg1, &arg_8, arg2, arg3)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    int64_t rax_2 = rax * 0x30
    
    if (rax_2 != neg.q(*arg1))
        return rax_2 + *arg1 + 8

int64_t* arg_20 = arg3
sub_14077b190(arg1, &arg_8, arg2, &arg_20, nullptr)
return *arg1 + 8 + sx.q(arg_8) * 0x30
