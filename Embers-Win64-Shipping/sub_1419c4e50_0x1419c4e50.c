// 函数: sub_1419c4e50
// 地址: 0x1419c4e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14300e0a0
int32_t i_1 = arg1[8].d
int64_t* rbx = arg1[7]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[7]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_2 = arg1[5]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
