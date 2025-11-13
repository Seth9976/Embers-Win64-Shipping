// 函数: sub_141f2f5c0
// 地址: 0x141f2f5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dde9c0(&arg1[0x4f])
int64_t rcx_1 = arg1[0x4d]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int32_t i_1 = arg1[0x4a].d
int64_t* rbx = arg1[0x49]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x49]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_4 = arg1[0x45]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x43]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x41]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x3f]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return sub_1405aef50(arg1) __tailcall
