// 函数: sub_140618100
// 地址: 0x140618100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = *arg1

if (*(arg2 + 0x19) != 0)
    return rbp

int64_t* rsi_1 = j_sub_140a82f30(0x20)
*(rsi_1 + 0x1c) = *(arg2 + 0x1c)
*rsi_1 = rbp
rsi_1[2] = rbp
rsi_1[3].w = 0
rsi_1[1] = arg3
rsi_1[3].b = arg2[3].b
char rdi_1 = *(rbp + 0x19)
*rsi_1 = sub_140618100(arg1, *arg2, rsi_1, zx.q(arg4))
rsi_1[2] = sub_140618100(arg1, arg2[2], rsi_1, zx.q(arg4))

if (rdi_1 == 0)
    return rbp

return rsi_1
