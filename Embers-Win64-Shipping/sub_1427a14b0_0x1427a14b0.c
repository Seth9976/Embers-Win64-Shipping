// 函数: sub_1427a14b0
// 地址: 0x1427a14b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x120)

if (r8 == 0)
    *(arg2 + 8) = 0
    *(arg2 + 0x18) = 0
    *arg2 = 4
    arg2[4] = 0x63
    return arg2

sub_1427b8ff0(arg1 + 0x80, arg3, r8)
int64_t* rcx_1 = *(arg1 + 0x120)
int64_t zmm1 = *(arg3 + 0xac)
int128_t var_38 = *(arg3 + 0x9c)
char var_20 = 1
int64_t var_28 = zmm1
int32_t var_1c = (*(arg3 + 0x8c)).d
int32_t var_18 = (*(arg3 + 0x90)).d
(*(*rcx_1 + 0x10))(rcx_1, &var_38)
*arg2 = 1
*(arg2 + 0x18) = 0
*(arg2 + 8) = arg1
arg2[4] = 0x63
return arg2
