// 函数: sub_1417d4070
// 地址: 0x1417d4070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x448)
uint64_t rsi_1 = sx.q(*(arg1 + 0x450)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x450))])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        sub_142221d60(*rbx, arg2)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

return sub_1422ac380(arg1, arg2) __tailcall
