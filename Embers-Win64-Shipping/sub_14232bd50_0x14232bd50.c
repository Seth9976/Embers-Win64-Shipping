// 函数: sub_14232bd50
// 地址: 0x14232bd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143328a38
sub_142307490(&arg1[9])
int64_t rcx_1 = arg1[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int32_t i_1 = arg1[2].d
int64_t* rbx = arg1[1]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[1]

if (rbx != 0)
    sub_140a74f90(rbx)

*arg1 = &data_142d5a090
return &data_142d5a090
