// 函数: sub_14268fa10
// 地址: 0x14268fa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x38))
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, arg4[1].d)
int32_t rsi_2 = (temp0 u>> 0x1f) + temp0
int32_t temp2
int32_t temp3
temp2:temp3 = muls.dp.d(0x55555556, arg3[1].d)
int32_t rax = rdi.d + rsi_2
*(arg1 + 0x38) = rax
int32_t rbp_2 = (temp2 u>> 0x1f) + temp2

if (rax s> *(arg1 + 0x3c))
    sub_1405daba0(arg1 + 0x30)

memset(rdi + *(arg1 + 0x30), 0, sx.q(rsi_2))
int64_t var_48 = *(arg1 + 0x30)
int32_t zmm0 = sub_142632830(arg2, *(arg1 + 0xf8), *arg3, zx.q(rbp_2), (*arg4).d, rsi_2)
void** result = sub_142639080(arg2, *arg3, zx.q(rbp_2), *arg4, zmm0, *(arg1 + 0x30), rsi_2, *arg6, 
    *(arg1 + 0x100), arg5)
*(arg1 + 0x38) = 0

if (*(arg1 + 0x3c) s> 0xffffffff)
    return result

return sub_1405c5510(arg1 + 0x30, 0)
