// 函数: sub_14295e1f0
// 地址: 0x14295e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax = arg2[0x1c]
int64_t* rbx = arg1
arg2[0xa] = -1
memset(&arg2[0xc] + rax, 0, 0x80 - rax)
sub_14295e480(arg2, &arg2[0xc], arg2[0x1c])
int64_t i_1 = 8
void* rdx_2 = arg2 - rbx
int64_t i

do
    *rbx = *(rdx_2 + rbx)
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1428b8960(arg2, 0xe8)
return 1
