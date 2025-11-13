// 函数: sub_1414129a0
// 地址: 0x1414129a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xc0)
void* rbx = arg1

if (rcx != 0)
    rbx = rcx

int32_t i_1 = *(arg1 + 0xc8)

if (i_1 != 0)
    void* rbx_1 = rbx + 0x18
    int32_t i
    
    do
        int64_t* rcx_1 = *(rbx_1 + 0x18)
        
        if (rcx_1 != 0)
            rcx_1[1].d -= 1
            
            if (rcx_1[1].d == 1)
                (**rcx_1)(rcx_1, 1)
        
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0xc0)

if (rcx != 0)
    sub_140a74f90(rcx)
