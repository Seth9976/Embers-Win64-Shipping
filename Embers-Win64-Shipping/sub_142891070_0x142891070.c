// 函数: sub_142891070
// 地址: 0x142891070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = 0

if (arg2 != 0)
    uint32_t count = *(*arg1 + 0xc)
    
    if (count u> 0x10)
        sub_1428bc530()
        noreturn
    
    int32_t rax_2 = sub_1428cded0(arg2, &arg1[3], count)
    rbx = rax_2
    
    if (rax_2 != count)
        return 0xffffffff
    
    if (rax_2 s> 0)
        memcpy(&arg1[5], &arg1[3], count)

return zx.q(rbx)
