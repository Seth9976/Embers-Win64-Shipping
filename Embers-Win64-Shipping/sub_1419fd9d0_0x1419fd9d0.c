// 函数: sub_1419fd9d0
// 地址: 0x1419fd9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[6]
int32_t i_1 = arg1[7].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x48
    int32_t i
    
    do
        int64_t rcx_1 = *(rbx_1 + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 - 0x10)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rbx_1 - 0x20)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 += 0x68
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[6]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_5 = arg1[4]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[2]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *arg1

if (rcx_7 == 0)
    return 

return sub_140a74f90(rcx_7) __tailcall
