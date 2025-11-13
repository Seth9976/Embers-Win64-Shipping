// 函数: sub_140533b50
// 地址: 0x140533b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
sub_140a2e390(&var_18, u"Set MorphTarget Weight Threshold (Default : %f).\n", 0x3e45798ee0000000)
int16_t* const rbx = &data_142d40450
int64_t* rcx_1 = data_143db18d0
int32_t var_10

if (var_10 != 0)
    rbx = var_18

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

int64_t rax_1 = (*(*rcx_1 + 0x30))(rcx_1, u"r.MorphTarget.WeightThreshold", &data_143a2ff14, rbx, 0)
int16_t* rcx_2 = var_18
data_143f58ae0 = rax_1
data_143f58ad8 = &data_142d3ff10

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return atexit(sub_142d0d7a0) __tailcall
