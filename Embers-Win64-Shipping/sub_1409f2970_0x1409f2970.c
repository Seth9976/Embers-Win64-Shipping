// 函数: sub_1409f2970
// 地址: 0x1409f2970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1409f1840(arg2 + 0x18)
int32_t i_1 = *(arg2 + 0x10)
int64_t* rbx = *(arg2 + 8)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            result = sub_140a74f90(rcx_1)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg2 + 8)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
