// 函数: sub_1417d4280
// 地址: 0x1417d4280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = arg1[0x89]
uint64_t rsi_1 = sx.q(arg1[0x8a].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0x8a]])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        sub_1422220d0(*rbx, arg2, arg3)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

return sub_1422ac4b0(arg1, zx.q(arg2), zx.q(arg3)) __tailcall
