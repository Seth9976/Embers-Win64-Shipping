// 函数: sub_142a26920
// 地址: 0x142a26920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rax_2 = *(arg2 + 0x10)
void var_54
void* r15 = &var_54
uint16_t r13 = *(arg4 + 0x4c)
uint16_t r9 = *(arg4 + 0x4a)
int32_t rbx = arg3
int32_t r14 = 0
uint16_t var_68 = r9
uint16_t r8 = *(arg4 + 0x48)
uint16_t rdx = *(arg4 + 0x58)
int64_t r12 = 0
uint16_t var_66 = r8
uint16_t var_64 = rdx
void var_58

while (r14 + rbx s< *(arg1 + 0x35c))
    *(r15 - 4) = *(r12 + arg4 + 0x5a)
    *r15 = *(r12 + arg4 + 0x6a)
    *(r15 - 3) = *(r12 + arg4 + 0x5c)
    *(r15 + 1) = *(r12 + arg4 + 0x6c)
    *(r15 - 2) = *(r12 + arg4 + 0x5e)
    *(r15 + 2) = *(r12 + arg4 + 0x6e)
    *(r15 - 1) = *(r12 + arg4 + 0x60)
    *(r15 + 3) = *(r12 + arg4 + 0x70)
    sub_142a25690(*(arg2 + 8), *(arg2 + 0x10), *(arg2 + 0x18), zx.d(r13), zx.d(r9), zx.d(r8), 
        zx.d(rdx), arg1 + 0x460, &var_58 + sx.q(r14 * 2))
    r14 += 4
    r12 += 0x20
    r15 += 8
    r9 = var_68 u>> 8
    r8 = var_66 u>> 8
    rdx = var_64 u>> 8
    *(arg2 + 0x10) += sx.q(*(arg2 + 0x18) << 4)
    r13 u>>= 8
    var_68 = r9
    var_66 = r8
    var_64 = rdx
    
    if (r14 s>= 8)
        break

*(arg2 + 0x10) = rax_2
int32_t r13_2 = neg.d(rbx)
uint16_t r14_1 = *(arg4 + 0x54)
uint16_t r15_1 = *(arg4 + 0x52)
uint16_t r12_1 = *(arg4 + 0x50)
uint16_t rbp_1 = *(arg4 + 0x58)
int32_t i

do
    i = *(arg1 + 0x35c)
    
    if (rbx s>= i)
        break
    
    uint32_t rdx_3
    
    if (rbx != i - 1)
        rdx_3 = zx.d(rbp_1) & 0xf
    else
        rdx_3 = 0
    
    uint32_t r8_3
    uint32_t r9_2
    uint32_t r10_2
    
    if (rbx != 0)
        r8_3 = zx.d(r14_1) & 0xf
        r9_2 = zx.d(r15_1) & 0xf
        r10_2 = zx.d(r12_1) & 0xf
    else
        r8_3 = 0
        r9_2 = 0
        r10_2 = 0
    
    uint32_t var_88
    var_88.q = arg1 + 0x460
    sub_142a25250(*(arg2 + 0x10), *(arg2 + 0x18), r8_3, r9_2, r10_2, rdx_3, var_88, 
        &var_58 + sx.q((rbx + r13_2) * 2))
    rbx += 2
    *(arg2 + 0x10) += sx.q(*(arg2 + 0x18) << 3)
    i = rbx + r13_2
    r14_1 u>>= 4
    r15_1 u>>= 4
    r12_1 u>>= 4
    rbp_1 u>>= 4
while (i s< 8)

__security_check_cookie(rax_1 ^ &var_b8)
return i
