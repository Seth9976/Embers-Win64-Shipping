// 函数: sub_1428271c8
// 地址: 0x1428271c8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14281d880(arg1 + 0xf0)
int64_t rdx = *(arg1 + 0xf0)
*(arg1 + 0xf0) = 0
void arg_8
sub_140593fc0(&arg_8, rdx)
int64_t* rcx_2 = *(arg1 + 0xd8)

if (rcx_2 != 0)
    sub_142826c64(rcx_2, *(arg1 + 0xe0))
    sub_14058ba50(*(arg1 + 0xd8), (*(arg1 + 0xe8) - *(arg1 + 0xd8)) & 0xfffffffffffffff8)
    __builtin_memset(arg1 + 0xd8, 0, 0x18)

sub_14281d880(arg1 + 0xb0)
int64_t rdx_5 = *(arg1 + 0xb0)
*(arg1 + 0xb0) = 0
sub_140593fc0(&arg_8, rdx_5)
sub_142828ba4(arg1 + 0x88)
int64_t rdx_6 = *(arg1 + 0x88)
*(arg1 + 0x88) = 0
sub_140593fc0(&arg_8, rdx_6)
sub_142828c20(arg1 + 0x58)
int64_t rdx_7 = *(arg1 + 0x58)
*(arg1 + 0x58) = 0
sub_140593fc0(&arg_8, rdx_7)
return sub_14282a8d8(arg1) __tailcall
