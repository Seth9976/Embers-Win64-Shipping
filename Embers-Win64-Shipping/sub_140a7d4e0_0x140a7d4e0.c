// 函数: sub_140a7d4e0
// 地址: 0x140a7d4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x28))
char* rsi_1 = rsi + *(arg1 + 0xd8)
bool cond:0 = rsi == neg.q(*(arg1 + 0xd8))
int32_t rcx = 0
*arg2 = 0
arg2[1] = 0

if (not(cond:0) && *rsi_1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi_1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg2, rbx_1.d + 1)
        rcx = arg2[1].d
    
    int32_t rax_1 = rcx + rbx_1.d + 1
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    sub_1405a7220(*arg2, rbx_1.d + 1, rsi_1, rbx_1.d + 1, 0x3f)

return arg2
