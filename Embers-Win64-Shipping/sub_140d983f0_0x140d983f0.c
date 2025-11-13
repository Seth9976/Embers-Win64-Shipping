// 函数: sub_140d983f0
// 地址: 0x140d983f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x48)

if (rax == 0)
    rax = nullptr
else
    rax[1].d = 1
    *rax = &data_142ec7ad8
    *(rax + 0xc) = 1
    __builtin_memset(&rax[2], 0, 0x20)
    rax[6] = arg3
    rax[7] = arg1
    rax[8] = 0

void* const rax_1 = j_sub_140a82f30(0x40)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *(rax_1 + 0x10) = 0
    *(rax_1 + 0x18) = 0
    *(rax_1 + 0x1c) = 1
    __builtin_memset(rax_1 + 0x20, 0, 0x20)

rax[8] = rax_1

if (rax != 0)
    rax[1].d += 1

int64_t rbp_1 = sx.q(*(arg1 + 0x40))
int32_t rax_2 = (rbp_1 + 1).d
*(arg1 + 0x40) = rax_2

if (rax_2 s> *(arg1 + 0x44))
    sub_1405a4f90(arg1 + 0x38)

void** rax_5 = (rbp_1 << 4) + *(arg1 + 0x38)
*rax_5 = &rax[2]
rax_5[1] = rax
*arg2 = &rax[2]
arg2[1] = rax

if (rax != 0)
    *(rax + 0xc) += 1
    
    if (rax != 0)
        rax[1].d -= 1
        
        if (rax[1].d == 1)
            (**rax)(rax)
            int32_t temp1_1 = *(rax + 0xc)
            *(rax + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax)[1](rax, 1)

return arg2
