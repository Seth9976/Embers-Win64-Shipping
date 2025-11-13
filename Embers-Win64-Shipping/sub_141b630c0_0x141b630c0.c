// 函数: sub_141b630c0
// 地址: 0x141b630c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0xb8, &arg_8, *arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0xb8) + rax * 0x18

int64_t* rbx = rcx_1 + 8

if (rcx_1 == 0)
    rbx = nullptr

if (rbx != 0)
    sub_140920c10(arg1 + 0x30, *rbx + 0x50)
    sub_1419a21e0(0)
    sub_141997f50(*rbx)
    sub_1419a21e0(1)
    int64_t* rcx_5 = *rbx
    
    if (rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)

return sub_140868c90(arg1 + 0xb8, *arg2) __tailcall
