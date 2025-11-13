// 函数: sub_140bd6780
// 地址: 0x140bd6780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x44]

if (rcx != 0)
    sub_140a74f90(rcx)

DeleteCriticalSection(&arg1[0x3f])
int64_t rcx_2 = arg1[0x3d]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x3b]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1405ae080(&arg1[0x30])
int512_t zmm0 = sub_1405ae080(&arg1[0x26])
int64_t rcx_6 = arg1[0x20]

if (rcx_6 != 0)
    zmm0 = sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x1e]

if (rcx_7 != 0)
    zmm0 = sub_140a74f90(rcx_7)

return sub_140bd6810(arg1, zmm0) __tailcall
