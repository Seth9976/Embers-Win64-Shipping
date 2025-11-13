// 函数: sub_141b84fc0
// 地址: 0x141b84fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(&arg1[0x60])
int32_t i_1 = arg1[0x5f].d
int64_t* rdi = arg1[0x5e]

if (i_1 != 0)
    int32_t i
    
    do
        j_sub_140a74f90(*rdi)
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x5f].d = 0

if (*(arg1 + 0x2fc) != 0)
    sub_140638c50(&arg1[0x5e], 0)

int64_t rcx_3 = arg1[0x5e]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x5d].d = 0
int64_t rcx_4 = arg1[0x5c]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_141b83ed0(&arg1[0x54])
int64_t rcx_6 = arg1[0x4d]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x4b]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x49]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x47]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x44]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

DeleteCriticalSection(&arg1[0x3f])
int64_t rcx_12 = arg1[0x3d]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x3b]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_1405ae080(&arg1[0x30])
int512_t zmm0 = sub_1405ae080(&arg1[0x26])
int64_t rcx_16 = arg1[0x20]

if (rcx_16 != 0)
    zmm0 = sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x1e]

if (rcx_17 != 0)
    zmm0 = sub_140a74f90(rcx_17)

return sub_140bd6810(arg1, zmm0) __tailcall
