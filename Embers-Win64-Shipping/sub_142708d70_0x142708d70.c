// 函数: sub_142708d70
// 地址: 0x142708d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int64_t* r14 = arg1[3]
int32_t rax = (rsi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

int32_t i = *(arg2 + 0x10)
*(*arg1 + (rsi << 2)) = i
int64_t r10 = *arg1
int32_t i_1 = arg1[1].d - 1

if (i_1 s<= 0)
    *(arg2 + 0x18) |= 1
else
    do
        int64_t i_3 = sx.q(i_1)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i_1 - 1)
        i = (temp1_1 - temp0_1) s>> 1
        int64_t rdi_1 = sx.q(*(r10 + (i_3 << 2)))
        int64_t r9_1 = **r14
        int64_t i_2 = sx.q(i)
        int64_t rbp_1 = sx.q(*(r10 + (i_2 << 2)))
        
        if (*(rbp_1 * 0x1c + r9_1 + 0xc) f<= *(rdi_1 * 0x1c + r9_1 + 0xc))
            break
        
        *(r10 + (i_3 << 2)) = rbp_1.d
        i_1 = i
        *(r10 + (i_2 << 2)) = rdi_1.d
    while (i s> 0)
    
    *(arg2 + 0x18) |= 1

return i
