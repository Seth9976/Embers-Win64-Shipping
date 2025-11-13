// 函数: sub_142935d30
// 地址: 0x142935d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
__chkstk(0x20)
void* rbx = *(arg1 + 0x60)

if (*(rbx + 8) == 0)
    return arg3

do
    if (sub_14291c010(arg2, *rbx) != 0)
        sub_1428e8b00(*(rbx + 8), nullptr, &arg_18)
    
    rbx += 0x18
while (*(rbx + 8) != 0)

return arg_18
