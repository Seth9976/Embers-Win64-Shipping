// 函数: sub_141a139a0
// 地址: 0x141a139a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2.d
int32_t rdi = arg3.d
sub_1405d16e0(arg1 + 0xd8, nullptr)
sub_1405d16e0(arg1 + 0xe8, nullptr)
sub_1405d16e0(arg1 + 0xf8, nullptr)
sub_1405d16e0(arg1 + 0x108, nullptr)
int32_t r13_1 = arg3:4.d * rdi
void* rcx_4 = nullptr
void* var_60 = nullptr
int32_t var_54 = 0
void** const var_68 = &data_142da8070
char var_50 = 0
void* var_a0 = nullptr
int32_t var_98 = 0
void** const var_a8 = &data_142da8070
char var_90 = 0
void* var_c0 = nullptr
int32_t var_b8 = 0
void** const var_c8 = &data_142da8070
char var_b0 = 0
void* var_e0 = nullptr
int32_t var_d8 = 0
void** const var_e8 = &data_142da8070
char var_d0 = 0
int64_t var_48 = 0
int32_t var_3c = 0
int64_t var_88 = 0
int32_t var_7c = 0
int64_t var_78 = 0
int32_t var_6c = 0

if (r13_1 s> 0)
    sub_1407c3800(&var_60, 0)
    rcx_4 = var_60

if ((var_60.b & 1) != 0)
    rcx_4 = &var_60:1 + (rcx_4 s>> 1) - 1

int64_t r14 = sx.q(r13_1)
int64_t count = r14 << 2
memset(rcx_4, 0, count)
int64_t r15 = sx.q(var_98)
int32_t rax = r15.d + r13_1

if (rax s> 0)
    sub_1407c3800(&var_a0, r15.d)

void* rcx_8

if ((var_a0.b & 1) == 0)
    rcx_8 = var_a0
else
    rcx_8 = &var_a0 + (var_a0 s>> 1)

memset(rcx_8 + (r15 << 2), 0, count)
int64_t r15_1 = sx.q(var_b8)
int32_t rax_3 = r15_1.d + r13_1

if (rax_3 s> 0)
    sub_1407c3800(&var_c0, r15_1.d)

void* rcx_11

if ((var_c0.b & 1) == 0)
    rcx_11 = var_c0
else
    rcx_11 = &var_c0 + (var_c0 s>> 1)

memset(rcx_11 + (r15_1 << 2), 0, count)
int64_t r15_2 = sx.q(var_d8)
int32_t rax_6 = r15_2.d + r13_1

if (rax_6 s> 0)
    sub_1407c3800(&var_e0, r15_2.d)

void* rcx_14

if ((var_e0.b & 1) == 0)
    rcx_14 = var_e0
else
    rcx_14 = &var_e0 + (var_e0 s>> 1)

memset(rcx_14 + (r15_2 << 2), 0, count)

if (r13_1 s> 0)
    sub_1405c4d20(&var_48)

int64_t r12 = var_48
memset(r12, 0, r14 * 0x14)

if (r13_1 s> 0)
    sub_1405a4f90(&var_88)

memset(var_88, 0, r14 << 4)

if (r13_1 s> 0)
    sub_1405a4d70(&var_78)

memset(var_78, 0, r14 << 3)
int32_t r15_3 = arg2:4.d
int32_t i = 0
uint64_t rdx_6

