// 函数: sub_140af4590
// 地址: 0x140af4590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_188
sub_140b4c2a0(&var_188)
char var_15e
char var_15e_1 = var_15e | 0x80
var_188 = &data_142e716f8
int32_t i_1 = 0
int64_t var_f8 = 0
int64_t result_2 = 0
sub_1409563f0(&var_188, sx.q(*(arg1 + 0x10)) * 0x158, sx.q(*(arg1 + 0x14)) * 0x158)
var_188[1](&var_188, zx.q(*(arg1 + 0x30) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x34) + 0x1f) u>> 5 << 2)
int64_t rdx_6 = sx.q(*(arg1 + 0x50)) << 2
var_188[1](&var_188, rdx_6, rdx_6)
int64_t result_1 = result_2
void* rax_4 = arg1 + 8
int32_t rdi_1 = *(rax_4 + 0x28)
void* r9 = rax_4 + 0x10
int64_t result = result_1
int32_t r14 = 0
int64_t* var_228 = nullptr
int32_t r12 = 0
int32_t var_21c = 0
int32_t r13 = 0
int64_t* r15 = nullptr
int32_t var_258 = 0
int32_t i_6 = 0
int32_t var_254 = 1
int32_t rcx_4 = 0
void* var_250 = r9
int32_t r8_6 = 0
int32_t var_248 = 0xffffffff
int64_t var_244 = 0

