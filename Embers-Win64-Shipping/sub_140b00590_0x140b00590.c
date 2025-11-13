// 函数: sub_140b00590
// 地址: 0x140b00590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t var_20 = arg4 u>> 0x18
uint32_t var_28 = zx.d(arg4.b)
int16_t* var_18
sub_140a2e390(&var_18, u"(R=%i,G=%i,B=%i,A=%i)", zx.q((arg4 u>> 0x10).b))
int16_t* r9_2 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    r9_2 = var_18

var_28.q = arg5
int64_t* result = sub_140b00d80(arg1, arg2, arg3, r9_2, var_28)
int16_t* rcx_2 = var_18

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
