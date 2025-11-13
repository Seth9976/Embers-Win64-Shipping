// 函数: sub_142cb1bf0
// 地址: 0x142cb1bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143cdfc28
int32_t i_1 = data_143cdfc30

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x18
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = data_143cdfc28

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
