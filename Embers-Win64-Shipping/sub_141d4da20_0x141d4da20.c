// 函数: sub_141d4da20
// 地址: 0x141d4da20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg3
int32_t rdi = arg2

if (arg2 == 0xffffffff)
    int64_t* rcx = *(arg1 + 0x130)
    
    if (rcx == 0)
        rdi = -1
    else
        int64_t* rax_1 = (*(*rcx + 0x38))(rcx)
        int64_t r8 = *rax_1
        rdi = (*(r8 + 0x18))(rax_1, 0, r8)

if (rsi == 0xffffffff)
    int64_t* rcx_2 = *(arg1 + 0x130)
    
    if (rcx_2 == 0)
        rsi = -1
    else
        int64_t* rax_3 = (*(*rcx_2 + 0x38))(rcx_2)
        int64_t r9 = *rax_3
        rsi = (*(r9 + 0x28))(rax_3, 0, zx.q(rdi), r9)

int64_t* rcx_4 = *(arg1 + 0x130)
int32_t result

if (rcx_4 != 0)
    int64_t* rax_5 = (*(*rcx_4 + 0x38))(rcx_4)
    result = (**rax_5)(rax_5, zx.q(rdi), zx.q(rsi), arg4)

if (rcx_4 == 0 || result.b == 0)
    result.b = 0
else
    result.b = 1

return result
