// 函数: sub_140ea1f00
// 地址: 0x140ea1f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x38)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[1] = 0
    __builtin_memset(&rax[3], 0, 0x1c)
    *rdi = &data_142eddda8

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rdi

rdi[1] = arg3
rdi[2].d = arg4
int64_t* rbx_1 = arg6[1]
int64_t var_38 = *arg6

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_38 != &rdi[3])
    arg5 = var_38.o
    var_38.o = *(rdi + 0x18)
    *(rdi + 0x18) = arg5

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_1407473e0(&rdi[5], arg7)

if (rax_1 != 0)
    rax_1[1].d += 1

int64_t rdi_1 = sx.q(arg1[1].d)
int32_t rax_7 = (rdi_1 + 1).d
arg1[1].d = rax_7

if (rax_7 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

void**** rax_10 = (rdi_1 << 4) + *arg1
*rax_10 = rdi
rax_10[1] = rax_1
*arg2 = rdi
arg2[1] = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            void** r8 = *rax_1
            (*r8)(rax_1, arg5, r8)
            int32_t temp3_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                void** r8_1 = *rax_1
                r8_1[1](rax_1, 1, r8_1)

return arg2
