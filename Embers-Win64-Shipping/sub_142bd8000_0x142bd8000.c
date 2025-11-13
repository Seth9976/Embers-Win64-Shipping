// 函数: sub_142bd8000
// 地址: 0x142bd8000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = *(arg1 + 0x28)

if (rbx == 0)
    return zx.q((rbx + 3).d)

if (*(arg1 + 0x59) == 0)
    *rbx += 1
    return 0

int64_t* r9 = *(arg1 + 0x18)
int32_t result

if (sx.d(r9[0xc].w) + 1 + sx.d(r9[3].w) u> *(r9 + 0xc))
    result = sub_142b92690(r9, 0, 1)
    
    if (result == 0)
        goto label_142bd8057
else
    result = 0
label_142bd8057:
    int16_t rcx_4 = *rbx
    
    if (rcx_4 s> 0)
        *(*(rbx + 0x18) + (sx.q(sx.d(rcx_4) - 1) << 1)) = rbx[1] - 1
    
    *rbx += 1

return result
