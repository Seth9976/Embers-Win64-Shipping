// 函数: sub_141e530a0
// 地址: 0x141e530a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x268))
int32_t rax = (rdi + 1).d
*(arg1 + 0x268) = rax

if (rax s> *(arg1 + 0x26c))
    sub_1405c4fe0(arg1 + 0x260)

int64_t rdi_1 = rdi << 6
uint64_t* rdi_2 = rdi_1 + *(arg1 + 0x260)
int64_t rbx

if (rdi_1 == neg.q(*(arg1 + 0x260)))
    rbx = 0
    rdi_2 = nullptr
else
    rbx = 0
    __builtin_memset(rdi_2, 0, 0x3c)

sub_1407473e0(&rdi_2[6], arg3)
sub_14090a0d0(rdi_2, arg2)
sub_14090a0d0(&rdi_2[2], arg2)
int64_t* rdi_3 = arg5[1]
int64_t var_68 = *arg5

if (rdi_3 != 0)
    rdi_3[1].d += 1

if (&var_68 != &rdi_2[4])
    var_68.o = *(rdi_2 + 0x20)
    *(rdi_2 + 0x20) = var_68.o

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp3_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* rax_4 = sub_140b6b610()

if (*(arg1 + 0x3d0) == 0)
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    void*** rax_5 = sub_1405978f0(0x28, &var_58)
    
    if (rax_5 != 0)
        *rax_5 = &data_142e33df8
        sub_140d3a3a0(&rax_5[1], arg1)
        rax_5[2] = sub_141e52c4c
        rax_5[4] = sub_140a387b0()
        *rax_5 = &data_142e33e50
    
    *(arg1 + 0x3d0) = *(*(*rax_4 + 0x48))(rax_4, &var_68, &var_58)

int32_t* rdi_5 = rdi_2[2]
uint64_t r14_2 = sx.q(rdi_2[3].d) << 2 u>> 2

if (rdi_5 u> &rdi_5[rdi_2[3]])
    r14_2 = 0

if (r14_2 != 0)
    do
        (*(*rax_4 + 0x30))(rax_4, zx.q(*rdi_5), zx.q(arg4))
        rbx += 1
        rdi_5 = &rdi_5[1]
    while (rbx != r14_2)

uint64_t result = sub_140745b20(arg3)
int64_t* rbx_1 = arg5[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
