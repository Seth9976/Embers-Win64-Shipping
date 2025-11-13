// 函数: sub_142b7f570
// 地址: 0x142b7f570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = (arg2 s>> 0x20).d
uint32_t r8 = zx.d(arg2.w)
int32_t result

if ((0xffff00ff00ff & arg2) != 0)
    if ((arg2 & 0xffffffffff) == 0x5000500)
        result = r9_1 | 0xc1
        goto label_142b7f5d6
    
    if (r9_1 == 0 && r8.b == 0)
        result = arg2.d | 0xc2
        goto label_142b7f5d6
else
    result = (arg2.d u>> 8 | r8) u>> 8 | r9_1
label_142b7f5d6:
    
    if (result != 1)
        return result
int32_t rax_8 = sub_142b7d290(arg1, arg2, arg3)

if (*arg3 s<= 0)
    if (rax_8 s<= 0x7ffff)
        return rax_8 << 0xd | 0x1c6
    
    *arg3 = 0xf

return 0
