// 函数: sub_141b22a70
// 地址: 0x141b22a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
void* rdx = arg1[2]
int32_t r8 = -1
int32_t arg_8 = 0xffffffff
int32_t arg_c = 0
int64_t rbx

if (rdx == 0)
    rbx = arg_8.q
else
    sub_140d3a3a0(&arg_8, rdx)
    rbx = arg_8.q
    arg_8.q = rbx
    r9 = arg_c
    r8 = arg_8

int64_t* r10 = *arg1

for (int32_t* i = r10[3]; i != &i[sx.q(r10[4].d) * 4]; i = &i[4])
    if (*i == r8 && i[1] == r9)
        *arg2 = *(i + 8)
        return arg2

int64_t arg_18
(*(*r10 + 0x28))(r10, &arg_18, arg1[2], arg1[3])

if (arg1[3] != 0)
    void* rdi_1 = *arg1
    int64_t rbp_1 = sx.q(*(rdi_1 + 0x20))
    int32_t rax_1 = (rbp_1 + 1).d
    *(rdi_1 + 0x20) = rax_1
    
    if (rax_1 s> *(rdi_1 + 0x24))
        sub_1405a4f90(rdi_1 + 0x18)
    
    int64_t* rax_4 = (rbp_1 << 4) + *(rdi_1 + 0x18)
    *rax_4 = rbx
    rax_4[1] = arg_18

*arg2 = arg_18
return arg2
