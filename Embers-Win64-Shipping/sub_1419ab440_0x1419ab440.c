// 函数: sub_1419ab440
// 地址: 0x1419ab440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408c8cf0(arg1, nullptr)
sub_1408c8cf0(&arg1[1], nullptr)
sub_1405d16e0(&arg1[2], nullptr)
sub_14199e770(&arg1[3], 0)
void* rax = arg1[9]
void* rbx = &arg1[6]
int32_t i_1 = arg1[0xa].d

if (rax != 0)
    rbx = rax

if (i_1 != 0)
    void* rbx_1 = rbx + 0x10
    int32_t i
    
    do
        sub_1405ec8a0(rbx_1)
        rbx_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0xa].d = 0

if (*(arg1 + 0x54) != 0)
    sub_1409dabf0(&arg1[6], 0)

sub_1405d16e0(&arg1[0xd], nullptr)
return sub_1405d16e0(&arg1[0xe], nullptr) __tailcall
