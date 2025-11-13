// 函数: sub_141030570
// 地址: 0x141030570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg3)
void* rbx = arg4

if (arg4 != 0 && data_1439c7a34 u> 1)
    while (*(rbx + 0x28) != *(arg1 + 0x138))
        rbx = *(rbx + 0x30)
        
        if (rbx == 0)
            break

int64_t rax_2

if (rbx != 0)
    rax_2 = *(rbx + 0x88)

if (rbx == 0 || rax_2 == 0)
    if (*(arg1 + (rbp << 3) + 0x2540) != 0)
        *(arg1 + (rbp << 3) + 0x2540) = 0
        *(arg1 + (rbp << 3) + 0x2840) = 0
        *(arg1 + 0x22ba) |= (1 << (rbp.d u% 0x20)).w
else if (rax_2 != *(arg1 + (rbp << 3) + 0x2540))
    *(arg1 + (rbp << 3) + 0x2540) = rax_2
    void* rax_3 = *(rbx + 0x50)
    void* rdx = *(rax_3 + 0x28)
    void* rcx = rdx + 0x28
    
    if (rdx == 0)
        rcx = rax_3 + 0x30
    
    *(arg1 + (rbp << 3) + 0x2840) = rcx
    *(arg1 + 0x22ba) |= (1 << (rbp.d u% 0x20)).w

if (data_143f0f1d0 == 0)
    sub_1405d16e0(arg1 + 0x3ae0 + (rbp << 3), arg4)

*(arg1 + (rbp << 3) + 0x37e0) = rbx
int16_t result = *(arg1 + 0x3b6a) | (1 << (rbp.d u% 0x20)).w
*(arg1 + 0x3b6a) = result
return result
