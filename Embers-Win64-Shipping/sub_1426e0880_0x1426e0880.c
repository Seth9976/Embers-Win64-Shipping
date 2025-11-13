// 函数: sub_1426e0880
// 地址: 0x1426e0880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_1426adc10(&var_18, 1)
int16_t* const rdi = &data_142d40450
int16_t* const rsi

if (rax[1].d == 0)
    rsi = &data_142d40450
else
    rsi = *rax

int64_t var_28
int64_t* rax_1 = sub_1426b3560(arg1, &var_28)

if (rax_1[1].d != 0)
    rdi = *rax_1

_mm_cvtps_pd(*(arg1 + 0x68))
int16_t* const var_38 = rsi
sub_140a2e390(arg2, u"%s: lock for %.1fs after execution and return %s", rdi)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
