// 函数: sub_141d65440
// 地址: 0x141d65440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    return 0

int64_t var_18
int64_t* rax = sub_140d30800(arg1, &var_18)
int16_t* rbx

if (rax[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *rax

void* result = sub_140d2f240(sub_141d6ec30(), 0, rbx, 0, 0, 0)
int64_t rcx_1 = var_18

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return result
