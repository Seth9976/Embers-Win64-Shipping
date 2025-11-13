// 函数: sub_141ea4f70
// 地址: 0x141ea4f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
arg1[9] = 0
void* rax = sub_140d3c6e0(&arg1[6])
void* const r14 = rax
void* rax_1
int64_t rax_2
void* rdi_1

if (rax != 0)
    rax_1 = sub_14258cb80()
    rdi_1 = *(r14 + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

void* const r13

if (rax == 0 || rax_2.d s> *(rdi_1 + 0x38) || *(*(rdi_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    r13 = nullptr
    void* rax_5
    int64_t rax_6
    void* rdx_1
    
    if (r14 != 0)
        rax_5 = sub_142597430()
        rdx_1 = *(r14 + 0x10)
        rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (r14 == 0 || rax_6.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
        r14 = nullptr
    else
        arg1[9] = r14 + 0x58
else
    r13 = r14
    arg1[9] = r14 + 0x188
    r14 = *(r14 + 0x60)

sub_140d3a3a0(&arg1[8], r14)
sub_140d3a3a0(&arg1[7], r13)
void* rax_9 = arg1[9]
int32_t r15

if (r14 == 0)
    r15 = *(rax_9 + 0x28)
else
    r15 = *(r14 + 0x80)
    
    if (*(rax_9 + 0x28) s>= r15)
        r15 = *(rax_9 + 0x28)

arg1[5].d = r15
uint64_t rcx_7 = zx.q((*(arg1 + 0x2c) + 0x1f) u>> 5)
uint32_t r15_2 = (r15 + 0x1f) u>> 5

if (r15_2 u<= rcx_7.d)
    void* rax_15 = arg1[4]
    void* rdi_4 = &arg1[2]
    
    if (rax_15 != 0)
        rdi_4 = rax_15
    
    if (rcx_7.d u> 8)
        memset(rdi_4, 0, zx.q(rcx_7.d) << 2)
    else if (rcx_7.d != 0)
        __builtin_memset(rdi_4, 0, rcx_7 << 2)
else
    sub_1405a4a00(&arg1[2], 0, r15_2, 4)
    void* r12_1 = &arg1[2]
    *(arg1 + 0x2c) = r15_2 << 5
    void* rax_12 = arg1[4]
    
    if (rax_12 != 0)
        r12_1 = rax_12
    
    if (r15_2 u> 8)
        memset(r12_1, 0, zx.q(r15_2) << 2)
    else if (r15_2 != 0)
        __builtin_memset(r12_1, 0, zx.q(r15_2) << 2)
    
    void* rdx_4 = r12_1 + (zx.q(r15_2 - 1) << 2)
    *rdx_4 &= 0xffffffff u>> ((neg.d(arg1[5].d)).b & 0x1f)

int64_t r8_6 = sx.q(arg1[1].d)
int64_t rdi_5 = 0

if (r8_6 s> 0)
    do
        void* rdx_5 = &arg1[2]
        uint32_t rcx_15 = zx.d(*(*arg1 + (rdi_5 << 1)))
        void* rax_17 = arg1[4]
        
        if (rax_17 != 0)
            rdx_5 = rax_17
        
        rdi_5 += 1
        void* rdx_6 = rdx_5 + (zx.q(rcx_15) u>> 5 << 2)
        *rdx_6 |= 1 << (rcx_15.b & 0x1f)
    while (rdi_5 s< r8_6)

void* rsi = &arg1[0xa]
*(rsi + 8) = 0

if (*(rsi + 0xc) s<= 0xffffffff)
    sub_1405dadb0(rsi, 0)

int64_t arg_8

if (r13 == 0)
    arg_8 = 0
    uint64_t i_5 = zx.q(*(sub_141dec140(r14, 0) + 8))
    *(rsi + 8) = 0
    
    if (*(rsi + 0xc) != i_5.d)
        sub_1405dadb0(rsi, i_5.d)
    
    if (i_5.d s> 0)
        uint64_t i_4 = i_5
        uint64_t i
        
        do
            int64_t rdi_9 = sx.q(*(rsi + 8))
            int32_t rax_23 = (rdi_9 + 1).d
            *(rsi + 8) = rax_23
            
            if (rax_23 s> *(rsi + 0xc))
                sub_1405a4cf0(rsi)
            
            int32_t* rdx_12 = *rsi + (rdi_9 << 2)
            
            if (rdx_12 != 0)
                *rdx_12 = 0xffffffff
            
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t i_1 = 0
    
    if (arg1[1].d s> 0)
        int64_t rdi_10 = 0
        
        do
            rdi_10 += 2
            i_1 += 1
            uint64_t rdx_13 = zx.q(*(rdi_10 + *arg1 - 2))
            *(*rsi + (rdx_13 << 2)) = rdx_13.d
        while (i_1 s< arg1[1].d)
    
    if (&arg1[0xc] != rsi)
        int64_t rdi_11 = sx.q(*(rsi + 8))
        int64_t r15_3 = *rsi
        int32_t r8_7 = *(arg1 + 0x6c)
        arg1[0xd].d = rdi_11.d
        
        if (rdi_11.d != 0 || r8_7 != 0)
            sub_140638750(&arg1[0xc], rdi_11.d, r8_7)
            memcpy(arg1[0xc], r15_3, (rdi_11 << 2).d)
        else
            *(arg1 + 0x6c) = 0
else
    int64_t* rdi_8 = (sx.q(sub_141e41e60(r14, r13)) << 5) + *(r14 + 0x2f8)
    sub_14090a0d0(rsi, rdi_8)
    sub_14090a0d0(&arg1[0xc], &rdi_8[2])

int64_t r12_2 = sx.q(arg1[1].d)
arg1[0x13].d = 0

if (r12_2.d s> *(arg1 + 0x9c))
    sub_1405dadb0(&arg1[0x12], r12_2.d)

arg1[0x15].d = 0

if (r12_2.d s> *(arg1 + 0xac))
    sub_1405a5220(&arg1[0x14], r12_2.d)

int32_t rax_27 = arg1[0x15].d + r12_2.d
arg1[0x15].d = rax_27

if (rax_27 s> *(arg1 + 0xac))
    sub_140638970(&arg1[0x14])

arg1[0xf].d = 0

if (r12_2.d s> *(arg1 + 0x7c))
    sub_1405dadb0(&arg1[0xe], r12_2.d)

int32_t rax_28 = arg1[0xf].d + r12_2.d
arg1[0xf].d = rax_28

if (rax_28 s> *(arg1 + 0x7c))
    sub_1405a4cf0(&arg1[0xe])

int32_t rdx_21 = arg1[0xb].d
arg1[0x11].d = 0

if (rdx_21 s> *(arg1 + 0x8c))
    sub_1405dadb0(&arg1[0x10], rdx_21)

void* r14_2 = &arg1[0x16]
int32_t rdx_22 = *(arg1[9] + 0xf8)
*(r14_2 + 8) = 0

if (rdx_22 s> *(r14_2 + 0xc))
    sub_14083ad30(r14_2, rdx_22)

int64_t rax_31 = arg1[9] + 0x30
arg_8.b = 0
int64_t* var_50 = &arg_8
void*** (* var_58)() = j_sub_141a7e490
void* rax_32 = sub_140a756e0(&var_58, &data_143a2d638)
int32_t rdx_23 = arg1[0xd].d
*(rax_32 + 0x18) = 0
void* r8_10 = rax_32 + 0x10
void* arg_20 = r8_10

if (rdx_23 s> *(r8_10 + 0xc))
    sub_1405dadb0(r8_10, rdx_23)
    r8_10 = arg_20

int32_t rcx_35 = arg1[0xd].d + *(r8_10 + 8)
*(r8_10 + 8) = rcx_35

if (rcx_35 s> *(r8_10 + 0xc))
    sub_1405a4cf0(r8_10)
    r8_10 = arg_20
    rcx_35 = *(r8_10 + 8)

int64_t rdi_13 = *r8_10
int64_t rcx_37 = sx.q(rcx_35) << 2
uint64_t rcx_38 = rcx_37 u>> 2

if (rdi_13 u> rdi_13 + rcx_37)
    rcx_38 = 0

if (rcx_38 != 0)
    __builtin_memset(rdi_13, 0xffffffff, rcx_38 << 2)

if (r12_2 s> 0)
    int64_t rsi_1 = 0
    int32_t r14_3 = 0
    
    do
        uint64_t rcx_39 = zx.q(*(*arg1 + (rsi_1 << 1)))
        *(*r8_10 + (rcx_39 << 2)) = r14_3
        int64_t rax_38 = sx.q(*(*(arg1[9] + 0x20) + rcx_39 * 0xc + 8))
        int32_t arg_18
        
        if (rax_38.d != 0xffffffff)
            arg_18 = *(*r8_10 + (rax_38 << 2))
        else
            arg_18 = rax_38.d
        
        int64_t rdi_14 = sx.q(arg1[0x13].d)
        int32_t rax_41 = (rdi_14 + 1).d
        arg1[0x13].d = rax_41
        
        if (rax_41 s> *(arg1 + 0x9c))
            sub_1405a4cf0(&arg1[0x12])
            r8_10 = arg_20
        
        r14_3 += 1
        rsi_1 += 1
        *(arg1[0x12] + (rdi_14 << 2)) = arg_18
    while (rsi_1 s< r12_2)
    
    rsi = &arg1[0xa]
    r14_2 = &arg1[0x16]

int64_t rdi_15 = 0

if (r12_2 s> 0)
    int64_t r9_1 = 0
    
    do
        r9_1 += 0x30
        uint64_t rcx_43 = zx.q(*(*arg1 + (rdi_15 << 1)))
        rdi_15 += 1
        int64_t rax_44 = arg1[0x14]
        int128_t* rdx_30 = rcx_43 * 0x30 + *rax_31
        *(r9_1 + rax_44 - 0x30) = *rdx_30
        *(r9_1 + rax_44 - 0x20) = rdx_30[1]
        *(r9_1 + rax_44 - 0x10) = rdx_30[2]
    while (rdi_15 s< r12_2)

int64_t rdi_16 = 0

if (r12_2 s> 0)
    do
        *(arg1[0xe] + (rdi_16 << 2)) = *(arg1[0xc] + (zx.q(*(*arg1 + (rdi_16 << 1))) << 2))
        rdi_16 += 1
    while (rdi_16 s< r12_2)

if (arg1[0xb].d s> 0)
    int64_t r13_2 = 0
    
    do
        int64_t rcx_45 = sx.q(*(*rsi + r13_2))
        int32_t r12_3
        
        if (rcx_45.d == 0xffffffff)
            r12_3 = -1
        else
            r12_3 = *(*r8_10 + (rcx_45 << 2))
        
        int64_t rdi_17 = sx.q(arg1[0x11].d)
        int32_t rax_50 = (rdi_17 + 1).d
        arg1[0x11].d = rax_50
        
        if (rax_50 s> *(arg1 + 0x8c))
            sub_1405a4cf0(&arg1[0x10])
        
        i_2 += 1
        r8_10 = arg_20
        r13_2 += 4
        *(arg1[0x10] + (rdi_17 << 2)) = r12_3
    while (i_2 s< arg1[0xb].d)

void* rax_52 = arg1[9]
int32_t* i_3 = *(rax_52 + 0xf0)

for (void* r12_4 = &i_3[sx.q(*(rax_52 + 0xf8)) * 3]; i_3 != r12_4; i_3 = &i_3[3])
    int64_t rcx_48 = *arg_20
    int32_t r8_11 = *(rcx_48 + (sx.q(*i_3) << 2))
    int32_t rdx_33 = *(rcx_48 + (sx.q(i_3[1]) << 2))
    int32_t rdi_18 = *(rcx_48 + (sx.q(i_3[2]) << 2))
    
    if (r8_11 != 0xffffffff && rdx_33 != 0xffffffff && rdi_18 != 0xffffffff)
        int64_t rbp = sx.q(*(r14_2 + 8))
        int64_t var_68
        var_68.d = r8_11
        var_68:4.d = rdx_33
        int32_t rax_57 = (rbp + 1).d
        *(r14_2 + 8) = rax_57
        
        if (rax_57 s> *(r14_2 + 0xc))
            sub_14083a7e0(r14_2)
        
        int64_t rax_58 = *r14_2
        int64_t rcx_51 = rbp * 3
        *(rax_58 + (rcx_51 << 2)) = var_68
        *(rax_58 + (rcx_51 << 2) + 8) = rdi_18

sub_141e96960(arg1, arg2)
return sub_141eab470(&arg1[0x1f]) __tailcall
