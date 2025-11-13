// 函数: sub_141e50e60
// 地址: 0x141e50e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x78)
int64_t* rbx = *(arg1 + 0x70)

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
    rbx = *(arg1 + 0x70)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t result = sub_1408464b0(arg1 + 0x50)
int32_t i_3 = *(arg1 + 0x48)
int64_t* rbx_1 = *(arg1 + 0x40)

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
    rbx_1 = *(arg1 + 0x40)

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

int64_t rcx_5 = *(arg1 + 0x20)

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
