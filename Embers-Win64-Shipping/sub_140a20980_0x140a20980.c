// 函数: sub_140a20980
// 地址: 0x140a20980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x60, 0)

if (rax != 0)
    *rax = &data_142e51e28
    rax[2] = *arg5
    rax[4] = 0
    
    if (rax[2] != 0)
        void* rax_2 = arg5[2]
        void* rcx = &arg5[4]
        
        if (rax_2 != 0)
            rcx = rax_2
        
        (**rcx)(rcx)
    
    rax[0xb] = sub_140a387b0()

int64_t rbp = sx.q(arg1[6].d)
int128_t zmm6
zmm6.q = fconvert.d(arg4.d)
int32_t rax_5 = (rbp + 1).d
zmm6.q = zmm6.q f+ *arg1
void* rdi_1 = &arg1[1]
*(rdi_1 + 0x28) = rax_5

if (rax_5 s> *(rdi_1 + 0x2c))
    sub_140a30f00(rdi_1, rbp.d)

void* rax_6 = *(rdi_1 + 0x20)

if (rax_6 != 0)
    rdi_1 = rax_6

int64_t rax_8 = rbp << 5
*(rdi_1 + rax_8) = zmm6.q
void* rdx_3 = rax_8 + 0x10 + rdi_1
*(rdi_1 + rax_8 + 8) = arg4.d
*rdx_3 = 0
*(rdx_3 + 8) = 0
void var_58

if (&var_58 != rdx_3 && rax != 0)
    (*rax)[8](rax)

*arg2 = 0

if (rax != 0)
    *arg2 = *(*rax)[6](rax, &var_58)
    (*rax)[7](rax, 0)
    int64_t rax_13 = sub_140a84c80(rax, 0, 0)
    
    if (rax_13 != 0)
        sub_140a74f90(rax_13)

if (*arg5 != 0)
    void* rdx_5 = arg5[2]
    void* rcx_8 = &arg5[4]
    
    if (rdx_5 != 0)
        rcx_8 = rdx_5
    
    int64_t rdx_6 = *rcx_8
    (*(rdx_6 + 0x10))(rcx_8, rdx_6)

return arg2
