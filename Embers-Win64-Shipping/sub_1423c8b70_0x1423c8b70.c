// 函数: sub_1423c8b70
// 地址: 0x1423c8b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x30) = arg2
*(arg1 + 0x20) = arg3
*(arg1 + 0x38) = 1
*(arg1 + 0x28) = 0
*(arg1 + 0x24) = arg4
*(arg1 + 0x2c) = 2
char* result = sub_1423c0190(arg1, arg5)
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t rdi_1 = 0
    
    do
        result = sub_1423c86d0(*(*(arg1 + 0x10) + rdi_1), arg1 + 0x20)
        i += 1
        rdi_1 += 8
    while (i s< *(arg1 + 0x18))

*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) s> 0xffffffff)
    return result

return sub_1405c5570(arg1 + 0x10, 0) __tailcall
