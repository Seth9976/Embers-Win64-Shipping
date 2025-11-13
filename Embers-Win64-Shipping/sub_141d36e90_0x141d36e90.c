// 函数: sub_141d36e90
// 地址: 0x141d36e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t* r14 = arg1
float zmm8[0x4]
float var_58[0x4] = zmm8
int32_t rsi = 0
int128_t zmm9
int128_t var_68 = zmm9
int64_t* rcx_1 = *(*arg1 + 0x348) + 0x580
int128_t zmm10
int128_t var_78 = zmm10
rcx_1[1].d = 0

if (*(rcx_1 + 0xc) s<= 0xffffffff)
    sub_1405a5310(rcx_1, 0)

void** var_178
Concurrency::IUMSScheduler::IUMSScheduler(&var_178)
void* rcx_3 = *r14
int128_t zmm12 = 0x3f800000
int64_t r12 = 0
var_178 = &data_142fc8f80
int64_t var_170
__builtin_memset(&var_170, 0, 0x20)
int32_t var_150 = 0x3f800000
int64_t var_148 = 0
int64_t var_140 = 0
int64_t rax_3 = sx.q(*(rcx_3 + 0x448))
int64_t* r15 = *(rcx_3 + 0x440)
int64_t var_f8 = 0
int64_t var_ec = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
uint64_t rdi_1 = rax_3 << 3 u>> 3
int32_t var_cc = 0x80
int64_t var_e4 = 0

if (r15 u> &r15[rax_3])
    rdi_1 = 0

int32_t var_dc = 0
int32_t var_c8 = 0xffffffff
int32_t var_c4 = 0
int64_t var_b8 = 0
int64_t* var_1c0
int512_t zmm2
int128_t zmm6
float zmm7[0x4]
int128_t zmm11

if (rdi_1 != 0)
    do
        void* rdx_1 = *r14
        void* rbx_1 = *r15
        int32_t var_1b8_1 = *(rdx_1 + 0x6c)
        int64_t* var_1c0_1 = &var_f8
        void*** var_1c8_1 = &var_178
        sub_141d39380(rbx_1, rdx_1, *(*(*(rdx_1 + 0x348) + 0x260) + 0x40))
        void* rdx_2 = *r14
        int32_t var_1b8_2 = *(rdx_2 + 0x6c)
        var_1c0 = &var_f8
        void*** var_1c8_2 = &var_178
        zmm2, zmm6, zmm7, zmm11, zmm12 =
            sub_141d39380(rbx_1, rdx_2, *(*(*(rdx_2 + 0x348) + 0x260) + 0x38))
        r12 += 1
        r15 = &r15[1]
    while (r12 != rdi_1)
    
    rcx_3 = *r14

int64_t rbx_2 = 0
int64_t* rdi_2 = *(rcx_3 + 0x430)
int128_t var_38 = zmm6
uint64_t r15_2 = sx.q(*(rcx_3 + 0x438)) << 3 u>> 3

if (rdi_2 u> &rdi_2[sx.q(*(rcx_3 + 0x438))])
    r15_2 = 0

if (r15_2 != 0)
    do
        void* r8_5 = *r14
        void* r13_1 = *rdi_2
        zmm6 = *(r8_5 + 0x6c)
        int64_t* rcx_7 = *(r13_1 + 0x5c8) + 0xb0
        void* rdx_3 = *(*(r8_5 + 0x348) + 0x260)
        void* r12_1 = *(rdx_3 + 0x40)
        
        if ((*(*rcx_7 + 0x48))(rcx_7, rdx_3) != 0)
            zmm2.o = zmm6
            sub_141d3e0e0(r13_1, r12_1)
        
        rdi_2 = &rdi_2[1]
        rbx_2 += 1
    while (rbx_2 != r15_2)

int32_t var_b0 = 0
int32_t var_f0 = 0
sub_14059a8e0(&var_ec:4, 0)

if (var_d8 != 0)
    sub_140a74f90(var_d8)

int64_t rcx_11 = var_f8

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

var_178 = &data_142fc8f80

if (var_148 != 0)
    sub_140a74f90(var_148)

int64_t var_160

if (var_160 != 0)
    sub_140a74f90(var_160)

int64_t rcx_14 = var_170

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_1417626c0(&var_178)
void* rax_12 = *r14
zmm8 = r14[1].d
zmm10 = *(rax_12 + 0x78)
zmm9 = *(rax_12 + 0x74)
int32_t rax_13 = *(rax_12 + 0x7c)
char* var_1a0

