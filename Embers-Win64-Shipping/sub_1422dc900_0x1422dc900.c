// 函数: sub_1422dc900
// 地址: 0x1422dc900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[8].d
int64_t* rbx = arg1[7]

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
    rbx = arg1[7]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_3 = arg1[6].d
int64_t* rbx_1 = arg1[5]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[5]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
