// 函数: sub_140e41780
// 地址: 0x140e41780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x10e0)
void var_1118
int64_t rax_1 = __security_cookie ^ &var_1118
int64_t r12 = sx.q(arg2)
int64_t rdi = 0
int32_t i_1 = 1
int32_t* r8_1 = arg1 + 0x1c90 + (r12 << 0xa)
int64_t var_1068 = 1
int32_t r14 = 1
int32_t rcx = 0

if (arg3 s> 0)
    void var_105c
    void* rdx = &var_105c
    
    do
        int32_t rax_4 = *r8_1
        
        if (rax_4 != 0)
            *(rdx - 4) = rax_4
            r14 += 1
            *rdx = rcx + 1
            rdx += 8
        
        rcx += 1
        r8_1 = &r8_1[1]
    while (rcx s< arg3)

void var_858
int32_t* rax_6 = sub_140e428e0(r14, &var_1068, &var_858)
int64_t r15 = sx.q(r14)

if (r14 != 0)
    if (r14 != 1)
        *rax_6 += rax_6[2]
        int32_t i = 1
        
        if (r14 - 1 s> 1)
            int64_t rdx_2 = 0
            int64_t rcx_2 = 2
            int64_t r9_1 = 1
            
            do
                int32_t rax_8
                
                if (rcx_2 s< r15)
                    rax_8 = rax_6[rcx_2 * 2]
                
                void* r8_3
                
                if (rcx_2 s>= r15 || rax_6[rdx_2 * 2] u< rax_8)
                    r8_3 = &rax_6[r9_1 * 2]
                    *r8_3 = rax_6[rdx_2 * 2]
                    rax_6[rdx_2 * 2] = i
                    rdx_2 += 1
                else
                    r8_3 = &rax_6[r9_1 * 2]
                    rcx_2 += 1
                    *r8_3 = rax_8
                
                if (rcx_2 s>= r15 || (rdx_2 s< r9_1 && rax_6[rdx_2 * 2] u< rax_6[rcx_2 * 2]))
                    *r8_3 += rax_6[rdx_2 * 2]
                    rax_6[rdx_2 * 2] = i
                    rdx_2 += 1
                else
                    *r8_3 += rax_6[rcx_2 * 2]
                    rcx_2 += 1
                
                i += 1
                r9_1 += 1
            while (i s< r14 - 1)
        
        int64_t rdx_4 = sx.q(r14) - 2
        int64_t r8_4 = sx.q(r14 - 3)
        rax_6[rdx_4 * 2] = 0
        
        if (r14 - 3 s>= 0)
            int64_t temp0_1
            
            do
                rax_6[r8_4 * 2] = rax_6[zx.q(rax_6[r8_4 * 2]) * 2] + 1
                temp0_1 = r8_4
                r8_4 -= 1
            while (temp0_1 - 1 s>= 0)
        
        int32_t j = 0
        int64_t rcx_5 = sx.q(r14 - 1)
        
        do
            int32_t rax_15 = 0
            
            if (rdx_4 s>= 0)
                while (rax_6[rdx_4 * 2] == j)
                    rax_15 += 1
                    int64_t temp3_1 = rdx_4
                    rdx_4 -= 1
                    
                    if (temp3_1 - 1 s< 0)
                        break
            
            if (i_1 s> rax_15)
                uint64_t j_3 = zx.q(i_1 - rax_15)
                uint64_t j_1
                
                do
                    rax_6[rcx_5 * 2] = j
                    rcx_5 -= 1
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
            
            i_1 = rax_15 * 2
            j += 1
        while (i_1 s> 0)
    else
        *rax_6 = 1

void var_10f8
memset(&var_10f8, 0, 0x84)

if (r14 s> 0)
    do
        uint64_t rax_16 = zx.q(rax_6[rdi * 2])
        rdi += 1
        *(&var_10f8 + (rax_16 << 2)) += 1
    while (rdi s< r15)

char var_10f4
char var_10f0
char var_10ec
char var_10e8
char var_10e4
char var_10e0
char var_10dc
char var_10d8
char var_10d4
char var_10d0
char var_10cc
char var_10c8
char var_10c4
char var_10c0
char var_10bc
char var_10b8

