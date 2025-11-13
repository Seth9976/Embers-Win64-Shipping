// 函数: sub_1429c5b80
// 地址: 0x1429c5b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t* r14 = arg1
int64_t rdi = sx.q(arg3)
__CheckForDebuggerJustMyCode(&data_14427d007)
int32_t var_c8
(*(*arg2 + 0x10))(arg2, &var_c8, 0, 0)
int32_t zmm11[0x4] = var_c8
int32_t rax_3 = (rdi * 3).d
int32_t var_c4
int32_t zmm6[0x4] = var_c4
int32_t zmm10[0x4] = zmm11
int32_t var_c0
int32_t zmm7[0x4] = var_c0
int32_t zmm8[0x4] = zmm6
int64_t r12 = sx.q(rax_3)
int32_t zmm9[0x4] = zmm7

if (r12 s> 1)
    int64_t rbx_1 = 1
    
    do
        int32_t r8 = r14[rbx_1]
        (*(*arg2 + 0x10))(arg2, &var_c8, zx.q(r8 s>> 2), zx.q(r8) & 3)
        int32_t zmm0[0x4] = var_c8
        
        if (not(zmm11[0] f<= zmm0[0]))
            zmm11 = zmm0
        else if (not(zmm0[0] f<= zmm10[0]))
            zmm10 = zmm0
        
        zmm0 = var_c4
        
        if (not(zmm6[0] f<= zmm0[0]))
            zmm6 = zmm0
        else if (not(zmm0[0] f<= zmm8[0]))
            zmm8 = zmm0
        
        zmm0 = var_c0
        
        if (not(zmm7[0] f<= zmm0[0]))
            zmm7 = zmm0
        else if (not(zmm0[0] f<= zmm9[0]))
            zmm9 = zmm0
        
        rbx_1 += 1
    while (rbx_1 s< r12)

uint128_t zmm1
zmm1.d = zmm10.d f- zmm11[0]
uint128_t zmm2
zmm2.d = zmm8.d f- zmm6[0]
zmm9[0] = zmm9[0] f- zmm7[0]
int64_t rbx_2

if (zmm2.d f<= zmm1.d || zmm2.d f<= zmm9[0])
    rbx_2 = 0
    
    if (not(zmm9[0] f<= zmm1.d))
        zmm11 = zmm7
        zmm10 = zmm9
        rbx_2 = 2
else
    zmm11 = zmm6
    zmm10 = zmm8
    rbx_2 = 1

int64_t rax_5 = malloc(rdi * 0xc)
int32_t* rax_6 = malloc(0x2000)
int32_t* rsi = rax_6
int32_t* rax_7 = malloc(0x2000)
int64_t rax_8 = malloc(0x2000)

if (rax_5 == 0)
    goto label_1429c60ef

int32_t* result

if (rsi == 0 || rax_7 == 0 || rax_8 == 0)
    free(rax_5)
label_1429c60ef:
    
    if (rsi != 0)
        free(rsi)
    
    if (rax_7 != 0)
        free(rax_7)
    
    if (rax_8 != 0)
        free(rax_8)
    
    result = sub_1429c6160(r14, arg2, rdi.d)
