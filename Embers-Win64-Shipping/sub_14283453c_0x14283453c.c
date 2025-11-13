// 函数: sub_14283453c
// 地址: 0x14283453c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x7a8)

while (i != 0)
    void* i_1 = i
    i = *(i + 0x10)
    free(i_1)

int64_t rcx = *(arg1 + 8)

if (rcx != 0)
    free(rcx)

free(arg1)
return 0
