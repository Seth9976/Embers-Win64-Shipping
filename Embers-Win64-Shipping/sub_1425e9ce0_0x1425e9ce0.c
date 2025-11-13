// 函数: sub_1425e9ce0
// 地址: 0x1425e9ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14344a748
int64_t rcx = arg1[0x18]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[0x12]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rcx_2 = arg1[0x11]

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)

sub_140846380(&arg1[0xf])
int64_t rcx_4 = arg1[0xb]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[9]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_143449f10
int64_t rcx_6 = arg1[6]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

DeleteCriticalSection(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
