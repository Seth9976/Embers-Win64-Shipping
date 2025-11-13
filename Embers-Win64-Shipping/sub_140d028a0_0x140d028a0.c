// 函数: sub_140d028a0
// 地址: 0x140d028a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x3c)

if (rdx == 1)
    return 1

if (rdx == 2)
    return 2

if (rdx == 4)
    return 4

if (rdx == 8)
    return 8

int16_t* var_18
sub_140b63b70(arg1 + 0x28, &var_18)
int16_t* const r9 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    r9 = var_18

int32_t var_28 = *(arg1 + 0x3c)
sub_140af98a0("Unknown", 0x6b, u"Unsupported FBoolProperty %s size %d.", r9)
int16_t* rcx_1 = var_18

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140afbb40()
return 0
