// 函数: sub_14100fca0
// 地址: 0x14100fca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(arg1 + 0x88)
int32_t i_1 = *(arg1 + 0x78)
int64_t* rbx = *(arg1 + 0x70)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x70)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_3 = *(arg1 + 0x60)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return sub_1405ae080(arg1 + 0x10) __tailcall
