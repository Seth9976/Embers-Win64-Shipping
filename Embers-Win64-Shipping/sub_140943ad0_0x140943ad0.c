// 函数: sub_140943ad0
// 地址: 0x140943ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t arg_8
sub_14093f560(arg1 + 0x20, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + *(arg1 + 0x20)

int32_t* rbx = rax_3 + 8

if (rax_3 == 0)
    rbx = nullptr

if (rbx == 0)
    return sub_14093b720(arg1 + 0x20, &arg_10, arg3)

sub_14093ccd0(rbx, arg3)
int32_t result = arg3[6]
rbx[6] = result
return result
