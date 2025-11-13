// 函数: sub_142668c90
// 地址: 0x142668c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x28) & 2) != 0 || arg2 == 0)
    return 

int32_t rcx_4 = (*(arg1 + 0xb8) ^ *(arg2 + 0xcc)) | (*(arg1 + 0xb4) ^ *(arg2 + 0xc8))
    | (*(arg1 + 0xb0) ^ *(arg2 + 0xc4)) | (*(arg1 + 0xac) ^ *(arg2 + 0xc0))

if (rcx_4 == 0)
    return 

*(arg1 + 0xac) = *(arg2 + 0xc0)
sub_14264c010(arg1)
uint64_t rax = sub_142656be0(arg1, data_143f71478)

if ((*(arg1 + 0xa8) & 4) != 0 || rax == 0 || sub_140bc9520(rax).b != 0)
    return 

int64_t rax_6 = sub_140bcb6b0(rax, 1)
int64_t rax_7
int512_t zmm1_1
rax_7, zmm1_1 = sub_140bc7f20(rax)
void** const var_d8
sub_140b4c2a0(&var_d8)
var_d8 = &data_142d84578
int64_t var_40_1 = 0
char var_30_1 = 0
int64_t var_38_1 = rax_7
sub_140b55290(&var_d8, 1)
var_d8[0x1b](&var_d8, 0)
var_d8 = &data_142d847a8
char arg_8 = 1
int64_t* var_d0
char* rdx_2 = *var_d0

if (&rdx_2[1] u> var_d0[1])
    sub_140679c80(&var_d8, &arg_8, 1)
else
    arg_8 = *rdx_2
    *var_d0 += 1

char rcx_15 = 0

if (arg_8 == 0)
    rcx_15 = 0x20

char var_af
char var_af_1 = rcx_15 | (var_af & 0xdf)
sub_1409acec0(&var_d8, arg1 + 0x30, zmm1_1)
sub_14090ad70(&var_d8, arg1 + 0x40, zmm1_1)
sub_1409acec0(&var_d8, arg1 + 0x50, zmm1_1)
sub_14090ad70(&var_d8, arg1 + 0x60, zmm1_1)
sub_14090ad70(&var_d8, arg1 + 0x70, zmm1_1)
sub_140bd1d40(rax)
var_d8 = &data_142d84578

if (var_30_1 != 0)
    sub_140a74f90(rax_6)
    int64_t var_48_2 = 0

sub_140b4cb40(&var_d8)
*(arg1 + 0x28) |= 2
