// 函数: sub_142b84ed0
// 地址: 0x142b84ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7f8
int64_t rax_1 = __security_cookie ^ &var_7f8
uint128_t zmm0 = *arg1
int64_t i = 0
int32_t rax_2 = 0
uint128_t var_7c8 = zmm0
char* r9 = var_7c8.q
int32_t rdi = _mm_bsrli_si128(zmm0, 8).d
void* rdx
int32_t rdi_1

if (rdi s<= 0)
label_142b84f33:
    rdx = r9
    rdi_1 = 0
else
    char* rcx = r9
    
    while (*rcx == 0x30)
        rax_2 += 1
        rcx = &rcx[1]
        
        if (rax_2 s>= rdi)
            goto label_142b84f33
    
    rdx = &r9[sx.q(rax_2)]
    rdi_1 = rdi - rax_2

int32_t rcx_1 = rdi_1 - 1
int64_t rax_3 = sx.q(rcx_1)
int32_t r9_1

if (rcx_1 s< 0)
label_142b84f55:
    r9_1 = 0
    var_7c8:8.d = 0
else
    while (*(rdx + rax_3) == 0x30)
        rcx_1 -= 1
        int64_t temp0_1 = rax_3
        rax_3 -= 1
        
        if (temp0_1 - 1 s< 0)
            goto label_142b84f55
    
    r9_1 = rcx_1 + 1
    var_7c8:8.d = r9_1

var_7c8.q = rdx
uint64_t rdi_3 = zx.q(rdi_1 - r9_1 + arg2)

if (r9_1 s> 0x30c)
    char var_368[0x30b]
    
    do
        void* rcx_2 = &var_368[i]
        i += 1
        *rcx_2 = *(rdx - &var_368 + rcx_2)
    while (i s< 0x30b)
    
    char var_5d_1 = 0x31
    var_7c8:8.d = 0x30c
    rdi_3 = zx.q(rdi_3.d - 0x30c + r9_1)
    var_7c8.q = &var_368

uint128_t zmm7 = var_7c8
int32_t result = _mm_bsrli_si128(zmm7, 8).d

if (result != 0)
    result += rdi_3.d
    uint64_t var_7d8
    uint64_t var_7b8
    
    if (result s> 0x135)
        var_7d8 = 0x7ff0000000000000
        result = memmove(&var_7b8, &var_7d8, 8)
    else if (result s> 0xfffffebc)
        var_7c8 = zmm7
        result = sub_142b84b40(&var_7c8, rdi_3.d, &var_7d8)
        
        if (result.b == 0)
            var_7c8 = zmm7
            result = sub_142b84820(&var_7c8, rdi_3.d, &var_7d8, rdi_3)
            
            if (result.b == 0)
                double zmm0_1
                zmm0_1, result = sub_142b38db0()
                uint128_t zmm6 = zx.o(var_7d8)
                zmm6.q f- zmm0_1
                
                if (is_unordered.q(zmm6.q, zmm0_1) || not(zmm6.q f== zmm0_1))
                    var_7b8 = zmm6.q
                    memmove(&var_7d8, &var_7b8, 8)
                    uint64_t rdx_7 = var_7d8
                    int64_t r8_3 = rdx_7 & 0x7ff0000000000000
                    int32_t rcx_7
                    
                    if (r8_3 != 0)
                        rcx_7 = ((rdx_7 u>> 0x34).d & 0x7ff) - 0x433
                    else
                        rcx_7 = -0x432
                    
                    int32_t rsi_1 = rcx_7 - 1
                    int64_t rdx_8 = rdx_7 & 0xfffffffffffff
                    int64_t rax_5 = rdx_8 + 0x10000000000000
                    
                    if (r8_3 == 0)
                        rax_5 = rdx_8
                    
                    void var_588
                    sub_142b8f430(&var_588)
                    void var_7a8
                    sub_142b8f430(&var_7a8)
                    var_7c8 = zmm7
                    sub_142b8f8a0(&var_588, &var_7c8)
                    sub_142b8fcd0(&var_7a8, (rax_5 << 1) + 1)
                    void* rcx_15
                    
                    if (rdi_3.d s< 0)
                        rdi_3 = zx.q(neg.d(rdi_3.d))
                        rcx_15 = &var_7a8
                    else
                        rcx_15 = &var_588
                    
                    sub_142b90120(rcx_15, rdi_3.d)
                    void* rcx_16
                    
                    if (rsi_1 s<= 0)
                        rsi_1 = neg.d(rsi_1)
                        rcx_16 = &var_588
                    else
                        rcx_16 = &var_7a8
                    
                    sub_142b90760(rcx_16, rsi_1)
                    result = sub_142b8fe40(&var_588, &var_7a8)
                    int512_t zmm0_2
                    
                    if (result s< 0)
                        zmm0_2.o = zmm6
                    else if (result s<= 0)
                        var_7c8.q = zmm6.q
                        memmove(&var_7b8, &var_7c8, 8)
                        int32_t result_1 = var_7b8.d & 0xffffffff
                        result = result_1
                        
                        if ((var_7b8 & 0x7ff0000000000000) == 0)
                            result = result_1
                        
                        if ((result.b & 1) != 0)
                            var_7c8.q = zmm6.q
                            memmove(&var_7b8, &var_7c8, 8)
                            var_7d8 = var_7b8
                            result = sub_142b84d70(&var_7d8)
                        else
                            zmm0_2.o = zmm6
                    else
                        var_7b8 = zmm6.q
                        memmove(&var_7d8, &var_7b8, 8)
                        var_7c8.q = var_7d8
                        result = sub_142b84d70(&var_7c8)

__security_check_cookie(rax_1 ^ &var_7f8)
return result
