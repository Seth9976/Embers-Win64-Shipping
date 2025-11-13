// 函数: sub_142240700
// 地址: 0x142240700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xb8)

if (rcx == 0)
    return 

uint64_t rax = sub_141f64a80(rcx)

if (rax == 0)
    return 

void* rcx_1 = *(arg1 + 0xb8)

if (rcx_1 == 0)
    return 

int128_t zmm0 = *arg3
uint64_t var_48 = rax
int128_t zmm1 = arg3[1]
void* var_40_1 = arg1 + 0xd0
int32_t var_18_1 = arg3[2].d
char arg_8 = 0
char* var_10_1 = &arg_8
int64_t* var_50_1 = &var_48
int64_t (* var_58)(int64_t* arg1, int64_t* arg2) = sub_1422418f0
int128_t var_38_1 = zmm0
int128_t var_28_1 = zmm1
sub_142311370(rcx_1, arg2, arg4, 0, &var_58)

if (arg_8 != 0)
    *(arg1 + 0xe8) = 1
