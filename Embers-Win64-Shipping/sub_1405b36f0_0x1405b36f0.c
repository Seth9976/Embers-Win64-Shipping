// 函数: sub_1405b36f0
// 地址: 0x1405b36f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg2
int64_t var_38 = *(arg1 + 0x38)
int64_t* rcx = *(arg1 + 0x40)

if (rcx != 0)
    *(rcx + 0xc) += 1

int64_t var_28 = *(arg1 + 0x48)
int32_t var_20 = *(arg1 + 0x50)
int32_t var_14 = arg4
int64_t* rax_4 = *(arg1 + 0x68)
int64_t r9
int64_t var_1c = r9

if (rax_4 != 0 && rax_4[5].b != 0)
    int64_t* var_40_1 = &var_38
    result = sub_1405b3ec0(rax_4, result, 0, arg3, nullptr)

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        int64_t r8 = *rcx
        (*(r8 + 8))(rcx, 1, r8)

return result
