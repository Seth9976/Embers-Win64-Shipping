// 函数: sub_140d34750
// 地址: 0x140d34750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *(arg2 + 0x20)
int16_t* var_38 = nullptr
int32_t var_30 = 0
*(arg2 + 0x20) = &rax[1]
(&data_143e1cd60)[zx.q(*rax)](*(arg2 + 0x18), arg4, &var_38)
int16_t* const rdx = &data_142d40450
int64_t var_28 = 0

if (var_30 != 0)
    rdx = var_38

int32_t var_20 = 0xffffffff
int32_t var_1c = 0
int64_t var_18 = 0
int32_t var_10 = 0
sub_140cbaea0(&var_28, rdx)
*arg3 = var_28
arg3[1] = var_20.q
int64_t* result = &var_18
int64_t rbx_1 = var_18

if (&arg3[2] != &var_18)
    int64_t rsi_1 = sx.q(var_10)
    int32_t r8_1 = *(arg3 + 0x1c)
    arg3[3].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&arg3[2], rsi_1.d, r8_1)
        result = memcpy(arg3[2], rbx_1, (rsi_1 << 3).d)
        rbx_1 = var_18
    else
        *(arg3 + 0x1c) = 0

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

int16_t* rcx_6 = var_38

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
