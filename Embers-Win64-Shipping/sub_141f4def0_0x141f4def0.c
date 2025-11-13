// 函数: sub_141f4def0
// 地址: 0x141f4def0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x88) & 1) == 0)
    return 

void* rbx_1 = *(arg1 + 0xa8)
void* rax

if (rbx_1 != 0)
label_141f4df23:
    char rax_1 = sub_14243ade0(rbx_1)
    
    if (rax_1 != 0)
        rax = sub_14243ac50(rbx_1)
    
    if (rax_1 == 0 || rax.d != 3)
        sub_141df0440(arg1)
else
    rax = sub_141ee69e0(arg1)
    rbx_1 = rax
    
    if (rax != 0)
        goto label_141f4df23
