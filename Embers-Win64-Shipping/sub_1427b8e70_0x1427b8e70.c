// 函数: sub_1427b8e70
// 地址: 0x1427b8e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427b8ff0(arg1 + 0x30, arg3, *(arg1 + 0x90))
int64_t* rcx_1 = *(arg1 + 0x90)
int64_t zmm1 = *(arg3 + 0xac)
int128_t var_38 = *(arg3 + 0x9c)
char var_20 = 0
int64_t var_28 = zmm1
int64_t var_1c = 0
char rax_1 = (*(*rcx_1 + 0x20))(rcx_1, &var_38)
arg2[4] = 0x63

if (rax_1 == 0)
    *arg2 = 3
else
    *arg2 = 2

*(arg2 + 8) = 0
*(arg2 + 0x18) = 0
return arg2
