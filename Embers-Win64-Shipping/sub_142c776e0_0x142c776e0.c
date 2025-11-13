// 函数: sub_142c776e0
// 地址: 0x142c776e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[0xda]
int64_t rcx = arg1[0xdb]

if (rax != 0)
    int64_t arg_8
    int64_t* var_18_1 = &arg_8
    int32_t result = sub_142c64d60(arg1, 0, arg2, *arg1 + rcx + 0xa88)
    
    if (result != 0)
        return result
    
    int64_t rax_1 = arg_8
    
    if (rax_1 != rax - rcx)
        arg1[0xdb] += rax_1
        return 0
    
    arg1[0xda] = 0

return 0
