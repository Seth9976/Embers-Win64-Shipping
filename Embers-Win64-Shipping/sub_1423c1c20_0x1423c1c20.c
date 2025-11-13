// 函数: sub_1423c1c20
// 地址: 0x1423c1c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = (*(*arg1 + 0x318))()
void* rdx = arg1[0xf]

if (rax_1 == 0)
    if (rdx != 0)
        void* rax_5 = arg1[0x1a]
        
        if (rax_5 != 0)
            return zx.q(*(rax_5 + 0x20) - *(rdx + 0x60))
else if (rdx != 0)
    return zx.q(*(*(rdx + 0x50) + 4) - *(rdx + 0x64))

return 0
