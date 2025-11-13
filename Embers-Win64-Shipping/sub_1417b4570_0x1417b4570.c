// 函数: sub_1417b4570
// 地址: 0x1417b4570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 8)
void* result = &rbx[sx.q(*(arg1 + 0x10))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x10)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 == 0)
    *(arg1 + 0x18) -= 1
else
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            result = (*(*rcx + 0x10))(rcx, zx.q(arg2))
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)
    
    *(arg1 + 0x18) -= 1

return result
