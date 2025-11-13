// 函数: sub_142195b60
// 地址: 0x142195b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x10)
void* result = &rbx[sx.q(*(arg1 + 0x18))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x18)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 == 0)
    *(arg1 + 8) = 1
else
    do
        int64_t* rcx = *rbx
        result = (*(*rcx + 8))(rcx)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)
    
    *(arg1 + 8) = 1

return result
