// 函数: sub_141b073f0
// 地址: 0x141b073f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
rdi.b = 0

if (arg3 != 0)
    void* rax_1 = sub_1424a23e0()
    void* rdx = *(arg3 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        rdi.b = (*(arg3 + 0x228) u>> 2).b & 1

arg2[4].b |= 3
void*** rax_4 = arg2

if ((arg2[4].b & 2) == 0)
    rax_4 = *arg2

*rax_4 = &data_143058160
rax_4[1].b = rdi.b
return arg2
