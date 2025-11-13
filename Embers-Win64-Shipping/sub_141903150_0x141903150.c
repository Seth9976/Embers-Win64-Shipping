// 函数: sub_141903150
// 地址: 0x141903150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1 = (*(*arg1 + 0x18))() & 0xff000000
int16_t* var_18
sub_140a2e390(&var_18, u"%d", zx.q(arg2))
int16_t* const rdx = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx = var_18

int64_t result = (*(*arg1 + 0x80))(arg1, rdx, zx.q(rdi_1))
int16_t* rcx_2 = var_18

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
