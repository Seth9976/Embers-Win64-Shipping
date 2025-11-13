// 函数: sub_1422b7dc0
// 地址: 0x1422b7dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f54370
int32_t rax_1 = (*(*rcx + 0x90))(rcx)

if (rax_1 - 1 u<= 0xfffe)
    data_143a2fdac = rax_1
    return rax_1

int64_t* rbx = data_143f54370
int16_t* var_18
sub_140a2e390(&var_18, u"%d", zx.q(data_143a2fdac))
int16_t* const rdx = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx = var_18

int64_t rax_3 = (*(*rbx + 0x80))(rbx, rdx, 0x9000000)
int16_t* rcx_4 = var_18

if (rcx_4 == 0)
    return rax_3

return sub_140a74f90(rcx_4)
