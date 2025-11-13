// 函数: sub_141d4c1f0
// 地址: 0x141d4c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2[1]
int64_t rbp = *arg2
int64_t var_18 = rbp
int64_t* var_10 = rdi

if (rdi != 0)
    *(rdi + 0xc) += 1
    rbp = var_18

uint64_t result = sub_140901d20(arg1 + 0xb0, &var_18)

if (result.d == 0xffffffff)
    int64_t rbx_1 = sx.q(*(arg1 + 0xb8))
    int32_t rax = (rbx_1 + 1).d
    *(arg1 + 0xb8) = rax
    
    if (rax s> *(arg1 + 0xbc))
        sub_1405a4f90(arg1 + 0xb0)
    
    result = (rbx_1 << 4) + *(arg1 + 0xb0)
    *result = rbp
    *(result + 8) = rdi
else if (rdi != 0)
    result = zx.q(*(rdi + 0xc))
    *(rdi + 0xc) -= 1
    
    if (result.d == 1)
        return (*(*rdi + 8))(rdi, 1)

return result
