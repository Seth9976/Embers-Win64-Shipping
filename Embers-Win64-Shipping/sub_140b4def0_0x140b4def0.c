// 函数: sub_140b4def0
// 地址: 0x140b4def0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0x10

if (((*(arg2 + 4)).b & 6) == 2)
    rdx = 0xc

int64_t r8 = -1
int32_t arg_8 = rdx
void* rdx_1 = *(arg1 + 8)

do
    r8 += 1
while (*(rdx_1 + (r8 << 1)) != 0)

sub_140b4ae70(arg3, rdx_1, r8.d)
sub_140b4ad80(arg3, &arg_8, 4)
return zx.q(arg_8)
