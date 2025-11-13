// 函数: sub_141ec55c0
// 地址: 0x141ec55c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int16_t* var_18
int64_t* rcx = &var_18
int64_t rdi_1 = sx.q(arg3) << 5
int64_t zmm2 = *(rdi_1 + rax)

if (*(rdi_1 + rax + 8) != 3.4028234663852886e+38)
    sub_140a2e390(rcx, u"%0.2fs - %0.2fs", zmm2)
else
    sub_140a2e390(rcx, u"%0.2fs - inf", zmm2)

int64_t rax_1 = *arg2
int16_t* const r8_1 = &data_142d40450
int16_t* rbx = var_18
int32_t var_10

if (var_10 != 0)
    r8_1 = rbx

*(rdi_1 + rax_1 + 0x18)
int64_t var_28 = *(rdi_1 + rax_1 + 0x10)
sub_140a2e390(&var_18, u"Bucket: %s  Count: %i  Time: %.2f s", r8_1)
int64_t result = (*(*arg1 + 8))(arg1, &var_18)
int16_t* rcx_4 = var_18

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
