// 函数: sub_14283e2ac
// 地址: 0x14283e2ac
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)

if (rcx != 0)
    int64_t rax_1 = *(rcx + 0x38)
    
    if (rax_1 != 0)
        rax_1(rcx, 1, zx.q(*arg1))

if (arg2 != 0)
    int64_t rax_2 = *(arg2 + 0x38)
    
    if (rax_2 != 0)
        rax_2(arg2, 0, zx.q(*arg1))

void* rcx_2 = *(arg1 + 0x10)

if (rcx_2 != 0)
    int64_t rax_3 = *(rcx_2 + 0x10)
    
    if (rax_3 != 0)
        rax_3(rcx_2)

*(arg1 + 0x10) = arg2
return 0
