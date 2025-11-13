// 函数: sub_1417068a0
// 地址: 0x1417068a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = arg1[7]
*arg1 = &data_142fc4328

if (rbx != 0)
    sub_141705ba0(&rbx[0x36])
    sub_141705c70(rbx)
    j_sub_140a74f90(rbx)

int32_t i_1 = arg1[3].d
int64_t* rbx_1 = arg1[2]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg1[2]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

*arg1 = &data_142fc3cd0
return &data_142fc3cd0
