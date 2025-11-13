// 函数: sub_1427d9250
// 地址: 0x1427d9250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1427e4f10(arg1)

if (result == 0)
    return result

int128_t var_88
int128_t* rax_1 = (*(*(arg3 + 0x10) + 0x18))(&var_88, arg1[6], zx.q(*(arg3 + 8)))
int64_t rcx_1 = arg1[1]
int64_t rdx_1 = arg1[5]
int64_t r8_1 = arg1[7]
int64_t rax_2 = *arg1
int64_t r9 = arg1[8]
int64_t zmm1 = arg1[4]
int128_t var_a0 = *rax_1
int64_t var_78 = rax_2
int128_t* var_48_1 = &var_a0
int64_t var_70_1 = rcx_1
int128_t var_68_1 = *(arg1 + 0x10)
int64_t var_50_1 = rdx_1
int64_t var_40_1 = r8_1
char var_a8 = 0
int128_t var_20_1 = zx.o(0)
int64_t var_38_1 = r9
int64_t var_58_1 = zmm1
char var_30_1 = 1
char* var_28_1 = &var_a8
sub_1427d3ed0(&var_78, arg4)
sub_1427d3ed0(&var_78, &arg4[4])
sub_1427d3ed0(&var_78, &arg4[8])
sub_1427d3ed0(&var_78, &arg4[0xc])

if (var_a8 != 0)
    *arg1[0xa] = 1

int64_t rax_4 = *(arg3 + 0x10)
uint64_t rdx_6 = zx.q(*(arg3 + 8))
int64_t rcx_6 = arg1[6]
var_88 = var_a0
return (*(rax_4 + 0x10))(rcx_6, rdx_6, &var_88)
