// 函数: sub_141dea190
// 地址: 0x141dea190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
(*(*arg1 + 0x268))(arg1, &var_18)
int16_t* const rcx = &data_142d40450
int16_t* rdx_1

if (arg2[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *arg2

int32_t var_10

if (var_10 != 0)
    rcx = var_18

int32_t rax_1 = sub_140a54510(rcx, rdx_1)
int16_t* rcx_1 = var_18
int64_t* result = nullptr

if (rax_1 == 0)
    result = arg1

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return result