else
    memset(rsi, 0, 0x2000)
    memset(rax_8, 0, 0x2000)
    
    if (r12 s> 0)
        int64_t rdi_1 = 0
        
        do
            int32_t r8_2 = r14[rdi_1]
            (*(*arg2 + 0x10))(arg2, &var_c8, zx.q(r8_2 s>> 2), zx.q(r8_2) & 3)
            
            if (rbx_2 == 0)
                zmm2 = var_c8
            else if (rbx_2 != 1)
                zmm2 = var_c0
            else
                zmm2 = var_c4
            
            int64_t rcx_7 = sx.q(sub_1429c5680(zmm11, zmm10, zmm2))
            rdi_1 += 1
            rsi[rcx_7] += 1
        while (rdi_1 s< r12)
    
    int32_t* rcx_8 = rsi
    int64_t i_4 = 0x7ff
    void* r12_2 = rax_7 - rsi
    void* var_e8_1 = r12_2
    *rax_7 = 0
    int64_t i
    
    do
        *(r12_2 + rcx_8 + 4) = *(r12_2 + rcx_8) + *rcx_8
        rcx_8 = &rcx_8[1]
        i = i_4
        i_4 -= 1
    while (i != 1)
    int32_t rdi_2 = 0
    
    if (rax_3 s> 0)
        do
            int32_t r8_4 = *r14
            (*(*arg2 + 0x10))(arg2, &var_c8, zx.q(r8_4 s>> 2), zx.q(r8_4) & 3)
            
            if (rbx_2 == 0)
                zmm2 = var_c8
            else if (rbx_2 != 1)
                zmm2 = var_c0
            else
                zmm2 = var_c4
            
            int64_t rdx_4 = sx.q(sub_1429c5680(zmm11, zmm10, zmm2))
            r14 = &r14[1]
            *(rax_5 + ((sx.q(rax_7[rdx_4]) + sx.q(*(rax_8 + (rdx_4 << 2)))) << 2)) = rdi_2
            rdi_2 += 1
            *(rax_8 + (rdx_4 << 2)) += 1
        while (rdi_2 s< rax_3)
        
        rsi = rax_6
        r12_2 = var_e8_1
    
    free(rax_8)
    uint64_t rcx_13 = zx.q(*rsi)
    int32_t r8_6
    
    if (data_143ccb970 s< 2)
        r8_6 = 1
    else
        int64_t i_1 = 1
        zmm1 = _mm_shuffle_epi32(zx.o(rcx_13.d), 0)
        r8_6 = 0x7f9
        zmm2 = zmm1
        
        do
            zmm1 = _mm_max_epi32(zmm1, *(rsi + (i_1 << 2)))
            int32_t zmm0_1[0x4] = *(rsi + (i_1 << 2) + 0x10)
            i_1 += 8
            zmm2 = _mm_max_epi32(zmm2, zmm0_1)
        while (i_1 s< 0x7f9)
        
        zmm1 = _mm_max_epi32(zmm1, zmm2)
        zmm1 = _mm_max_epi32(zmm1, _mm_bsrli_si128(zmm1, 8))
        rcx_13 = zx.q(_mm_max_epi32(zmm1, _mm_bsrli_si128(zmm1, 4)).d)
    
    int64_t i_5 = 0x800
    int64_t i_7 = 0x800
    void* rdx_5 = &rsi[zx.q(r8_6)]
    uint64_t i_6 = zx.q(0x800 - r8_6)
    uint64_t i_2
    
    do
        int32_t rax_19 = *rdx_5
        rdx_5 += 4
        
        if (rcx_13.d s>= rax_19)
            rax_19 = rcx_13.d
        
        rcx_13 = sx.q(rax_19)
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    void* rax_20 = malloc(rcx_13 << 4)
    int64_t rdi_3 = rax_5
    void* r14_1 = rsi
    void* r13_1 = rax_20
    var_c8.q = rax_20
    int64_t i_3
    
    do
        int64_t rbp_1 = sx.q(*r14_1)
        int64_t r8_7 = rdi_3 + (sx.q(*(r14_1 + r12_2)) << 2)
        
        if (rbp_1.d s>= 2)
            if (r13_1 == 0)
                sub_1429c7d70(arg1, arg2, r8_7, rbp_1.d)
            else
                int64_t rsi_2 = 0
                int32_t var_118
                
                if (rbp_1.d s> 0)
                    void* rdi_4 = r13_1 + 8
                    
                    do
                        int64_t rbx_3 = sx.q(*(r8_7 + (rsi_2 << 2)))
                        int32_t r8_8 = arg1[rbx_3]
                        int32_t var_b8
                        (*(*arg2 + 0x10))(arg2, &var_b8, zx.q(r8_8 s>> 2), zx.q(r8_8) & 3, var_118)
                        rsi_2 += 1
                        *(rdi_4 - 8) = var_b8[0]
                        int32_t var_b0
                        *rdi_4 = var_b0[0]
                        int32_t var_b4
                        *(rdi_4 - 4) = var_b4.d
                        *(rdi_4 + 4) = rbx_3.d
                        rdi_4 += 0x10
                    while (rsi_2 s< rbp_1)
                    
                    r13_1 = var_c8.q
                    rbp_1 = zx.q(rbp_1.d)
                    i_5 = i_7
                    rdi_3 = rax_5
                
                var_118 = (rbp_1 - 1).d
                sub_1429c7790(arg1, r13_1, arg2, 0, var_118)
                r12_2 = var_e8_1
        
        r14_1 += 4
        i_3 = i_5
        i_5 -= 1
        i_7 = i_5
    while (i_3 != 1)
    
    if (r13_1 != 0)
        free(r13_1)
    
    free(rdi_3)
    free(rax_6)
    result = free(rax_7)

__security_check_cookie(rax_1 ^ &var_138)
return result
