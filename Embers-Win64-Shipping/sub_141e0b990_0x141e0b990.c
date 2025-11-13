// 函数: sub_141e0b990
// 地址: 0x141e0b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x688)
void* result = &rbx[sx.q(*(arg1 + 0x690))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x690)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx = *rbx
        result = (*(*rcx + 0x60))(rcx, zx.q(arg2))
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

return result
