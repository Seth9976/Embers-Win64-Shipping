// 函数: sub_1428e75d0
// 地址: 0x1428e75d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_1428a9570(arg2)

if (rax == 0)
    return zx.q((rax - 2).d)

if (arg1 == 0)
    return 0xffffffff

int32_t i = 0

if (arg3 + 1 s>= 0)
    i = arg3 + 1

for (int32_t rax_4 = sub_142898c70(arg1); i s< rax_4; i += 1)
    if (sub_1428f6490(*sub_142898ea0(arg1, i), rax) == 0)
        return zx.q(i)

return -1
