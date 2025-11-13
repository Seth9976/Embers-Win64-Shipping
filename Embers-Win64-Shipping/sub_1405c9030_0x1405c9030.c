// 函数: sub_1405c9030
// 地址: 0x1405c9030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x17]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x14]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x12]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xf]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = arg1[8]

if (rcx_4 != 0)
    int32_t temp0_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
