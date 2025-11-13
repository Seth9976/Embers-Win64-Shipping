// 函数: sub_1409b5680
// 地址: 0x1409b5680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
int32_t i = 0
int32_t rdx = arg2[1].d
arg3[1].d = 0
void*** r13 = arg1

if (rdx s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, rdx)

int64_t* rcx_1 = r13[5]
sub_1409d9850(rcx_1, rcx_1[1].d - *(rcx_1 + 0x34) + arg2[1].d)
void* r15 = *arg2
int64_t rdx_4 = sx.q(arg2[1].d)
void* r12 = r15 + rdx_4 * 0x18
uint64_t var_58

if (r15 != r12)
    do
        int32_t rbx_1 = *(r15 + 0x10)
        bool cond:2_1 = rbx_1 == data_143a1c6b4
        int64_t* r14_1 = r13[5]
        __builtin_memset(&var_58, 0, 0x20)
        
        if (cond:2_1)
            rbx_1 = sub_14090b340(r14_1, &var_58)
        else
            sub_1409c9430(r14_1, rbx_1, &var_58)
        
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        uint64_t rcx_5 = var_58
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        sub_14090bdf0(&r14_1[0x2a], rbx_1)
        int64_t r14_2 = sx.q(arg3[1].d)
        int32_t rax_2 = (r14_2 + 1).d
        arg3[1].d = rax_2
        
        if (rax_2 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        r15 += 0x18
        *(*arg3 + (r14_2 << 2)) = rbx_1
    while (r15 != r12)
    
    rdx_4 = zx.q(arg2[1].d)

var_58 = 0
int32_t rbx_2 = 0
int32_t var_50 = 0
uint64_t r15_1 = 0
int32_t var_4c = 0
int32_t r14_3 = 0

if (rdx_4.d s> 0)
    sub_1405dadb0(&var_58, rdx_4.d)
    rbx_2 = var_50
    r15_1 = var_58
    r14_3 = var_4c

int32_t rax_5 = arg3[1].d
int64_t r12_1 = sx.q(rax_5 - 1)

if (rax_5 - 1 s>= 0)
    int32_t r13_1 = var_4c
    int64_t temp1_1
    
    do
        uint64_t rax_7 = *arg3
        int64_t r14_4 = sx.q(rbx_2)
        rbx_2 = (r14_4 + 1).d
        
        if (rbx_2 s> r13_1)
            sub_1405a4cf0(&var_58)
            r15_1 = var_58
            r13_1 = var_4c
        
        int32_t rax_8 = *(rax_7 + (r12_1 << 2))
        temp1_1 = r12_1
        r12_1 -= 1
        *(r15_1 + (r14_4 << 2)) = rax_8
    while (temp1_1 - 1 s>= 0)
    r13 = arg_8
    r14_3 = var_4c

void*** rax_9 = j_sub_140a82f30(0x18)

if (rax_9 == 0)
    rax_9 = nullptr
else
    *rax_9 = &data_142e3f5b8
    rax_9[1] = r15_1
    r15_1 = 0
    rax_9[2].d = rbx_2
    *(rax_9 + 0x14) = r14_3

arg_8 = rax_9
sub_1409afc10(r13, &arg_8)

if (r15_1 != 0)
    sub_140a74f90(r15_1)

int64_t r14_5 = 0
int64_t* rbx_3 = r13[0x77]
void* result = &rbx_3[r13[0x78]]
uint64_t r15_3 = sx.q(r13[0x78].d) << 3 u>> 3

if (rbx_3 u> result)
    r15_3 = 0

if (r15_3 != 0)
    do
        int64_t* rcx_12 = *rbx_3
        result = (*(*rcx_12 + 0x2e8))(rcx_12, r13, arg3)
        r14_5 += 1
        rbx_3 = &rbx_3[1]
    while (r14_5 != r15_3)

if (arg3[1].d s> 0)
    int64_t** r12_2 = nullptr
    
    do
        int64_t rax_13 = *arg2
        int64_t* j = *(r12_2 + rax_13)
        result = sx.q(*(r12_2 + rax_13 + 8))
        
        for (void* r14_8 = &j[result * 0xc]; j != r14_8; j = &j[0xc])
            result = sub_1409de130(r13, *((sx.q(i) << 2) + *arg3), j)
        
        i += 1
        r12_2 = &r12_2[3]
    while (i s< arg3[1].d)

return result
