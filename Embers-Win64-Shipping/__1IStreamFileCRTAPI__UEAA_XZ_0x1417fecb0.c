// 函数: ??1IStreamFileCRTAPI@@UEAA@XZ
// 地址: 0x1417fecb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe1860
arg1[1] = &data_142fe18a8
int64_t* rcx = arg1[0x10]

if (rcx != 0)
    int64_t rdx
    rdx.b = 1
    (*(*rcx + 0x10))(rcx, rdx)
    int64_t* rcx_1 = arg1[0x10]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x20))(rcx_1, 1)
    
    arg1[0x10] = 0

while (arg1[0xf] != 0)
    int64_t* rcx_2 = arg1[0xf]
    arg1[0xf] = *rcx_2
    j_sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xc]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

while (arg1[0xb] != 0)
    int64_t* rcx_4 = arg1[0xb]
    arg1[0xb] = *rcx_4
    j_sub_140a74f90(rcx_4)

while (arg1[9] != 0)
    int64_t* rcx_5 = arg1[9]
    arg1[9] = *rcx_5
    j_sub_140a74f90(rcx_5)

arg1[1] = &data_142d4ba00
*arg1 = &data_142d565e8
return &data_142d565e8
