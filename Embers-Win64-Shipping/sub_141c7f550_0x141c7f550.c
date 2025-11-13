// 函数: sub_141c7f550
// 地址: 0x141c7f550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_141c81470(arg3, arg4)
void*** var_60 = rax
void* var_68 = &rax[2]
sub_1408ff3c0(&var_68, &rax[2])

if (rax != 0)
    rax[1].d += 1
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        (**rax)(rax)
        int32_t rax_3 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (rax_3 == 1)
            (*rax)[1](rax, 1)
    
    *(rax + 0xc) += 1

void*** r14 = rax
uint64_t* rax_6 = rax[2][0xe](&rax[2])
void*** rax_7 = sub_140a84c80(0, 0x30, 0)
void*** var_48 = rax_7

if (rax_7 != 0)
    r14 = nullptr
    *rax_7 = &data_14320f128
    rax_7[1] = arg1 - 8
    rax_7[2] = &rax[2]
    rax_7[3] = rax
    rax_7[5] = sub_140a387b0()
    *rax_7 = &data_14320f180

if (rax_7 != 0)
    sub_140599630(rax_6, 1)
    void arg_10
    (*rax_7)[6](rax_7, &arg_10)
    int64_t r13_1 = sx.q(rax_6[1].d)
    int32_t rax_10 = (r13_1 + 1).d
    rax_6[1].d = rax_10
    
    if (rax_10 s> *(rax_6 + 0xc))
        sub_1405a4f90(rax_6)
    
    void**** rax_13 = (r13_1 << 4) + *rax_6
    *rax_13 = rax_7
    rax_13[1].d = 3

if (r14 != 0)
    int32_t rax_14 = *(r14 + 0xc)
    *(r14 + 0xc) -= 1
    
    if (rax_14 == 1)
        (*r14)[1](r14, 1)

if (rax != 0)
    *(rax + 0xc) += 1

int64_t r14_1 = sx.q(*(arg1 + 0x20))
int32_t rax_16 = (r14_1 + 1).d
*(arg1 + 0x20) = rax_16

if (rax_16 s> *(arg1 + 0x24))
    sub_1405a4f90(arg1 + 0x18)

void* var_58 = &rax[2]
void** rax_19 = (r14_1 << 4) + *(arg1 + 0x18)
void*** var_50 = rax
*rax_19 = &rax[2]
rax_19[1] = rax

if (rax != 0)
    *(rax + 0xc) += 1

sub_141c85190(arg1 + 0x28, &var_58)
*arg2 = &rax[2]
arg2[1] = rax

if (rax != 0)
    rax[1].d += 1
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        (**rax)(rax)
        int32_t rsi_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*rax)[1](rax, zx.q(rsi_1))

int64_t rcx_14 = *arg3

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return arg2
