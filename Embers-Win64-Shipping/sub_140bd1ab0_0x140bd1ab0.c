// 函数: sub_140bd1ab0
// 地址: 0x140bd1ab0
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
    sub_140af98a0("Unknown", 0x1008, Async loading can only be suspended from the main thread", 
        r9_1)
    sub_140afbb40()

int64_t result = 0
bool z

if (0 == *(arg1 + 0x11))
    *(arg1 + 0x11) = 0
    z = true
else
    result.b = *(arg1 + 0x11)
    z = false

if (z)
    char temp0_1 = *(arg1 + 0x11)
    *(arg1 + 0x11) = 1
    result.b = temp0_1
    
    if (*(arg1 + 0x2d) != 0)
        sub_140be3360(arg1 + 0x380)
        jump(*(**(arg1 + 0x38) + 0x20))

return result
