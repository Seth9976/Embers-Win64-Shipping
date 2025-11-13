// 函数: sub_1418e4e30
// 地址: 0x1418e4e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1418f0300(*(arg1 + 0x20), *(arg1 + 0x78), arg2)
int64_t rdi_1 = *(arg2 + 0x40)
int64_t result = data_143efb958(rdi_1, 1, *(*(arg1 + 0x18) + 0x10))

if (rax == 0)
    return result

void* r9_1 = *(arg1 + 0x20)
return data_143efb9a8(rdi_1, 1, *(*(*(r9_1 + 0x110) + 0x18) + 0x1e0), 0, *(r9_1 + 0x70), 
    *(r9_1 + 0x68), *(r9_1 + 0x88), *(r9_1 + 0x80))
