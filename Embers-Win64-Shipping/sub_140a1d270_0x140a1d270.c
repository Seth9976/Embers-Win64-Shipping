// 函数: sub_140a1d270
// 地址: 0x140a1d270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg3
*arg1 = &data_142e51c80
int64_t rbx = 0
arg1[2] = 0
void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    rax[1] = arg1
    *rax = &data_142d42fd0
    rax[2] = sub_140a20410
    rax[4] = sub_140a387b0()

int64_t* rcx = arg1[1]
int64_t r14 = sx.q(rcx[6].d)
void* rbp = &rcx[1]
int128_t zmm6
zmm6.q = fconvert.d(arg2.d)
int32_t rax_2 = (r14 + 1).d
zmm6.q = zmm6.q f+ *rcx
*(rbp + 0x28) = rax_2

if (rax_2 s> *(rbp + 0x2c))
    sub_140a30f00(rbp, r14.d)

void* rax_3 = *(rbp + 0x20)

if (rax_3 != 0)
    rbp = rax_3

int64_t* rax_5 = r14 << 5
*(rax_5 + rbp) = zmm6.q
void* rdx_3 = &rax_5[2] + rbp
*(rax_5 + rbp + 8) = arg2.d
*rdx_3 = 0
*(rdx_3 + 8) = 0
void var_48

if (&var_48 == rdx_3)
    goto label_140a1d34d

if (rax != 0)
    (*rax)[8](rax)
label_140a1d34d:
    void arg_8
    
    if (rax != 0)
        rbx = *(*rax)[6](rax, &arg_8)

arg1[2] = rbx

if (rax != 0)
    (*rax)[7](rax, 0)
    int64_t rax_10 = sub_140a84c80(rax, 0, 0)
    
    if (rax_10 != 0)
        sub_140a74f90(rax_10)

return arg1
