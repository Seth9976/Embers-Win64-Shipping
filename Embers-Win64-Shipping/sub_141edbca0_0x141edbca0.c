// 函数: sub_141edbca0
// 地址: 0x141edbca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(*arg1 + 0x5c0))()

if (result.b != 0 && (*(arg1 + 0x8a) & 1) != 0)
    int64_t* rdi_1 = arg1[0x97]
    
    if (rdi_1 == 0)
        int64_t* rax_2 = (*(arg1[0x28] + 0x28))(&arg1[0x28])
        rdi_1 = rax_2
        arg1[0x97] = rax_2
    
    result = sub_141ee63a0(rdi_1, arg2.d)
    
    if (result != 0xffffffff)
        return sub_141ed54b0(rdi_1, result, arg1)

return result
