// 函数: sub_1418c4a20
// 地址: 0x1418c4a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x140)

if (*(rcx + 0x1578) != 0 && arg1 == *(rcx + 0x1a58))
    void* rsi = *(rcx + 0x1a50)
    sub_1418c4a20(rsi)
    void*** rax = j_sub_140a82f30(0x28)
    void*** rdi
    
    if (rax == 0)
        rdi = nullptr
    else
        rdi = sub_1418b8750(rax, *(arg1 + 0x140))
    
    void* rcx_3 = *(arg1 + 0x240)
    
    if (*(rcx_3 + 0x78) != 0)
        sub_1418c86c0(rcx_3, 0, 0)
        rcx_3 = *(arg1 + 0x240)
    
    sub_1418c8030(rcx_3, rdi)
    void* rbx_1 = *(rsi + 0x240)
    
    if (*(rbx_1 + 0x78) != 0)
        sub_1418c86c0(rbx_1, 0, 0)
    
    return sub_1418bb120(*(rbx_1 + 0x70), 0x800, rdi) __tailcall

int64_t rax_3

if (*(rcx + 0x1560) != *(arg1 + 0x148))
    rax_3.b = 1
else
    void* rcx_7 = *(arg1 + 0x240)
    
    if (*(rcx_7 + 0x78) != 0)
        sub_1418c86c0(rcx_7, 0, 0)
        rcx_7 = *(arg1 + 0x240)
    
    *(arg1 + 0x150) = 1
    sub_1418c8030(rcx_7, nullptr)
    sub_1418c2ee0(*(arg1 + 0x240))
    rax_3.b = 0

*(arg1 + 0x150) = rax_3.b
void* rdi_1 = *(arg1 + 0x240)

if (*(rdi_1 + 0x78) != 0)
    sub_1418c86c0(rdi_1, 0, 0)

void* rax_4 = *(rdi_1 + 0x70)

if (rax_4 != 0 && *(rax_4 + 0x2c) == 1)
    sub_1418c5fb0(arg1)

return sub_1418c4f60(*(arg1 + 0x240), 0) __tailcall
