// 函数: sub_141b5f490
// 地址: 0x141b5f490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = zx.q(*(arg1 + 0x158) + 1) & 3
*(arg1 + 0x158) = rdx.b
void* result = arg1 + 0x20 + (rdx << 6)

if (sub_140e1b0c0(result) == 0)
    char i
    
    do
        sub_1419a21e0(0)
        int32_t rcx_2 = zx.d(*(arg1 + 0x158)) + 1
        uint64_t rax_3 = zx.q(rcx_2.b - (zx.q(rcx_2 u/ 3) * 3).b)
        *(arg1 + 0x158) = rax_3.b
        result = arg1 + 0x20 + (rax_3 << 6)
        i = sub_140e1b0c0(result)
    while (i == 0)

sub_140de8e10(result)
return result
