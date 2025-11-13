// 函数: sub_142c8ec60
// 地址: 0x142c8ec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x58)
int64_t arg_8
int64_t* var_28 = &arg_8
int32_t result =
    sub_142c64d60(rcx, *(rcx + 0x238), arg2, *(arg1 + 0x38) - *(arg1 + 0x30) + *(arg1 + 0x28))

if (result == 0)
    int64_t rax = *(arg1 + 0x30)
    int64_t rcx_1 = arg_8
    
    if (rcx_1 != rax)
        *(arg1 + 0x30) = rax - rcx_1
        return 0
    
    data_143ccb8a0(*(arg1 + 0x28))
    __builtin_memset(arg1 + 0x28, 0, 0x18)
    uint64_t var_18[0x2]
    arg2.o = *sub_142c59600(&var_18)
    result = 0
    *(arg1 + 0x40) = arg2.o

return result
