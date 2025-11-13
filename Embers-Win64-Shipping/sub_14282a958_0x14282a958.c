// 函数: sub_14282a958
// 地址: 0x14282a958
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg1[7]

if (rdx != 0)
    uint64_t result = rdx - 1
    arg1[7] = result
    
    if (result != 0)
        arg1[6] += 1
    else
        arg1[6] &= result
    
    arg1[1].d += 1
    
    if (result != 0)
        return result

return sub_14282ae7c(arg1, 0)
