// 函数: sub_141fbd870
// 地址: 0x141fbd870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx

if (*(arg1 + 0x98) s> 0)
    rcx = **(arg1 + 0x90)

int64_t* rax

if (*(arg1 + 0x98) s<= 0 || rcx == 0 || *(rcx + 0x134) == 1)
    rax.b = 0
else
    rax.b = 1

if (rax.b != 0 && arg2 != 0 && (*(arg2 + 0x30) & 0x1000) != 0)
    int32_t var_18
    sub_14090a150(arg1 + 0x938, &var_18)
    int32_t* var_10
    *var_10 = *(arg2 + 0x78)
    int32_t rax_2 = var_18
    var_10[1].b = arg3
    var_10[2] = 0xffffffff
    void arg_8
    sub_1414529f0(arg1 + 0x938, &arg_8, *var_10, var_10, rax_2, nullptr)

return sub_140594850() __tailcall
