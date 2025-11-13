// 函数: sub_14231a0a0
// 地址: 0x14231a0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cc45a0(sub_140d3cb50(arg1) + 0x200, arg1)
int64_t* rbx = *(arg1 + 0x28)
int64_t rdi_1 = 0
uint64_t result = &rbx[sx.q(*(arg1 + 0x30))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x30)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        result = sub_1422ef4a0(*rbx)
        rdi_1 += 1
        rbx = &rbx[1]
    while (rdi_1 != rsi_1)

return result
