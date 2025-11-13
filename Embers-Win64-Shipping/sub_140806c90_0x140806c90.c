// 函数: sub_140806c90
// 地址: 0x140806c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x30)
int64_t r13 = *(arg1 + 0x28)
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx != 0)
    rax_1 = sub_1425b89f0()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

int32_t var_f8
int32_t var_f0

if (rbx == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    var_f8 = 0x3f800000
    int32_t var_f4_1 = 0x3f800000
    var_f0 = 0x3f800000
else
    uint128_t zmm1 = zx.o(*(rbx + 0x4c))
    uint128_t zmm0_1 = zx.o(*(rbx + 0x48))
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*(rbx + 0x50)))
    int32_t var_f4 = _mm_cvtepi32_ps(zmm1).d
    var_f8 = _mm_cvtepi32_ps(zmm0_1).d
    var_f0 = zmm2.d

void* rbx_1 = *(arg1 + 0x30)
void* rax_4
int64_t rax_5
void* rdx_2

if (rbx_1 != 0)
    rax_4 = sub_1425b89f0()
    rdx_2 = *(rbx_1 + 0x10)
    rax_5 = sx.q(*(rax_4 + 0x38))

int32_t var_b0
int32_t r12
uint128_t zmm7

if (rbx_1 == 0 || rax_5.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
    var_b0 = 0xbf800000
    int32_t var_ac_1 = 0xbf800000
    zmm7 = zx.o(var_b0.q)
    int32_t var_a8_1 = 0xbf800000
    r12 = -0x40800000
else
    zmm7 = zx.o(*(rbx_1 + 0x28))
    r12 = *(rbx_1 + 0x30)

void* rbx_2 = *(arg1 + 0x30)
void* rax_7
int64_t rax_8
void* rdx_3

if (rbx_2 != 0)
    rax_7 = sub_1425b89f0()
    rdx_3 = *(rbx_2 + 0x10)
    rax_8 = sx.q(*(rax_7 + 0x38))

int32_t r15
uint128_t zmm6

if (rbx_2 == 0 || rax_8.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
    var_b0 = 0x3f800000
    int32_t var_ac_2 = 0x3f800000
    zmm6 = zx.o(var_b0.q)
    int32_t var_a8_2 = 0x3f800000
    r15 = 0x3f800000
else
    zmm6 = zx.o(*(rbx_2 + 0x34))
    r15 = *(rbx_2 + 0x3c)

char rbx_3 = *(arg1 + 0x38)
char rdi = *(arg1 + 0x39)
char rsi = *(arg1 + 0x3a)
void arg_18
sub_1423fdc20(&arg_18, *(arg1 + 0x30))
uint64_t zmm0_2 = var_f8.q
int64_t var_e8 = r13
uint64_t var_d4 = zmm7.q
uint64_t var_c8 = zmm6.q
void var_b8
sub_1423fdb40(&var_b8, &arg_18)

if (sub_140a80f40() == 0)
    uint32_t rax_12
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_12.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_12.b == 0))
        void** rax_20 = sub_1407eb640(&var_b0, nullptr, 0xff)
        void* rdx_7 = *rax_20
        *(rdx_7 + 0x10) = var_e8
        *(rdx_7 + 0x18) = zmm0_2
        *(rdx_7 + 0x20) = var_f0
        *(rdx_7 + 0x24) = var_d4
        *(rdx_7 + 0x2c) = r12
        *(rdx_7 + 0x30) = var_c8
        *(rdx_7 + 0x38) = r15
        *(rdx_7 + 0x3c) = rbx_3
        *(rdx_7 + 0x3d) = rdi
        *(rdx_7 + 0x3e) = rsi
        sub_1423fdb40(rdx_7 + 0x40, &var_b8)
        void* rcx_14 = *rax_20
        int32_t r8_4 = rax_20[2].d
        int64_t* rdx_9 = rax_20[1]
        int64_t* rbx_5 = *(rcx_14 + 0x50)
        int64_t* arg_10 = rbx_5
        int32_t* rdi_1 = &rbx_5[9]
        
        if (rbx_5 != 0)
            *rdi_1 += 1
            rbx_5 = arg_10
        
        sub_14080ccb0(rcx_14, rdx_9, r8_4, 1)
        
        if (rbx_5 != 0)
            int32_t rax_25 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_25 == 1)
                sub_140a2f6e0(arg_10)
    else
        int64_t var_98 = var_e8
        int32_t var_88_1 = var_f0
        int32_t var_7c_1 = r12
        int32_t var_70_1 = r15
        char var_6c_1 = rbx_3
        uint64_t var_90_1 = zmm0_2
        char var_6b_1 = rdi
        uint64_t var_84_1 = var_d4
        char var_6a_1 = rsi
        uint64_t var_78_1 = var_c8
        void var_68
        sub_1423fdb40(&var_68, &var_b8)
        sub_1407e54f0(&var_98, &data_143f02b98)
        sub_1423ff400(&var_68)
else
    sub_1407e54f0(&var_e8, &data_143f02b98)

sub_1423ff400(&var_b8)
return sub_1423ff400(&arg_18)
