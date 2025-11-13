// 函数: sub_14189f230
// 地址: 0x14189f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe9aa8
sub_140a2fe90(arg1[1], arg1[2])

for (void* i = arg1[0x1d]; i != 0; i = arg1[0x1d])
    arg1[0x1d] = *arg1[0x1d]
    
    if (i != 0)
        sub_1418aab80(i + 8)
        j_sub_140a74f90(i)

arg1[0x1a].d = 0
int64_t rcx_3 = arg1[0x19]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_14189e160(&arg1[0x11])
arg1[0x10].d = 0
int64_t rcx_5 = arg1[0xf]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_14189e090(&arg1[7])
int32_t i_3 = arg1[6].d
int64_t* rdi = arg1[5]

if (i_3 != 0)
    int32_t i_1
    
    do
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(rdi)
        rdi = &rdi[7]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rdi = arg1[5]

if (rdi != 0)
    sub_140a74f90(rdi)

int32_t i_4 = arg1[4].d
int64_t* rdi_1 = arg1[3]

if (i_4 != 0)
    int32_t i_2
    
    do
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(rdi_1)
        rdi_1 = &rdi_1[7]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rdi_1 = arg1[3]

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

*arg1 = &data_142e61248

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
