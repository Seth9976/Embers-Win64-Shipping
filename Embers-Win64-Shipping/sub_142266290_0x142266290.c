// 函数: sub_142266290
// 地址: 0x142266290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
int64_t r9 = *arg1
int64_t var_18
int64_t* rax
int64_t r8_1
rax, r8_1 = (*(r9 + 0x30))(arg1, &var_18, arg3, r9)
int16_t* const rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

r8_1.b = 1
char rax_2 = (*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_1, r8_1, 0, arg2 ^ 1)
int64_t rcx_1 = var_18

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return zx.q(rax_2)
