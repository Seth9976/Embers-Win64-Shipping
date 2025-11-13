// 函数: sub_141193740
// 地址: 0x141193740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg2
int32_t arg_8
sub_140865c40(arg1 + 0x110, &arg_8, rbp)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x110) + rax * 0x18

int64_t* rax_2 = rcx_1 + 8

if (rcx_1 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return *rax_2

void*** result_3 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
void*** result_1 = result_3

if (result_3 == 0)
    result_1 = nullptr
else
    result_3[1] = arg3
    result_3[2] = 0
    result_3[3].b = arg4
    *(result_3 + 0x1c) = 0
    result_3[4] = 0
    result_3[5].w = 0x200
    *result_1 = &data_142f285d0
    int128_t zmm0_1 = *(rbp + 0xb8)
    result_1[8] = 0
    *(result_1 + 0x30) = zmm0_1

int64_t rax_4 = *arg2
void*** result = result_1
result_1[8] = rax_4
void*** result_2 = result
int32_t rcx_2 = *(result_2 + 0x3c)

if (rcx_2 == 0)
    result_2[2] = **arg2
else if (rcx_2 == 1)
    result_2[2] = *(*arg2 + 8)
else if (rcx_2 == 2)
    result_2[2] = *(*arg2 + 0x10)

int64_t* var_40_1 = arg2
void**** var_48 = &result
sub_1411610a0(arg1 + 0x70, &arg_8, &var_48, nullptr)
var_48 = *arg2
void***** var_38 = &var_48
void**** var_30_1 = &result
sub_14107baa0(arg1 + 0x110, &arg_8, &var_38, nullptr)
return result
