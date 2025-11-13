// 函数: sub_141fa92f0
// 地址: 0x141fa92f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae080(&arg1[0x34a])
int32_t i_2 = arg1[0x349].d
int64_t* rbx = arg1[0x348]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx = &rbx[5]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = arg1[0x348]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_3 = arg1[0x347].d
int64_t* rbx_1 = arg1[0x346]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[5]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[0x346]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

sub_14094c510(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
