// 函数: sub_14232d3e0
// 地址: 0x14232d3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
int64_t var_78
__builtin_memset(&var_78, 0, 0x14)
void* var_60
__builtin_memset(&var_60, 0, 0x1a)
sub_14081d930(&var_78, arg1[2])
int32_t i_5 = 0
int32_t var_68 = *(r15 + 0x1c)
int64_t* rsi = nullptr
int64_t* rax_1 = r15[4]
int64_t var_70
var_70:4.d = 0
int16_t var_48
var_48.b = 0
int64_t* var_a8 = nullptr
int32_t rdx_1 = rax_1[1].d
int32_t i_8 = 0
int32_t var_9c = 0

if (rdx_1 s> 0)
    sub_1405a51b0(&var_a8, rdx_1)
    rax_1 = r15[4]
    i_5 = i_8
    rsi = var_a8

void* i = *rax_1

for (void* rax_4 = sx.q(rax_1[1].d) * 0xe8 + i; i != rax_4; i += 0xe8)
    void* rdx_2 = r15[1]
    void* var_98 = nullptr
    int64_t var_90_1 = 3
    int64_t var_88_1 = 0xc
    int32_t var_80_1 = 0
    int16_t var_7c_1 = 0x100
    char var_7a_1 = 1
    sub_1405d16e0(&var_98, rdx_2)
    int32_t r12_1 = r15[3].d
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = mulu.dp.d(0xaaaaaaab, *(i + 4))
    int32_t r13_1 = *(i + 8)
    int64_t i_9 = sx.q(i_5)
    uint32_t r14_2 = temp0_1 u>> 1
    bool cond:0_1 = *(i + 0xe0) == 0
    int64_t var_90_2 = 3
    i_5 = (i_9 + 1).d
    var_88_1.d = r12_1
    var_88_1:4.d = r14_2
    i_8 = i_5
    
    if (i_5 s> var_9c)
        sub_1405c4e40(&var_a8)
        i_5 = i_8
        rsi = var_a8
    
    void* rax_6 = var_98
    int64_t* rcx_6 = &rsi[i_9 * 4]
    *rcx_6 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
        i_5 = i_8
        rsi = var_a8
        r14_2 = var_88_1:4.d
        r12_1 = var_88_1.d
    
    *(rcx_6 + 0x1c) = var_7c_1.b
    *(rcx_6 + 0x1d) = var_7c_1:1.b
    *(rcx_6 + 0x1e) = cond:0_1
    rcx_6[1] = 3
    rcx_6[2].d = r12_1
    *(rcx_6 + 0x14) = r14_2
    rcx_6[3].d = r13_1
    sub_1405d1550(&var_98)
    r15 = arg1

void* rdi

if ((var_60.b & 1) == 0)
    rdi = var_60
else
    rdi = &var_60 + (var_60 s>> 1)

int64_t var_58
int32_t i_7 = var_58.d

if (i_7 != 0)
    int32_t i_1
    
    do
        sub_1405d1550(rdi)
        rdi += 0x20
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)

int32_t r8 = var_58:4.d
var_58.d = i_5

if (i_5 != 0 || r8 != 0)
    sub_1405e3e00(&var_60, i_5, r8)
    void* rax_12 = var_60
    
    if ((rax_12.b & 1) != 0)
        rax_12 = &var_60:1 + (rax_12 s>> 1) - 1
    
    if (i_5 != 0)
        void* rdx_6 = rsi + 0xc
        void* rax_14 = rax_12 + 0xc
        int32_t i_2
        
        do
            void* rcx_10 = *(rdx_6 - 0xc)
            *(rax_14 - 0xc) = rcx_10
            
            if (rcx_10 != 0)
                *(rcx_10 + 8) += 1
            
            *(rax_14 - 4) = *(rdx_6 - 4)
            *rax_14 = *rdx_6
            *(rax_14 + 4) = *(rdx_6 + 4)
            *(rax_14 + 8) = *(rdx_6 + 8)
            *(rax_14 + 0xc) = *(rdx_6 + 0xc)
            *(rax_14 + 0x10) = *(rdx_6 + 0x10)
            *(rax_14 + 0x11) = *(rdx_6 + 0x11)
            char rcx_18 = *(rdx_6 + 0x12)
            rdx_6 += 0x20
            *(rax_14 + 0x12) = rcx_18
            rax_14 += 0x20
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        i_5 = i_8
        rsi = var_a8
else
    var_58:4.d = 0

sub_142346790(*r15 + 0x228, &var_78)
int64_t* rcx_22 = *r15 + 0x228
(*(*rcx_22 + 0x28))(rcx_22)
int64_t* rdi_1 = rsi

if (i_5 != 0)
    int32_t i_3
    
    do
        sub_1405d1550(rdi_1)
        rdi_1 = &rdi_1[4]
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

void* rbx

if ((var_60.b & 1) == 0)
    rbx = var_60
else
    rbx = &var_60 + (var_60 s>> 1)

int32_t i_6 = var_58.d

if (i_6 != 0)
    int32_t i_4
    
    do
        sub_1405d1550(rbx)
        rbx += 0x20
        i_4 = i_6
        i_6 -= 1
    while (i_4 != 1)

sub_140a1d5c0(&var_60)
return sub_14081c9d0(&var_78)
