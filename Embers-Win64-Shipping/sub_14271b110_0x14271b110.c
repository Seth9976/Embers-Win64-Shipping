// 函数: sub_14271b110
// 地址: 0x14271b110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x18)

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i_1 = *(arg1 + 0x10)
void* rcx_1 = *(arg1 + 8)

if (i_1 != 0)
    int64_t* rbx_1 = rcx_1 + 0x10
    int32_t i
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[7]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_1 = *(arg1 + 8)

if (rcx_1 == 0)
    return 

return sub_140a74f90(rcx_1) __tailcall
