// 函数: sub_141705c70
// 地址: 0x141705c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc4318
arg1[0x33] = &data_142fc41f0
int64_t rcx = arg1[0x34]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x30] = &data_142fc41c0
int64_t rcx_1 = arg1[0x31]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x2d] = &data_142fc4190
int64_t rcx_2 = arg1[0x2e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x2a] = &data_142fc4160
int64_t rcx_3 = arg1[0x2b]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x27] = &data_142fc42e8
int64_t rcx_4 = arg1[0x28]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0x24] = &data_142fc42e8
int64_t rcx_5 = arg1[0x25]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0x21] = &data_142fc4130
int32_t i_1 = arg1[0x23].d
int64_t* rdi = arg1[0x22]

if (i_1 != 0)
    int32_t i
    
    do
        sub_1405ae080(rdi)
        rdi = &rdi[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = arg1[0x22]

if (rdi != 0)
    sub_140a74f90(rdi)

arg1[0x1e] = &data_142fc42b8
sub_141705630(&arg1[0x1f])
arg1[0x1b] = &data_142fc4288
int64_t rcx_9 = arg1[0x1c]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[0x18] = &data_142fc40a0
int64_t rcx_10 = arg1[0x19]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_141705950(&arg1[0x15])
arg1[0x12] = &data_142fc40d0
sub_140596e10(&arg1[0x13])
arg1[0xf] = &data_142fc40a0
int64_t rcx_13 = arg1[0x10]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

arg1[0xc] = &data_142fc4258
int64_t rcx_14 = arg1[0xd]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[9] = &data_142fc4070
int64_t rcx_15 = arg1[0xa]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

*arg1 = &data_142fc4250
arg1[4] = &data_142fc4220
int64_t rcx_16 = arg1[5]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

*arg1 = &data_142fc4068
int64_t rcx_17 = arg1[1]

if (rcx_17 == 0)
    return &data_142fc4068

return sub_140a74f90(rcx_17)
