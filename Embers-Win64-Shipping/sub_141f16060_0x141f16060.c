// 函数: sub_141f16060
// 地址: 0x141f16060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
*arg2 = 0
arg2[1] = 0
int32_t rax_1 = (*(*arg1 + 0x6a0))()
int64_t rsi = sx.q(rax_1)

if (rax_1 s<= 0)
    return arg2

int64_t rbx = sx.q(arg2[1].d)
int32_t rcx = (rbx + rsi).d
arg2[1].d = rcx

if (rcx s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

memset(*arg2 + (rbx << 3), 0, rsi << 3)

if (rsi.d s> 0)
    int64_t rsi_1 = 0
    
    do
        *(*arg2 + (rsi_1 << 3)) = (*(*arg1 + 0x548))(arg1, zx.q(rbp))
        rbp += 1
        rsi_1 += 1
    while (rsi_1 s< rsi)

return arg2
