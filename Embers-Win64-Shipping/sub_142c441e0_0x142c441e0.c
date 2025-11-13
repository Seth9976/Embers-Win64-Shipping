// 函数: sub_142c441e0
// 地址: 0x142c441e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(*(arg1 + 0x98) + 8)

if (r9 != 0)
    sub_142c3dad0(r9, arg2, *(arg1 + 4))

int32_t result = *(arg2 + 0x60)
int32_t* rbx_1 = *(arg2 + 0x70)

if (result != 0)
    uint64_t rdi_1 = zx.q(result)
    uint64_t i
    
    do
        result = sub_142c47d60(*rbx_1)
        *(rbx_1 + 0x12) = result.b
        rbx_1 = &rbx_1[5]
        i = rdi_1
        rdi_1 -= 1
    while (i != 1)

return result
