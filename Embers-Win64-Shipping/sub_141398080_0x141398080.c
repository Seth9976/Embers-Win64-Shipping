// 函数: sub_141398080
// 地址: 0x141398080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x418) == 0)
    return 

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x410)
uint64_t rsi_1 = sx.q(*(arg1 + 0x418)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x418))])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx = *rbx
        (**rcx)(rcx, 0)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

*(arg1 + 0x418) = 0

if (*(arg1 + 0x41c) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x410, 0)

return sub_14199ca30(&data_1439c9260) __tailcall
