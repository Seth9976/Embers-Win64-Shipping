// 函数: sub_1418dbf20
// 地址: 0x1418dbf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_738
int64_t rax_1 = __security_cookie ^ &var_738
void* rax_2 = arg2[1]
int64_t rsi = 0
void* r13 = arg4
void* rbx = rax_2 + 0x30
void* rax_3 = arg2[4]

if (rax_2 == 0)
    rbx = nullptr

void** r15 = arg2
int128_t var_60
__builtin_memset(&var_60, 0, 0x20)
void* var_6f8

if (rax_3 == 0)
    var_6f8 = nullptr
else
    var_6f8 = rax_3 + 0x30

void* rax_4 = r15[5]
void* var_6f0

if (rax_4 == 0)
    var_6f0 = nullptr
else
    var_6f0 = rax_4 + 0x30

void* rax_5 = r15[2]
void* rdx
void* r12

if (rax_5 == 0)
    r12 = nullptr
    rdx = nullptr
else
    rdx = rax_5 + 0x30
    void* rax_6 = r15[3]
    r12 = rax_6 + 0x30
    
    if (rax_6 == 0)
        r12 = nullptr

void var_318
sub_1418f45d0(&var_318)
sub_1418fa940(&var_318, *r15, *(rbx + 0xa0))
int64_t var_6a8
__builtin_memset(&var_6a8, 0, 0x15)
int32_t r14 = -1
int64_t var_608
__builtin_memset(&var_608, 0, 0x28)
int64_t* var_718 = &var_6a8
int40_t var_688 = 0
int32_t var_680 = 0
int32_t var_67c = 0x80
int40_t var_690 = 0
int32_t var_678 = 0xffffffff
int32_t var_674 = 0
int64_t var_668 = 0
int32_t var_660 = 0
int64_t var_658
__builtin_memset(&var_658, 0, 0x2c)
int32_t var_62c = 0x80
int32_t var_628 = 0xffffffff
int32_t var_624 = 0
int64_t var_618 = 0
int32_t var_610 = 0
sub_1418e5370(arg3, 1, 0, rbx + 0x20, var_718)

if (var_6f8 != 0)
    sub_1418e5370(arg3, 0x10, 1, var_6f8 + 0x20, &var_6a8)

if (var_6f0 != 0)
    sub_1418e5370(arg3, 8, 2, var_6f0 + 0x20, &var_6a8)

int32_t rbx_1 = 3

if (rdx != 0)
    sub_1418e5370(arg3, 2, 3, rdx + 0x20, &var_6a8)
    sub_1418e5370(arg3, 4, 4, r12 + 0x20, &var_6a8)

int32_t var_6d0 = 2
void* var_6d8 = &r15[9]
sub_1418cbc10(arg3, &var_6a8, &var_6d8)
sub_1405ae180(&var_658)
sub_1405ae180(&var_6a8)
*(r13 + 0x130) = *(r15 + 0x9b)
int64_t rcx_12 = r15[3]
*(r13 + 4) = r15[0x13].w
int64_t rdx_3 = sx.q(r15[0xb].d)

if (rcx_12 == 0)
    *(r13 + 6) = 0
    
    if (rdx_3.d u> 0x25)
        rbx_1 = 0x7fffffff
    else
        switch (rdx_3)
            case 1
                rbx_1 = 4
            case 2
                rbx_1 = 1
            case 3, 5, 0x10, 0x1a
                rbx_1 = 0x7fffffff
            case 4
                rbx_1 = 0
            case 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                    0x17, 0x18, 0x19, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                    0x25
                rdx_3.w -= 5
                *(r13 + 6) = rdx_3.w
                rbx_1 = 0x7fffffff
else if (rdx_3.d u> 0x25)
    *(r13 + 6) = 0
    rbx_1 = 0x7fffffff
else
    switch (rdx_3)
        case 0
            *(r13 + 6) = 3
            rbx_1 = 0xa
        case 1, 2, 3, 4, 5, 0x10, 0x1a
            *(r13 + 6) = 0
            rbx_1 = 0x7fffffff
        case 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
                0x18, 0x19, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25
            rdx_3.w -= 5
            rbx_1 = 0xa
            *(r13 + 6) = rdx_3.w

*(r13 + 8) = rbx_1
int32_t rax_15 = *(r15 + 0x5c)

if (rax_15 != 0)
    int32_t rcx_17 = rax_15 - 1
    int64_t rax_16 = sx.q(rcx_17)
    
    if (rcx_17 s>= 0)
        int64_t temp0_1
        
        do
            if (*(r15 + rax_16 + 0x60) != 0)
                r14 = rcx_17
                break
            
            rcx_17 -= 1
            temp0_1 = rax_16
            rax_16 -= 1
        while (temp0_1 - 1 s>= 0)
    
    rax_15 = r14 + 1

uint32_t rax_17 = rax_15 + *(r13 + 0x18)
*(r13 + 0x18) = rax_17

if (rax_17 s> *(r13 + 0x1c))
    sub_1405a4d70(r13 + 0x10)

