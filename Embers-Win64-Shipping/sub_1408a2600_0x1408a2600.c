// 函数: sub_1408a2600
// 地址: 0x1408a2600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x13a0)
int32_t var_13b8
int64_t rax_1 = __security_cookie ^ &var_13b8
int64_t r8 = sx.q(arg2)
*(arg1 + 0x400) = arg2
int64_t var_30
__builtin_strncpy(&var_30, "UUUUUUUU", 8)
uint64_t i = 1
int64_t var_13b0 = r8

do
    r8 = (r8 ^ r8 u>> 0x3e) * 0x5851f42d4c957f2d + i
    (&var_13b0)[i] = r8
    i += 1
while (i u< 0x138)

int32_t r9 = 0x138
int32_t i_1 = 0
var_13b8 = 0x138
char* rcx = arg1

do
    *rcx = i_1.b
    rcx = &rcx[1]
    i_1 += 1
while (i_1 s< 0x100)

int32_t rbx = 0
void* r10 = arg1
int32_t rdi = 0x100
void* i_2

do
    if (r9 == 0x138)
        void var_13a8
        void* r8_3 = &var_13a8
        int64_t j_2 = 0x138
        int64_t j
        
        do
            int32_t rdx_1 = *(r8_3 - 8) ^ *r8_3
            r8_3 += 8
            int64_t rdx_3 = (zx.q(rdx_1) & 0x7fffffff) ^ *(r8_3 - 0x10)
            rcx = (sbb.q(rcx, rcx, (rdx_3.b & 1) != 0) & 0xb5026f5aa96619e9) ^ *(r8_3 + 0x4d0)
                ^ rdx_3 u>> 1
            *(r8_3 + 0x9b0) = rcx
            j = j_2
            j_2 -= 1
        while (j != 1)
        r9 = var_13b8
    else if (r9 u>= 0x270)
        void var_9f0
        int32_t var_9e8[0x136]
        int64_t j_1
        uint64_t rcx_4
        
        for (j_1 = 0; j_1 u< 0x9c; j_1 += 1)
            int64_t r8_7 = ((zx.q(*(&var_9f0 + (j_1 << 3))) ^ zx.q(var_9e8[j_1 * 2])) & 0x7fffffff)
                ^ *(&var_9f0 + (j_1 << 3))
            rcx_4.b = r8_7.b & 1
            char temp7_1 = rcx_4.b
            rcx_4.b = neg.b(rcx_4.b)
            int64_t var_510[0x9c]
            i = (sbb.q(i, i, temp7_1 != 0) & 0xb5026f5aa96619e9) ^ var_510[j_1] ^ r8_7 u>> 1
            (&var_13b0)[j_1] = i
        
        for (; j_1 u< 0x137; j_1 += 1)
            int64_t r8_12 = ((zx.q(var_9e8[j_1 * 2]) ^ zx.q(*(&var_9f0 + (j_1 << 3)))) & 0x7fffffff)
                ^ *(&var_9f0 + (j_1 << 3))
            rcx_4.b = r8_12.b & 1
            char temp9_1 = rcx_4.b
            rcx_4.b = neg.b(rcx_4.b)
            int64_t var_1890[0x9b]
            i = (sbb.q(i, i, temp9_1 != 0) & 0xb5026f5aa96619e9) ^ var_1890[j_1] ^ r8_12 u>> 1
            (&var_13b0)[j_1] = i
        
        int64_t r8_14 = j_1 << 3
        int64_t rdx_14 =
            ((zx.q(var_13b0.d) ^ zx.q((*(&var_9f0 + r8_14)).d)) & 0x7fffffff) ^ *(&var_9f0 + r8_14)
        r9 = 0
        int64_t var_ed8
        (&var_13b0)[j_1] =
            (sbb.q(rcx_4, rcx_4, (rdx_14.b & 1) != 0) & 0xb5026f5aa96619e9) ^ rdx_14 u>> 1 ^ var_ed8
        var_13b8 = 0
    
    char r8_15 = *r10
    uint64_t rax_6 = zx.q(r9)
    r9 += 1
    int64_t rcx_9 = (&var_13b0)[rax_6]
    var_13b8 = r9
    int64_t rcx_10 = rcx_9 ^ (rcx_9 u>> 0x1d & var_30)
    int64_t rcx_11 = rcx_10 ^ (rcx_10 & 0x38eb3ffff6d3) << 0x11
    int64_t rcx_12 = rcx_11 ^ (rcx_11 & 0xffffffffffffbf77) << 0x25
    uint32_t temp1_1 = (modu.dp.q(0:(rcx_12 u>> 0x2b ^ rcx_12), sx.q(rdi))).d
    rdi -= 1
    int32_t rdx_18 = temp1_1 + rbx
    rbx += 1
    char* rcx_14 = sx.q(rdx_18)
    char rax_19 = *(rcx_14 + arg1)
    *r10 = rax_19
    *(r10 + 0x100) = rax_19
    *(rcx_14 + arg1) = r8_15
    uint32_t rcx_15 = zx.d(*r10)
    i = zx.q(rcx_15 u/ 0xc)
    rcx = zx.q(rcx_15 - ((i * 3).d << 2))
    *(r10 + 0x300) = rcx.b
    *(r10 + 0x200) = rcx.b
    r10 += 1
    i_2 = r10 - arg1
while (i_2 s< 0x100)

__security_check_cookie(rax_1 ^ &var_13b8)
return i_2
