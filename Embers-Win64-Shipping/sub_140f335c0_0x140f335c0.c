// 函数: sub_140f335c0
// 地址: 0x140f335c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x390) = *(arg2 + 0x1e0)
*(arg1 + 0x3d0) = *(arg2 + 0x220)
*(arg1 + 0x398) = *(arg2 + 0x1e8)
*(arg1 + 0x39c) = *(arg2 + 0x1ec)
sub_140692f90(arg1 + 0x3a0, arg2 + 0x1f0)

if (arg2 + 0x200 != arg1 + 0x3b0)
    if (*(arg1 + 0x3b4) != 0)
        *(arg1 + 0x3b4) = 0
    
    if (*(arg2 + 0x204) != 0)
        *(arg1 + 0x3b0) = *(arg2 + 0x200)
        *(arg1 + 0x3b4) = 1

*(arg1 + 0x3b8) = *(arg2 + 0x208)
sub_1407473e0(arg1 + 0x3c0, arg2 + 0x210)
char rax_6 = *(arg2 + 0x1c8)
int128_t zmm0 = *(arg2 + 0x1b8)
int64_t var_20 = 0
int32_t var_18 = 0
sub_140692f90(&var_20, arg2 + 0x1d0)
*(arg1 + 0x2d8) = *(arg2 + 0x1b0)
*(arg1 + 0x2dc) = *(arg2 + 0x1b4)
*(arg1 + 0x2f0) = rax_6
*(arg1 + 0x2e0) = zmm0
sub_140692f90(arg1 + 0x2f8, &var_20)
sub_140745b20(&var_20)
sub_140de1b90(arg1 + 0x2b8, arg2 + 0x1a0)
*(arg1 + 0x2e) &= 0xfb
char result = sub_140db3510(arg1 + 0x18)

if (result == 0)
    return result

return sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))
