// 函数: sub_1426a7880
// 地址: 0x1426a7880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x30
    int32_t i
    
    do
        sub_140745b20(&rbx_1[3])
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = rbx_1[-2]
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = rbx_1[-4]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 = &rbx_1[0xb]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
