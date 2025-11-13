// 函数: sub_142249610
// 地址: 0x142249610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x908))()
char rax_2
int64_t r8_1

if ((*(arg1 + 0x719) & 2) != 0)
    rax_2, r8_1 = (*(*arg1 + 0x3e8))(arg1, 0)

if ((*(arg1 + 0x719) & 2) == 0 || rax_2 == 0)
    sub_141f4d0f0(arg1, 4, 0)

if ((*(arg1 + 0x719) & 4) != 0)
    if (arg1[0x2f].d s> 0)
        void* rdx_1 = *(arg1[0x2e] + (sx.q(arg1[0x2f].d) << 3) - 8)
        *(rdx_1 + 0x350) |= 2
        *(rdx_1 + 0x10) = 3
        *(rdx_1 + 0x74) = 0xffffffff
    else if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
        r8_1.b = 1
        char rax_5 = (*(*arg1 + 0x468))(arg1, 0, r8_1, 0)
        *(arg1 + 0x14c) &= 0xfd
        *(arg1 + 0x14c) |= (rax_5 & 1) * 2

if ((*(arg1 + 0x71e) & 4) == 0 || *(arg1 + 0xa55) != 0)
    sub_141f6c530(arg1)
    (*(*arg1 + 0x498))(arg1)

sub_141ee8690(arg1)
sub_141ee8470(arg1)
return sub_141f6f060(arg1) __tailcall
