// 函数: sub_1425f2ab0
// 地址: 0x1425f2ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = data_143f70bc0

if (rbx == 0)
    return 

*rbx = &data_14344aac0
rbx[1] = &data_14344aac8
rbx[2] = &data_14344aad0
sub_1425f4030(rbx)
int64_t* rcx_2 = rbx[0x15]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = rbx[0x14]

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

DeleteCriticalSection(&rbx[0xf])
DeleteCriticalSection(&rbx[0xa])
int64_t rcx_6 = rbx[8]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

DeleteCriticalSection(&rbx[3])
j_sub_140a74f90(rbx)
data_143f70bc0 = 0
