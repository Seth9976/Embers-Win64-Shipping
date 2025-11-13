// 函数: sub_141a50ac0
// 地址: 0x141a50ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_7 = *(arg1 + 0x90)
int32_t arg_c
uint32_t arg_1c

if (rax_7.b != 2)
    char r9_1 = *(arg1 + 0x70)
    int32_t rcx
    
    if (r9_1 == 0)
        rcx = *(arg1 + 0x58)
    else
        rcx = *(arg1 + 0x74)
    
    if (rcx s> 0)
        uint32_t rcx_2 = (rax_7 u>> 0x20).d
        
        if (rax_7.b != 1)
            rcx_2 += 1
        
        arg_1c = rcx_2
        int32_t r9_2
        
        if (r9_1 == 0)
            r9_2 = *(arg1 + 0x58)
        else
            r9_2 = *(arg1 + 0x74)
        
        uint32_t rax
        
        if (rax_7.b != 1)
            rax = (rax_7 u>> 0x20).d + 1
        else
            rax = (rax_7 u>> 0x20).d
        
        int64_t rcx_3 = *(arg1 + 0x98)
        int32_t r9_3 = r9_2 + rax
        arg_c = r9_3
        int64_t rax_2 = 0.q
        
        if (rcx_3.b != 2)
            uint32_t r8_2 = (rcx_3 u>> 0x20).d
            
            if (r9_3 s>= r8_2 && r9_3 s> r8_2)
                rax_2 = rcx_3
        
        arg2[1] = rax_2
        *arg2 = 1.q
        return arg2

arg_1c = 0
arg_c = 0
*arg2 = 0.q
arg2[1] = 0.q
return arg2
