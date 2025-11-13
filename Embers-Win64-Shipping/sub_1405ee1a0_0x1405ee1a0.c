// 函数: sub_1405ee1a0
// 地址: 0x1405ee1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*arg1 = &data_142d5f320
arg1[1] = &data_142d5f368
arg1[2] = &data_142d5f388
arg1[3] = &data_142d5f3e8
arg1[4] = &data_142d5f408
int64_t* rcx = arg1[0xc]

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)
    arg1[0xc] = 0

int64_t* rcx_1 = arg1[0xf]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rcx_2 = arg1[0xe]

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)

int64_t* rcx_3 = arg1[0xd]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

int64_t* rcx_4 = arg1[0xc]

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

int64_t* rcx_5 = arg1[0xb]

if (rcx_5 != 0)
    (*(*rcx_5 + 0x10))(rcx_5)

DeleteCriticalSection(&arg1[5])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
