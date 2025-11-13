// 函数: sub_14100e6e0
// 地址: 0x14100e6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efd9d0
arg1[0x13a].d = 0
int64_t rcx = arg1[0x139]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14100e4f0(&arg1[0x131])
sub_141010080(&arg1[0x106])
arg1[0xda] = &data_142ef2bd8
sub_1405d1550(&arg1[0xfc])
arg1[0xae] = &data_142ef2bd8
sub_1405d1550(&arg1[0xd0])
sub_141040300(&arg1[0xa0])
sub_1405d1550(&arg1[0x9e])
sub_1405d1550(&arg1[0x9d])
int64_t* rcx_8 = arg1[0x9c]

if (rcx_8 != 0)
    (*(*rcx_8 + 0x10))(rcx_8)

int64_t* rcx_9 = arg1[0x9b]

if (rcx_9 != 0)
    (*(*rcx_9 + 0x10))(rcx_9)

sub_1405d1550(&arg1[0x9a])
int64_t rcx_11 = arg1[0x98]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_14100f140(&arg1[0x86])
int64_t* rcx_13 = arg1[0x85]

if (rcx_13 != 0)
    (*(*rcx_13 + 0x10))(rcx_13)

int64_t* rcx_14 = arg1[0x84]

if (rcx_14 != 0)
    (*(*rcx_14 + 0x10))(rcx_14)

int64_t* rcx_15 = arg1[0x83]

if (rcx_15 != 0)
    (*(*rcx_15 + 0x10))(rcx_15)

sub_14105d2c0(&arg1[0x44])
sub_140d94f50(&arg1[0x3a])
int64_t result = DeleteCriticalSection(&arg1[0x35])
int64_t* rcx_19 = arg1[0x33]

if (rcx_19 != 0)
    result = (*(*rcx_19 + 0x10))(rcx_19)

int64_t* rcx_20 = arg1[7]

if (rcx_20 != 0)
    result = (*(*rcx_20 + 0x10))(rcx_20)

int64_t* rcx_21 = arg1[5]

if (rcx_21 != 0)
    result = (*(*rcx_21 + 0x10))(rcx_21)

int64_t* rcx_22 = arg1[4]

if (rcx_22 != 0)
    result = (*(*rcx_22 + 0x10))(rcx_22)

int64_t* rcx_23 = arg1[3]

if (rcx_23 == 0)
    return result

return (*(*rcx_23 + 0x10))(rcx_23)
