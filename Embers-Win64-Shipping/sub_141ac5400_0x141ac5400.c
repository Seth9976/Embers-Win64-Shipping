// 函数: sub_141ac5400
// 地址: 0x141ac5400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

ModQueryFile(arg1)
int64_t result = sub_141e29640(&arg1[2], arg2)

if (*(arg1 + 0x54) != 3)
    return result

int32_t rdx_1 = arg1[5].d
arg1[9].d = 0

if (rdx_1 s> *(arg1 + 0x4c))
    sub_1405dadb0(&arg1[8], rdx_1)

int64_t rsi_1 = sx.q(arg1[5].d)
int64_t rdi_1 = sx.q(arg1[9].d)
int32_t rax = (rdi_1 + rsi_1).d
arg1[9].d = rax

if (rax s> *(arg1 + 0x4c))
    sub_1406105e0(&arg1[8])

return memset(arg1[8] + (rdi_1 << 2), 0, rsi_1 << 2)