if (*(arg1 + 0x14) s> 0)
    do
        rdx_6 = zx.q(*(arg1 + 0x10))
        int32_t r11_1 = 0
        
        if (rdx_6.d s> 0)
            int32_t rax_9
            
            do
                rax_9 = rdx_6.d
                int32_t rcx_27 = (i - r15_3 + *(arg1 + 0xc)) * rdi - rbx + *(arg1 + 8)
                int32_t rcx_28 = rcx_27 + r11_1
                
                if (rcx_27 + r11_1 s>= 0 && rcx_28 s< r13_1)
                    void* rdx_7 = *(arg1 + 0x40)
                    
                    if ((rdx_7.b & 1) != 0)
                        rdx_7 = (rdx_7 s>> 1) + arg1 + 0x40
                    
                    void* r8_9
                    
                    if ((var_60.b & 1) == 0)
                        r8_9 = var_60
                    else
                        r8_9 = &var_60 + (var_60 s>> 1)
                    
                    int64_t r10_1 = sx.q(rdx_6.d * i + r11_1)
                    int64_t r9_4 = sx.q(rcx_28)
                    *(r8_9 + (r9_4 << 2)) = *(rdx_7 + (r10_1 << 2))
                    void* rcx_29 = *(arg1 + 0x60)
                    
                    if ((rcx_29.b & 1) != 0)
                        rcx_29 = (rcx_29 s>> 1) + arg1 + 0x60
                    
                    void* rdx_9
                    
                    if ((var_a0.b & 1) == 0)
                        rdx_9 = var_a0
                    else
                        rdx_9 = &var_a0 + (var_a0 s>> 1)
                    
                    *(rdx_9 + (r9_4 << 2)) = *(rcx_29 + (r10_1 << 2))
                    
                    if (*(arg1 + 0x18) != 0 && *(arg1 + 4) s> 0)
                        void* rcx_31 = *(arg1 + 0x80)
                        
                        if ((rcx_31.b & 1) != 0)
                            rcx_31 = (rcx_31 s>> 1) + arg1 + 0x80
                        
                        void* rdx_10
                        
                        if ((var_c0.b & 1) == 0)
                            rdx_10 = var_c0
                        else
                            rdx_10 = &var_c0 + (var_c0 s>> 1)
                        
                        *(rdx_10 + (r9_4 << 2)) = *(rcx_31 + (r10_1 << 2))
                        void* rcx_33 = *(arg1 + 0xa0)
                        
                        if ((rcx_33.b & 1) != 0)
                            rcx_33 = (rcx_33 s>> 1) + arg1 + 0xa0
                        
                        void* rdx_11
                        
                        if ((var_e0.b & 1) == 0)
                            rdx_11 = var_e0
                        else
                            rdx_11 = &var_e0 + (var_e0 s>> 1)
                        
                        *(rdx_11 + (r9_4 << 2)) = *(rcx_33 + (r10_1 << 2))
                    
                    int64_t rax_26 = *(arg1 + 0x28)
                    int64_t rdx_12 = r10_1 * 5
                    int64_t rcx_35 = r9_4 * 5
                    *(r12 + (rcx_35 << 2)) = *(rax_26 + (rdx_12 << 2))
                    *(r12 + (rcx_35 << 2) + 0x10) = *(rax_26 + (rdx_12 << 2) + 0x10)
                    *(var_88 + r9_4 * 0x10) = *(*(arg1 + 0xb8) + r10_1 * 0x10)
                    *(var_78 + (r9_4 << 3)) = *(*(arg1 + 0xc8) + (r10_1 << 3))
                    rax_9 = *(arg1 + 0x10)
                
                r11_1 += 1
                rdx_6 = zx.q(rax_9)
            while (r11_1 s< rax_9)
        
        i += 1
    while (i s< *(arg1 + 0x14))

*(arg1 + 8) = rbx
*(arg1 + 0xc) = r15_3
*(arg1 + 0x10) = rdi
*(arg1 + 0x14) = arg3:4.d

if (arg1 + 0x40 != &var_60)
    int64_t rbx_1 = sx.q(r13_1)
    void* r14_1
    
    if ((var_60.b & 1) == 0)
        r14_1 = var_60
    else
        r14_1 = &var_60 + (var_60 s>> 1)
    
    int32_t r8_10 = *(arg1 + 0x4c)
    *(arg1 + 0x48) = rbx_1.d
    
    if (rbx_1.d != 0 || r8_10 != 0)
        sub_1419d6d70(arg1 + 0x40, rbx_1.d, r8_10)
        void* rcx_40 = *(arg1 + 0x40)
        
        if ((rcx_40.b & 1) != 0)
            rcx_40 = (rcx_40 s>> 1) + arg1 + 0x40
        
        memcpy(rcx_40, r14_1, (rbx_1 << 2).d)
    else
        *(arg1 + 0x4c) = 0

