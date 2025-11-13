// 函数: sub_142357580
// 地址: 0x142357580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[7].b == 0)
    arg1[7].b = 1
    (*(*arg1 + 0x290))()
    (*(*arg1 + 0x298))(arg1)

int64_t rbp = *arg2
int64_t* rbx_1 = arg2[1]
int64_t var_18 = rbp
int64_t* var_10 = rbx_1

if (rbx_1 != 0)
    *(rbx_1 + 0xc) += 1
    rbp = var_18

uint64_t result = sub_140901d20(&arg1[5], &var_18)

if (result.d == 0xffffffff)
    int64_t rdi_1 = sx.q(arg1[6].d)
    int32_t rax_3 = (rdi_1 + 1).d
    arg1[6].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x34))
        sub_1405a4f90(&arg1[5])
    
    result = (rdi_1 << 4) + arg1[5]
    *result = rbp
    *(result + 8) = rbx_1
else if (rbx_1 != 0)
    result = zx.q(*(rbx_1 + 0xc))
    *(rbx_1 + 0xc) -= 1
    
    if (result.d == 1)
        return (*(*rbx_1 + 8))(rbx_1, 1)

return result
