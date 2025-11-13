// 函数: sub_1405eb940
// 地址: 0x1405eb940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t var_18 = -2
*(arg1 + 0x100) = 0

if (arg2 == 0)
    *(arg1 + 0x108) = 0
    *(arg1 + 0x110) = 0
else
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (arg2[rax_1] != 0)
    
    *(arg1 + 0x110) = rax_1.d
    int32_t rsi_1 = (rax_1 + 1).d
    int64_t rcx = *(arg1 + 0x100)
    
    if (rsi_1 u> 0x80)
        if (rcx != 0 || rsi_1 != 0)
            *(arg1 + 0x100) = sub_140a84c80(rcx, sx.q(rsi_1) * 2, 0)
    else if (rcx != 0)
        *(arg1 + 0x100) = sub_140a84c80(rcx, 0, 0)
    
    void* rax_3 = *(arg1 + 0x100)
    void* rcx_1 = arg1
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    *(arg1 + 0x108) = rcx_1
    sub_1405a7220(rcx_1, rsi_1, arg2, rsi_1, 0x3f)

return arg1
