// 函数: sub_141bdedd0
// 地址: 0x141bdedd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9_1 = *(arg1 + 0x128)
*(arg1 + 0x120) = arg2

if (r9_1 == 0)
    return 

int32_t rdx = 0
int32_t rax_1 = *(arg1 + 0x110) - 1

if (rax_1 s<= 0)
    rax_1 = 0

if (arg2 s>= 0)
    rdx = rax_1
    
    if (arg2 s< rax_1)
        rdx = arg2

return sub_140f5d090(r9_1, rdx) __tailcall
