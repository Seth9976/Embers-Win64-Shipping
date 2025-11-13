// 函数: sub_141dc5da0
// 地址: 0x141dc5da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2
float zmm0[0x4]

if (arg3 != 0)
    rax_2, zmm0 = sub_140d21950(arg3, sub_142581680())

if (arg3 == 0 || rax_2 == 0)
    *arg2 = data_143dbb1f8.q
    arg2[1].d = data_143dbb200
else
    void var_48
    sub_141db7470(&var_48, arg1, rax_2, zmm0, arg4, arg5)
    int64_t rdx_2 = *rax_2
    int32_t rax_3 = (*(rdx_2 + 0x18))(rax_2, rdx_2)
    uint128_t zmm3 = *(arg1 + 0x3c)
    int32_t arg_18 = rax_3
    sub_141dc5e50(arg1, arg2, &var_48, zmm3, &arg_18)

return arg2
