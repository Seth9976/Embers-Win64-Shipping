// 函数: sub_141e0a1e0
// 地址: 0x141e0a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rsi = arg2[4]
int64_t rbx = 0
int64_t* r12 = arg2
int64_t* rcx_2

if (rsi == 0)
    rcx_2 = nullptr
else
    void* rax_2 = *(rsi + 0xa8)
    int64_t* rax_3
    
    if (rax_2 != 0)
        rax_3, arg4 = sub_142437e30(rax_2, 0, 1)
        rcx_2 = rax_3
    else
        rax_2, arg4 = sub_141ee69e0(rsi)
        
        if (rax_2 == 0)
            rcx_2 = nullptr
        else
            rax_3, arg4 = sub_142437e30(rax_2, 0, 1)
            rcx_2 = rax_3

arg1[0x18].d = arg3.d

if (rcx_2 == 0)
    arg4 = 0x3f800000
else
    (*(*rcx_2 + 0x638))(rcx_2)

*(arg1 + 0xc4) = arg4.d
char rcx_3 = 2
arg1[0x50].d = zx.d(r12[6].b)
int64_t rax_7 = *arg1

if (r12[6].b - 1 u> 1)
    rcx_3 = 0

*(arg1 + 0x6d9) &= 0xfd
*(arg1 + 0x6d9) |= rcx_3
(*(rax_7 + 0x90))(arg1, r12)
int128_t* r13 = &data_143dbb0c0

if (rsi != 0)
    int32_t rbp_1 = arg1[0xbd].d
    int32_t rax_9 = (*(*r12 + 0x2e8))(r12)
    arg1[0xbd].d = rax_9
    
    if (rax_9 != rbp_1)
        sub_141e07cb0(arg1, rbp_1, rax_9)
    
    *(arg1 + 0x5f0) = *(rsi + 0x1c0)
    *(arg1 + 0x600) = *(rsi + 0x1d0)
    *(arg1 + 0x610) = *(rsi + 0x1e0)
    void* rax_10 = *(rsi + 0xa0)
    
    if (rax_10 != 0)
        void* rax_11 = *(rax_10 + 0x130)
        int128_t* rax_12
        
        if (rax_11 == 0)
            rax_12 = &data_143dbb0c0
        else
            rax_12 = rax_11 + 0x1c0
        
        *(arg1 + 0x620) = *rax_12
        *(arg1 + 0x630) = rax_12[1]
        *(arg1 + 0x640) = rax_12[2]

sub_141e30570(&arg1[0x42], r12[4])
uint64_t rcx_8 = sx.q(arg1[0x41].d)
uint64_t r8_3 = rcx_8 * 2
int32_t i = 0

if (arg1[r8_3 + 0x5c].d s> 0)
    int64_t rdx_3 = 0
    
    do
        int64_t rcx_9 = arg1[r8_3 + 0x5b]
        rdx_3 += 0xc
        i += 1
        *(rcx_9 + rdx_3 - 0xc) = (_mm_unpacklo_ps(zx.o(0), 0)).q
        *(rcx_9 + rdx_3 - 4) = 0.d
        *(arg1[r8_3 + 0x5b] + rdx_3 - 3) = *(arg1[sx.q(1 - rcx_8.d) * 2 + 0x5b] + rdx_3 - 4)
    while (i s< arg1[r8_3 + 0x5c].d)
    
    rcx_8 = zx.q(arg1[0x41].d)

void* rcx_12 = &arg1[0x27 + sx.q(rcx_8.d) * 2]
*(rcx_12 + 8) = 0

if (*(rcx_12 + 0xc) s<= 0xffffffff)
    sub_140775c70(rcx_12, 0)

uint64_t rax_22 = sx.q(arg1[0x41].d)
int32_t i_1 = 0
uint64_t rbp_3 = rax_22 * 2
uint128_t var_98

if (arg1[rbp_3 + 0x2c].d s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rsi_2 = arg1[rbp_3 + 0x2b] + r14_1
        rsi_2[2].d = 0xffffffff
        int32_t rax_19 = *(rsi_2 + 0xc)
        rsi_2[1].d = 0
        
        if (rax_19 s< 0 && rax_19 != 0)
            sub_140775c70(rsi_2, 0)
        
        rsi_2[5].b = 0
        *(rsi_2 + 0x2c) = 0
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x28)
        
        if (&rsi_2[6] != &var_98)
            int64_t rcx_14 = rsi_2[6]
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            rsi_2[6] = 0
            rsi_2[7] = 0
        
        float zmm0[0x4] = var_88.o
        i_1 += 1
        r14_1 += 0x70
        rsi_2[0xd] = &data_143f39940
        *(rsi_2 + 0x40) = zmm0
        int64_t var_78
        rsi_2[0xa].d = var_78.d
        *(rsi_2 + 0x54) = var_78:4.o
        int64_t var_68
        *(rsi_2 + 0x64) = var_68:4.d
    while (i_1 s< arg1[rbp_3 + 0x2c].d)
    
    rax_22 = zx.q(arg1[0x41].d)
    r12 = arg2

int64_t rcx_16 = sx.q(rax_22.d) * 2
memset(arg1[rcx_16 + 0x33], 0, sx.q(arg1[rcx_16 + 0x34].d) << 2)
int64_t rcx_19 = sx.q(arg1[0x41].d) * 2
memset(arg1[rcx_19 + 0x2f], 0, sx.q(arg1[rcx_19 + 0x30].d) << 2)
void* rax_23 = arg1[0x17]
*(arg1 + 0x10) = *(rax_23 + 0x1c0)
*(arg1 + 0x20) = *(rax_23 + 0x1d0)
*(arg1 + 0x30) = *(rax_23 + 0x1e0)
uint128_t* rax_24 = sub_141f3cf60(arg1[0x17], &var_98)
*(arg1 + 0x40) = *rax_24
*(arg1 + 0x50) = rax_24[1]
*(arg1 + 0x60) = rax_24[2]
void* rax_26 = *(arg1[0x17] + 0xa0)

if (rax_26 != 0)
    void* rax_27 = *(rax_26 + 0x130)
    
    if (rax_27 != 0)
        r13 = rax_27 + 0x1c0

*(arg1 + 0x70) = *r13
*(arg1 + 0x80) = r13[1]
*(arg1 + 0x90) = r13[2]
int64_t* rsi_4 = arg1[0xcd]
void* result = &rsi_4[arg1[0xce]]
uint64_t rdi_2 = sx.q(arg1[0xce].d) << 3 u>> 3

if (rsi_4 u> result)
    rdi_2 = 0

if (rdi_2 != 0)
    do
        int64_t* rcx_22 = *rsi_4
        result = (*(*rcx_22 + 0x48))(rcx_22, r12)
        rbx += 1
        rsi_4 = &rsi_4[1]
    while (rbx != rdi_2)

__security_check_cookie(rax_1 ^ &var_d8)
return result
