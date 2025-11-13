// 函数: sub_142a35cd0
// 地址: 0x142a35cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x3c))

if (rax.d s<= 0)
    return j_sub_140a74f90(*(arg1 + 0x30)) __tailcall

int64_t* i = *(arg1 + 0x30)

while (i != &i[rax])
    int64_t* rcx_2 = *i
    i = &i[1]
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

return j_sub_140a74f90(*(arg1 + 0x30)) __tailcall
