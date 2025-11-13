// 函数: sub_142381110
// 地址: 0x142381110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x380)
void* rbx = arg1
int32_t i_1 = *(arg1 + 0x388)

if (rcx != 0)
    rbx = rcx

if (i_1 != 0)
    int32_t i
    
    do
        *rbx = &data_142dd5bb0
        sub_14081d280(rbx + 0x38)
        sub_14081c9d0(rbx + 0x30)
        sub_140a1d5c0(rbx + 0x18)
        *(rbx + 0x10) = &data_142da7708
        sub_1419948a0(rbx)
        rbx += 0x70
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x380)

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
