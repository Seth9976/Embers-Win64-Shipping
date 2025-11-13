// 函数: sub_1407504f0
// 地址: 0x1407504f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x178)
void* result = &rbx[sx.q(*(arg1 + 0x180))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x180)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            result = (*(*rcx + 0x10))(rcx, *(arg1 + 0x1a0))
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)

return result
