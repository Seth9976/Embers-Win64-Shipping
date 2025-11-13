// 函数: sub_140a6d980
// 地址: 0x140a6d980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg4)
int16_t* result

if (arg4 s<= 0)
    int32_t rax_2 = *(arg5 + 0xc)
    arg5[1].d = 0
    
    if (rax_2 s< 0 && rax_2 != 0)
        sub_1405947f0(arg5, 0)
    
    result = *arg5
    
    if (result != 0)
        *result = 0
else
    int32_t rcx = arg5[1].d
    int32_t rax = (rbp + 1).d
    
    if (rax s> rcx)
        arg5[1].d = rax
        
        if (rax s> *(arg5 + 0xc))
            sub_140594770(arg5)
    else if (rax s< rcx && rax != rcx)
        arg5[1].d = rax
        sub_1405a50a0(arg5)
    
    char rax_1 = (*(arg2 + 8)).b
    void* rcx_3
    
    if ((rax_1 & 0x11) == 0)
        rcx_3 = arg2 + 0xa
        
        if ((rax_1 & 2) == 0)
            rcx_3 = *(arg2 + 0x18)
    else
        rcx_3 = nullptr
    
    memcpy(*arg5, rcx_3 + (sx.q(arg3) << 1), (rbp << 1).d)
    result = *arg5
    result[rbp] = 0

return result
