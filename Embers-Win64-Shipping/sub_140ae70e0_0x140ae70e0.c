// 函数: sub_140ae70e0
// 地址: 0x140ae70e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140aeb550(arg1)
int32_t i_2 = *(arg1 + 0x40)
int64_t* rbx = *(arg1 + 0x38)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x38)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t result = sub_140ae6da0(arg1 + 0x20)
int32_t i_3 = *(arg1 + 0x10)
int64_t* rbx_1 = *(arg1 + 8)

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = *(arg1 + 8)

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
