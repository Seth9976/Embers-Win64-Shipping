// 函数: sub_141c318e0
// 地址: 0x141c318e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x15]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x13]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x11]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t i_1 = arg1[0x10].d
void*** rcx_3 = arg1[0xf]

if (i_1 != 0)
    int32_t i
    
    do
        *rcx_3 = &data_1432050e8
        rcx_3 = &rcx_3[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_3 = arg1[0xf]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t result = sub_141c316f0(&arg1[0xd])
int64_t* rcx_5 = arg1[8]
arg1[6] = &data_1432050f8

if (rcx_5 != 0)
    if (rcx_5[-1] == 0)
        result = j_sub_140a74f90(&rcx_5[-1])
    else
        result = (**rcx_5)(rcx_5, 3)

int64_t* rcx_7 = arg1[2]
*arg1 = &data_1432050f8

if (rcx_7 == 0)
    return result

if (rcx_7[-1] == 0)
    return j_sub_140a74f90(&rcx_7[-1])

jump(**rcx_7)
