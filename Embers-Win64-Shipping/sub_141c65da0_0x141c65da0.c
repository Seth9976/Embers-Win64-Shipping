// 函数: sub_141c65da0
// 地址: 0x141c65da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != *(arg1 + 0xc8))
    return &__return_addr

sub_1405c2d80(&data_143a2d488, *(arg1 + 0x1b8))
void* rax = sub_140d3c6e0(arg1 + 0x4c)
EnterCriticalSection(rax + 0x40)
int64_t zmm0_1 = (*(rax + 0x88)).q

if (rax != -0x40)
    LeaveCriticalSection(rax + 0x40)

return sub_141c6da50(arg1, zmm0_1)
