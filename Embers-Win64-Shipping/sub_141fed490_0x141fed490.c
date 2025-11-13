// 函数: sub_141fed490
// 地址: 0x141fed490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141febb50(arg1)
*(arg1 + 0xa8) = *(data_143f3d6b0 + 0x50)
*(data_143f3d6b0 + 0x50) = arg2
int16_t* var_18

if (arg2 == 0)
    sub_141fe3cc0(&var_18)
else
    int64_t arg_8 = *(arg2 + 0x18)
    sub_140b63b70(&arg_8, &var_18)

int16_t* const rdx_1 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx_1 = var_18

sub_140b47090(u"DeviceProfile", rdx_1)
int16_t* rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

rcx_2.b = 1
sub_141fe7910(rcx_2.b)
int64_t* rcx_3 = data_143db18d0

if (rcx_3 == 0)
    sub_140a53c40()
    rcx_3 = data_143db18d0

jump(*(*rcx_3 + 0x50))
