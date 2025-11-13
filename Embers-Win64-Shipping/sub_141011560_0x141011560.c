// 函数: sub_141011560
// 地址: 0x141011560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efcdd8
sub_14101c520(arg1)
int64_t* rcx = arg1[0x2b]

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1 && rcx != 0)
        (**rcx)(rcx, 1)

int64_t* rcx_1 = arg1[0x2a]

if (rcx_1 != 0)
    int32_t rbx_1 = rcx_1[1].d
    rcx_1[1].d -= 1
    
    if (rbx_1 == 1 && rcx_1 != 0)
        (**rcx_1)(rcx_1, zx.q(rbx_1))

DeleteCriticalSection(&arg1[0x24])
DeleteCriticalSection(&arg1[0x1f])
sub_1405d1550(&arg1[0x1d])
sub_14100e910(&arg1[0x10])
sub_14100e450(&arg1[0xc])
DeleteCriticalSection(&arg1[6])
int64_t* rcx_8 = arg1[5]

if (rcx_8 != 0)
    (*(*rcx_8 + 0x10))(rcx_8)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
