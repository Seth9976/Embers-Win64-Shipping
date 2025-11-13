// 函数: sub_14085aab0
// 地址: 0x14085aab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1407e8e90(arg1 + 0x448)
void* rcx_1 = *(arg1 + 0x38)

if (rcx_1 != 0)
    sub_1408480e0(arg1 + 0x448, sub_1407eeda0(rcx_1))

void* rbx = *(arg1 + 0x58)
int64_t rax_2 = sx.q(*(arg1 + 0x60))
void* rsi_1 = rax_2 * 0x38 + rbx

if (rbx != rsi_1)
    while (true)
        char rax_3 = sub_140834690(rbx)
        
        if (rax_3 != 0)
            break
        
        rbx += 0x38
        
        if (rbx == rsi_1)
            return rax_3
    
    rax_2 = zx.q(*(rbx + 0x30))
    
    if ((rax_2.b & 1) != 0)
        *(arg1 + 0x468) ^= (*(rbx + 0x20) ^ *(arg1 + 0x468)) & 1
        *(arg1 + 0x46c) = *(rbx + 0x24)
        rax_2 = zx.q(*(rbx + 0x30))
    
    if ((rax_2.b & 2) != 0)
        *(arg1 + 0x468) ^= (*(rbx + 0x20) ^ *(arg1 + 0x468)) & 2
        *(arg1 + 0x470) = *(rbx + 0x28)
        rax_2 = zx.q(*(rbx + 0x30))
    
    if ((rax_2.b & 4) != 0)
        *(arg1 + 0x468) ^= (*(rbx + 0x20) ^ *(arg1 + 0x468)) & 4
        rax_2 = zx.q(*(rbx + 0x2c))
        *(arg1 + 0x474) = rax_2.d

return rax_2
