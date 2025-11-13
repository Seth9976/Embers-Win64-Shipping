// 函数: sub_1417fda50
// 地址: 0x1417fda50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[0x17].d
int64_t* rbx = arg1[0x16]

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
    rbx = arg1[0x16]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_2 = arg1[0x13]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x12].d = 0
int64_t rcx_3 = arg1[0x11]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140681eb0(&arg1[9])
sub_140b0be90(&arg1[1])
*arg1 = &IModuleInterface::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
