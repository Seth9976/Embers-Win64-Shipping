// 函数: sub_140bbbd30
// 地址: 0x140bbbd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1
int64_t r9_1

if (data_143de5480 != 0)
    rax_1, r9_1 = GetCurrentThreadId()
    rax_1.b = rax_1 == data_143de5470

char rax_2

if (data_143de5480 == 0 || rax_1.b != 0)
    rax_2, r9_1 = sub_140a80f80()

if ((data_143de5480 != 0 && rax_1.b == 0) || rax_2 != 0)
    sub_140af98a0("Unknown", 0x1389, Async loading can only be suspended from the main thread", 
        r9_1)
    sub_140afbb40()

int32_t rax_3 = *(arg1 + 0x7c)
*(arg1 + 0x7c) += 1

if (data_143e1a340 != 0 && rax_3 == 0)
    jump(*(**(arg1 + 0x30) + 0x20))

return rax_3 + 1
