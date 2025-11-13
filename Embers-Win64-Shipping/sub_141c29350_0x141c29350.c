// 函数: sub_141c29350
// 地址: 0x141c29350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18 = nullptr
int64_t var_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
int64_t result = _DeleteExceptionPtr(arg1, &var_18, arg3)
int16_t* rcx_2 = var_18

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
