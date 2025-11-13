// 函数: sub_1429ae4d0
// 地址: 0x1429ae4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_60 = -2
int64_t r10 = *arg1
int64_t* var_68 = arg1
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r10)
int64_t rdx_2 = rdx_1 s>> 2
int64_t rdx_3 = rdx_2 + (rdx_2 u>> 0x3f)

if (rdx_3 == 0xaaaaaaaaaaaaaaa)
    sub_1427c7670()
    noreturn

int64_t rax_6
int64_t rdx_4
rdx_4:rax_6 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r10)
int64_t rdx_5 = rdx_4 s>> 2
int64_t rdx_6 = rdx_5 + (rdx_5 u>> 0x3f)
uint64_t rcx_5 = rdx_6 u>> 1
int64_t r15

if (rdx_6 u<= 0xaaaaaaaaaaaaaaa - rcx_5)
    r15 = rcx_5 + rdx_6
    
    if (r15 u< rdx_3 + 1)
        r15 = rdx_3 + 1
else
    r15 = rdx_3 + 1

int64_t var_88 = r15
int64_t rax_11 = r15 * 0x18
void* r14_1

if (r15 u<= 0xaaaaaaaaaaaaaaa)
    if (rax_11 u>= 0x1000)
        goto label_1429ae5c2
    
    if (rax_11 == 0)
        r14_1 = nullptr
    else
        r14_1 = j_sub_140a82f30(rax_11)
else
    rax_11 = -1
label_1429ae5c2:
    int64_t rcx_6 = rax_11 + 0x27
    
    if (rcx_6 u<= rax_11)
        rcx_6 = -1
    
    int64_t rax_12 = j_sub_140a82f30(rcx_6)
    
    if (rax_12 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    r14_1 = (rax_12 + 0x27) & 0xffffffffffffffe0
    *(r14_1 - 8) = rax_12

void* var_70 = r14_1
int64_t rax_15 = (arg2 - r10) s/ 0x18 * 0x18
void* rbx_3 = rax_15 + r14_1
void* var_78 = rbx_3 + 0x18
void* arg_20 = rbx_3 + 0x18
sub_14297d420(rbx_3, arg3)
arg_20 = rbx_3
int64_t r12_1 = arg1[1]

if (arg2 != r12_1)
    sub_1429af270(arg1, *arg1, arg2, r14_1)
    arg_20 = r14_1
    sub_1429af270(arg1, arg2, arg1[1], rbx_3 + 0x18)
else
    int64_t* i = *arg1
    void* var_58_1 = r14_1
    void* rbx_5 = r14_1
    void* var_50_1 = rbx_5
    int64_t* var_48_1 = arg1
    
    for (; i != r12_1; i = &i[3])
        sub_14297d420(rbx_5, i)
        rbx_5 += 0x18
        void* var_50_2 = rbx_5

int64_t* rbx_6 = *arg1

if (rbx_6 != 0)
    int64_t rdi_1 = arg1[1]
    
    if (rbx_6 != rdi_1)
        do
            sub_14297d7d0(rbx_6)
            rbx_6 = &rbx_6[3]
        while (rbx_6 != rdi_1)
        
        rbx_6 = *arg1
    
    int64_t rax_16
    int64_t rdx_11
    rdx_11:rax_16 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - rbx_6)
    int64_t rdx_12 = rdx_11 s>> 2
    
    if ((rdx_12 + (rdx_12 u>> 0x3f)) * 0x18 u>= 0x1000)
        int64_t* rcx_15 = rbx_6[-1]
        
        if (rbx_6 - rcx_15 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rbx_6 = rcx_15
    
    j_sub_140a74f90(rbx_6)

*arg1 = r14_1
arg1[1] = r14_1 + (rdx_3 + 1) * 0x18
arg1[2] = r14_1 + r15 * 0x18
return *arg1 + rax_15
