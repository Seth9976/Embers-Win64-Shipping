// 函数: sub_1405dfb30
// 地址: 0x1405dfb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x1c]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x1a]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int32_t i_2 = arg1[0x19].d
int64_t* rbx = arg1[0x18]

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
    rbx = arg1[0x18]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_4 = arg1[0x10]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_3 = arg1[0xd].d
int64_t* rbx_1 = arg1[0xc]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[0xc]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

sub_1405dede0(&arg1[0xa])
arg1[9].d = 0
int64_t rcx_8 = arg1[8]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return sub_1405df330(arg1) __tailcall