if (rax_13 s> 0)
    int128_t var_88_1 = zmm11
    zmm11 = zx.o(0)
    float var_48_1[0x4] = zmm7
    
    while (not(zmm8[0] f<= zmm10.d))
        zmm7 = zmm8
        
        if (not(zmm9.d f<= zmm11.d))
            zmm7 = _mm_min_ss(zmm7[0], zmm9.d)
        
        void* rcx_16 = *r14
        zmm8[0] = zmm8[0] - zmm7[0]
        int64_t r12_2 = 0
        int64_t* r15_3 = *(rcx_16 + 0x440)
        uint64_t rdi_4 = sx.q(*(rcx_16 + 0x448)) << 3 u>> 3
        
        if (r15_3 u> &r15_3[sx.q(*(rcx_16 + 0x448))])
            rdi_4 = 0
        
        if (rdi_4 != 0)
            do
                void* rdx_5 = *r14
                void* rbx_3 = *r15_3
                var_1c0.d = *(rdx_5 + 0x6c)
                int64_t* var_1c8_3 = &var_1a0
                *(*(*(rdx_5 + 0x348) + 0x260) + 0x40)
                sub_141d38be0(rbx_3, rdx_5)
                void* rdx_6 = *r14
                var_1c0.d = *(rdx_6 + 0x6c)
                int64_t* var_1c8_4 = &var_1a0
                *(*(*(rdx_6 + 0x348) + 0x260) + 0x38)
                sub_141d38be0(rbx_3, rdx_6)
                r12_2 += 1
                r15_3 = &r15_3[1]
            while (r12_2 != rdi_4)
            
            rcx_16 = *r14
        
        int64_t rbx_4 = 0
        int64_t* rdi_5 = *(rcx_16 + 0x430)
        uint64_t r12_4 = sx.q(*(rcx_16 + 0x438)) << 3 u>> 3
        
        if (rdi_5 u> &rdi_5[sx.q(*(rcx_16 + 0x438))])
            r12_4 = 0
        
        if (r12_4 != 0)
            do
                void* r8_10 = *r14
                void* r15_4 = *rdi_5
                zmm6 = *(r8_10 + 0x6c)
                int64_t* rcx_20 = *(r15_4 + 0x5c8) + 0xb0
                void* rdx_7 = *(*(r8_10 + 0x348) + 0x260)
                void* r13_2 = *(rdx_7 + 0x40)
                
                if ((*(*rcx_20 + 0x48))(rcx_20, rdx_7) != 0)
                    zmm2.o = zmm6
                    sub_141d3e0e0(r15_4, r13_2)
                
                rdi_5 = &rdi_5[1]
                rbx_4 += 1
            while (rbx_4 != r12_4)
            
            rcx_16 = *r14
        
        zmm2.o = zmm12
        zmm2, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_1417a7080(*(rcx_16 + 0x348), zmm7[0])
        rax_13 -= 1
        
        if (rax_13 s<= 0)
            break

void* r13_3 = *r14
void* rbx_5 = *(r13_3 + 0x350)
AcquireSRWLockShared(rbx_5 + 0x20)
int64_t* rdi_6 = *(rbx_5 + 8)
int64_t rbx_6 = 0
uint64_t r15_6 = sx.q(*(rbx_5 + 0x10)) << 3 u>> 3

if (rdi_6 u> &rdi_6[sx.q(*(rbx_5 + 0x10))])
    r15_6 = 0

if (r15_6 != 0)
    do
        int64_t* rcx_24 = *rdi_6
        
        if (rcx_24 != 0)
            (*(*rcx_24 + 0x18))(rcx_24, r13_3)
        
        rdi_6 = &rdi_6[1]
        rbx_6 += 1
    while (rbx_6 != r15_6)

ReleaseSRWLockShared(rbx_5 + 0x20)
char* r13_4 = *(*r14 + 0x350)

if (*r13_4 == 2)
    AcquireSRWLockExclusive(&r13_4[0x18])

AcquireSRWLockShared(&r13_4[0x20])
int64_t rdi_7 = 0
int64_t* rbx_7 = *(r13_4 + 8)
uint64_t r15_8 = sx.q(*(r13_4 + 0x10)) << 3 u>> 3

if (rbx_7 u> &rbx_7[sx.q(*(r13_4 + 0x10))])
    r15_8 = 0

if (r15_8 != 0)
    do
        int64_t* rcx_28 = *rbx_7
        
        if (rcx_28 != 0)
            (*(*rcx_28 + 0x20))(rcx_28)
        
        rbx_7 = &rbx_7[1]
        rdi_7 += 1
    while (rdi_7 != r15_8)

ReleaseSRWLockShared(&r13_4[0x20])

if (*r13_4 == 2)
    ReleaseSRWLockExclusive(&r13_4[0x18])

void* rax_31 = *r14
char var_1a8 = 0
int64_t* r13_5 = *(*(rax_31 + 0x348) + 0x260)

if (r13_5[0x11].b != 0)
    sub_14175a890(r13_5, 0)

int32_t i = 0

if (r13_5[0x3a].d s> 0)
    int64_t r15_9 = 0
    
    do
        int64_t* rdx_11 = r13_5[0x39] + r15_9
        void* rcx_33 = rdx_11[1]
        int32_t rbx_8
        
        if (rcx_33 == 0)
            rbx_8 = *(*rdx_11 + 0x18)
        else
            rbx_8 = *(rcx_33 + 8)
        
        if (rbx_8 != 0)
            int32_t var_190_1 = rsi
            var_1a0 = &var_1a8
            int64_t* rdx_12
            
            if (rcx_33 == 0)
                int64_t* var_198_2 = rdx_11
                int64_t (* var_110)(void* arg1, int32_t* arg2)
                rdx_12 = &var_110
                var_110 = sub_141d35900
                char** var_108_1 = &var_1a0
            else
                rbx_8 = *(rcx_33 + 8)
                int64_t (* var_120)(void* arg1, int32_t* arg2)
                rdx_12 = &var_120
                void* var_198_1 = rcx_33
                var_120 = sub_141d35980
                char** var_118_1 = &var_1a0
            
            sub_14077b750(rbx_8, rdx_12, 0)
            rsi += rbx_8
        
        i += 1
        r15_9 += 0x10
    while (i s< r13_5[0x3a].d)
    
    r14 = arg1

void* rax_33 = *r14
*(rax_33 + 0x6c) = r14[1].d f+ *(rax_33 + 0x6c)
void* result = *r14
*(result + 0x68) += 1
__security_check_cookie(rax_1 ^ &var_1e8)
return result
