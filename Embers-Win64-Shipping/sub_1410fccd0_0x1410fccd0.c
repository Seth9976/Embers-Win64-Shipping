// 函数: sub_1410fccd0
// 地址: 0x1410fccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg2
int32_t arg_8
sub_140865c40(arg1 + 0xc0, &arg_8, rbx)
int64_t rax = sx.q(arg_8)
void* const rdx_1

if (rax.d == 0xffffffff)
    rdx_1 = nullptr
else
    rdx_1 = *(arg1 + 0xc0) + rax * 0x18

int64_t* rax_2 = rdx_1 + 8

if (rdx_1 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return *rax_2

int128_t* rax_5 = (*(*rbx + 0x10))(rbx)
void*** result_2 = sub_14081d830(0x88, *(arg1 + 8), 1, 0)
void*** result_1 = result_2

if (result_2 == 0)
    result_1 = nullptr
else
    result_2[1] = arg3
    result_2[2] = 0
    result_2[3].b = arg4
    *(result_2 + 0x1c) = 0
    result_2[4] = 0
    result_2[5].w = 0x200
    *result_1 = &data_142f11960
    *(result_1 + 0x30) = *rax_5
    *(result_1 + 0x40) = rax_5[1]
    *(result_1 + 0x50) = rax_5[2]
    *(result_1 + 0x60) = rax_5[3]
    int128_t zmm0_1 = rax_5[4]
    result_1[0x10] = 0
    *(result_1 + 0x70) = zmm0_1

int64_t rax_6 = *arg2
void*** result = result_1
result_1[0x10] = rax_6
int64_t* var_40_1 = arg2
result[2] = *(*arg2 + 0x10)
void**** var_48 = &result
sub_14107bc20(arg1 + 0x20, &arg_8, &var_48, nullptr)
var_48 = *arg2
void***** var_38 = &var_48
void**** var_30_1 = &result
sub_14107baa0(arg1 + 0xc0, &arg_8, &var_38, nullptr)
return result
