// 函数: sub_141011360
// 地址: 0x141011360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg1[0xa]

if (rdx != 0)
    sub_14105be80(*(*arg1 + 0x20) + 0x830, rdx)
    GFSDK_Aftermath_ReleaseContextHandle(arg1[0xa])

int64_t* rcx_3 = arg1[6]
arg1[6] = 0

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

if (data_1439b4ad4 != 0)
    void* rdi_1 = arg1[0x23]
    
    if (rdi_1 != 0)
        j_sub_140a74f90(*(rdi_1 + 8))
        j_sub_140a74f90(rdi_1)

int64_t rcx_6 = arg1[0x24]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x22].d = 0
int64_t rcx_7 = arg1[0x21]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_140ba2750(&arg1[0x19], 0)
int64_t rcx_9 = arg1[0x1d]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x19]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x17]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

DeleteCriticalSection(&arg1[0x12])

while (arg1[0x11] != 0)
    int64_t* rcx_13 = arg1[0x11]
    arg1[0x11] = *rcx_13
    j_sub_140a74f90(rcx_13)

int64_t* rcx_14 = arg1[9]

if (rcx_14 != 0)
    (*(*rcx_14 + 0x10))(rcx_14)

int64_t* rcx_15 = arg1[8]

if (rcx_15 != 0)
    (*(*rcx_15 + 0x10))(rcx_15)

int64_t* rcx_16 = arg1[7]

if (rcx_16 != 0)
    (*(*rcx_16 + 0x10))(rcx_16)

int64_t* rcx_17 = arg1[6]

if (rcx_17 != 0)
    (*(*rcx_17 + 0x10))(rcx_17)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
