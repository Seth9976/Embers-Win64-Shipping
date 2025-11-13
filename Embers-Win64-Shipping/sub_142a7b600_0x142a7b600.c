// 函数: sub_142a7b600
// 地址: 0x142a7b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x140) == 0)
    int64_t* rax_2 = sub_142a554b0(j_sub_142a46490(), arg1 + 0x13c)
    bool cond:1_1 = *(arg1 + 0x13c) s<= 0
    *(arg1 + 0x140) = rax_2
    
    if (not(cond:1_1))
        rax_2.b = 0
        return rax_2
    
    (*(*rax_2 + 0x30))(rax_2, *(arg1 + 0x20), arg1 + 0x13c)

if (arg2 s>= *(arg1 + 0x68))
    *(arg1 + 0xa8) = 1
    int64_t rax
    rax.b = 1
    return rax

void* rcx_2 = *(arg1 + 0x20)

if (*(*(rcx_2 + 0x38) + 0x48) != 0)
    int32_t arg_8 = 0
    sub_142aea690(rcx_2, 0, arg2, 0, 0, &arg_8)

jump(*(**(arg1 + 0x140) + 0x88))
