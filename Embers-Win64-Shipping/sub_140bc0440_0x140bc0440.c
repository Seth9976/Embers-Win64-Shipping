// 函数: sub_140bc0440
// 地址: 0x140bc0440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(arg1 + 0xd8)
int64_t rcx_1 = *(arg1 + 0xc8)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = *(arg1 + 0xb8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0xa8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1405ae100(arg1 + 0x58)
return sub_1405ae000(arg1 + 8) __tailcall
