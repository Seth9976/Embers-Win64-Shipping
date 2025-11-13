// 函数: sub_1417057f0
// 地址: 0x1417057f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xa00)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0xa10)

if (i_1 != 0)
    void* rbx_1 = rbx + 0x128
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 += 0x140
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0xa00)

if (rcx != 0)
    sub_140a74f90(rcx)
