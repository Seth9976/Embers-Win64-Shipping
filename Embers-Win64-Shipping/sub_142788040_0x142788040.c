// 函数: sub_142788040
// 地址: 0x142788040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x78)
void* rbx = arg1
int32_t i_1 = *(arg1 + 0x80)

if (rcx != 0)
    rbx = rcx

if (i_1 != 0)
    int32_t i
    
    do
        sub_1405ec8a0(rbx + 0x20)
        *rbx = &data_142dda848
        sub_1405d1550(rbx + 0x10)
        sub_1419948a0(rbx)
        rbx += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x78)

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
