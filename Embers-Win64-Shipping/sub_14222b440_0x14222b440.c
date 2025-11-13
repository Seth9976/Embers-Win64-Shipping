// 函数: sub_14222b440
// 地址: 0x14222b440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143306e88
arg1[1] = &data_143306ec8
void* rcx = arg1[0x14]

if (rcx != 0)
    void* rcx_1 = *(rcx + 0x350)
    int32_t arg_10 = 0
    sub_141d41f40(rcx_1, &arg_10, arg1)

void* rcx_2 = arg1[0x13]

if (rcx_2 != 0)
    sub_141d36b90(rcx_2, arg1[0x14])

arg1[0x13] = 0
arg1[0x14] = 0
sub_1408d84f0(&arg1[0x15])
sub_1408d84f0(&arg1[0x1f])
sub_1405a46b0(&data_14399fce8, arg1)
void* rcx_5 = data_143f514c8

if (rcx_5 != 0)
    sub_1405a46b0(rcx_5 + 8, arg1)

uint32_t dwTlsIndex = arg1[0x2b].d

if (dwTlsIndex != 0xffffffff)
    TlsFree(dwTlsIndex)

sub_1405ae080(&arg1[0x1f])
sub_1405ae080(&arg1[0x15])
int64_t* rcx_9 = arg1[0x11]

if (rcx_9 != 0)
    (**rcx_9)(rcx_9, 1)

sub_14222ac10(&arg1[0xf])
sub_1405ae100(&arg1[5])
int64_t rcx_12 = arg1[3]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

arg1[1] = &data_142d44d70
void* rcx_13 = data_143e1a338

if (rcx_13 != 0 && arg1[2].b != 0)
    sub_140bb6e00(rcx_13, &arg1[1])

sub_1423bb350(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
