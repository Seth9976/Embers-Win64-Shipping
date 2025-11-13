// 函数: sub_1417fbd70
// 地址: 0x1417fbd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x20)
void* rbx = *(arg1 + 0x18)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x24) == 0
*(arg1 + 0x20) = 0

if (not(cond:0))
    sub_1405a51b0(arg1 + 0x18, 0)
