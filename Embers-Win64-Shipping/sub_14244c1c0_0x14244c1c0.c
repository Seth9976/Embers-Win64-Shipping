// 函数: sub_14244c1c0
// 地址: 0x14244c1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xe].d = 0
int64_t rcx = arg1[0xd]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1405df4c0(&arg1[5])
int32_t i_2 = arg1[4].d
int64_t* rbx = arg1[3]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = arg1[3]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_3 = arg1[2].d
int64_t* rbx_1 = arg1[1]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[1]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

*arg1 = &data_142d6ad38
return &data_142d6ad38
