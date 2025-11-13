// 函数: sub_142834588
// 地址: 0x142834588
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x7a8)

while (i != 0)
    void* i_1 = i
    i = *(i + 0x10)
    free(i_1)

int64_t rcx = *(arg1 + 8)

if (rcx != 0)
    free(rcx)

void* rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    sub_1428344d4(rcx_1)

free(arg1)
return 0
