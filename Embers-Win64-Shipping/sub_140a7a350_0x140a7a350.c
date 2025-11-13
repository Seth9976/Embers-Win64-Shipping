// 函数: sub_140a7a350
// 地址: 0x140a7a350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = *(arg1 + 0x30)
int32_t rcx = 0
*arg2 = 0
arg2[1] = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg2, rbx_1.d + 1)
        rcx = arg2[1].d
    
    int32_t rax_1 = rcx + rbx_1.d + 1
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    sub_1405a7220(*arg2, rbx_1.d + 1, rsi, rbx_1.d + 1, 0x3f)

sub_140a306e0(arg2, &data_142d99650, &data_142d404b0, 1)
return arg2
