// 函数: sub_141a50b90
// 地址: 0x141a50b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_10 = *(arg1 + 0x98)
int32_t arg_c
uint32_t arg_1c

if (rax_10.b != 2)
    char r9_1 = *(arg1 + 0x88)
    int32_t rcx
    
    if (r9_1 == 0)
        rcx = *(arg1 + 0x5c)
    else
        rcx = *(arg1 + 0x8c)
    
    if (rcx s> 0)
        uint32_t rcx_2 = (rax_10 u>> 0x20).d
        
        if (rax_10.b == 1)
            rcx_2 += 1
        
        char arg_18 = 0
        arg_1c = rcx_2
        int32_t rcx_3
        
        if (r9_1 == 0)
            rcx_3 = *(arg1 + 0x5c)
        else
            rcx_3 = *(arg1 + 0x8c)
        
        uint32_t rax_1
        
        if (rax_10.b != 1)
            rax_1 = (rax_10 u>> 0x20).d
        else
            rax_1 = (rax_10 u>> 0x20).d + 1
        
        int32_t rax_2 = rax_1 - rcx_3
        int64_t rcx_4 = *(arg1 + 0x90)
        arg_c = rax_2
        
        if (rcx_4.b != 2 && rax_2 s<= (rcx_4 u>> 0x20).d)
            arg2[1] = arg_18.q
            *arg2 = rcx_4
            return arg2
        
        arg2[1] = arg_18.q
        *arg2 = 1.q
        return arg2

arg_1c = 0
arg_c = 0
*arg2 = 0.q
arg2[1] = 0.q
return arg2
