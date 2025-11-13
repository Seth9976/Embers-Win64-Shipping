// 函数: sub_1403cc560
// 地址: 0x1403cc560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi_1

if (arg1 == 2)
    rdi_1 = 0x140
label_1403cc57f:
    int64_t result = malloc(rdi_1)
    
    if (result != 0)
        memset(result, 0, rdi_1)
        return result
else if (arg1 == 1)
    rdi_1 = 0x4b0
    goto label_1403cc57f
return 0
