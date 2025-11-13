// 函数: sub_140bb4ec0
// 地址: 0x140bb4ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t var_28 = 0

if (arg2 != 0)
    rbx = *(arg2 + 0x23c)
    var_28 = *(arg2 + 0x14)

int32_t var_18
sub_140a9e570(arg1 + 0xe8, &var_18)
int64_t* var_10
*var_10 = var_28
var_10[1].d = rbx
*(var_10 + 0xc) = 0xffffffff
int64_t rbx_1 = *var_10
void arg_8
return sub_140ba2440(arg1 + 0xe8, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_10, 
    var_18, nullptr)
