// 函数: sub_1428918e0
// 地址: 0x1428918e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = *arg1

if (*(rax + 8) s> 0x40)
    sub_1428bc530()
    noreturn

int32_t rax_1 = (*(rax + 0x20))(arg1, arg2)

if (arg3 != 0)
    *arg3 = *(*arg1 + 8)

void* rcx_5 = *arg1
int64_t rdx_3 = *(rcx_5 + 0x30)

if (rdx_3 != 0)
    rdx_3(arg1)
    sub_1428915a0(arg1, 2)
    rcx_5 = *arg1

sub_1428b8960(arg1[3], sx.q(*(rcx_5 + 0x3c)))
return zx.q(rax_1)
