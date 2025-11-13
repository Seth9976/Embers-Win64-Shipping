// 函数: sub_140aced10
// 地址: 0x140aced10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[3].d)
int32_t rax = (rsi + 1).d
arg1[3].d = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405a4f90(&arg1[2])

int64_t* rcx_3 = (rsi << 4) + arg1[2]
*rcx_3 = *arg3
void* rax_2 = arg3[1]
rcx_3[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

void* const rcx_4 = arg1[1]
int64_t rdx_1 = 0

if (rcx_4 != 0)
    int32_t rax_3 = *(rcx_4 + 8)
    
    if (rax_3 != 0)
        *(rcx_4 + 8) = rax_3 + 1
        rax_3.b = 1
    
    if (rax_3.b == 0)
        rcx_4 = nullptr
    
    if (rcx_4 != 0)
        rdx_1 = *arg1

*arg2 = rdx_1
arg2[1] = rcx_4
return arg2
