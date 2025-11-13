// 函数: sub_142bb5d90
// 地址: 0x142bb5d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2
int32_t rdi = 0

if (sub_142b96500(arg1, arg2) != 0)
    return 0

if (i_2 u> 3)
    uint64_t i_3 = zx.q(((i_2 - 4) u>> 2) + 1)
    uint64_t i
    
    do
        rdi += sub_142b96720(arg1)
        i_2 -= 4
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_2 != 0)
    int32_t rbp_3 = 0x18
    int32_t i_1
    
    do
        uint32_t rdx_1 = zx.d(sub_142b96700(arg1)) << rbp_3.b
        rbp_3 -= 8
        rdi += rdx_1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

sub_142b96620(arg1)
return zx.q(rdi)
