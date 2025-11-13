// 函数: sub_141d24c40
// 地址: 0x141d24c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rbx = 0
int64_t rsi = sx.q(rax_1)
int32_t var_20 = rsi.d
int64_t r8 = 0
int64_t var_28 = 0
int32_t var_1c = 0

if (rax_1 s> 0)
    sub_1405a4d70(&var_28)
    r8 = var_28

if (rsi.d != 0)
    __builtin_memset(r8, 0, zx.q(rsi.d) << 3)

if (rsi.d s> 0)
    do
        *(r8 + (rbx << 3)) = *(arg1[1] + (sx.q(*(*arg2 + (rbx << 2))) << 3))
        rbx += 1
    while (rbx s< rsi)

if (&arg1[1] != &var_28)
    var_28.o = *(arg1 + 8)
    r8 = var_28
    *(arg1 + 8) = var_28.o

if (r8 == 0)
    return &var_28

return sub_140a74f90(r8)
