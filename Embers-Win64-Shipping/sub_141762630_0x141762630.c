// 函数: sub_141762630
// 地址: 0x141762630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[8]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_141761fd0(&arg1[6])
int32_t i_1 = arg1[5].d
void* rcx_2 = arg1[4]

if (i_1 != 0)
    int64_t* rbx_1 = rcx_2 + 8
    int32_t i
    
    do
        sub_141761fd0(rbx_1)
        rbx_1 = &rbx_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_2 = arg1[4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_4 = arg1[2]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return sub_141761f10(arg1) __tailcall
