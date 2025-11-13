// 函数: sub_14094f310
// 地址: 0x14094f310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e32fb8
int64_t* rcx = arg1[0x11]

if (rcx != 0)
    (*(*rcx + 0x38))(rcx, arg1)
    int64_t* rcx_1 = arg1[0x11]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
        arg1[0x11] = 0

if (arg1[0x12].b != 0)
    CoUninitialize()

DeleteCriticalSection(&arg1[0xc])
arg1[0xb].d = 0
int64_t rcx_3 = arg1[0xa]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405a5410(&arg1[2], 0)

arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
sub_14059a8e0(&arg1[4], 0)
int64_t rcx_6 = arg1[6]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[2]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
