// 函数: sub_142960a30
// 地址: 0x142960a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rbx = arg1
arg2[0xa] = 0xffffffff
memset(&arg2[0xc] + *(arg2 + 0x70), 0, 0x40 - *(arg2 + 0x70))
sub_142960c60(arg2, &arg2[0xc], *(arg2 + 0x70))
int64_t i_1 = 8
void* rdx_2 = arg2 - rbx
int64_t i

do
    *rbx = *(rdx_2 + rbx)
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1428b8960(arg2, zx.q((i_1 + 0x78).d))
return 1