int32_t i = 0

if (*(r13 + 0x18) s> 0)
    int64_t r8_2 = 0
    int64_t r9_5 = 0
    
    do
        int64_t rdx_5 = r15[6]
        r8_2 += 8
        int64_t rcx_19 = *(r13 + 0x10)
        rax_17.b = *(rdx_5 + r9_5 + 0x18) != 0
        i += 1
        *(r8_2 + rcx_19 - 8) = rax_17.b
        *(r8_2 + rcx_19 - 7) = *(rdx_5 + r9_5 + 0x24)
        *(r8_2 + rcx_19 - 6) = *(rdx_5 + r9_5 + 0x1c)
        *(r8_2 + rcx_19 - 5) = *(rdx_5 + r9_5 + 0x20)
        *(r8_2 + rcx_19 - 4) = *(rdx_5 + r9_5 + 0x30)
        *(r8_2 + rcx_19 - 3) = *(rdx_5 + r9_5 + 0x28)
        *(r8_2 + rcx_19 - 2) = *(rdx_5 + r9_5 + 0x2c)
        rax_17 = zx.d(*(rdx_5 + r9_5 + 0x34))
        r9_5 += 0x20
        *(r8_2 + rcx_19 - 1) = rax_17.b
    while (i s< *(r13 + 0x18))

int64_t var_304
int32_t rcx_20 = var_304.d
int32_t rax_24 = *(r13 + 0x38) + rcx_20
*(r13 + 0x38) = rax_24

if (rax_24 s> *(r13 + 0x3c))
    sub_1405a4d70(r13 + 0x30)
    rcx_20 = var_304.d

int32_t i_1 = 0

if (rcx_20 != 0)
    do
        int64_t rcx_22 = *(r13 + 0x30)
        uint64_t i_4 = zx.q(i_1)
        int64_t i_5 = sx.q(i_1)
        i_1 += 1
        uint64_t r9_6 = i_4 * 3
        *(rcx_22 + (i_5 << 3) + 4) = *(var_304 + (r9_6 << 2))
        *(rcx_22 + (i_5 << 3) + 6) = *(var_304 + (r9_6 << 2) + 8)
        *(rcx_22 + (i_5 << 3)) = *(var_304 + (r9_6 << 2) + 4)
    while (i_1 u< var_304.d)

int32_t var_2f8
int32_t rcx_23 = var_2f8
int32_t rax_28 = *(r13 + 0x48) + rcx_23
*(r13 + 0x48) = rax_28

if (rax_28 s> *(r13 + 0x4c))
    sub_1405a4f90(r13 + 0x40)
    rcx_23 = var_2f8

int32_t r8_4 = 0

if (rcx_23 != 0)
    do
        uint64_t rdx_8 = zx.q(r8_4)
        int64_t rcx_25 = sx.q(r8_4)
        r8_4 += 1
        int64_t var_2f0
        int32_t* rdx_10 = (rdx_8 << 4) + var_2f0
        int32_t* rcx_27 = (rcx_25 << 4) + *(r13 + 0x40)
        rcx_27[1] = rdx_10[1]
        rcx_27[2] = rdx_10[2]
        *rcx_27 = *rdx_10
        rcx_27[3] = rdx_10[3]
    while (r8_4 u< var_2f8)

int64_t r14_1 = sx.q(*(r13 + 0x28))
int64_t r12_1 = sx.q(*(arg3 + 0x38))
var_6d8 = r13 + 0x20
int32_t rax_33 = (r14_1 + r12_1).d
*(r13 + 0x28) = rax_33

if (rax_33 s> *(r13 + 0x2c))
    sub_1405a4f90(r13 + 0x20)

memset((r14_1 << 4) + *(r13 + 0x20), 0, r12_1 << 4)
int32_t i_2 = 0
int32_t i_3 = 0

if (*(arg3 + 0x38) s> 0)
    int64_t r15_1 = 0
    int64_t r12_2 = 0
    
    do
        int32_t j_1 = 0
        
        if (*(*(arg3 + 0x30) + r15_1 + 8) s> 0)
            int32_t* r14_2 = nullptr
            void* rsi_1 = var_6d8
            int32_t j
            
            do
                int64_t* rbx_4 = *rsi_1 + r12_2
                int64_t rdi_1 = sx.q(rbx_4[1].d)
                int32_t rax_35 = (rdi_1 + 1).d
                rbx_4[1].d = rax_35
                
                if (rax_35 s> *(rbx_4 + 0xc))
                    sub_1405a4d70(rbx_4)
                
                int64_t rdx_13 = *rbx_4
                int64_t rcx_33 = *(*(arg3 + 0x30) + r15_1)
                *(rdx_13 + (rdi_1 << 3)) = *(r14_2 + rcx_33)
                *(rdx_13 + (rdi_1 << 3) + 4) = *(r14_2 + rcx_33 + 4)
                char rax_39 = *(r14_2 + rcx_33 + 0xc)
                r14_2 = &r14_2[6]
                *(rdx_13 + (rdi_1 << 3) + 5) = rax_39
                j = j_1 + 1
                j_1 = j
            while (j s< *(*(arg3 + 0x30) + r15_1 + 8))
            i_2 = i_3
            rsi = 0
        
        i_2 += 1
        r12_2 += 0x10
        r15_1 += 0x18
        i_3 = i_2
    while (i_2 s< *(arg3 + 0x38))
    
    r13 = arg4
    r15 = arg2

