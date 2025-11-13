// 函数: sub_140e22010
// 地址: 0x140e22010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int32_t rdi = rax - 1

if (rax == 0)
    rdi = 0

int32_t rax_2

if (*(arg1 + 0x18) == 0)
    rax_2 = 2

if (*(arg1 + 0x18) != 0 || rdi == 0xffffffff)
    rax_2 = 1

*arg2 = 0
int32_t rcx = rdi + rax_2
int32_t rsi = *(arg1 + 0x18)
int64_t rbp = *(arg1 + 0x10)
arg2[1].d = rsi

if (rsi != 0 || rcx != 0)
    sub_1405a4c70(arg2, rsi + rcx, 0)
    memcpy(*arg2, rbp, rsi * 2)
else
    *(arg2 + 0xc) = 0

sub_140a2cf70(arg2, *arg3, rdi)
return arg2
