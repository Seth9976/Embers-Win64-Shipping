// 函数: sub_1418b9470
// 地址: 0x1418b9470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x20
    int32_t i
    
    do
        int64_t* rcx_1 = *(rbx_1 + 8)
        
        if (rcx_1 != 0)
            rcx_1[1].d -= 1
            
            if (rcx_1[1].d == 1 && rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
        
        int64_t* rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            rcx_2[1].d -= 1
            
            if (rcx_2[1].d == 1 && rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
        
        rbx_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
