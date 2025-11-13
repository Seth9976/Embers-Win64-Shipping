// 函数: sub_140ce4fc0
// 地址: 0x140ce4fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t rsi = sx.q(arg3)

if (arg2 != 0)
    uint64_t rax = divu.dp.q(0:(sub_140a846a0(rbx * rsi, 0)), rsi)
    
    if (rbx.d s> rax.d)
        rax = 0x7fffffff
    
    rbx = zx.q(rax.d)

if (rbx.d == *(arg1 + 0xc))
    return 

uint64_t rcx_2 = *arg1
*(arg1 + 0xc) = rbx.d

if (rcx_2 != 0 || rbx.d != 0)
    *arg1 = sub_140a84c80(rcx_2, sx.q(rbx.d) * rsi, 0)
