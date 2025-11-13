// 函数: sub_140b57f80
// 地址: 0x140b57f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int32_t r8 = arg2[1].d
int64_t* rax_2
uint128_t var_38

if (arg3 == 0)
    void var_18
    uint128_t zmm0_1 = *sub_140b60a50(&var_18, rax, r8)
    var_38 = zmm0_1
    uint64_t rax_4 = zx.q(_mm_bsrli_si128(zmm0_1, 8).d)
    uint64_t arg_8
    
    if (rax_4.d != 0)
        int32_t rax_5 = sub_140b57bd0(var_38.q, &var_38:8)
        var_38 = var_38
        sub_140b60b30(&arg_8, &var_38, arg4, rax_5)
    else
        arg_8 = rax_4
    
    rax_2 = &arg_8
else
    void var_28
    var_38 = *sub_140b60a50(&var_28, rax, r8)
    void arg_10
    rax_2 = sub_140b60b30(&arg_10, &var_38, arg4, arg3)
*arg1 = *rax_2
return arg1
