// 函数: sub_1420dbda0
// 地址: 0x1420dbda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432c0f20
arg1[5] = &data_1432c1180
j_sub_1423c0390()
int64_t r8 = data_143f5b210
(*(r8 + 0x10))(&data_143f5b210, arg1[0x27], r8)
arg1[0x27] = 0
sub_1408463f0(&arg1[0x4e])
int64_t rcx_1 = arg1[0x4c]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x4a]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140596eb0(&arg1[0x45])
sub_140596eb0(&arg1[0x40])
int64_t* rcx_5 = arg1[0x38]

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        sub_140a2f6e0(rcx_5)

int64_t rcx_6 = arg1[0x36]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1420d90c0(&arg1[0x2e])
int64_t rcx_8 = arg1[0x25]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x23]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x20]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x19]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x15]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x13]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_14094c030(&arg1[6])
arg1[5] = &data_142d44da8
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
