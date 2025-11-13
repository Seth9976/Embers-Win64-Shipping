// 函数: sub_1413e7e50
// 地址: 0x1413e7e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t i_9 = *(arg1 + 0x1050)

if (i_9 s>= 3)
    i_9 = 3

int32_t var_3c = 3
int32_t i_10 = i_9
void var_70

if (i_9 s> 3)
    sub_1413f6cb0(&var_70)

int64_t rbx = 0
int64_t i_8 = sx.q(i_9)
int32_t r10 = 0
int64_t r14 = 0
void var_6c
float zmm0
float zmm1
float zmm2
float zmm3
float zmm4
float zmm5

if (i_8 s>= 4)
    void* rax_2 = *(arg1 + 0x1048)
    zmm3 = *arg2
    void* rdx_1 = &var_6c
    zmm4 = arg2[1]
    zmm5 = arg2[2]
    void* r8 = rax_2 + 8
    void* rbp_1 = rax_2 + 0x14
    int64_t i_5 = ((i_8 - 4) u>> 2) + 1
    int32_t r13_1 = 2
    r14 = i_5 << 2
    int64_t i
    
    do
        *(rdx_1 - 4) = r10
        r10 += 4
        zmm1 = *(r8 - 8) - zmm3
        zmm0 = *r8
        zmm2 = *(r8 - 4) - zmm4
        *(rdx_1 + 0xc) = r13_1 - 1
        zmm0 = zmm0 - zmm5
        int32_t rax_4 = r13_1 + 1
        *rdx_1 = zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0
        zmm1 = *(r8 + 4) - zmm3
        zmm0 = *rbp_1
        zmm2 = *(rbp_1 - 4) - zmm4
        *(rdx_1 + 0x1c) = r13_1
        zmm0 = zmm0 - zmm5
        r13_1 += 4
        *(rdx_1 + 0x10) = zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0
        zmm1 = *(r8 + 0x10) - zmm3
        zmm2 = *(rbp_1 + 8) - zmm4
        zmm0 = *(rbp_1 + 0xc) - zmm5
        *(rdx_1 + 0x2c) = rax_4
        *(rdx_1 + 0x20) = zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0
        zmm1 = *(r8 + 0x1c)
        r8 += 0x30
        zmm1 = zmm1 - zmm3
        zmm2 = *(rbp_1 + 0x14) - zmm4
        zmm0 = *(rbp_1 + 0x18) - zmm5
        rbp_1 += 0x30
        *(rdx_1 + 0x30) = zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0
        rdx_1 += 0x40
        i = i_5
        i_5 -= 1
    while (i != 1)

if (r14 s< i_8)
    zmm3 = *arg2
    zmm4 = arg2[1]
    zmm5 = arg2[2]
    void* r8_1 = &var_6c + (r14 << 4)
    float* rdx_2 = *(arg1 + 0x1048) + r14 * 0xc
    int64_t i_4 = i_8 - r14
    int64_t i_1
    
    do
        *(r8_1 - 4) = r10
        r10 += 1
        zmm2 = *rdx_2 - zmm3
        zmm0 = rdx_2[1] - zmm4
        zmm1 = rdx_2[2] - zmm5
        rdx_2 = &rdx_2[3]
        *r8_1 = zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1
        r8_1 += 0x10
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int64_t r8_2 = sx.q(*(arg1 + 0x1050))

if (i_8 s< r8_2)
    zmm3 = *arg2
    int64_t i_6 = r8_2 - i_8
    zmm4 = arg2[1]
    zmm5 = arg2[2]
    void* rdx_3 = *(arg1 + 0x1048) + i_8 * 0xc
    int64_t i_2
    
    do
        void* rcx_5 = &var_6c
        zmm1 = *rdx_3 - zmm3
        zmm2 = *(rdx_3 + 4) - zmm4
        zmm0 = *(rdx_3 + 8) - zmm5
        int64_t j = 0
        zmm2 = zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0
        
        do
            if (zmm2 f< *rcx_5)
                int64_t rax_10 = j * 2
                *(&var_6c + (rax_10 << 3)) = zmm2
                *(&var_70 + (rax_10 << 3)) = i_9
                break
            
            j += 1
            rcx_5 += 0x10
        while (j s< 3)
        
        i_9 += 1
        rdx_3 += 0xc
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

void var_68

if (i_8 s> 0)
    int64_t r9 = *(arg1 + 0x1038)
    void* rdx_4 = &var_68
    int64_t i_7 = i_8
    int64_t i_3
    
    do
        int64_t rax_11 = sx.q(*(rdx_4 - 8))
        rdx_4 += 0x10
        *(rdx_4 - 0x10) = *(r9 + (rax_11 << 3))
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)

char var_78 = 0
sub_1413b9960(&var_70, i_10, 0)
int64_t result = 0
__builtin_memset(arg3, 0, 0x18)

if (i_8 s> 0)
    void* rcx_8 = &var_68
    
    do
        result = *rcx_8
        rcx_8 += 0x10
        *(arg3 + (rbx << 3)) = result
        rbx += 1
    while (rbx s< i_8)

__security_check_cookie(rax_1 ^ &var_98)
return result
