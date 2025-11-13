// 函数: sub_141d5c1f0
// 地址: 0x141d5c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_1405d1820(arg1 + 0x30, &var_28)
int64_t* var_20
*var_20 = *arg2
var_20[1].d = *arg3
var_20[2] = 0
uint32_t count = arg3[4]
int64_t rdi_1 = *(arg3 + 8)
var_20[3].d = count

if (count != 0)
    sub_1405da9e0(&var_20[2], count, 0)
    memcpy(var_20[2], rdi_1, count)
else
    *(var_20 + 0x1c) = count

var_20[4].d = 0xffffffff
int64_t rbx_1 = *var_20
void arg_8
return sub_141d56ee0(arg1 + 0x30, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_20, 
    var_28, nullptr)
