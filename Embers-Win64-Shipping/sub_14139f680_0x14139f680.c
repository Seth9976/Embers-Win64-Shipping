// 函数: sub_14139f680
// 地址: 0x14139f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_3 = *(arg1 + 0x1e8)

if (rax_3 != 0)
    *arg2 = rax_3
    *(rax_3 + 8) += 1
else
    void* rcx = *(data_143f11008 + 0x20)
    *arg2 = rcx
    
    if (rcx != 0)
        *(rcx + 8) += 1

return arg2
