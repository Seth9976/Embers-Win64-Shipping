// 函数: sub_140b51780
// 地址: 0x140b51780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg2 + 8)
int64_t r8 = -1
uint32_t rax_1
rax_1.b = not.b((*(arg3 + 4) u>> 1).b)
int32_t arg_10 = (((zx.q(rax_1) & 1) << 2) + 4).d

do
    r8 += 1
while (*(rdx + (r8 << 1)) != 0)

sub_140b4ae70(arg4, rdx, r8.d)
sub_140b4ad80(arg4, &arg_10, 4)
return zx.q(arg_10)
