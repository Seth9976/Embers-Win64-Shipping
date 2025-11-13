// 函数: sub_1405eccc0
// 地址: 0x1405eccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*arg1 = &data_142d5ee08
arg1[1] = &data_142d5ee30
sub_1405ffa80(arg1)
sub_140a4fc50(arg1[0xd])
arg1[0xd] = 0
int64_t rcx_1 = arg1[0x1d]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x1b]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (arg1[0x17].b != 0)
    arg1[0x17].b = 0

int64_t* rcx_3 = arg1[0x15]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

if (arg1[0x14].b != 0)
    arg1[0x14].b = 0

int64_t* rcx_4 = arg1[0x12]

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

int64_t* rcx_5 = arg1[0x11]

if (rcx_5 != 0)
    (*(*rcx_5 + 0x10))(rcx_5)

int64_t* rcx_6 = arg1[0x10]

if (rcx_6 != 0)
    (*(*rcx_6 + 0x10))(rcx_6)

int64_t* rcx_7 = arg1[0xc]

if (rcx_7 != 0)
    (*(*rcx_7 + 0x10))(rcx_7)

while (arg1[0xb] != 0)
    int64_t* rcx_8 = arg1[0xb]
    arg1[0xb] = *rcx_8
    j_sub_140a74f90(rcx_8)

int64_t* rcx_9 = arg1[9]

if (rcx_9 != 0)
    (*(*rcx_9 + 0x10))(rcx_9)

DeleteCriticalSection(&arg1[3])
arg1[1] = &data_142d573b8
return &data_142d573b8
