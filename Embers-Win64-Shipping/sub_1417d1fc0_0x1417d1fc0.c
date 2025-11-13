// 函数: sub_1417d1fc0
// 地址: 0x1417d1fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = arg1[0x89]
uint64_t rsi_1 = sx.q(arg1[0x8a].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0x8a]])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        sub_142227570(*rbx)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

return sub_1422a77f0(arg1) __tailcall
