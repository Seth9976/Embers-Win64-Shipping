// 函数: sub_1420dce50
// 地址: 0x1420dce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int64_t rdx
uint64_t r8

if (data_143a2e434 == 0 || (*(arg1 + 0x1f6) & 0x20) == 0)
    rax = *arg2
    rdx = *(arg1 + 0x98)
    r8 = zx.q(*(arg1 + 0xa0))
else
    rax = *arg2
    rdx = *(arg1 + 0xa8)
    r8 = zx.q(*(arg1 + 0xb0))

(*(rax + 0x40))(arg2, rdx, r8, arg1, 0)
return sub_140594850() __tailcall
