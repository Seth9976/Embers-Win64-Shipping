// 函数: sub_142c07970
// 地址: 0x142c07970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[3]
void* rcx = arg1[1]
void* rbp = *(rax + 0x80)
void* r10 = *(rcx + 0x40)
int64_t rsi = *(rax + 0x70)
uint64_t i_4 = zx.q(*(rax + 0x60))
uint64_t r8 = zx.q(i_4.d)
int32_t result
int32_t arg_8
int32_t result_1

if ((*(rax + 0x38) & 0xfffffffe) != 4)
    result = (*(r10 + 0x160))(arg2, *(rcx + 0x48), r8, rsi, 0x14, rbp + 4, 0x14, *(r10 + 0x50))
    
    if (i_4.d != 0)
        void* rbx_2 = rbp + 8
        uint64_t i_3 = i_4
        uint64_t i
        
        do
            sub_142bf3b20(arg1[1], *(rbx_2 + rsi - rbp - 8), &arg_8, &result_1)
            *rbx_2 -= arg_8
            rbx_2 += 0x14
            result = result_1
            *(rbx_2 - 0x10) -= result
            i = i_3
            i_3 -= 1
        while (i != 1)
else
    (*(r10 + 0x158))(arg2, *(rcx + 0x48), r8, rsi, 0x14, rbp, 0x14, *(r10 + 0x48))
    result = sub_142bf3c40(arg1[1], 9)
    
    if (result.b != 0 && i_4.d != 0)
        int32_t* rbx_1 = rbp + 8
        uint64_t i_2 = zx.q(i_4.d)
        uint64_t i_1
        
        do
            sub_142bf3a00(arg1[1], *(rsi - rbp - 8 + rbx_1), &arg_8, &result_1)
            *rbx_1 -= arg_8
            rbx_1 = &rbx_1[5]
            result = result_1
            rbx_1[-4] -= result
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
void* r8_3 = arg1[3]

if ((*(r8_3 + 0x28) & 4) == 0)
    return result

return sub_142c39920(*arg1, arg1[1], r8_3) __tailcall
