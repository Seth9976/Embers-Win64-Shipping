// 函数: sub_14226e7f0
// 地址: 0x14226e7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x2b0)

if (rsi != 0)
    int64_t rdi_1 = sx.q(arg3[1].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg3[1].d = rax_1
    
    if (rax_1 s> *(arg3 + 0xc))
        sub_1405a4d70(arg3)
    
    *(*arg3 + (rdi_1 << 3)) = rsi

int64_t rdi_2 = sx.q(arg3[1].d)
int64_t rsi_1 = *(arg1 + 0x2b8)
int32_t rax_3 = (rdi_2 + 1).d
arg3[1].d = rax_3

if (rax_3 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

int64_t result = *arg3
*(result + (rdi_2 << 3)) = rsi_1
return result
