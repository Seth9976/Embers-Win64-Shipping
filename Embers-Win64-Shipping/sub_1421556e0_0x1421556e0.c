// 函数: sub_1421556e0
// 地址: 0x1421556e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1 + 0x10
void* rax = *(r10 + 0x80)
void* rcx = r10

if (arg2 == 0)
    if (rax != 0)
        rcx = rax
    
    *(rcx + 0x10) = &data_143a2f0a0
    void* rcx_1 = r10
    void* rax_4 = *(r10 + 0x80)
    
    if (rax_4 != 0)
        rcx_1 = rax_4
    
    *(rcx_1 + 0x1c) = 0
    void* rax_5 = *(r10 + 0x80)
    
    if (rax_5 != 0)
        r10 = rax_5
    
    *(r10 + 0x18) = 0
    return rax_5

void* r9 = r10

if (rax != 0)
    r9 = rax

*(r9 + 0x10) = arg2
void* rax_1 = *(r10 + 0x80)

if (rax_1 != 0)
    rcx = rax_1

*(rcx + 0x1c) = *(arg1 + 0x298)
void* rax_3 = *(r10 + 0x80)

if (rax_3 != 0)
    r10 = rax_3

*(r10 + 0x18) = arg3
return rax_3
