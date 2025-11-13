// 函数: sub_1422dc9b0
// 地址: 0x1422dc9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xb]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[9]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_14094af20(&arg1[7])
int32_t i_1 = arg1[6].d
int64_t* rbx = arg1[5]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[5]

if (rbx != 0)
    sub_140a74f90(rbx)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
