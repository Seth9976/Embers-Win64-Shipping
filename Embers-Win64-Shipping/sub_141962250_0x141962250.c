// 函数: sub_141962250
// 地址: 0x141962250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x100)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0x108)

if (i_1 != 0)
    void* rbx_1 = rbx + 8
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            rcx_1[9].d -= 1
            
            if (rcx_1[9].d == 1)
                sub_140a2f6e0(rcx_1)
        
        rbx_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x100)

if (rcx != 0)
    sub_140a74f90(rcx)
