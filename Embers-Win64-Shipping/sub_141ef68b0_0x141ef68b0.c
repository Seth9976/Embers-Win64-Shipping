// 函数: sub_141ef68b0
// 地址: 0x141ef68b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg1 + 0x8a) & 1) == 0
*(arg1 + 0x250) = arg2.d
*(arg1 + 0x224) = 0x3f800000
*(arg1 + 0x220) = 0x3f800000

if (cond:0)
    return 

int64_t* rax
int32_t zmm6_1
rax, zmm6_1 = sub_141ee2210(arg1)

if (rax == 0)
    return 

int64_t zmm1
zmm1.d = zmm6_1
int64_t var_70_1 = *(arg1 + 0x740)
void** const var_38_1 = &data_142e345d8
void* (* var_58)(int64_t* arg1) = sub_141ed9b30
int64_t var_48_1 = 0
int128_t var_30_1 = rax.o
int64_t var_20_1 = zmm1
sub_141e85cb0(&var_58, arg3)
