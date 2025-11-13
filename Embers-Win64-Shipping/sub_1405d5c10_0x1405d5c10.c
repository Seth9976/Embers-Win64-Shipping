// 函数: sub_1405d5c10
// 地址: 0x1405d5c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8

if (*arg1 != 0)
    void* rax_1 = *(arg1 + 0x10)
    void* rcx = arg1 + 0x20
    arg_8 = arg2
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*arg1)((*(*rcx + 8))(rcx), &arg_8)

int32_t rcx_2
rcx_2.b = sub_140b5b8a0(*(arg1 + 0x48), 0).b == 0
int64_t result
result.b = *(arg1 + 0x4c) != 0
result.b |= rcx_2.b

if (result.b != 0)
    result = sub_140d3c6e0(arg1 + 0x40)
    
    if (result != 0)
        result = sub_140d1fd20(result, *(arg1 + 0x48))
        
        if (result != 0)
            arg_8 = arg2
            int64_t* rax_4 = sub_140d3c6e0(arg1 + 0x40)
            int64_t rax_5 = sub_140d1fd30(rax_4, *(arg1 + 0x48))
            int64_t r9_1 = *rax_4
            return (*(r9_1 + 0x210))(rax_4, rax_5, &arg_8, r9_1)

return result
