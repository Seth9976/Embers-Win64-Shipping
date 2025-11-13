// 函数: sub_1428344d4
// 地址: 0x1428344d4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x18)

if (rcx != 0)
    sub_14283453c(rcx)
    *(arg1 + 0x18) = 0

while (true)
    int64_t* rcx_1 = *(arg1 + 0x20)
    
    if (rcx_1 == 0)
        break
    
    *(arg1 + 0x20) = *rcx_1
    sub_14283453c(rcx_1)

free(arg1)
return 0
