// 函数: sub_142263d90
// 地址: 0x142263d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x57]

if (result != 0 && (*(result + 0x2710) & 0x40) == 0)
    if (arg2 == 0)
        return sub_14256a9c0(arg1) __tailcall
    
    int32_t arg_24 = 0
    void arg_8
    result = sub_141f8dba0(arg1, (*sub_140b5e500(&arg_8, 0x145)).q)
    
    if (result.b == 0 || arg2 != arg1)
        int64_t rax_2 = *arg1
        int128_t var_18 = *arg3
        return (*(rax_2 + 0xd10))(arg1, arg2, &var_18)

return result
