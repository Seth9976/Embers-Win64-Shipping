// 函数: sub_141d17c70
// 地址: 0x141d17c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t count_1 = (*(*arg1 + 0x48))()
int32_t i = 0
int64_t count = sx.q(count_1)
int32_t var_20 = count.d
int64_t rcx = 0
int64_t var_28 = 0
int32_t var_1c = 0

if (count_1 s> 0)
    sub_140679a80(&var_28)
    rcx = var_28

memset(rcx, 0, count)
int32_t result = arg3[1].d

if (count.d s> result)
    arg3[1].d = count.d
    
    if (count.d s> *(arg3 + 0xc))
        result = sub_140638970(arg3)
else if (count.d s< result && count.d != result)
    arg3[1].d = count.d

if (count.d s> 0)
    do
        result = sub_141d1d310(i, arg2, arg1, &var_28, arg3)
        i += 1
    while (i s< count.d)

int64_t rcx_4 = var_28

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
