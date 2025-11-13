// 函数: sub_141bad7d0
// 地址: 0x141bad7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x1a0)

if (result == 0)
    return 0

void* rax = sub_142542e20()
void* rdx = result[2]
int64_t rax_1 = sx.q(*(rax + 0x38))

if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
    void* result_1 = sub_142121cc0(result, arg1)
    *(arg1 + 0x1a0) = result_1
    result = result_1
    void* rax_3 = *(arg1 + 0x1c0)
    int64_t var_58 = *(arg1 + 0x188)
    int64_t var_50_1 = *(arg1 + 0x190)
    int64_t var_28_1 = *(arg1 + 0x1b8)
    void* var_20_1 = rax_3
    int128_t var_48_1 = *(arg1 + 0x198)
    int128_t var_38_1 = *(arg1 + 0x1a8)
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int64_t var_18_1 = *(arg1 + 0x1c8)
    int32_t var_10_1 = *(arg1 + 0x1d0)
    char var_c_1 = *(arg1 + 0x1d4)
    sub_141be1dc0(arg1, &var_58)

return result
