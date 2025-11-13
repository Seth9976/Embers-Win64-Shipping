// 函数: sub_141f3b8d0
// 地址: 0x141f3b8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t var_10 = 0
(*(*arg1 + 0x438))(arg1, &var_18)
int32_t rax_1 = var_10
*arg2 = 0
arg2[1] = 0

if (rax_1 s> 0)
    sub_140638c50(arg2, rax_1)
    rax_1 = var_10

int64_t* rdi = var_18
void* rbp = rdi + sx.q(rax_1) * 0xc

if (rdi != rbp)
    do
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_3 = (rsi_1 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        int64_t rax_4 = *rdi
        rdi += 0xc
        *(*arg2 + (rsi_1 << 3)) = rax_4
    while (rdi != rbp)
    
    rdi = var_18

if (rdi != 0)
    sub_140a74f90(rdi)

return arg2
