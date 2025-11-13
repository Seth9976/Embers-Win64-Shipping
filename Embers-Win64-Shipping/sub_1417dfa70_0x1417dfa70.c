// 函数: sub_1417dfa70
// 地址: 0x1417dfa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
int64_t rax

if (rcx != 0)
    uint64_t result = 0
    bool z_1
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
        z_1 = true
    else
        result = zx.q(*(rcx + 8))
        z_1 = false
    
    if (z_1)
        return result
    
    void* rcx_2 = *(arg1 + 8)
    *(arg1 + 0x18) = 0
    bool z_2
    
    if (0 == *(rcx_2 + 0xc))
        *(rcx_2 + 0xc) = 0
        z_2 = true
    else
        *(rcx_2 + 0xc)
        z_2 = false
    
    rax = *(arg1 - 0x30)
    
    if (z_2)
        jump(*(rax + 0x280))
else
    rax = *(arg1 - 0x30)
    *(arg1 + 0x18) = rcx.b

jump(*(rax + 0x288))
