// 函数: sub_142ae95e0
// 地址: 0x142ae95e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
int64_t i = 0
int64_t* r12 = *(arg1 + 0x48)

if (arg2 s< 0)
    rdi = 0
else if (sx.q(arg2) s>= *(arg1 + 0x70))
    rdi = *(arg1 + 0x70)

int32_t rbp = rdi

if ((arg3 == 0 || sx.q(rdi) == *(arg1 + 0x70)) && rdi s> 0)
    rbp = rdi - 1

int32_t result = rbp & 0x8000000f

if (result s< 0)
    result = ((result - 1) | 0xfffffff0) + 1

int32_t rbp_1 = rbp - result
int64_t r13 = sx.q(rbp_1)

if (*(arg1 + 0x20) != r13)
    int64_t r15_1
    
    if (*(arg1 + 0x78) == rbp_1)
        r15_1 = *(arg1 + 0x50)
    else if (*(arg1 + 0x7c) != rbp_1)
        r15_1 = *(arg1 + 0x50)
        
        if (r15_1 == *(arg1 + 0x30))
            r15_1 = *(arg1 + 0x58)
        
        (*(*r12 + 0x70))(r12, zx.q(rbp_1))
        int32_t r14_1 = rbp_1
        
        do
            *(r15_1 + (i << 1)) = (*(*r12 + 0x20))(r12)
            
            if (sx.q(r14_1) s> *(arg1 + 0x70))
                break
            
            r14_1 += 1
            i += 1
        while (i s< 0x10)
    else
        r15_1 = *(arg1 + 0x58)
    
    *(arg1 + 0x30) = r15_1
    int64_t rcx_2 = sx.q(rbp_1 + 0x10)
    int64_t rax_11 = *(arg1 + 0x70)
    *(arg1 + 0x2c) = 0x10
    *(arg1 + 0x20) = r13
    *(arg1 + 0x10) = rcx_2
    
    if (rcx_2 s> rax_11)
        *(arg1 + 0x10) = rax_11
        *(arg1 + 0x2c) = rax_11.d - r13.d
    
    *(arg1 + 0x1c) = *(arg1 + 0x2c)

int32_t rdi_1 = rdi - *(arg1 + 0x20)
*(arg1 + 0x28) = rdi_1

if (arg3 == 0)
    result.b = rdi_1 s> 0
    return result

result.b = rdi_1 s< *(arg1 + 0x2c)
return result