if (r14 s> 1)
    int32_t zmm1[0x4] = zx.o(0)
    int32_t zmm2[0x4] = zx.o(0)
    
    for (int64_t i_2 = 0x11; i_2 s<= 0x20; )
        zmm1 = _mm_add_epi32(*(&var_10f8 + (i_2 << 2)), zmm1)
        int32_t zmm0_1[0x4] = *(&var_10e8 + (i_2 << 2))
        i_2 += 8
        zmm2 = _mm_add_epi32(zmm0_1, zmm2)
    
    int32_t temp0_4[0x4] = _mm_add_epi32(zmm2, zmm1)
    uint64_t rcx_7 = zx.q(var_10f4.d)
    int32_t temp0_6[0x4] = _mm_add_epi32(temp0_4, _mm_bsrli_si128(temp0_4, 8))
    int32_t r8_6 = var_10b8.d + _mm_add_epi32(temp0_6, _mm_bsrli_si128(temp0_6, 4))[0]
    var_10b8.d = r8_6
    uint64_t rcx_12 = zx.q(var_10cc.d + ((var_10d0.d + ((var_10d4.d + ((var_10d8.d + ((var_10dc.d +
        ((var_10e0.d + ((var_10e4.d
        + ((var_10e8.d + ((var_10ec.d + ((var_10f0.d + (rcx_7 << 1).d) << 1)) << 1)) << 1)) << 1))
        << 1)) << 1)) << 1)) << 1)) << 1))
    int32_t rax_32 = r8_6 + ((var_10bc.d
        + ((var_10c0.d + ((var_10c4.d + ((var_10c8.d + (rcx_12 << 1).d) << 1)) << 1)) << 1)) << 1)
    
    if (rax_32 != 0x10000)
        uint64_t i_6 = zx.q(rax_32 - 0x10000)
        uint64_t i_3
        
        do
            r8_6 -= 1
            int64_t j_2 = 0xf
            var_10b8.d = r8_6
            
            do
                int32_t rax_34 = *(&var_10f8 + (j_2 << 2))
                
                if (rax_34 != 0)
                    *(&var_10f4 + (j_2 << 2)) += 2
                    *(&var_10f8 + (j_2 << 2)) = rax_34 - 1
                    r8_6 = var_10b8.d
                    break
                
                j_2 -= 1
            while (j_2 s> 0)
            
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)

void* r8_7 = r12 * 0x11
void* rdx_12 = r8_7 + arg1
__builtin_memset(rdx_12 + 0x184c, 0, 0x11)
*(rdx_12 + 0x184d) = var_10f4
*(r8_7 + arg1 + 0x184e) = var_10f0
*(r12 * 0x11 + arg1 + 0x184f) = var_10ec
int32_t rcx_16 = 0x10
*(r8_7 + arg1 + 0x1850) = var_10e8
*(r8_7 + arg1 + 0x1851) = var_10e4
*(r8_7 + arg1 + 0x1852) = var_10e0
*(r8_7 + arg1 + 0x1853) = var_10dc
*(r8_7 + arg1 + 0x1854) = var_10d8
*(r8_7 + arg1 + 0x1855) = var_10d4
*(r8_7 + arg1 + 0x1856) = var_10d0
*(r8_7 + arg1 + 0x1857) = var_10cc
*(r8_7 + arg1 + 0x1858) = var_10c8
*(r8_7 + arg1 + 0x1859) = var_10c4
*(r8_7 + arg1 + 0x185a) = var_10c0
*(r8_7 + arg1 + 0x185b) = var_10bc
*(r8_7 + arg1 + 0x185c) = var_10b8

for (int64_t i_4 = 0x10; i_4 s>= 1; i_4 -= 1)
    if (*(i_4 + rdx_12 + 0x184c) != 0)
        void* rax_53 = sx.q(rcx_16) + r8_7
        *(rax_53 + arg1 + 0x184c) -= 1
        break
    
    rcx_16 -= 1

uint32_t result = r14 - 1
int64_t r8_8 = sx.q(result)

if (r8_8 s>= 1)
    void* rcx_18 = (r8_8 << 3) + 4 + rax_6
    void* rdx_14 = arg1 + 0x188f + (r12 << 8) - r8_8 + r15
    int64_t i_5
    
    do
        rdx_14 += 1
        result.b = *rcx_18 - 1
        rcx_18 -= 8
        *(rdx_14 - 1) = result.b
        i_5 = r8_8
        r8_8 -= 1
    while (i_5 != 1)

__security_check_cookie(rax_1 ^ &var_1118)
return result
