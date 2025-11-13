// 函数: sub_1418d99a0
// 地址: 0x1418d99a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* r14 = arg3
void* rdi = arg5
void* r15 = arg1
void* r12 = arg4
void* var_180 = rdi
int32_t var_d8[0x8]
memset(&var_d8, 0, 0x90)
int32_t i = 0
int64_t var_100
var_d4

if (*(rdi + 0xc0) s> 0)
    void* rsi_1 = &var_d4
    void* r12_1 = rdi
    
    do
        int64_t* rbx_1 = *r12_1
        int64_t* var_160 = rbx_1
        
        if (rbx_1 != 0)
            int64_t r14_1 = *((*(*rbx_1 + 0x48))(rbx_1) + 0x18)
            int64_t var_168 = r14_1
            int32_t var_188
            sub_140865c40(r15 + 0xa0, &var_188, r14_1)
            int64_t rax_6 = sx.q(var_188)
            void* const rcx_3
            
            if (rax_6.d == 0xffffffff)
                rcx_3 = nullptr
            else
                rcx_3 = *(r15 + 0xa0) + rax_6 * 0x18
            
            int32_t* rdi_1 = rcx_3 + 8
            
            if (rcx_3 == 0)
                rdi_1 = nullptr
            
            if (rdi_1 == 0)
                int32_t var_184 = 0
                int32_t* rax_8 = sub_1418ca3c0(r15 + 0xa0, &var_168, &var_184)
                r14_1 = var_168
                rdi_1 = rax_8
            
            int32_t rax_9 = *rdi_1
            
            if (rax_9 != 2)
                if (rax_9 != 0)
                    sub_1418eae00(arg2, 1, &var_160, 1)
                    rbx_1 = var_160
                else
                    int64_t var_120_1 = 1
                    int64_t var_f0
                    var_f0.d = 1
                    var_100.o = 1.o
                    sub_1418c0f40(*(arg4 + 0x40), r14_1, 0, 2, &var_100)
            
            int128_t* rax_11
            
            if (rbx_1[4].d == 0)
                float var_110[0x4]
                rax_11 = &var_110
                var_110 = data_14399f5e0
            else
                float var_148[0x4]
                rax_11 = &var_148
                var_148 = *(rbx_1 + 0x24)
            
            float zmm2[0x4] = *rax_11
            r15 = arg1
            *(rsi_1 - 4) = zmm2[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            *(rsi_1 + 8) = _mm_shuffle_ps(zmm2, zmm2, 0xff)[0]
            *rsi_1 = temp0_1[0]
            *(rsi_1 + 4) = temp0_2[0]
            *rdi_1 = 2
            rdi = var_180
        
        i += 1
        r12_1 += 0x18
        rsi_1 += 0x10
    while (i s< *(rdi + 0xc0))
    
    r12 = arg4
    r14 = arg3

int64_t* r15_1 = *(rdi + 0x190)
void* r13

if (r15_1 == 0)
    r13 = arg1
else
    void* rax_13 = (*(*r15_1 + 0x48))(r15_1)
    r13 = arg1
    uint32_t r8_4 = (*(rax_13 + 0x18) u>> 4).d
    int32_t r9_1 = (0x9e3779b9 - r8_4) ^ r8_4 << 8
    int32_t rdx_6 = neg.d(r9_1 + r8_4) ^ r9_1 u>> 0xd
    int32_t r8_7 = (r8_4 - r9_1 - rdx_6) ^ rdx_6 u>> 0xc
    int32_t r9_4 = (r9_1 - r8_7 - rdx_6) ^ r8_7 << 0x10
    int32_t rdx_9 = (rdx_6 - r9_4 - r8_7) ^ r9_4 u>> 5
    int32_t r8_10 = (r8_7 - r9_4 - rdx_9) ^ rdx_9 u>> 3
    int32_t r9_7 = (r9_4 - r8_10 - rdx_9) ^ r8_10 << 0xa
    void* rax_26 = sub_1418cc8e0(r13 + 0xa0, (rdx_9 - r9_7 - r8_10) ^ r9_7 u>> 0xf, rax_13 + 0x18)
    int32_t rcx_11 = *(rdi + 0x19c)
    int32_t r14_2
    
    if (((rcx_11 - 1) & 0xffffffef) == 0)
        r14_2 = 4
    else if (rcx_11 == 0x21 && (*(r14 + 0x1af0) & 2) != 0)
        r14_2 = 0x3b9c9308
    else if ((rcx_11.b & 0xf) != 0 || (rcx_11.b & 0xf0) == 0)
        r14_2 = 3
    else
        r14_2 = 0x3b9c9308
    
    if (*rax_26 != r14_2)
        int32_t rdi_2 = *(rax_13 + 0x78)
        int64_t rbx_3 = *(rax_13 + 0x18)
        var_100 = 0
        int32_t* var_f8 = nullptr
        int64_t var_e8_1 = 0
        int32_t var_e0_1 = 0
        int32_t var_f0_1 = 1
        sub_140775520(&var_f8)
        __builtin_memset(var_f8, 0, 0x48)
        int32_t* rax_28 = var_f8
        *rax_28 = 0x2d
        *(rax_28 + 0x28) = rbx_3
        rax_28[0xc] = rdi_2
        rax_28[0xe] = 1
        rax_28[0x10] = 1
        *(rax_28 + 0x20) = -1
        int32_t rax_29 = sub_1418e1d20(*rax_26)
        int32_t rax_30 = sub_1418e1d20(r14_2)
        int32_t* rdi_3 = var_f8
        int32_t rax_31 = sub_1418bfb90(rax_29, &rdi_3[4], &rdi_3[6])
        var_100.d |= rax_31
        int32_t rax_32 = sub_1418bfb90(rax_30, &rdi_3[5], &rdi_3[7])
        var_100:4.d |= rax_32
        
        if (var_f0_1 s> 0 || var_e0_1 s> 0)
            int32_t* r8_13
            r8_13.b = 1
            sub_1418c1fc0(&var_100, r12)
        
        *rax_26 = r14_2
        
        if (var_e8_1 != 0)
            sub_140a74f90(var_e8_1)
        
        int32_t* rcx_19 = var_f8
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        rdi = var_180
    
    if (r15_1[4].d != 0)
        int32_t r8_14 = r15_1[5].d
        int64_t rdx_19 = sx.q(*(rdi + 0xc0)) * 2
        var_d8[rdx_19 * 2] = *(r15_1 + 0x24)
        *(&var_d4 + (rdx_19 << 3)) = r8_14

sub_1418bc760(r12, arg7, arg7, arg8, &var_d8)
float zmm1[0x4] = zx.o(0)
void* rdx_21 = *(arg2 + 0x450)
zmm1[0] = float.s(zx.q(*(arg6 + 0x37c)))
int32_t zmm0_2 = float.s(zx.q(*(arg6 + 0x378)))
*(rdx_21 + 8) = 0
*(rdx_21 + 0x18) = 0
*(rdx_21 + 0x14) = zmm1[0]
*(rdx_21 + 0x10) = zmm0_2
*(rdx_21 + 0x1c) = 0x3f800000
*(rdx_21 + 0x24) = 0
*(rdx_21 + 0x38) = 0
*(rdx_21 + 0x28) = (int.q(zmm0_2)).d
int32_t result = (int.q(zmm1[0])).d
*(rdx_21 + 0x2c) = result
*(r13 + 0x1d0) = arg8
*(r13 + 0x1c8) = arg7
__security_check_cookie(rax_1 ^ &var_1b8)
return result
