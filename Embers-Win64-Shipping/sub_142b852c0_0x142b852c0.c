// 函数: sub_142b852c0
// 地址: 0x142b852c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_838
int64_t rax_1 = __security_cookie ^ &var_838
uint128_t zmm0 = *arg1
int64_t i = 0
int32_t rax_2 = 0
uint128_t var_808 = zmm0
char* r9 = var_808.q
int32_t rbx = _mm_bsrli_si128(zmm0, 8).d
void* rdx
int32_t rbx_1

if (rbx s<= 0)
label_142b85332:
    rdx = r9
    rbx_1 = 0
else
    char* rcx = r9
    
    while (*rcx == 0x30)
        rax_2 += 1
        rcx = &rcx[1]
        
        if (rax_2 s>= rbx)
            goto label_142b85332
    
    rdx = &r9[sx.q(rax_2)]
    rbx_1 = rbx - rax_2

int32_t rcx_1 = rbx_1 - 1
int64_t rax_3 = sx.q(rcx_1)
int32_t r9_1

if (rcx_1 s< 0)
label_142b85354:
    r9_1 = 0
    var_808:8.d = 0
else
    while (*(rdx + rax_3) == 0x30)
        rcx_1 -= 1
        int64_t temp0_1 = rax_3
        rax_3 -= 1
        
        if (temp0_1 - 1 s< 0)
            goto label_142b85354
    
    r9_1 = rcx_1 + 1
    var_808:8.d = r9_1

var_808.q = rdx
int32_t rbx_3 = rbx_1 - r9_1 + arg2

if (r9_1 s> 0x30c)
    char var_398[0x30b]
    
    do
        char* rcx_2 = &var_398[i]
        i += 1
        *rcx_2 = rcx_2[rdx - &var_398]
    while (i s< 0x30b)
    
    char var_8d_1 = 0x31
    var_808:8.d = 0x30c
    rbx_3 = rbx_3 - 0x30c + r9_1
    var_808.q = &var_398

uint128_t zmm10 = var_808
int64_t rdi
int64_t arg_8 = rdi
float zmm7[0x4] = zx.o(0)
uint64_t result = zx.q(_mm_bsrli_si128(zmm10, 8).d)
int64_t var_818
int64_t var_7f8
double zmm6[0x2]

if (result.d != 0)
    result = zx.q(result.d + rbx_3)
    
    if (result.d s> 0x135)
        var_818 = 0x7ff0000000000000
        result = memmove(&var_7f8, &var_818, 8)
        zmm6 = zx.o(var_7f8)
        rdi.b = 1
    else if (result.d s> 0xfffffebc)
        var_808 = zmm10
        result = sub_142b84b40(&var_808, rbx_3, &var_818)
        
        if (result.b != 0)
            zmm6 = zx.o(var_818)
            rdi.b = 1
        else
            var_808 = zmm10
            result = sub_142b84820(&var_808, rbx_3, &var_818, rdi)
            
            if (result.b != 0)
                zmm6 = zx.o(var_818)
                rdi.b = 1
            else
                zmm0, result = sub_142b38db0()
                zmm6 = zx.o(var_818)
                zmm6[0] f- zmm0.q
                
                if (is_unordered.q(zmm6[0], zmm0.q) || not(zmm6[0] f== zmm0.q))
                    rdi.b = 0
                else
                    rdi.b = 1
    else
        zmm6 = zx.o(0)
        rdi.b = 1
else
    zmm6 = zx.o(0)
    rdi.b = 1

double temp0_4 = _mm_cvtps_pd(_mm_cvtpd_ps(zmm6).q)
temp0_4 - zmm6[0]

