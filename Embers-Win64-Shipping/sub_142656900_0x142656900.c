// 函数: sub_142656900
// 地址: 0x142656900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_140638c50(arg2, 0)

sub_141dc5a60(arg1, arg2, 1)
int32_t rax = arg2[1].d
int32_t rsi = 0
uint64_t var_18 = 0
int32_t var_10 = 0

if (rax s<= 0)
    return rax

int64_t r14_1 = 0
int32_t rbx_2

do
    sub_141dc5a60(*(r14_1 + *arg2), &var_18, 1)
    int32_t rbx_1 = 0
    
    if (var_10 s> 0)
        do
            sub_1405a7050(arg2, var_18 + (sx.q(rbx_1) << 3))
            rbx_1 += 1
        while (rbx_1 s< var_10)
    
    rbx_2 = arg2[1].d
    rsi += 1
    r14_1 += 8
while (rsi s< rbx_2)

uint64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return rbx_2
