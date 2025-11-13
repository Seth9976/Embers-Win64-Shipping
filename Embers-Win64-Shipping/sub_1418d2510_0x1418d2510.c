// 函数: sub_1418d2510
// 地址: 0x1418d2510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x25]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_1418d3960(&arg1[2])
int32_t i_1 = arg1[1].d
int64_t* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            result = sub_140a74f90(rcx_2)
        
        rbx = &rbx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
