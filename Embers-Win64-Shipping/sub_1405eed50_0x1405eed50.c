// 函数: sub_1405eed50
// 地址: 0x1405eed50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t var_18 = -2
int64_t* rcx = *arg2

if ((*(*rcx + 0x20))(rcx) != 0)
    int64_t* rax_2 = sub_14060a8e0()
    void* rcx_1 = rax_2[0x23]
    
    if (rcx_1 == 0)
        int64_t rdx = *rax_2
        (*(rdx + 0x390))(rax_2, rdx)
        rcx_1 = rax_2[0x23]
    
    sub_14060a590(rcx_1)

int64_t rdi_1 = sx.q(*(arg1 + 0x10))
int32_t rax_3 = (rdi_1 + 1).d
*(arg1 + 0x10) = rax_3

if (rax_3 s> *(arg1 + 0x14))
    sub_1405a4d70(arg1 + 8)

int64_t result = *arg2
*(*(arg1 + 8) + (rdi_1 << 3)) = result
*arg2 = 0
return result
