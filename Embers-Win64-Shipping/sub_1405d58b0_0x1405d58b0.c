// 函数: sub_1405d58b0
// 地址: 0x1405d58b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x1d]

if (rcx != 0)
    sub_140a74f90(rcx)

DeleteCriticalSection(&arg1[0x12])
int64_t* rcx_2 = arg1[0x11]

if (rcx_2 != 0)
    int32_t temp0_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

sub_1405d56d0(&arg1[0xb])
sub_140596eb0(&arg1[7])
int64_t rcx_5 = arg1[5]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_140d163b0(arg1) __tailcall
