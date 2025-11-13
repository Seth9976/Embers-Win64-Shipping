// 函数: sub_1413c3040
// 地址: 0x1413c3040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xf0)
void* rbx = arg1
int32_t i_1 = *(arg1 + 0xf8)

if (rcx != 0)
    rbx = rcx

if (i_1 != 0)
    int32_t i
    
    do
        *(rbx + 0x48) = 0
        int64_t rcx_1 = *(rbx + 0x40)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_1413c3ab0(rbx)
        rbx += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0xf0)

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
