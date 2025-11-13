// 函数: sub_14189db30
// 地址: 0x14189db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe9c48
arg1[1] = 0
arg1[1] = *arg6
*arg6 = 0
arg1[2].d = arg6[1].d
*(arg1 + 0x14) = *(arg6 + 0xc)
arg6[1] = 0
arg1[3] = 0
arg1[3] = *arg7
*arg7 = 0
arg1[4].d = arg7[1].d
*(arg1 + 0x24) = *(arg7 + 0xc)
arg7[1] = 0
arg1[5] = arg2
arg1[6] = arg3
arg1[7] = arg5
arg1[8] = 0
arg1[9] = 0
arg1[0xa].d = arg4
void* rcx = &arg1[0xd]
arg1[0xb] = 0
arg1[0xc] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_7 = *(rcx + 0x10)

if (rax_7 != 0)
    rcx = rax_7

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x17]
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
arg1[0x15] = 0
arg1[0x16] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_8 = *(rcx_1 + 0x10)

if (rax_8 != 0)
    rcx_1 = rax_8

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
arg1[0x1d] = 0
arg1[0x1e].d = 0
arg1[0x1f].d = 0
*(arg1 + 0xfc) = 0
int64_t* rcx_2 = arg1[7]
arg1[0x20] = 0
(*(*rcx_2 + 0x88))(rcx_2)

if (*(arg1 + 0x4c) s< 0x400000)
    sub_1405c5510(&arg1[8], 0x400000)

int32_t rax_10 = &arg1[9].d[0x80000]
arg1[9].d = rax_10

if (rax_10 s> *(arg1 + 0x4c))
    sub_1405daba0(&arg1[8])

int64_t rcx_5 = *arg6

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg7

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg1
