// 函数: sub_1428343a0
// 地址: 0x1428343a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x30)

if (rcx != 0)
    sub_142834588(rcx)
    *(arg1 + 0x30) = 0

while (true)
    int64_t* rcx_1 = *(arg1 + 0x38)
    
    if (rcx_1 == 0)
        break
    
    *(arg1 + 0x38) = *rcx_1
    sub_142834588(rcx_1)

free(arg1)
return 0
