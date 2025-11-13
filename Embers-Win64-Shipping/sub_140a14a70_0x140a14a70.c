// 函数: sub_140a14a70
// 地址: 0x140a14a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x30)
int64_t rdi = 0
void* result = &rbx[sx.q(*(arg1 + 0x38))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x38)) << 2 u>> 2

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx = *(arg1 + 0x40)
        result = (**rcx)(rcx, zx.q(*rbx))
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

*(arg1 + 0x38) = 0

if (*(arg1 + 0x3c) == 0)
    return result

return sub_1405dadb0(arg1 + 0x30, 0)
