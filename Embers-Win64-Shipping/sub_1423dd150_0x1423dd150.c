// 函数: sub_1423dd150
// 地址: 0x1423dd150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0
void* r9_1

while (true)
    if (rax s< 0 || rax s>= *(arg1 + 0xc40))
        return 0
    
    r9_1 = *(*(arg1 + 0xc38) + (sx.q(rax) << 3))
    
    if (*(r9_1 + 0x1a0) == arg2)
        break
    
    rax += 1
    continue

void* rcx_1 = *(r9_1 + 0x218)

if (rcx_1 == 0)
    return 0

return sub_142029870(rcx_1)