if (rdi_1 != 0)
    void* rax_5 = *(r9 + 0x10)
    
    if (rax_5 != 0)
        r9 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1 - 1)
    int32_t rdx_9 = *r9
    
    if (rdx_9 != 0)
    label_140af46ec:
        int32_t rax_11 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_254_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_244.d = r8_6 - rax_12 + 0x1f
        
        if (r8_6 - rax_12 + 0x1f s> rdi_1)
            var_244.d = rdi_1
    else
        while (true)
            int64_t rax_8 = sx.q(rcx_4)
            r8_6 += 0x20
            rcx_4 += 1
            var_244:4.d = r8_6
            var_258 = rcx_4
            
            if (rax_8.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_9 = *(r9 + (rax_8 << 2) + 4)
            var_248 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140af46ec
        
        var_244.d = rdi_1

int128_t zmm4 = var_248.o
uint128_t zmm0 = var_258.o
void* var_198 = rax_4
int128_t var_1a8 = zmm4
int16_t var_1d0 = 0
void* rax_14 = zmm0.q
uint128_t var_1f8 = zmm0
int512_t zmm1
zmm1.o = zmm4
int32_t var_208[0x4] = rax_4.o
zmm1.o = _mm_unpackhi_pd(zmm1.o, zmm4.q)
zmm0.q = (zmm1.o).q
uint128_t var_1e8 = zmm0

if ((zmm4.q u>> 0x20).d s< *(rax_14 + 0x18))
    int32_t i = var_1f8:0xc.d
    
    do
        void** rcx_8 = sx.q(i) * 0x158
        int64_t rax_17 = *var_208[0].q
        uint64_t var_268 = 0
        int32_t rdi_2 = *(rcx_8 + rax_17 + 8)
        void* rax_18 = *(rcx_8 + rax_17)
        
        if (rdi_2 != 0)
            sub_1405a4c70(&var_268, rdi_2, 0)
            memcpy(var_268, rax_18, rdi_2 * 2)
        else
            int32_t var_25c_1 = 0
        
        int64_t rdi_3 = *var_208[0].q
        void** const var_e8
        sub_140b4c2a0(&var_e8)
        char var_be = var_be | 0x80
        var_e8 = &data_142e716f8
        int64_t var_58_1 = 0
        int64_t var_50_1 = 0
        sub_140ae8b40(&var_e8, &rcx_8[2] + rdi_3, sub_140a1d9d0(&var_e8, &var_268, zmm1))
        int64_t arg_20 = var_58_1
        int64_t var_1c8_1 = var_50_1
        int32_t rax_21
        
        if (rdi_2 == 0)
            rax_21 = 0
        else
            rax_21 = rdi_2 - 1
        
        int64_t var_218 = 0
        int32_t var_210_1 = 0
        
        if (r14 s>= rax_21)
            rax_21 = r14
        
        void* arg_8
        arg_8.d = rax_21
        sub_140a20c40(&var_218, var_58_1.d)
        int32_t rax_23
        
        if (var_210_1 == 0)
            rax_23 = 0
        else
            rax_23 = var_210_1 - 1
        
        int64_t rcx_16 = var_218
        
        if (r12 s>= rax_23)
            rax_23 = r12
        
        r12 = rax_23
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        var_258.q = 0
        int32_t var_250_1 = 0
        sub_140a20c40(&var_258, var_50_1.d)
        int32_t rax_25
        
        if (var_250_1 == 0)
            rax_25 = 0
        else
            rax_25 = var_250_1 - 1
        
        int64_t rcx_18 = var_258.q
        
        if (r13 s>= rax_25)
            rax_25 = r13
        
        r13 = rax_25
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        int64_t i_7 = sx.q(i_6)
        i_6 = (i_7 + 1).d
        
        if (i_6 s> var_21c)
            sub_1405c4e40(&var_228)
            r15 = var_228
            r13 = rax_25
            r12 = rax_23
            arg_8.d = rax_21
        
        int64_t* rdi_6 = &r15[i_7 * 4]
        
        if (i_7 << 5 != neg.q(r15))
            *rdi_6 = 0
            void** rax_27 = var_268
            rdi_6[1].d = rdi_2
            
            if (rdi_2 != 0)
                sub_1405a4c70(rdi_6, rdi_2, 0)
                memcpy(*rdi_6, rax_27, rdi_2 * 2)
            else
                __builtin_memset(rdi_6 + 0xc, 0, 0x14)
        
        zmm1 = sub_140b4cb40(&var_e8)
        uint64_t rcx_23 = var_268
        
        if (rcx_23 != 0)
            zmm1 = sub_140a74f90(rcx_23)
        
        var_1f8:8.d &= not.d(var_208[3])
        sub_14059bdd0(&var_208[2])
        i = var_1f8:0xc.d
        r14 = arg_8.d
    while (i s< *(var_1f8.q + 0x18))
    
    if (var_1d0.b != 0 && var_1d0:1.b != 0)
        sub_140aed150(rax_4, *(rax_4 + 8) - *(rax_4 + 0x34), 1)
    
    result_1 = result

if (i_6 s> 0)
    if (i_6 u>= 4)
        int32_t rax_32 = i_6 & 0x80000003
        
        if (rax_32 s< 0)
            rax_32 = ((rax_32 - 1) | 0xfffffffc) + 1
        
        zmm1.o = zx.o(0)
        int32_t zmm2[0x4] = zx.o(0)
        int32_t rdx_23 = 2
        
        do
            int64_t i_4 = sx.q(i_1)
            i_1 += 4
            zmm1.o = _mm_add_epi64(r15[i_4 * 4 + 3] | r15[sx.q(rdx_23 - 1) * 4 + 3] << 0x40, zmm1.o)
            zmm0 = zx.o(r15[sx.q(rdx_23) * 4 + 3])
            int32_t rax_39 = rdx_23 + 1
            rdx_23 += 4
            zmm0 = _mm_add_epi64(zmm0.q | r15[sx.q(rax_39) * 4 + 3] << 0x40, zmm2)
            zmm2 = zmm0
        while (i_1 s< i_6 - rax_32)
        
        zmm1.o = _mm_add_epi64(zmm1.o, zmm0)
        zmm1.o = _mm_add_epi64(zmm1.o, _mm_bsrli_si128(zmm1.o, 8))
        result_1 += zmm1.q
        result = result_1
    
    if (i_1 s< i_6)
        void* rcx_31 = &r15[3 + sx.q(i_1) * 4]
        uint64_t i_5 = zx.q(i_6 - i_1)
        uint64_t i_2
        
        do
            result_1 += *rcx_31
            rcx_31 += 0x20
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        result = result_1

int64_t* rbx = r15

if (i_6 != 0)
    int32_t i_3
    
    do
        int64_t rcx_32 = *rbx
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        rbx = &rbx[4]
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)

if (r15 != 0)
    sub_140a74f90(r15)

sub_140b4cb40(&var_188)
return result
