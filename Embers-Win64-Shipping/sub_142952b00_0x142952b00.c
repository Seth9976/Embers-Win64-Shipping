// 函数: sub_142952b00
// 地址: 0x142952b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = 0

if (arg2 != 0)
    int64_t* result = sub_142890040(arg2, *(arg1 + 0x40))
    
    if (result == 0)
        return result

int64_t* rax_1

if (arg3 != 0)
    rax_1 = sub_142890040(arg3, *(arg1 + 0x60))

if (arg3 == 0 || rax_1 != 0)
    int64_t* rax_2
    
    if (arg4 != 0)
        rax_2 = sub_142890040(arg4, *(arg1 + 0x68))
    
    if (arg4 == 0 || rax_2 != 0)
        rbx = 1

return zx.q(rbx)
