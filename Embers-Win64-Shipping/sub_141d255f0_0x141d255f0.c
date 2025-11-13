// 函数: sub_141d255f0
// 地址: 0x141d255f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t count_1 = (*(*arg1 + 0x48))()
char* rbx = nullptr
int64_t count = sx.q(count_1)
int32_t var_20 = count.d
int64_t rdi = 0
int64_t var_28 = 0
int32_t var_1c = 0

if (count_1 s> 0)
    sub_140679a80(&var_28)
    rdi = var_28

memset(rdi, 0, count)

if (count s> 0)
    do
        rbx[rdi] = *(sx.q(*(*arg2 + (rbx << 2))) + arg1[1])
        rbx = &rbx[1]
    while (rbx s< count)

if (&arg1[1] != &var_28)
    var_28.o = *(arg1 + 8)
    rdi = var_28
    *(arg1 + 8) = var_28.o

if (rdi == 0)
    return &var_28

return sub_140a74f90(rdi)
