// 函数: sub_140ff6d70
// 地址: 0x140ff6d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
void* rdx = arg2 + 0x70

if (arg2 == 0)
    rdx = nullptr

sub_140fdf350(arg1, rdx, 0)

if (arg3 == 1)
    rdi = 1
else if (arg3 == 2)
    rdi = 2
else if (arg3 == 3)
    rdi = 3
else if (arg3 == 4)
    rdi = 4
else if (arg3 == 5)
    rdi = arg3

int32_t rdx_1 = arg5
arg5.q = arg7
return sub_140fec020(arg2, rdx_1, rdi + arg4 * 6, arg6, arg5, 0) __tailcall
