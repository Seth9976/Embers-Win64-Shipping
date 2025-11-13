// 函数: sub_1408a0e20
// 地址: 0x1408a0e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (**(arg1 + 0x38) == **(arg1 + 0x18))
    struct std::exception::VTable* var_38
    sub_14089bb00(sub_1408a0720(&var_38))
    noreturn

int32_t* rax_2 = *(arg1 + 0x50)
*rax_2 += 1
int64_t* rax_3 = *(arg1 + 0x38)
*rax_3 -= 2

if (arg2 != 0xffff)
    ***(arg1 + 0x38) = arg2

if (arg2 == 0xffff)
    arg2 = 0

return zx.q(arg2)
