// 函数: sub_1422926f0
// 地址: 0x1422926f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
*(arg1 + 0x19) = 0
int32_t i = 0
uint64_t r12
r12.b = 1
char r14 = 1
int32_t result

if (*(arg1 + 0x10) s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t r13_1 = *(arg1 + 8)
        int64_t arg_8 = 0
        int64_t* rcx = *(r13_1 + r15_1 + 0x80)
        int64_t* rax_1 = (*(*rcx + 0x40))(rcx, 3, &arg_8)
        int64_t rdx_1 = *rax_1
        result = (*(rdx_1 + 0x1d8))(rax_1, rdx_1)
        char rdx_2 = 0
        *(arg1 + 0x19) |= (result u> 1) + 1
        
        if (result == 0)
            rdx_2 = r12.b
        
        r12 = zx.q(rdx_2)
        
        if ((*(r13_1 + r15_1 + 0x9c) & 0x4000000) != 0)
            result = (*(*rax_1 + 0x338))(rax_1)
        
        if ((*(r13_1 + r15_1 + 0x9c) & 0x4000000) == 0 || result.b == 0)
            result.b = 0
        else
            result.b = 1
        
        rbp.b |= result.b
        
        if ((*(r13_1 + r15_1 + 0x9c) & 0x4000000) != 0)
            result = (*(*rax_1 + 0x338))(rax_1)
        
        if ((*(r13_1 + r15_1 + 0x9c) & 0x4000000) == 0 || result.b == 0)
            result.b = 0
        else
            result.b = 1
        
        r14 &= result.b
        i += 1
        r15_1 += 0xa0
    while (i s< *(arg1 + 0x10))

if (*(arg1 + 0x10) s> 0 && (r12.b == 0 || r14 == 0))
    result = 0
else
    result.b = 1

*(arg1 + 0x18) &= 0xfe
*(arg1 + 0x18) |= result.b
result.b = sbb.b(result.b, result.b, rbp.b != 0)
result.b &= 8
*(arg1 + 0x19) |= result.b
return result
