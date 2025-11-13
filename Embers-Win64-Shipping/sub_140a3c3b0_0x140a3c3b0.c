// 函数: sub_140a3c3b0
// 地址: 0x140a3c3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5c178
int64_t rcx = arg1[9]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_140a3bf30(&arg1[7])
int32_t i_1 = arg1[6].d
int64_t* rbx = arg1[5]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            result = sub_140a74f90(rcx_2)
        
        rbx = &rbx[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[5]

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