if (is_unordered.q(temp0_4, zmm6[0]) || temp0_4 != zmm6[0])
    var_818 = zmm6.q
    memmove(&var_7f8, &var_818, 8)
    int64_t rdx_7 = var_7f8
    int64_t var_7e8
    uint128_t zmm8
    
    if (rdx_7 == 0x7ff0000000000000)
        var_7e8 = 0x7ff0000000000000
        memmove(&var_808, &var_7e8, 8)
        zmm8 = zx.o(var_808.q)
    else
        int64_t rax_6
        
        if ((-0x8000000000000000 & rdx_7) == 0)
            rax_6 = rdx_7 + 1
        label_142b85575:
            var_808.q = rax_6
            memmove(&var_7e8, &var_808, 8)
            zmm8 = zx.o(var_7e8)
        else
            int64_t rcx_9 = rdx_7 & 0xfffffffffffff
            int64_t rax_5 = rcx_9 + 0x10000000000000
            
            if ((0x7ff0000000000000 & rdx_7) == 0)
                rax_5 = rcx_9
            
            if (rax_5 != 0)
                rax_6 = rdx_7 - 1
                goto label_142b85575
            
            zmm8 = zx.o(0)
    
    var_808.q = zmm6.q
    memmove(&var_7e8, &var_808, 8)
    var_818 = var_7e8
    uint128_t zmm0_1
    zmm0_1, result = sub_142b84e00(&var_818)
    zmm6 = zx.o(0)
    zmm6[0].d = fconvert.s(zmm0_1.q)
    
    if (rdi.b == 0)
        var_808.q = zmm8.q
        memmove(&var_7e8, &var_808, 8)
        int64_t rdx_12 = var_7e8
        
        if (rdx_12 == 0x7ff0000000000000)
            var_818 = 0x7ff0000000000000
            result = memmove(&var_7f8, &var_818, 8)
            zmm7 = zx.o(var_7f8)
        else
            int64_t rax_8
            
            if ((-0x8000000000000000 & rdx_12) == 0)
                rax_8 = rdx_12 + 1
            label_142b85620:
                var_818 = rax_8
                result = memmove(&var_7f8, &var_818, 8)
                zmm7 = zx.o(var_7f8)
            else
                uint64_t result_1 = rdx_12 & 0xfffffffffffff
                result = result_1 + 0x10000000000000
                
                if ((0x7ff0000000000000 & rdx_12) == 0)
                    result = result_1
                
                if (result != 0)
                    rax_8 = rdx_12 - 1
                    goto label_142b85620
        
        zmm8 = zmm7
    
    float temp0_5[0x4] = _mm_cvtpd_ps(zmm8)
    zmm6[0].d f- temp0_5[0]
    
    if (is_unordered.d(zmm6[0].d, temp0_5[0]) || zmm6[0].d f!= temp0_5[0])
        zmm6[0].d f- 0f
        
        if (is_unordered.d(zmm6[0].d, 0f) || zmm6[0].d f!= 0f)
            var_7f8.d = zmm6[0].d
            memmove(&var_818, &var_7f8, 4)
            int32_t rcx_22 = var_818.d
            int32_t r8_5 = rcx_22 & 0x7f800000
            int32_t rdx_18
            
            if (r8_5 != 0)
                rdx_18 = zx.d((rcx_22 u>> 0x17).b) - 0x96
            else
                rdx_18 = -0x95
            
            int32_t rcx_23 = rcx_22 & 0x7fffff
            uint64_t rax_12 = zx.q(rcx_23 + 0x800000)
            
            if (r8_5 == 0)
                rax_12 = zx.q(rcx_23)
            
            var_808.q = zx.q(((rax_12 << 1) + 1).d)
            var_808:8.d = rdx_18 - 1
        else
            var_808.q = 0x3690000000000000
            memmove(&var_7e8, &var_808, 8)
            int64_t rdx_15 = var_7e8
            int64_t r8_3 = rdx_15 & 0x7ff0000000000000
            int32_t rcx_17
            
            if (r8_3 != 0)
                rcx_17 = ((rdx_15 u>> 0x34).d & 0x7ff) - 0x433
            else
                rcx_17 = -0x432
            
            int64_t rdx_16 = rdx_15 & 0xfffffffffffff
            var_808:8.d = rcx_17
            int64_t rax_9 = rdx_16 + 0x10000000000000
            
            if (r8_3 == 0)
                rax_9 = rdx_16
            
            var_808.q = rax_9
        
        var_808 = var_808
        void var_5b8
        sub_142b8f430(&var_5b8)
        void var_7d8
        sub_142b8f430(&var_7d8)
        var_7e8.o = zmm10
        sub_142b8f8a0(&var_5b8, &var_7e8)
        sub_142b8fcd0(&var_7d8, var_808.q)
        void* rcx_29
        
        if (rbx_3 s< 0)
            rbx_3 = neg.d(rbx_3)
            rcx_29 = &var_7d8
        else
            rcx_29 = &var_5b8
        
        sub_142b90120(rcx_29, rbx_3)
        int32_t rdx_23 = var_808:8.d
        void* rcx_30
        
        if (rdx_23 s<= 0)
            rdx_23 = neg.d(rdx_23)
            rcx_30 = &var_5b8
        else
            rcx_30 = &var_7d8
        
        sub_142b90760(rcx_30, rdx_23)
        result = sub_142b8fe40(&var_5b8, &var_7d8)
        int32_t temp1_1 = result.d
        
        if (temp1_1 s>= 0 && temp1_1 s<= 0)
            var_818.d = zmm6[0].d
            memmove(&var_7f8, &var_818, 4)
            int32_t result_2 = var_7f8.d & 0x7fffff
            result = zx.q(result_2 + 0x800000)
            
            if ((var_7f8.d & 0x7f800000) == 0)
                result = zx.q(result_2)
        
        int512_t zmm0_2
        
        if (temp1_1 s>= 0 && (temp1_1 s> 0 || (result.b & 1) != 0))
            zmm0_2.o = temp0_5
        else
            zmm0_2.o = zmm6

__security_check_cookie(rax_1 ^ &var_838)
return result
