// 函数: sub_142a86950
// 地址: 0x142a86950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t rax = *(arg1 + 0x20)
int64_t result = *(arg2 + 8)

if (rax != 0)
    int64_t rcx = *(arg2 + 0x10)
    
    if (rcx != 0 && rcx != arg4)
        rax(rcx)
        arg4 = arg_20

int64_t rax_1 = *(arg1 + 0x28)

if (rax_1 != 0)
    if (result != 0 && result != arg5)
        rax_1(result)
        arg4 = arg_20
    
    result = 0

*(arg2 + 8) = arg5
*arg2 = arg3
*(arg2 + 0x10) = arg4
return result
