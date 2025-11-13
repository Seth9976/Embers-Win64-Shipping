// 函数: sub_142c76dd0
// 地址: 0x142c76dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (arg3 == 0)
    sub_142c64760(rbx, "Cannot write a 0 size RTP packet.", arg3, arg4)
    return zx.q((arg3 + 0x17).d)

int64_t rax_1 = *(rbx + 0x2e8)

if (rax_1 == 0)
    rax_1 = *(rbx + 0x2d8)

int64_t rax_2
int64_t r8
rax_2, r8 = rax_1(arg2, 1, arg3, *(rbx + 0x290))

if (rax_2 == 0x10000001)
    sub_142c64760(rbx, "Cannot pause RTP", r8, arg4)
    return 0x17

if (rax_2 == arg3)
    return 0

sub_142c64760(rbx, "Failed writing RTP data", r8, arg4)
return 0x17
