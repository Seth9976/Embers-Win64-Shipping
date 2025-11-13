// 函数: sub_142775fe0
// 地址: 0x142775fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
int64_t arg_10 = arg2
uint32_t r10_1 = (arg2 u>> 4).d
int32_t r9_1 = (0x9e3779b9 - r10_1) ^ r10_1 << 8
int32_t rdx_2 = neg.d(r9_1 + r10_1) ^ r9_1 u>> 0xd
int32_t r10_4 = (r10_1 - r9_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r9_4 = (r9_1 - r10_4 - rdx_2) ^ r10_4 << 0x10
int32_t rdx_5 = (rdx_2 - r9_4 - r10_4) ^ r9_4 u>> 5
int32_t r10_7 = (r10_4 - r9_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r9_7 = (r9_4 - r10_7 - rdx_5) ^ r10_7 << 0xa
void* result = sub_142774be0(arg1 + 0x1c8, (rdx_5 - r9_7 - r10_7) ^ r9_7 u>> 0xf, &arg_10)
void* result_1 = result

if (arg3 != 0)
    result = sub_140d21950(arg3, sub_142776b50())
    int32_t arg_8
    
    if (result != 0)
        result = sub_140b91690(result_1 + 8, &arg_8, &arg_18, nullptr)

if (arg3 == arg_10)
    *result_1 = 1

return result
