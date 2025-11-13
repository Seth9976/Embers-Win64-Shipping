// 函数: sub_141da4190
// 地址: 0x141da4190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x3b8)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_141da5290(rax)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

int64_t rsi_1 = sx.q(*(arg1 + 0x18))
int32_t rax_3 = (rsi_1 + 1).d
*(arg1 + 0x18) = rax_3

if (rax_3 s> *(arg1 + 0x1c))
    sub_1405a4f90(arg1 + 0x10)

void**** rcx_4 = (rsi_1 << 4) + *(arg1 + 0x10)
*rcx_4 = rbx
rcx_4[1] = rax_2
void*** rcx_5 = rax_2

if (rcx_5 != 0)
    rcx_5[1].d += 1
    rcx_5 = rax_2

*arg2 = rbx
arg2[1] = rcx_5

if (rcx_5 != 0)
    rcx_5[1].d += 1
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp1_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_2)[1](rax_2, 1)

return arg2
