// 函数: sub_141780a10
// 地址: 0x141780a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t r14 = sx.q(*(arg1 + 0xa8))
int64_t rsi = *(arg1 + 0xa0)
int64_t* r13 = nullptr
int64_t* var_60 = nullptr
int32_t var_58 = r14.d

if (r14.d != 0)
    sub_1405c4a00(&var_60, r14.d, 0)
    r13 = var_60
    memcpy(r13, rsi, (r14 << 3).d)
    r14 = zx.q(var_58)
else
    int32_t var_54_1 = 0

char var_b8 = 0
char* var_50 = &var_b8
sub_14175f7d0(r13, r14.d)
int32_t rsi_1 = 0
int64_t var_70 = 0
int32_t r9 = 0
int64_t var_68 = 0
int64_t r15 = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x34)
int64_t rdx_4 = 0
void* rcx_4 = &r13[sx.q(r14.d)]
uint64_t r8_6 = (rcx_4 - r13 + 7) u>> 3
int64_t* rax_2 = r13
int32_t r12 = 0
int64_t var_50_1 = 0

if (r13 u> rcx_4)
    r8_6 = 0

int64_t* var_48 = rax_2
int64_t var_98
int64_t result_1

if (r8_6 != 0)
    int64_t result_2 = 0
    int64_t r8_11
    bool cond:1_1
    
    do
        int32_t* rax_3 = *rax_2
        int64_t r15_1 = sx.q(rsi_1)
        int64_t r14_1 = sx.q(*rax_3)
        void* rax_4 = *(arg1 + 0x60)
        rsi_1 = (r15_1 + 1).d
        var_68.d = rsi_1
        
        if (rsi_1 s> r9)
            sub_1408094f0(&var_70)
            rsi_1 = var_68.d
            rbx = var_70
        
        int64_t var_a0_1
        int64_t r15_2 = sx.q(var_a0_1.d)
        int128_t* r8_9 = r15_1 * 0xc0 + rbx
        int128_t* rax_6 = rax_4 + r14_1 * 0xc0
        *r8_9 = *rax_6
        r8_9[1] = rax_6[1]
        r8_9[2] = rax_6[2]
        r8_9[3] = rax_6[3]
        r8_9[4] = rax_6[4]
        r8_9[5] = rax_6[5]
        r8_9[6] = rax_6[6]
        r8_9[7] = rax_6[7]
        r8_9[8] = rax_6[8]
        r8_9[9] = rax_6[9]
        r8_9[0xa] = rax_6[0xa]
        int32_t rax_7 = (r15_2 + 1).d
        var_a0_1.d = rax_7
        r8_9[0xb] = rax_6[0xb]
        int64_t r8_10 = *(arg1 + 0x70)
        
        if (rax_7 s> var_a0_1:4.d)
            sub_14090a6a0(&var_a8)
        
        int64_t rax_8 = var_a8
        int64_t var_80_1
        int64_t r15_3 = sx.q(var_80_1.d)
        int64_t rdx_10 = r14_1 * 0x60
        int64_t rcx_8 = r15_2 * 0x60
        *(rcx_8 + rax_8) = *(rdx_10 + r8_10)
        *(rcx_8 + rax_8 + 0x10) = *(rdx_10 + r8_10 + 0x10)
        *(rcx_8 + rax_8 + 0x20) = *(rdx_10 + r8_10 + 0x20)
        *(rcx_8 + rax_8 + 0x30) = *(rdx_10 + r8_10 + 0x30)
        *(rcx_8 + rax_8 + 0x40) = *(rdx_10 + r8_10 + 0x40)
        *(rcx_8 + rax_8 + 0x50) = *(rdx_10 + r8_10 + 0x50)
        int64_t rax_9 = *(arg1 + 0x80)
        int32_t rax_10 = (r15_3 + 1).d
        var_80_1.d = rax_10
        
        if (rax_10 s> var_80_1:4.d)
            sub_1405a4f90(&result_1)
            result_2 = result_1
        
        int64_t r15_4 = sx.q(r12)
        r12 = (r15_4 + 1).d
        int64_t var_90_1
        var_90_1.d = r12
        *(result_2 + r15_3 * 0x10) = *(rax_9 + r14_1 * 0x10)
        int64_t r9_1 = *(arg1 + 0x90)
        
        if (r12 s> var_90_1:4.d)
            sub_14083a7e0(&var_98)
            r12 = var_90_1.d
        
        r8_11 = var_98
        int64_t rdx_14 = r14_1 * 3
        int64_t rcx_13 = r15_4 * 3
        *(r8_11 + (rcx_13 << 2)) = *(r9_1 + (rdx_14 << 2))
        *(r8_11 + (rcx_13 << 2) + 8) = *(r9_1 + (rdx_14 << 2) + 8)
        int32_t var_78_1
        *rax_3 = var_78_1
        var_78_1 += 1
        rax_2 = &var_48[1]
        var_48 = rax_2
        cond:1_1 = var_50_1 + 1 != r8_6
        var_50_1 += 1
        r9 = var_68:4.d
    while (cond:1_1)
    r13 = var_60
    rdx_4 = r8_11
    r15 = var_a8

if (arg1 + 0x60 != &var_70)
    var_70.o = *(arg1 + 0x60)
    rbx = var_70
    *(arg1 + 0x60) = var_70.o

if (arg1 + 0x70 != &var_a8)
    var_a8.o = *(arg1 + 0x70)
    r15 = var_a8
    *(arg1 + 0x70) = var_a8.o

if (arg1 + 0x80 != &result_1)
    result_1.o = *(arg1 + 0x80)
    *(arg1 + 0x80) = result_1.o

if (arg1 + 0x90 != &var_98)
    var_98.o = *(arg1 + 0x90)
    rdx_4 = var_98
    *(arg1 + 0x90) = var_98.o

if (arg1 + 0xa0 != &var_60)
    var_60.o = *(arg1 + 0xa0)
    r13 = var_60
    *(arg1 + 0xa0) = var_60.o

if (rdx_4 != 0)
    sub_140a74f90(rdx_4)

int64_t result = result_1

if (result != 0)
    result = sub_140a74f90(result)

if (r15 != 0)
    result = sub_140a74f90(r15)

if (rbx != 0)
    result = sub_140a74f90(rbx)

if (r13 == 0)
    return result

return sub_140a74f90(r13)
