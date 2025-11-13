// 函数: sub_142a218d0
// 地址: 0x142a218d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg5)
int16_t rax = *arg6

if (rax != 0)
    int32_t r9 = rdi.d
    
    if ((0xfefe & rax) == 0)
        sub_1403bb7a0(arg1, arg2, arg3, r9)
    else
        sub_1403bb861(arg1, arg2, arg3, r9)

int64_t r12 = sx.q((rdi << 2).d)
int16_t rax_2 = arg6[1]
void* r14_1 = arg3 + r12

if (rax_2 != 0)
    int32_t r9_1 = rdi.d
    
    if ((0xfefe & rax_2) == 0)
        sub_1403bb7a0(&arg1[4], arg2, r14_1, r9_1)
    else
        sub_1403bb861(&arg1[4], arg2, r14_1, r9_1)

int16_t rax_3 = arg6[2]

if (rax_3 != 0)
    int32_t r9_2 = rdi.d
    
    if ((0xfefe & rax_3) == 0)
        sub_1403bb7a0(&arg1[8], arg2, arg4, r9_2)
    else
        sub_1403bb861(&arg1[8], arg2, arg4, r9_2)

int16_t result = arg6[3]

if (result == 0)
    return result

int32_t r9_3 = rdi.d
int64_t* r8_2 = arg4 + r12

if ((0xfefe & result) == 0)
    return sub_1403bb7a0(&arg1[0xc], arg2, r8_2, r9_3)

return sub_1403bb861(&arg1[0xc], arg2, r8_2, r9_3)
