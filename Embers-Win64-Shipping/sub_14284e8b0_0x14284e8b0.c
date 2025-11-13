// 函数: sub_14284e8b0
// 地址: 0x14284e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(arg1 + 8) == 0)
    sub_1428a5670(0x14, 0xa4, 0xbc, "ssl\ssl_lib.c", 0x244)
    return 0

if (sub_142857d20(arg1) != 0)
    sub_1428574d0(*(arg1 + 0x508))
    *(arg1 + 0x508) = 0

sub_1428574d0(*(arg1 + 0x510))
int64_t rcx_2 = *(arg1 + 0x518)
*(arg1 + 0x510) = 0
sub_1428a6780(rcx_2)
*(arg1 + 0x518) = 0
*(arg1 + 0x520) = 0
arg1[0x136] = 0
*(arg1 + 0x1720) = 0
arg1[0x15c] = 0
arg1[0x32] = 0
arg1[0x11] = 0

if (arg1[0x1d4] == 0)
    sub_142856520(arg1)
    int32_t rcx_4 = **(arg1 + 8)
    *arg1 = rcx_4
    arg1[0x179] = rcx_4
    void* rcx_5 = *(arg1 + 0x88)
    arg1[0xa] = 1
    sub_1428a71f0(rcx_5)
    *(arg1 + 0x88) = 0
    sub_142850f60(arg1)
    int64_t* rcx_7 = *(arg1 + 0x778)
    arg1[0x178] = 0
    arg1[0x1d5] = 0xffffffff
    sub_142891ea0(rcx_7)
    int64_t rcx_8 = *(arg1 + 0xf8)
    *(arg1 + 0x778) = 0
    *(arg1 + 0x104) = -1
    sub_1428a2c50(rcx_8)
    void* rcx_9 = *(arg1 + 0xd0)
    *(arg1 + 0xf8) = 0
    *(arg1 + 0xf0) = 0
    sub_1428ab5b0(rcx_9, nullptr)
    int64_t rdx_1 = *(arg1 + 8)
    int32_t rax_6
    
    if (rdx_1 == **(arg1 + 0x598))
        rax_6 = (*(rdx_1 + 0x18))(arg1, rdx_1)
    else
        (*(rdx_1 + 0x20))(arg1, rdx_1)
        int64_t rdx_2 = **(arg1 + 0x598)
        *(arg1 + 8) = rdx_2
        rax_6 = (*(rdx_2 + 0x10))(arg1, rdx_2)
    
    if (rax_6 != 0)
        sub_14285b6b0(&arg1[0x200])
        return 1
else
    sub_1428a5670(0x14, 0xa4, 0x44, "ssl\ssl_lib.c", 0x259)

return 0
