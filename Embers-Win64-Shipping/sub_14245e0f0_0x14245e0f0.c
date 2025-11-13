// 函数: sub_14245e0f0
// 地址: 0x14245e0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x20
    int32_t i
    
    do
        sub_14100dc70(&rbx_1[2])
        sub_14100dc70(rbx_1)
        int64_t rcx_3 = rbx_1[-2]
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
