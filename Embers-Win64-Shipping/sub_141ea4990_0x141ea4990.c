// 函数: sub_141ea4990
// 地址: 0x141ea4990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(data_143f5b298 + 0x870)
int64_t rax_1 = *arg1
*arg2 = r8

if ((*(rax_1 + 0x630))(arg1, arg3, r8) == 0)
    if ((*(*arg1 + 0x638))(arg1) == 0)
        if ((*(*arg1 + 0x640))(arg1) == 0)
            return arg2
        
        if ((*(arg1 + 0x22c) & 1) == 0)
            *arg2 = *(data_143f5b298 + 0x89c)
            return arg2
    else if ((*(arg1 + 0x22c) & 1) == 0)
        *arg2 = *(data_143f5b298 + 0x898)
        return arg2
else if ((*(arg1 + 0x22c) & 1) == 0)
    char rax_3 = arg1[0x44].b
    
    if (rax_3 == 2)
        *arg2 = *(data_143f5b298 + 0x878)
        return arg2
    
    if (rax_3 != 1)
        *arg2 = *(data_143f5b298 + 0x870)
        return arg2
    
    int32_t rax_8 = arg1[0x45].d
    void* rbx_5 = data_143f5b298
    
    if (test_bit(rax_8, 0x1a))
        *arg2 = *(rbx_5 + 0x87c)
        return arg2
    
    if ((rax_8.b & 8) != 0)
        *arg2 = *(rbx_5 + 0x880)
        return arg2
    
    if ((rax_8.b & 0x20) == 0)
        *arg2 = *(rbx_5 + 0x874)
        return arg2
    
    *arg2 = *(rbx_5 + 0x888)
    return arg2

*arg2 = *(arg1 + 0x224)
return arg2
