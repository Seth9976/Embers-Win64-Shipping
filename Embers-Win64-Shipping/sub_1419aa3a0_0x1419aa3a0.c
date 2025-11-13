// 函数: sub_1419aa3a0
// 地址: 0x1419aa3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0 = *(arg2 + 0x1c)
*(arg2 + 0x1c) -= 1

if (temp0 != 1)
    return 

*(arg2 + 0x40) = 0
*(arg2 + 0x10) = 0
int32_t arg_10
sub_140865c40(arg1 + 0x70, &arg_10, arg2)
int64_t rax_1 = sx.q(arg_10)
void* const rcx_1

if (rax_1.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x70) + rax_1 * 0x18

int64_t* rax = *(rcx_1 + 8)
*(rcx_1 + 8) = 0

if (rax != 0)
    return sub_1411e8d60(rax) __tailcall
