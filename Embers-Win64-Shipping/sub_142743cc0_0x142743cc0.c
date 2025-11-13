// 函数: sub_142743cc0
// 地址: 0x142743cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xdf]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xdb]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0xd5]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xce]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t i_1 = arg1[0xcd].d
void*** rcx_4 = arg1[0xcc]

if (i_1 != 0)
    int32_t i
    
    do
        *rcx_4 = &data_1434983f0
        rcx_4 = &rcx_4[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_4 = arg1[0xcc]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xc9]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0xc7] = &data_14322cbf0
sub_141f05150(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
