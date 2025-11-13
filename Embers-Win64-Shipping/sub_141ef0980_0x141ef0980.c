// 函数: sub_141ef0980
// 地址: 0x141ef0980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t rbx = arg1[2].d
int64_t* var_28 = arg1
int64_t rdx = *(rax + 0x1b0)
int64_t arg_8
int64_t* var_20 = &arg_8
uint8_t (* var_18)(int64_t* arg1, int32_t* arg2) = sub_141ed9ac0
int64_t** var_10 = &var_28
arg_8 = rdx
int32_t r8
r8.b = sub_140b011d0() == 0
int64_t result = sub_14077b750(rbx, &var_18, r8)
arg1[2].d = 0

if (*(arg1 + 0x14) == 0)
    return result

return sub_1405c5570(&arg1[1], 0)
