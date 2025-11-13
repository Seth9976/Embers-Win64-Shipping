// 函数: sub_14199ca30
// 地址: 0x14199ca30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x40)
int64_t rdi = 0
void* result = &rbx[sx.q(*(arg1 + 0x48))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x48)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx = *rbx
        result = (**rcx)(rcx, 0)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

*(arg1 + 0x48) = 0

if (*(arg1 + 0x4c) s> 0xffffffff)
    return result

return sub_1405c5570(arg1 + 0x40, 0)
