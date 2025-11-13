// 函数: sub_1408d7510
// 地址: 0x1408d7510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0x98, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x98) + rax * 0x18

int64_t* rax_2 = rcx_1 + 8

if (rcx_1 == 0)
    rax_2 = nullptr

int512_t result

if (rax_2 == 0)
    result.o = zx.o(0)
    return result

result.o = *(*rax_2 + 0x20)
return result
