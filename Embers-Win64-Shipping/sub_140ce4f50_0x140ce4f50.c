// 函数: sub_140ce4f50
// 地址: 0x140ce4f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t rsi = sx.q(arg3)

if (arg2 != 0)
    uint32_t rax = (divu.dp.q(0:(sub_140a846a0(rbx * rsi, 0)), rsi)).d
    
    if (rbx.d s> rax)
        rax = 0x7fffffff
    
    rbx = zx.q(rax)

if (rbx.d == *(arg1 + 0xc))
    return 

uint64_t rdx_2 = zx.q(arg1[1].d)
*(arg1 + 0xc) = rbx.d
sub_140a30eb0(arg1, rdx_2, rbx.d, rsi, 0)
