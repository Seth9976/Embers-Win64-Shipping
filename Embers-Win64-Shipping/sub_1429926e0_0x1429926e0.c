// 函数: sub_1429926e0
// 地址: 0x1429926e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* arg_8 = arg1
int64_t var_48 = -2
void* r9 = arg1[1]
int64_t r8 = *arg1
int64_t r14_2 = (r9 - r8) s/ 0x98
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0x6bca1af286bca1b, arg1[2] - r8)
int64_t rdx_2 = rdx_1 s>> 2
uint64_t rax_5 = rdx_2 u>> 0x3f
int64_t rdx_3 = rdx_2 + rax_5

if (arg2 u<= rdx_3)
    if (arg2 u> r14_2)
        void* rax_31 = sub_1429970d0(&arg_18, r9, arg2 - r14_2)
        arg1[1] = rax_31
        return rax_31
    
    if (arg2 != r14_2)
        int64_t* rdi_4 = arg2 * 0x98 + r8
        rax_5 = sub_1429913a0(rdi_4, r9)
        arg1[1] = rdi_4
    
    return rax_5

if (arg2 u> 0x1af286bca1af286)
    sub_1427c7670()
    noreturn

uint64_t rcx_5 = rdx_3 u>> 1
int64_t rax_7

if (rdx_3 u<= 0x1af286bca1af286 - rcx_5)
    rax_7 = rcx_5 + rdx_3
    
    if (rax_7 u< arg2)
        rax_7 = arg2
else
    rax_7 = arg2

int64_t arg_20 = rax_7
void* r12 = rax_7 * 0x98
void* rdx_4 = r12
void* rdi_2

if (rax_7 u<= 0x1af286bca1af286)
    if (rdx_4 u>= 0x1000)
        goto label_1429927c1
    
    if (rdx_4 == 0)
        rdi_2 = nullptr
    else
        rdi_2 = j_sub_140a82f30(rdx_4)
else
    rdx_4 = -ffffffffffffffff
label_1429927c1:
    void* rcx_6 = rdx_4 + 0x27
    
    if (rcx_6 u<= rdx_4)
        rcx_6 = -ffffffffffffffff
    
    int64_t rax_8 = j_sub_140a82f30(rcx_6)
    
    if (rax_8 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rdi_2 = (rax_8 + 0x27) & 0xffffffffffffffe0
    *(rdi_2 - 8) = rax_8

void* arg_10 = rdi_2
void* rdx_6 = r14_2 * 0x98 + rdi_2
void* var_50 = rdx_6
void* var_58 = sub_1429970d0(&arg_18, rdx_6, arg2 - r14_2)
int64_t i = arg1[1]
void* rax_11 = *arg1
void* rcx_9 = rdi_2

if (rax_11 != i)
    int64_t* rdx_7 = rax_11 + 0x18
    void* r8_4 = rdi_2 - rax_11
    
    do
        *(r8_4 + rdx_7 - 8) = 0
        *(r8_4 + rdx_7) = 0
        *rcx_9 = *(rdx_7 - 0x18)
        *(rcx_9 + 0x10) = *(rdx_7 - 8)
        rdx_7[-1] = 0
        *rdx_7 = 0xf
        rdx_7[-3].b = 0
        *(r8_4 + rdx_7 + 8) = rdx_7[1].d
        *(r8_4 + rdx_7 + 0xc) = *(rdx_7 + 0xc)
        *(r8_4 + rdx_7 + 0x10) = rdx_7[2].d
        *(r8_4 + rdx_7 + 0x14) = *(rdx_7 + 0x14)
        *(r8_4 + rdx_7 + 0x18) = rdx_7[3].b
        *(r8_4 + rdx_7 + 0x1c) = *(rdx_7 + 0x1c)
        *(r8_4 + rdx_7 + 0x20) = rdx_7[4].d
        *(r8_4 + rdx_7 + 0x28) = rdx_7[5]
        *(r8_4 + rdx_7 + 0x30) = rdx_7[6]
        *(r8_4 + rdx_7 + 0x38) = *(rdx_7 + 0x38)
        *(r8_4 + rdx_7 + 0x48) = *(rdx_7 + 0x48)
        *(r8_4 + rdx_7 + 0x58) = *(rdx_7 + 0x58)
        *(r8_4 + rdx_7 + 0x68) = *(rdx_7 + 0x68)
        *(r8_4 + rdx_7 + 0x78) = rdx_7[0xf].d
        *(r8_4 + rdx_7 + 0x7c) = *(rdx_7 + 0x7c)
        rcx_9 += 0x98
        rdx_7 = &rdx_7[0x13]
    while (&rdx_7[-3] != i)

sub_1429913a0(rcx_9, rcx_9)
int64_t* rcx_10 = *arg1

if (rcx_10 != 0)
    sub_1429913a0(rcx_10, arg1[1])
    void* r8_7 = *arg1
    int64_t rax_24
    int64_t rdx_10
    rdx_10:rax_24 = muls.dp.q(0x6bca1af286bca1b, arg1[2] - r8_7)
    int64_t rdx_11 = rdx_10 s>> 2
    
    if ((rdx_11 + (rdx_11 u>> 0x3f)) * 0x98 u>= 0x1000)
        void* rcx_13 = *(r8_7 - 8)
        
        if (r8_7 - rcx_13 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r8_7 = rcx_13
    
    j_sub_140a74f90(r8_7)

*arg1 = rdi_2
arg1[1] = arg2 * 0x98 + rdi_2
void* rax_30 = r12 + rdi_2
arg1[2] = rax_30
return rax_30
