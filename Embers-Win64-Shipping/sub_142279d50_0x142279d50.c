// 函数: sub_142279d50
// 地址: 0x142279d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t* rcx = arg1[0x57]
    int64_t* rax_2
    int64_t var_28
    
    if (rcx == 0)
        int32_t var_20_1 = arg1[0xac].d
        rax_2 = &var_28
        var_28 = arg1[0xab]
    else
        rax_2 = (*(*rcx + 0x708))(rcx, &var_28)
    arg3 = *rax_2
    int64_t var_18 = arg3
    int32_t var_10_1 = rax_2[1].d
    (*(*arg1 + 0xd70))(arg1, &var_18)
    
    if (arg1[0x59].b != 0)
        (*(*arg1 + 0xd18))(arg1, arg1)

char result
int64_t rdx_4
result, rdx_4 = sub_141f9cfe0(arg1, arg2, arg3)
int64_t* rcx_4 = arg1[0x4a]

if (rcx_4 != 0)
    result = (arg1[0x7a].d).b & 6
    
    if (result == 6)
        rdx_4.b = 1
        return (*(*rcx_4 + 0x2f8))(rcx_4, rdx_4)

return result
