// 函数: sub_1429bdb70
// 地址: 0x1429bdb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_48 = -2
int64_t* rsi = arg1[1]
int64_t r8 = *arg1
int64_t r12_2 = (rsi - r8) s/ 0x18
int64_t rax_3
int64_t rdx_3
rdx_3:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r8)
int64_t rdx_4 = rdx_3 s>> 2
uint64_t rax_5 = rdx_4 u>> 0x3f
int64_t rdx_5 = rdx_4 + rax_5

if (arg2 u<= rdx_5)
    if (arg2 u<= r12_2)
        if (arg2 != r12_2)
            int64_t* __saved_r8_1 = r8 + arg2 * 0x18
            rax_5 = sub_1429b11f0(__saved_r8_1, rsi)
            arg1[1] = __saved_r8_1
        
        return rax_5
    
    int64_t i_4 = arg2 - r12_2
    
    if (arg2 != r12_2)
        int64_t i
        
        do
            __builtin_memset(rsi, 0, 0x18)
            rsi = &rsi[3]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int64_t rax_24 = sub_1429b11f0(rsi, rsi)
    arg1[1] = rsi
    return rax_24

if (arg2 u> 0xaaaaaaaaaaaaaaa)
    sub_1427c7670()
    noreturn

uint64_t rcx_3 = rdx_5 u>> 1
int64_t rcx_4

if (rdx_5 u<= 0xaaaaaaaaaaaaaaa - rcx_3)
    rcx_4 = rcx_3 + rdx_5
    
    if (rcx_4 u< arg2)
        rcx_4 = arg2
else
    rcx_4 = arg2

int64_t var_58 = rcx_4
int64_t r13 = rcx_4 * 0x18
int64_t rax_8 = r13
void* rsi_2

if (rcx_4 u<= 0xaaaaaaaaaaaaaaa)
    if (rax_8 u>= 0x1000)
        goto label_1429bdc4f
    
    if (rax_8 == 0)
        rsi_2 = nullptr
    else
        rsi_2 = j_sub_140a82f30(rax_8)
else
    rax_8 = -1
label_1429bdc4f:
    int64_t rcx_5 = rax_8 + 0x27
    
    if (rcx_5 u<= rax_8)
        rcx_5 = -1
    
    int64_t rax_9 = j_sub_140a82f30(rcx_5)
    
    if (rax_9 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rsi_2 = (rax_9 + 0x27) & 0xffffffffffffffe0
    *(rsi_2 - 8) = rax_9

void* arg_10 = rsi_2
void* rcx_7 = rsi_2 + r12_2 * 0x18
void* var_50 = rcx_7
int64_t i_3 = arg2 - r12_2
void* arg_20 = rcx_7

if (arg2 != r12_2)
    int64_t i_1
    
    do
        __builtin_memset(rcx_7, 0, 0x18)
        rcx_7 += 0x18
        arg_20 = rcx_7
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

sub_1429b11f0(rcx_7, rcx_7)
int64_t i_2 = arg1[1]
void* rax_13 = *arg1
void* rcx_8 = rsi_2

if (rax_13 != i_2)
    int64_t* rdx_7 = rax_13 + 0x10
    void* r8_2 = rsi_2 - rax_13
    
    do
        *rcx_8 = 0
        *(r8_2 + rdx_7 - 8) = 0
        *(r8_2 + rdx_7) = 0
        *rcx_8 = rdx_7[-2]
        *(r8_2 + rdx_7 - 8) = rdx_7[-1]
        *(r8_2 + rdx_7) = *rdx_7
        rdx_7[-2] = 0
        rdx_7[-1] = 0
        *rdx_7 = 0
        rcx_8 += 0x18
        rdx_7 = &rdx_7[3]
    while (&rdx_7[-2] != i_2)

sub_1429b11f0(rcx_8, rcx_8)
int64_t* rcx_9 = *arg1

if (rcx_9 != 0)
    sub_1429b11f0(rcx_9, arg1[1])
    void* r8_5 = *arg1
    int64_t rax_18
    int64_t rdx_10
    rdx_10:rax_18 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r8_5)
    int64_t rdx_11 = rdx_10 s>> 2
    
    if ((rdx_11 + (rdx_11 u>> 0x3f)) * 0x18 u>= 0x1000)
        void* rcx_12 = *(r8_5 - 8)
        
        if (r8_5 - rcx_12 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r8_5 = rcx_12
    
    j_sub_140a74f90(r8_5)

*arg1 = rsi_2
arg1[1] = rsi_2 + arg2 * 0x18
void* rax_23 = rsi_2 + r13
arg1[2] = rax_23
return rax_23
