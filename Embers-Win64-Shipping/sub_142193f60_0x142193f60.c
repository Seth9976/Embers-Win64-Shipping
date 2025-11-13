// 函数: sub_142193f60
// 地址: 0x142193f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

int32_t arg_8
sub_140865c40(&data_143a2f030, &arg_8, rax)
int64_t rax_1 = sx.q(arg_8)
void* const rcx

if (rax_1.d == 0xffffffff)
    rcx = nullptr
else
    rcx = data_143a2f030 + rax_1 * 0x18

int64_t* rax_3 = rcx + 8

if (rcx == 0)
    rax_3 = nullptr

if (rax_3 == 0)
    return 0

return *rax_3
