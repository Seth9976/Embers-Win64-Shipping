// 函数: sub_1425f7930
// 地址: 0x1425f7930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14344b868
int64_t* rcx = arg1[0xc]

if (rcx != 0)
    (*(*rcx + 0x38))(rcx, arg1)
    int64_t* rcx_1 = arg1[0xc]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
        arg1[0xc] = 0

if (arg1[0xd].b != 0)
    CoUninitialize()

arg1[0xb].d = 0
int64_t rcx_2 = arg1[0xa]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1425f77b0(&arg1[2])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
