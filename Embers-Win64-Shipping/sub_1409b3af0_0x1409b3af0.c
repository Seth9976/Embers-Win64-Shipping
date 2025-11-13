// 函数: sub_1409b3af0
// 地址: 0x1409b3af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
uint64_t i_2 = zx.q(arg2)
arg3[1].d = 0

if (arg2 s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, i_2.d)

int64_t* rcx_1 = *(arg1 + 0x28)
sub_1409d9850(rcx_1, rcx_1[1].d - *(rcx_1 + 0x34) + i_2.d)
int64_t var_58

if (i_2.d s> 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int64_t* r14_1 = *(arg1 + 0x28)
        __builtin_memset(&var_58, 0, 0x20)
        int32_t rax_1 = sub_14090b340(r14_1, &var_58)
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int64_t rcx_4 = var_58
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        sub_14090bdf0(&r14_1[0x2a], rax_1)
        int64_t r14_2 = sx.q(arg3[1].d)
        int32_t rax_2 = (r14_2 + 1).d
        arg3[1].d = rax_2
        
        if (rax_2 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (r14_2 << 2)) = rax_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_2 = zx.q(arg2)

var_58 = 0
int32_t rbx_2 = 0
int32_t var_50 = 0
int64_t r15_1 = 0
int32_t var_4c = 0
int32_t r13 = 0

if (i_2.d s> 0)
    sub_1405dadb0(&var_58, i_2.d)
    r13 = var_4c
    rbx_2 = var_50
    r15_1 = var_58

int32_t rax_4 = arg3[1].d
int64_t r12_1 = sx.q(rax_4 - 1)
uint64_t arg_18

if (rax_4 - 1 s>= 0)
    int64_t temp1_1
    
    do
        uint64_t rax_6 = *arg3
        int64_t r14_3 = sx.q(rbx_2)
        arg_18 = rax_6
        rbx_2 = (r14_3 + 1).d
        
        if (rbx_2 s> r13)
            sub_1405a4cf0(&var_58)
            rax_6 = arg_18
            r13 = var_4c
            r15_1 = var_58
        
        int32_t rax_7 = *(rax_6 + (r12_1 << 2))
        temp1_1 = r12_1
        r12_1 -= 1
        *(r15_1 + (r14_3 << 2)) = rax_7
    while (temp1_1 - 1 s>= 0)

uint64_t rax_8 = j_sub_140a82f30(0x18)

if (rax_8 == 0)
    rax_8 = 0
else
    *rax_8 = &data_142e3f5b8
    *(rax_8 + 8) = r15_1
    r15_1 = 0
    *(rax_8 + 0x10) = rbx_2
    *(rax_8 + 0x14) = r13

arg_18 = rax_8
sub_1409afc10(arg1, &arg_18)

if (r15_1 != 0)
    sub_140a74f90(r15_1)

int64_t* rbx_3 = *(arg1 + 0x3b8)
void* result = &rbx_3[sx.q(*(arg1 + 0x3c0))]
uint64_t r14_5 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rbx_3 u> result)
    r14_5 = 0

if (r14_5 != 0)
    do
        int64_t* rcx_11 = *rbx_3
        result = (*(*rcx_11 + 0x2e0))(rcx_11, arg1, arg3)
        rdi += 1
        rbx_3 = &rbx_3[1]
    while (rdi != r14_5)

return result
