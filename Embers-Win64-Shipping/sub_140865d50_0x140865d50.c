// 函数: sub_140865d50
// 地址: 0x140865d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int32_t arg_8
sub_140759010(arg1 + 0xb8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const r9_1

if (rax.d == 0xffffffff)
    r9_1 = nullptr
else
    r9_1 = rax * 0x58 + *(arg1 + 0xb8)

int64_t* rax_1 = r9_1 + 0x28

if (r9_1 == 0)
    rax_1 = nullptr

if (rax_1 != 0)
    rbx = rax_1

return sub_1408298d0(arg1, rbx) __tailcall
