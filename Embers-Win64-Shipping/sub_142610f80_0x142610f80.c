// 函数: sub_142610f80
// 地址: 0x142610f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0

for (void* i = *(*(arg1 + 0x80)
        + ((sx.q(arg2 * 0x8da6b343 - arg3 * 0x27e9c7bf) & sx.q(*(arg1 + 0x38))) << 3)); i != 0; 
        i = *(i + 0x68))
    void* rdx = *(i + 8)
    
    if (rdx != 0 && *(rdx + 8) == arg2 && *(rdx + 0xc) == arg3)
        r11 += 1

return zx.q(r11)
