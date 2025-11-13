// 函数: sub_140fcbd10
// 地址: 0x140fcbd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2]
uint32_t var_20 = zx.d(*arg1)
uint32_t var_28 = zx.d(arg1[1])
int16_t* var_18
sub_140a2e390(&var_18, u"%i.%i.%i.%i", zx.q(arg1[3]))
int16_t* const r8_1 = &data_142d40450
*(arg1 + 4)
int32_t var_10

if (var_10 != 0)
    r8_1 = var_18

sub_140a2e390(arg2, u"%s:%i", r8_1)
int16_t* rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg2
