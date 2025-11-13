// 函数: sub_141eae4e0
// 地址: 0x141eae4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg2
void* rcx = *(arg1 + 0x280)
void** rdi

if (rcx == 0)
    rdi = nullptr
else
    rdi = sub_141f3b9f0(rcx)

if (rbx == 0)
    void* rcx_1 = *(arg1 + 0x280)
    void** rax
    
    if (rcx_1 != 0)
        rax = sub_141f3b9f0(rcx_1)
    
    if (rcx_1 == 0 || rax == 0)
        rbx = nullptr
    else
        rbx = sub_141e01760(rax)

if (rdi != 0 && rbx != 0 && sub_141e06b90(rdi, rbx).b == 0)
    sub_141e07a00(rdi, rbx[0x1d].d, rbx)
