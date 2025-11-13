// 函数: sub_140d91c30
// 地址: 0x140d91c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[3] = 0
arg1[4].d = 0
*(arg1 + 0x24) = 1
int64_t* rax = *arg1
arg1[5].d = arg3
int64_t* rsi = *rax
void* rbp = &rsi[sx.q(rax[1].d) * 5]

while (rsi != rbp)
    int64_t rdi_1 = sx.q(arg1[4].d)
    int32_t rax_2 = (rdi_1 + 1).d
    arg1[4].d = rax_2
    
    if (rax_2 s> *(arg1 + 0x24))
        sub_140dbc6f0(&arg1[1], rdi_1.d)
    
    void* rax_3 = arg1[3]
    void* rdx_2 = &arg1[1]
    
    if (rax_3 != 0)
        rdx_2 = rax_3
    
    int64_t rcx_2 = rdi_1 * 2
    *(rdx_2 + (rcx_2 << 3)) = *rsi
    rsi = &rsi[5]
    *(rdx_2 + (rcx_2 << 3) + 8) = &rsi[1]

int32_t rdx_3 = arg1[4].d
void* rcx_3 = &arg1[1]
uint64_t (* arg_8)(int32_t* arg1, int32_t* arg2) = sub_140dbe150
void* rax_6 = arg1[3]

if (rax_6 != 0)
    rcx_3 = rax_6

sub_140d8f7a0(rcx_3, rdx_3, arg4, &arg_8)
return arg1
