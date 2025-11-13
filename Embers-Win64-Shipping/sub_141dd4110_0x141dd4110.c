// 函数: sub_141dd4110
// 地址: 0x141dd4110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38

if (arg2 != 0)
    EnterCriticalSection(arg1 + 0x108)
    sub_141f7bed0(arg1 + 0xe0, sub_141f79600(&var_38))
    sub_141f7baf0(&var_38)
    *(arg1 + 0x130) = 1
    *(arg1 + 0xb8) = 0
    *(arg1 + 0xd8) = 0
    
    if (arg1 != -0x108)
        LeaveCriticalSection(arg1 + 0x108)
    
    int64_t rax_1
    rax_1.b = 1
    return rax_1

if (TryEnterCriticalSection(arg1 + 0x108) == 0)
    BOOL rax_2
    rax_2.b = 0
    return rax_2

sub_141f7bed0(arg1 + 0xe0, sub_141f79600(&var_38))
sub_141f7baf0(&var_38)
*(arg1 + 0x130) = 1
*(arg1 + 0xb8) = 0
*(arg1 + 0xd8) = 0
LeaveCriticalSection(arg1 + 0x108)
int64_t rax_4
rax_4.b = 1
return rax_4
