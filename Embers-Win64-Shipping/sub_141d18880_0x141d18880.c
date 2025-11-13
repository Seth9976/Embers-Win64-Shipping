// 函数: sub_141d18880
// 地址: 0x141d18880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14321eb38
int32_t i_1 = arg1[2].d
int64_t* rbx = arg1[1]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[1]

if (rbx != 0)
    sub_140a74f90(rbx)

*arg1 = &data_14321e5f8
return &data_14321e5f8
