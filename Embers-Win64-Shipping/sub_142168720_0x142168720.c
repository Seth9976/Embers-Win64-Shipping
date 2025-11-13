// 函数: sub_142168720
// 地址: 0x142168720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x310)
int32_t arg_8
sub_140926e00(rdi + 0x1a8, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(rdi + 0x1a8) + rax * 0x28

if (rcx_1 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    *arg2 = *(rcx_1 + 0x10)
    void* rax_3 = *(rcx_1 + 0x18)
    arg2[1] = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1

return arg2
