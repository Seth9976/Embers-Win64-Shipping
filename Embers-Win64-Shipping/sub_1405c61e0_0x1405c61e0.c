// 函数: sub_1405c61e0
// 地址: 0x1405c61e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* r15 = arg3
*(arg3 + 0x1488) = 0

if (*(arg3 + 0x148c) != 0)
    sub_1405c5570(arg3 + 0x1480, 0)

sub_1405b89d0(r15 + 0x14c0, 0)
void* rax_2
int512_t zmm6
rax_2, zmm6 = sub_141d79720()
void* var_1d0 = rax_2
void* const r13 = rax_2
void* rax_3
int64_t rax_4
void* rdx

if (rax_2 != 0)
    rax_3 = sub_141d828c0()
    rdx = *(r13 + 0x10)
    rax_4 = sx.q(*(rax_3 + 0x38))

if (rax_2 == 0 || rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
    r13 = nullptr
    var_1d0 = nullptr

zmm6.o = *(r13 + 0x6c)
int64_t var_160 = *(arg1 + 0x18)
int32_t var_158 = *(arg1 + 0x20)
void* var_150 = r15 + 0xde0
sub_141ea17d0()
sub_1405a9b30(&data_143a2d550, &var_160)
int64_t var_138
__builtin_memset(&var_138, 0, 0x2c)
int32_t var_10c = 0x80
int32_t var_108 = 0xffffffff
int32_t var_104 = 0
int64_t var_f8 = 0
int32_t var_f0 = 0
int64_t var_1a4
sub_140b58170(&var_1a4, "Element", 1)
int32_t var_180
sub_1405b3620(&var_138, &var_180)
int64_t* var_178
*var_178 = var_1a4
var_178[1] = *(arg1 + 0xc)
var_178[2].d = 0xffffffff
int64_t rbx_1 = *var_178
void var_1a8
sub_1405b8300(&var_138, &var_1a8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_178, var_180, 
    nullptr)
int64_t* r14 = *(r15 + 0x1480)
void* rax_13 = &r14[sx.q(*(r15 + 0x1488))]

if (r14 != rax_13)
    do
        void* rsi_1 = *r14
        int64_t var_19c
        int128_t zmm6_1 = sub_140b58170(&var_19c, "Pass", 1)
        int64_t rbx_3 = *(rsi_1 + 0x18)
        int64_t var_148_1 = rbx_3
        int32_t var_170
        sub_1405b3620(&var_138, &var_170)
        int64_t rax_14 = var_19c
        int64_t* var_168
        var_168[1] = rbx_3
        *var_168 = rax_14
        var_168[2].d = 0xffffffff
        void var_1d8
        sub_1405b8300(&var_138, &var_1d8, (rax_14 u>> 0x20).d + sub_140b5ead0(rax_14.d), var_168, 
            var_170, nullptr)
        void*** rax_17 = sub_1405a9ec0()
        int64_t var_e8
        __builtin_memset(&var_e8, 0, 0x2c)
        int32_t var_bc_1 = 0x80
        int32_t var_b8_1 = 0xffffffff
        int32_t var_b4_1 = 0
        int64_t var_a8_1 = 0
        int32_t var_a0_1 = 0
        sub_1405af100(&var_e8, &var_138)
        int64_t var_78_1 = 0
        void*** rax_18 = sub_140a82f30(0x68, 8)
        *rax_18 = &data_142d4cb80
        void* rdx_8 = &rax_18[3]
        rax_18[1] = 0
        rax_18[2] = 0
        *(rdx_8 + 0x10) = 0
        *(rdx_8 + 0x18) = 0
        *(rdx_8 + 0x1c) = 0x80
        void* rcx_12 = *(rdx_8 + 0x10)
        
        if (rcx_12 != 0)
            rdx_8 = rcx_12
        
        *rdx_8 = 0
        *(rdx_8 + 8) = 0
        rax_18[7].d = 0xffffffff
        *(rax_18 + 0x3c) = 0
        rax_18[9] = 0
        rax_18[0xa].d = 0
        sub_1405af100(&rax_18[1], &var_e8)
        *(rax_18 + 0x58) = zmm6_1
        *rax_18 = &data_142d4cba0
        int64_t (* var_88)(int64_t* arg1, int64_t* arg2)
        int64_t (* rax_19)(int64_t* arg1, int64_t* arg2) = var_88
        
        if (rax_18 != -8)
            rax_19 = j_sub_1405b1040
        
        var_88 = rax_19
        sub_1405ae080(&var_e8)
        sub_14106b960(&rax_17[2], &var_88)
        
        if (var_88 != 0)
            void var_68
            void*** rcx_16 = &var_68
            
            if (rax_18 != 0)
                rcx_16 = rax_18
            
            (*rcx_16)[2](rcx_16)
        
        uint128_t zmm0_2 = (&rax_17[2]).o
        uint128_t var_1b8 = zmm0_2
        void* rax_22 = _mm_bsrli_si128(zmm0_2, 8).q
        
        if (rax_22 != 0)
            *(rax_22 + 8) += 1
        
        int64_t var_194 = *(rsi_1 + 0x18)
        sub_1405a8620(r15 + 0x14c0, &var_194, &var_1b8)
        void* rcx_18 = var_1b8:8.q
        
        if (rcx_18 != 0)
            int32_t rax_24 = *(rcx_18 + 8)
            *(rcx_18 + 8) -= 1
            
            if (rax_24 == 1)
                int64_t* rbx_7 = var_1b8:8.q
                (**rbx_7)(rbx_7)
                int32_t rax_26 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (rax_26 == 1)
                    int64_t* rcx_20 = var_1b8:8.q
                    (*(*rcx_20 + 8))(rcx_20, 1)
        
        if (rax_17 != 0)
            rax_17[1].d -= 1
            
            if (rax_17[1].d == 1)
                (**rax_17)(rax_17)
                int32_t rax_30 = *(rax_17 + 0xc)
                *(rax_17 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*rax_17)[1](rax_17, 1)
        
        r14 = &r14[1]
    while (r14 != rax_13)
    
    r15 = arg3
    r13 = var_1d0

int32_t rdx_13 = *(r15 + 0x14c8) - *(r15 + 0x14f4)

if (rdx_13 s> 0)
    sub_141d7dd80(r13, rdx_13)
    *(r15 + 0x14a8) = 1

void* result = sub_1405ae080(&var_138)
__security_check_cookie(rax_1 ^ &var_208)
return result