*(arg1 + 0x50) = var_50

if (arg1 + 0x60 != &var_a0)
    int64_t rbx_2 = sx.q(rax)
    void* r14_2
    
    if ((var_a0.b & 1) == 0)
        r14_2 = var_a0
    else
        r14_2 = &var_a0 + (var_a0 s>> 1)
    
    int32_t r8_13 = *(arg1 + 0x6c)
    *(arg1 + 0x68) = rbx_2.d
    
    if (rbx_2.d != 0 || r8_13 != 0)
        sub_1419d6d70(arg1 + 0x60, rbx_2.d, r8_13)
        void* rcx_43 = *(arg1 + 0x60)
        
        if ((rcx_43.b & 1) != 0)
            rcx_43 = (rcx_43 s>> 1) + arg1 + 0x60
        
        memcpy(rcx_43, r14_2, (rbx_2 << 2).d)
    else
        *(arg1 + 0x6c) = 0

*(arg1 + 0x70) = var_90

if (arg1 + 0x80 != &var_c0)
    int64_t rbx_3 = sx.q(rax_3)
    void* r14_3
    
    if ((var_c0.b & 1) == 0)
        r14_3 = var_c0
    else
        r14_3 = &var_c0 + (var_c0 s>> 1)
    
    int32_t r8_16 = *(arg1 + 0x8c)
    *(arg1 + 0x88) = rbx_3.d
    
    if (rbx_3.d != 0 || r8_16 != 0)
        sub_1419d6d70(arg1 + 0x80, rbx_3.d, r8_16)
        void* rcx_46 = *(arg1 + 0x80)
        
        if ((rcx_46.b & 1) != 0)
            rcx_46 = (rcx_46 s>> 1) + arg1 + 0x80
        
        memcpy(rcx_46, r14_3, (rbx_3 << 2).d)
    else
        *(arg1 + 0x8c) = 0

*(arg1 + 0x90) = var_b0

if (arg1 + 0xa0 != &var_e0)
    int64_t r14_4 = sx.q(rax_6)
    void* r15_4
    
    if ((var_e0.b & 1) == 0)
        r15_4 = var_e0
    else
        r15_4 = &var_e0 + (var_e0 s>> 1)
    
    int32_t r8_19 = *(arg1 + 0xac)
    *(arg1 + 0xa8) = r14_4.d
    
    if (r14_4.d != 0 || r8_19 != 0)
        sub_1419d6d70(arg1 + 0xa0, r14_4.d, r8_19)
        void* rcx_49 = *(arg1 + 0xa0)
        
        if ((rcx_49.b & 1) != 0)
            rcx_49 = (rcx_49 s>> 1) + arg1 + 0xa0
        
        memcpy(rcx_49, r15_4, (r14_4 << 2).d)
    else
        *(arg1 + 0xac) = 0

*(arg1 + 0xb0) = var_d0

if (arg1 + 0x28 != &var_48)
    int64_t r15_5 = sx.q(r13_1)
    int32_t r8_22 = *(arg1 + 0x34)
    *(arg1 + 0x30) = r15_5.d
    
    if (r15_5.d != 0 || r8_22 != 0)
        sub_1405c4bc0(arg1 + 0x28, r15_5.d, r8_22)
        memcpy(*(arg1 + 0x28), r12, (r15_5 * 0x14).d)
    else
        *(arg1 + 0x34) = 0

int64_t r15_7

if (arg1 + 0xb8 == &var_88)
    r15_7 = var_88
