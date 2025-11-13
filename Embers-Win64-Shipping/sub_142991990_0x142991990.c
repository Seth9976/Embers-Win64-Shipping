// 函数: sub_142991990
// 地址: 0x142991990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_40 = -2
int64_t r10 = *arg1
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
uint64_t rax_10 = rdx_6 u>> 1
int64_t rdi

if (rdx_6 u<= 0xaaaaaaaaaaaaaaa - rax_10)
    rdi = rax_10 + rdx_6
    
    if (rdi u< rdx_3 + 1)
        rdi = rdx_3 + 1
else
    rdi = rdx_3 + 1

int64_t arg_20 = rdi
int64_t rax_11 = sub_142997b50(arg1, rdi)
int64_t var_48 = rax_11
int64_t rax_13 = (arg2 - r10) s/ 0x18 * 0x18
int64_t r15_3 = rax_13 + rax_11
int64_t var_50 = r15_3 + 0x18
int64_t arg_10 = r15_3 + 0x18
sub_1429959f0(r15_3, arg3)
arg_10 = r15_3
int64_t rdx_9 = arg1[1]
int64_t r8_1 = rax_11
void* rcx_6 = *arg1

if (arg2 != rdx_9)
    sub_142992de0(rcx_6, arg2, r8_1)
    arg_10 = rax_11
    r8_1 = r15_3 + 0x18
    rdx_9 = arg1[1]
    rcx_6 = arg2

sub_142992de0(rcx_6, rdx_9, r8_1)
int64_t* rcx_7 = *arg1

if (rcx_7 != 0)
    sub_1429914c0(rcx_7, arg1[1])
    void* r8_3 = *arg1
    int64_t rax_14
    int64_t rdx_12
    rdx_12:rax_14 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r8_3)
    int64_t rdx_13 = rdx_12 s>> 2
    
    if ((rdx_13 + (rdx_13 u>> 0x3f)) * 0x18 u>= 0x1000)
        void* rcx_10 = *(r8_3 - 8)
        
        if (r8_3 - rcx_10 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r8_3 = rcx_10
    
    j_sub_140a74f90(r8_3)

*arg1 = rax_11
arg1[1] = rax_11 + (rdx_3 + 1) * 0x18
arg1[2] = rax_11 + rdi * 0x18
return *arg1 + rax_13
