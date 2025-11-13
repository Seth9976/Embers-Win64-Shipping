// 函数: sub_1427c2810
// 地址: 0x1427c2810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[0x11].d
int64_t* rbx = arg1[0x10]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x10]

if (rbx != 0)
    sub_140a74f90(rbx)

sub_14279d4a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
