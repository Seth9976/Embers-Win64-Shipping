// 函数: sub_1423efef0
// 地址: 0x1423efef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = data_143f5b498
int32_t rbx_1 = (*(*rdi + 0x18))(rdi) & 0xff000000

if (rbx_1 == 0)
    rbx_1 = 0x1000000

int16_t* var_28
sub_140a2e390(&var_28, u"%g", fconvert.d(arg2.d))
int16_t* const rdx = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx = var_28

int64_t result = (*(*rdi + 0x80))(rdi, rdx, zx.q(rbx_1))
int16_t* rcx_3 = var_28

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
