// 函数: sub_142ae8f90
// 地址: 0x142ae8f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *(arg1 + 0x48)
uint64_t result_2 = arg4
uint64_t result_1 = arg3
uint64_t result_3 = arg2
int16_t rax = r15[1].w
uint64_t result

if (rax s< 0)
    result = zx.q(*(r15 + 0xc))
else
    result = zx.q(sx.d(rax) s>> 5)

if (*arg6 s<= 0)
    void* r12_1 = nullptr
    result = sx.q(result.d)
    
    if (result_3 s< 0)
        result_3 = 0
    else if (result_3 s> result)
        result_3 = result
    
    if (result_1 s< 0)
        result_1 = 0
    else if (result_1 s> result)
        result_1 = result
    
    if (result_2 s< 0)
        result_2 = 0
    else if (result_2 s> result)
        result_2 = result
    
    if (result_3.d s> result_1.d || (result_3.d s< result_2.d && result_2.d s< result_1.d))
        *arg6 = 8
    else
        uint64_t r9 = zx.q(result_2.d)
        int64_t rax_2 = *r15
        uint64_t r8 = zx.q(result_1.d)
        uint64_t rdx = zx.q(result_3.d)
        
        if (arg5 == 0)
            (*(rax_2 + 0x20))(r15, rdx, r8, r9)
        else
            int32_t rbx_2 = result_1.d - result_3.d
            (*(rax_2 + 0x20))(r15, rdx, r8, r9)
            
            if (result_2.d s< result_3.d)
                result_3 = zx.q(result_1.d)
            
            sub_142aea120(r15, result_3.d, rbx_2)
        
        char rax_3 = (r15[1].w).b
        
        if ((rax_3 & 0x11) == 0)
            r12_1 = r15 + 0xa
            
            if ((rax_3 & 2) == 0)
                r12_1 = r15[3]
        
        *(arg1 + 0x30) = r12_1
        
        if (arg5 == 0)
            *(arg1 + 0x2c) += result_1.d - result_3.d
            int64_t rcx_3 = sx.q(*(arg1 + 0x2c))
            *(arg1 + 0x10) = rcx_3
            *(arg1 + 0x1c) = rcx_3.d
        
        result = zx.q(result_2.d - result_3.d + result_1.d)
        *(arg1 + 0x28) = result.d
        
        if (arg5 != 0 && result_2.d s> result_3.d)
            *(arg1 + 0x28) = result_2.d

return result
