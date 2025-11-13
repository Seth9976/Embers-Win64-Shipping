// 函数: sub_1426b21a0
// 地址: 0x1426b21a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg2 == 0xff
char rax_1

while (true)
    if (cond:0)
        return 0
    
    rax_1 = *(arg1 + 0x4c)
    
    if (arg2 u>= rax_1)
        break
    
    arg1 = *(arg1 + 0x30)
    cond:0 = arg1 == 0

return *(arg1 + 0x38) + (zx.q(arg2) - zx.q(rax_1)) * 0x18
