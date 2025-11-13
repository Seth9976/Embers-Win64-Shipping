// 函数: sub_14100f420
// 地址: 0x14100f420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xd0)

if (rcx != 0)
    sub_140a74f90(rcx)
    sub_140a74f90(*(arg1 + 0xd8))
    sub_140a74f90(*(arg1 + 0xe0))

int64_t var_28
__builtin_memset(&var_28, 0, 0x20)
int128_t zmm0 = var_28.o
*(arg1 + 0xe8) = 0
*(arg1 + 0xc8) = zmm0
*(arg1 + 0xec) = 0
int128_t var_20
*(arg1 + 0xd8) = var_20
*(arg1 + 0xf0) = 0
int64_t rcx_3 = *(arg1 + 0xa0)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)
    sub_140a74f90(*(arg1 + 0xa8))
    sub_140a74f90(*(arg1 + 0xb0))

int64_t var_28_1
__builtin_memset(&var_28_1, 0, 0x20)
zmm0 = var_28_1.o
*(arg1 + 0xb8) = 0
*(arg1 + 0xbc) = 0
*(arg1 + 0x98) = zmm0
*(arg1 + 0xc0) = 0
int128_t var_20_1
*(arg1 + 0xa8) = var_20_1
sub_14100f520(arg1 + 0x50)
return sub_14100f520(arg1 + 8) __tailcall
