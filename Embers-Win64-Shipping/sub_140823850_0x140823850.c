// 函数: sub_140823850
// 地址: 0x140823850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x258)
int64_t rdi = 0
void* result = &rbx[sx.q(*(arg1 + 0x260))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x260)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            result = (*(*rcx + 0x3a0))(rcx, 0)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)

*(arg1 + 0x260) = 0

if (*(arg1 + 0x264) s<= 0xffffffff)
    result = sub_1405c5570(arg1 + 0x258, 0)

*(arg1 + 0x250) = 0
return result
