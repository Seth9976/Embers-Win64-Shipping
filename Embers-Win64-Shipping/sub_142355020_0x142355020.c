// 函数: sub_142355020
// 地址: 0x142355020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg1
void* var_78
__builtin_memset(&var_78, 0, 0x14)
void* var_60
__builtin_memset(&var_60, 0, 0x1a)
sub_14081d930(&var_78, *(*arg1 + 0x188))
void* rcx_1 = *r13
int32_t i_7 = 0
int64_t var_70 = 0
int64_t* rsi = nullptr
int16_t var_48
var_48.b = 0
int64_t* var_a8 = nullptr
int32_t rdx_2 = *(rcx_1 + 0x30)
int32_t i_11 = 0
int32_t var_9c = 0

if (rdx_2 s> 0)
    sub_1405a51b0(&var_a8, rdx_2)
    rcx_1 = *r13
    i_7 = i_11
    rsi = var_a8

void* i_6 = *(rcx_1 + 0x28)
void* i = rcx_1 + 0x10

if (i_6 != 0)
    i = i_6

int32_t var_68_1

for (void* rax_1 = i + sx.q(*(rcx_1 + 0x30)) * 0x18; i != rax_1; i += 0x18)
    void* rdx_3 = *r13
    void* var_98 = nullptr
    int64_t var_90_1 = 3
    int64_t var_88_1 = 0xc
    int32_t var_80_1 = 0
    int16_t var_7c_1 = 0x100
    char var_7a_1 = 1
    sub_1405d16e0(&var_98, *(rdx_3 + 0x108))
    int32_t r13_1 = *(i + 8)
    int64_t i_12 = sx.q(i_7)
    int64_t var_90_2 = 3
    int32_t r12_1 = *(*r13 + 0x128)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = mulu.dp.d(0xaaaaaaab, *(i + 4))
    i_7 = (i_12 + 1).d
    var_88_1.d = r12_1
    char rdx_6 = *(i + 0x16)
    uint32_t r14_2 = temp0_1 u>> 1
    var_88_1:4.d = r14_2
    var_7c_1.b = rdx_6
    i_11 = i_7
    
    if (i_7 s> var_9c)
        sub_1405c4e40(&var_a8)
        i_7 = i_11
        rsi = var_a8
    
    void* rax_4 = var_98
    int64_t* rcx_8 = &rsi[i_12 * 4]
    *rcx_8 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
        i_7 = i_11
        rsi = var_a8
        rdx_6 = var_7c_1.b
        r14_2 = var_88_1:4.d
        r12_1 = var_88_1.d
    
    *(rcx_8 + 0x1d) = var_7c_1:1.b
    *(rcx_8 + 0x1e) = var_7a_1
    rcx_8[1] = 3
    rcx_8[2].d = r12_1
    *(rcx_8 + 0x14) = r14_2
    rcx_8[3].d = r13_1
    *(rcx_8 + 0x1c) = rdx_6
    var_68_1 += *(i + 8)
    sub_1405d1550(&var_98)
    r13 = arg1

void* rdi

if ((var_60.b & 1) == 0)
    rdi = var_60
else
    rdi = &var_60 + (var_60 s>> 1)

int64_t var_58
int32_t i_9 = var_58.d

if (i_9 != 0)
    int32_t i_1
    
    do
        sub_1405d1550(rdi)
        rdi += 0x20
        i_1 = i_9
        i_9 -= 1
    while (i_1 != 1)

int32_t r8 = var_58:4.d
var_58.d = i_7

if (i_7 != 0 || r8 != 0)
    sub_1405e3e00(&var_60, i_7, r8)
    void* rdx_9
    
    if ((var_60.b & 1) == 0)
        rdx_9 = var_60
    else
        rdx_9 = &var_60 + (var_60 s>> 1)
    
    if (i_7 != 0)
        void* rcx_12 = rsi + 0xc
        void* rdx_10 = rdx_9 + 0xc
        int32_t i_2
        
        do
            void* rax_12 = *(rcx_12 - 0xc)
            *(rdx_10 - 0xc) = rax_12
            
            if (rax_12 != 0)
                *(rax_12 + 8) += 1
            
            *(rdx_10 - 4) = *(rcx_12 - 4)
            *rdx_10 = *rcx_12
            *(rdx_10 + 4) = *(rcx_12 + 4)
            *(rdx_10 + 8) = *(rcx_12 + 8)
            *(rdx_10 + 0xc) = *(rcx_12 + 0xc)
            *(rdx_10 + 0x10) = *(rcx_12 + 0x10)
            *(rdx_10 + 0x11) = *(rcx_12 + 0x11)
            char rax_20 = *(rcx_12 + 0x12)
            rcx_12 += 0x20
            *(rdx_10 + 0x12) = rax_20
            rdx_10 += 0x20
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
        i_7 = i_11
        rsi = var_a8
else
    var_58:4.d = 0

void* r15_2 = *r13 + 0x238
sub_14081d930(r15_2, var_78)
*(r15_2 + 8) = var_70.d
*(r15_2 + 0xc) = var_70:4.d
*(r15_2 + 0x10) = var_68_1

if (r15_2 + 0x18 != &var_60)
    void* rdi_1 = *(r15_2 + 0x18)
    
    if ((rdi_1.b & 1) != 0)
        rdi_1 = (rdi_1 s>> 1) + r15_2 + 0x18
    
    int32_t i_10 = *(r15_2 + 0x20)
    
    if (i_10 != 0)
        int32_t i_3
        
        do
            sub_1405d1550(rdi_1)
            rdi_1 += 0x20
            i_3 = i_10
            i_10 -= 1
        while (i_3 != 1)
    
    void* rdx_12
    
    if ((var_60.b & 1) == 0)
        rdx_12 = var_60
    else
        rdx_12 = &var_60 + (var_60 s>> 1)
    
    sub_1408d9350(r15_2 + 0x18, rdx_12, var_58.d, *(r15_2 + 0x24), 0)

int64_t var_50
*(r15_2 + 0x28) = var_50
*(r15_2 + 0x30) = var_48.b
*(r15_2 + 0x31) = var_48:1.b
int64_t* rcx_17 = *r13 + 0x200
(*(*rcx_17 + 0x28))(rcx_17)
int64_t* rdi_3 = rsi

if (i_7 != 0)
    int32_t i_4
    
    do
        sub_1405d1550(rdi_3)
        rdi_3 = &rdi_3[4]
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

void* rbx

if ((var_60.b & 1) == 0)
    rbx = var_60
else
    rbx = &var_60 + (var_60 s>> 1)

int32_t i_8 = var_58.d

if (i_8 != 0)
    int32_t i_5
    
    do
        sub_1405d1550(rbx)
        rbx += 0x20
        i_5 = i_8
        i_8 -= 1
    while (i_5 != 1)

sub_140a1d5c0(&var_60)
return sub_14081c9d0(&var_78)
