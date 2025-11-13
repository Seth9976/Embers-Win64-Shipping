// 函数: sub_141f0f750
// 地址: 0x141f0f750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa8)

if (rax != 0)
label_141f0f76f:
    int64_t* rcx = *(rax + 0x1b0)
    
    if (rcx != 0)
        (*(*rcx + 8))(rcx, arg1)
else
    rax = sub_141ee69e0(arg1)
    
    if (rax != 0)
        goto label_141f0f76f

return sub_141edf430(arg1) __tailcall
