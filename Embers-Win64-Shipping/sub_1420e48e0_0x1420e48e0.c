// 函数: sub_1420e48e0
// 地址: 0x1420e48e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14066d570(arg1, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rdx_1 = nullptr
void* const r8_3

if (rax.d == 0xffffffff)
    r8_3 = nullptr
else
    r8_3 = (rax << 5) + *arg1

int64_t* rax_1 = r8_3 + 8

if (r8_3 == 0)
    rax_1 = nullptr

if (rax_1 != 0)
    rdx_1 = *rax_1

if (rdx_1 == 0)
    return 0

return zx.q(*(rdx_1 + 8) - *(rdx_1 + 0x34))