else
    int64_t r15_6 = sx.q(r13_1)
    int32_t r8_25 = *(arg1 + 0xc4)
    *(arg1 + 0xc0) = r15_6.d
    
    if (r15_6.d != 0 || r8_25 != 0)
        sub_1405a4be0(arg1 + 0xb8, r15_6.d, r8_25)
        r15_7 = var_88
        memcpy(*(arg1 + 0xb8), r15_7, (r15_6 << 4).d)
    else
        *(arg1 + 0xc4) = 0
        r15_7 = var_88

int64_t r13_3

if (arg1 + 0xc8 == &var_78)
    r13_3 = var_78
else
    int64_t r13_2 = sx.q(r13_1)
    int32_t r8_26 = *(arg1 + 0xd4)
    *(arg1 + 0xd0) = r13_2.d
    
    if (r13_2.d != 0 || r8_26 != 0)
        sub_1405c4a00(arg1 + 0xc8, r13_2.d, r8_26)
        r13_3 = var_78
        memcpy(*(arg1 + 0xc8), r13_3, (r13_2 << 3).d)
    else
        *(arg1 + 0xd4) = 0
        r13_3 = var_78

if (*(arg1 + 0x18) == 0 || *(arg1 + 4) s<= 0)
    void* r9_5 = *(arg1 + 0x80)
    int64_t rax_46 = r9_5 s>> 1
    void* r8_31 = arg1 + 0x80 + rax_46
    char rdx_29 = *(arg1 + 0x80) & 1
    
    if (rdx_29 == 0)
        r8_31 = r9_5
    
    void* rcx_57 = rax_46 + arg1 + 0x80
    
    if (rdx_29 == 0)
        rcx_57 = r9_5
    
    void* rdx_30 = rcx_57 + (sx.q(*(arg1 + 0x88)) << 2)
    uint64_t rcx_61 = (rdx_30 - r8_31 + 3) u>> 2
    
    if (r8_31 u> rdx_30)
        rcx_61 = 0
    
    int64_t rcx_62
    int64_t rdi_5
    
    if (rcx_61 != 0)
        rdi_5, rcx_62 = __memfill_u32(r8_31, 0x3f800000, rcx_61)
    void* r8_32 = *(arg1 + 0xa0)
    int64_t rax_49 = r8_32 s>> 1
    void* rdi_6 = arg1 + 0xa0 + rax_49
    char rdx_31 = *(arg1 + 0xa0) & 1
    
    if (rdx_31 == 0)
        rdi_6 = r8_32
    
    void* rcx_63 = rax_49 + arg1 + 0xa0
    
    if (rdx_31 == 0)
        rcx_63 = r8_32
    
    rdx_6 = rcx_63 + (sx.q(*(arg1 + 0xa8)) << 2)
    uint64_t rcx_67 = (rdx_6 - rdi_6 + 3) u>> 2
    
    if (rdi_6 u> rdx_6)
        rcx_67 = 0
    
    if (rcx_67 != 0)
        __builtin_memset(rdi_6, 0, rcx_67 << 2)

rdx_6.b = 1
(*(*(arg1 + 0x38) + 0x38))(arg1 + 0x38, rdx_6)
int64_t rdx_32
rdx_32.b = 1
(*(*(arg1 + 0x58) + 0x38))(arg1 + 0x58, rdx_32)
int64_t rdx_33
rdx_33.b = 1
(*(*(arg1 + 0x78) + 0x38))(arg1 + 0x78, rdx_33)
int64_t rdx_34
rdx_34.b = 1
(*(*(arg1 + 0x98) + 0x38))(arg1 + 0x98, rdx_34)

if (r13_3 != 0)
    sub_140a74f90(r13_3)

if (r15_7 != 0)
    sub_140a74f90(r15_7)

if (r12 != 0)
    sub_140a74f90(r12)

sub_140a1d5c0(&var_e0)
void** const var_e8_1 = &data_142da7708
sub_140a1d5c0(&var_c0)
void** const var_c8_1 = &data_142da7708
sub_140a1d5c0(&var_a0)
void** const var_a8_1 = &data_142da7708
return sub_140a1d5c0(&var_60)
