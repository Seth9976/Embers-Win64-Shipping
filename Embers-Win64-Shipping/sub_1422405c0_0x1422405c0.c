// 函数: sub_1422405c0
// 地址: 0x1422405c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xb8)

if (rcx == 0)
    return 

uint64_t rax = sub_141f64a80(rcx)

if (rax == 0)
    return 

void* r10_1 = *(arg1 + 0xb8)

if (r10_1 == 0)
    return 

uint64_t var_28_1 = rax
char var_38 = arg5
void* var_20_1 = arg1 + 0xd0
char arg_8 = 0
char* var_18_1 = &arg_8
int64_t var_34_1 = arg3
char* var_40_1 = &var_38
int64_t (* var_48)(char* arg1, int64_t* arg2) = sub_142241930
sub_142311370(r10_1, arg2, arg4, 0, &var_48)

if (arg_8 != 0)
    *(arg1 + 0xe8) = 1
