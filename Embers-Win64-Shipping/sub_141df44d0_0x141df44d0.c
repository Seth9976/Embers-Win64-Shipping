// 函数: sub_141df44d0
// 地址: 0x141df44d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int32_t rax = TMTS::PPdbFrom(arg3)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg2 + 0x18))
int32_t result = (temp1 + (temp0 & 3)) s>> 2
int32_t var_38 = (*(*arg3 + 0x28))(arg3) - rax
int64_t rax_11 = *(arg2 + 0x38)
char rax_14 = sub_1405beea0(arg2 + 0x20)

for (int32_t i = 0; i s< result; i += 1)
    int32_t rax_29 = *(*(arg2 + 0x10) + (sx.q(((zx.q(i) << 2) + 1).d) << 2))
    int32_t rax_35 = *(*(arg2 + 0x10) + (sx.q(((zx.q(i) << 2) + 2).d) << 2))
    int32_t rax_41 = *(*(arg2 + 0x10) + (sx.q(((zx.q(i) << 2) + 3).d) << 2))
    int64_t var_50 = rax_11 + sx.q(*(*(arg2 + 0x10) + (sx.q(i << 2) << 2)))
    (*(**(arg2 + 0x48) + 0x48))(*(arg2 + 0x48), arg2, arg3, &var_50, rax_29)
    sub_141e07e90(arg3, &var_50, 4, arg4)
    int64_t var_48 = rax_11 + sx.q(rax_35)
    (*(**(arg2 + 0x50) + 0x40))(*(arg2 + 0x50), arg2, arg3, &var_48, rax_41)
    sub_141e07e90(arg3, &var_48, 4, arg4)
    
    if (zx.d(rax_14) != 0)
        int32_t rax_55 = sub_141e030a0(arg2 + 0x20, i, 0)
        int32_t rax_58 = sub_141e030a0(arg2 + 0x20, i, 1)
        int64_t var_40 = rax_11 + sx.q(rax_55)
        (*(**(arg2 + 0x58) + 0x50))(*(arg2 + 0x58), arg2, arg3, &var_40, rax_58)
        sub_141e07e90(arg3, &var_40, 4, arg4)

return result
