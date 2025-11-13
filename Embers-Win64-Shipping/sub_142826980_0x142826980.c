// 函数: sub_142826980
// 地址: 0x142826980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 8)
int32_t rbx = -1
int64_t i = 0

if ((*(arg1 + 0x10) - r8) s>> 5 != 0)
    do
        int32_t rax_3 = sub_142826c10((i << 5) + r8, arg2)
        
        if (rax_3 == 0xffffffff)
            return 0xffffffff
        
        r8 = *(arg1 + 8)
        
        if (i == 0)
            rbx = rax_3
        
        i += 1
    while (i u< (*(arg1 + 0x10) - r8) s>> 5)

return zx.q(rbx)
