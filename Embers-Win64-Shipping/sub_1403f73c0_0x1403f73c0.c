// 函数: sub_1403f73c0
// 地址: 0x1403f73c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[4].d
int32_t r9 = *(arg1 + 0x24)
int32_t rbx = -1
uint32_t r10_1 = rax u>> arg3
void* rdx = arg2 - 1
int32_t rcx_1

do
    rcx_1 = rax
    uint32_t rax_1 = zx.d(*(rdx + 1))
    rdx += 1
    rbx += 1
    rax = rax_1 * r10_1
while (r9 u< rax)

arg1[4].d = rcx_1 - rax
*(arg1 + 0x24) = r9 - rax
sub_1403f7470(arg1)
return zx.q(rbx)
