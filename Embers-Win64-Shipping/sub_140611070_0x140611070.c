// 函数: sub_140611070
// 地址: 0x140611070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
int32_t temp0 = *(arg2 + 0xc)

if (rax != temp0)
    if (rax s< temp0)
        return 0xffffffff
    
    return 1

int32_t r8 = **(arg1 + 0x10)
int32_t temp1 = **(arg2 + 0x10)

if (r8 != temp1)
    if (r8 s< temp1)
        return 1
    
    return 0xffffffff

int32_t rdi = *(arg2 + 8)

if (rdi - 8 u> 6)
    return 1

int32_t rax_6 = *(arg1 + 8)

if (rax_6 != rdi)
    int32_t rcx_2 = 1
    
    if (sub_140611d90(rax_6) s< sub_140611d90(rdi))
        rcx_2 = -1
    
    return zx.q(rcx_2)

int32_t rax_10 = *(arg1 + 0x1c)
int32_t temp2 = *(arg2 + 0x1c)
bool cond:3 = rax_10 s< temp2

if (rax_10 == temp2)
    int32_t rax_11 = *(arg1 + 0x20)
    int32_t temp3_1 = *(arg2 + 0x20)
    cond:3 = rax_11 s< temp3_1
    
    if (rax_11 == temp3_1)
        int32_t rax_12 = *(arg1 + 0x18)
        int32_t temp4_1 = *(arg2 + 0x18)
        cond:3 = rax_12 s< temp4_1
        
        if (rax_12 == temp4_1)
            return 0

if (cond:3)
    return 0xffffffff

return 1
