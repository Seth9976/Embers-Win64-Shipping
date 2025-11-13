// 函数: sub_14260f910
// 地址: 0x14260f910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2

switch (arg4)
    case 0
        r10 += 1
    case 1
        r10 += 1
        arg3 += 1
    case 2
        arg3 += 1
    case 3
        r10 -= 1
        arg3 += 1
    case 4
        r10 -= 1
    case 5
        r10 -= 1
        arg3 -= 1
    case 6
        arg3 -= 1
    case 7
        r10 += 1
        arg3 -= 1

int32_t r9_2 = 0

for (void* i = *(*(arg1 + 0x80)
        + ((sx.q(r10 * 0x8da6b343 - arg3 * 0x27e9c7bf) & sx.q(*(arg1 + 0x38))) << 3)); i != 0; 
        i = *(i + 0x68))
    void* rdx_2 = *(i + 8)
    
    if (rdx_2 != 0 && *(rdx_2 + 8) == r10 && *(rdx_2 + 0xc) == arg3)
        r9_2 += 1

return zx.q(r9_2)