void* rcx_35 = r15[7]
*(r13 + 0x50) = *(rcx_35 + 0x34)
*(r13 + 0x51) = *(rcx_35 + 0x38)
*(r13 + 0x54) = *(rcx_35 + 0x4c)
*(r13 + 0x58) = *(rcx_35 + 0x44)
void* rbx_5 = r15[8]
memset(&var_6a8:4, 0, 0x64)
char rax_45 = *(rbx_5 + 0x19)
char r9_7 = *(rbx_5 + 0x18)
int40_t var_698

if (rax_45 != 7 || r9_7 != 0)
    var_698:4.d = 1
else
    var_698:4.d = 0

int32_t rax_46 = sub_1418da890(zx.d(rax_45))
char rdi_2 = *(r15 + 0x9c)
char r8_7 = *(rbx_5 + 0x1f)
var_690:4.d = rax_46

if (*(rbx_5 + 0x1a) != 0 || r8_7 != 0)
    var_688:4.d = 1
else
    var_688:4.d = 0

var_668:4.d = sub_1418ef1f0(zx.d(*(rbx_5 + 0x1c)))
char rax_48 = sub_1418ef1f0(zx.d(*(rbx_5 + 0x1e)))
char rax_49 = sub_1418ef1f0(zx.d(*(rbx_5 + 0x1d)))
int32_t rax_50 = sub_1418da890(zx.d(*(rbx_5 + 0x1b)))
uint32_t r10 = zx.d(*(rbx_5 + 0x24))
uint32_t r11 = zx.d(*(rbx_5 + 0x25))
var_658:4.d = r10
int64_t var_650
var_650.d = r11
var_658.d = rax_50
int64_t var_670

if (r8_7 == 0)
    var_680.o = var_668:4.o
    var_670 = var_658
else
    var_680 = sub_1418ef1f0(zx.d(*(rbx_5 + 0x21)))
    int32_t var_67c_1 = sub_1418ef1f0(zx.d(*(rbx_5 + 0x23)))
    var_678 = sub_1418ef1f0(zx.d(*(rbx_5 + 0x22)))
    int32_t var_674_1 = sub_1418da890(zx.d(*(rbx_5 + 0x20)))
    var_670.d = r10
    var_670:4.d = r11

*(r13 + 0x5c) = var_690:4.b
*(r13 + 0x5d) = var_698:4.b
*(r13 + 0x5e) = r9_7 != 0
*(r13 + 0x70) = 0
*(r13 + 0x60) = rdi_2 != 0
*(r13 + 0x5f) = var_688:4.b
*(r13 + 0x61) = var_680.b
*(r13 + 0x62) = (var_680.q u>> 0x20).b
*(r13 + 0x63) = var_678.b
*(r13 + 0x64) = (var_678.q u>> 0x20).b
*(r13 + 0x68) = zx.d(var_670.b)
*(r13 + 0x6c) = (var_670 u>> 0x20).d
*(r13 + 0x74) = var_668:4.b
*(r13 + 0x75) = rax_48
*(r13 + 0x76) = rax_49
*(r13 + 0x77) = var_658.b
int64_t rax_71 = 0
*(r13 + 0x78) = r10
*(r13 + 0x7c) = r11
*(r13 + 0x80) = 0

if (rbx != 0)
    rax_71 = *(rbx + 0x18)

*(r13 + 0x88) = rax_71
int64_t rcx_47 = 0

if (var_6f8 != 0)
    rcx_47 = *(var_6f8 + 0x18)

*(r13 + 0x90) = rcx_47
int64_t rcx_49 = 0

if (var_6f0 != 0)
    rcx_49 = *(var_6f0 + 0x18)

*(r13 + 0x98) = rcx_49
int64_t rcx_51 = 0

if (rdx != 0)
    rcx_51 = *(rdx + 0x18)

*(r13 + 0xa0) = rcx_51

if (r12 != 0)
    rsi = *(r12 + 0x18)

*(r13 + 0xa8) = rsi
*(r13 + 0xb0) = rax_71 * 0x5ef8f45a8c290d4f + rcx_47 * 0x2af653f0a395f0db
    + rcx_49 * 0x7263f0232f3525f7 + rcx_51 * 0x68def9ca7a946a87 + rsi * 0x72e24e9ab7279a7d
*(r13 + 0xb8) = r15[9]
*(r13 + 0xc0) = r15[0xa]
sub_1418d0cd0(&var_6a8, r15)
sub_1418eb2e0(r13 + 0xc8, &var_6a8)
int64_t result = sub_1418f4ac0(&var_318)
__security_check_cookie(rax_1 ^ &var_738)
return result
