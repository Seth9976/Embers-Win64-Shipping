// 函数: sub_140f595e0
// 地址: 0x140f595e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140d96150(arg1 + 0x434, arg3)
int32_t rdx_1 = *(arg4 + 0xc)
int32_t arg_8 = *(arg4 + 0x50)
char arg_c = 1

if (sub_140e19910(arg1, rdx_1, &arg_8, zmm1) == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rcx_2 = arg1[0x75]
    (*(*rcx_2 + 0x250))(rcx_2)
    sub_140e19ef0(arg1, 1)
    sub_140f2cf90(arg1)
    char var_c8 = 1
    int64_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    char var_a8_1 = 0
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x88)
    int32_t var_14
    int32_t var_14_1 = (var_14 & 0xffffff01) | 1
    int32_t var_18_1 = 0x20702
    sub_140596b00(arg2, &var_c8)
    sub_140597700(&var_c8)

return arg2
