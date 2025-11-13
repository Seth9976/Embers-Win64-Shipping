// 函数: sub_141afc200
// 地址: 0x141afc200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xaa0)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0xab0)

if (i_1 != 0)
    void* rbx_1 = rbx + 0x530
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 += 0x550
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0xaa0)

if (rcx != 0)
    sub_140a74f90(rcx)
