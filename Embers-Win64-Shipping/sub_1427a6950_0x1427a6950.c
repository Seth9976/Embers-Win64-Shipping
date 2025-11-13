// 函数: sub_1427a6950
// 地址: 0x1427a6950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg1 + 0x2e0))()
void* rbx = *rax_1
int64_t result = sx.q(rax_1[1].d)
void* rcx_1 = result * 0xb0 + rbx

if (rbx == rcx_1)
    return result

while (*(rbx + 8) != arg2)
    rbx += 0xb0
    
    if (rbx == rcx_1)
        return result

void* rax_2 = *(rbx + 0x80)
void* rcx_2 = rbx + 0x90

if (rax_2 != 0)
    rcx_2 = rax_2

return (*(rbx + 0x70))((*(*rcx_2 + 8))(rcx_2))
