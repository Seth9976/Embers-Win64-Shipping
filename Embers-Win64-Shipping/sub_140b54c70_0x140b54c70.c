// 函数: sub_140b54c70
// 地址: 0x140b54c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint32_t r8 = *arg2
uint64_t rbx = 0
uint64_t rdi = 0
int32_t var_48[0x6]
int32_t rax_6
int32_t rcx

do
    int32_t rdx
    rdx.b = (r8 & 0xffffff80) != 0
    int32_t rax_3 = r8 & 0x7f
    r8 u>>= 7
    uint64_t rax_5 = zx.q(rdi.d)
    int32_t temp0_1 = rdi.d
    rdi = zx.q(rdi.d + 1)
    rcx.b = temp0_1 == 0xffffffff
    var_48[rax_5] = rdx | (rax_3 * 2)
    rax_6.b = r8 != 0
while ((rcx | rax_6) != 0)
uint64_t r10 = *(arg1 + 0xa0)
uint64_t rax_7 = zx.q((rdi << 3).d)
uint64_t rcx_2 = r10 + rax_7
uint64_t result = *(arg1 + 0xa8)
uint64_t rax_10

if (rcx_2 s<= result)
    rax_10 = r10
label_140b54d90:
    int32_t r10_1 = r10.d & 7
    result = rax_10 + zx.q(rax_7.d)
    char* r9_3 = (rax_10 s>> 3) + *(arg1 + 0x90)
    *(arg1 + 0xa0) = result
    
    if (rdi.d != 0)
        do
            char rdx_3 = *r9_3
            r9_3 = &r9_3[1]
            int32_t r8_2 = var_48[rbx]
            result.b = r8_2.b << r10_1.b
            r9_3[-1] = (rdx_3 & ((1 << r10_1.b) - 1)) | result.b
            
            if (r10_1 != 0)
                result.b = *r9_3 & not.b((1 << r10_1.b) - 1)
                *r9_3 = (r8_2 u>> (8 - r10_1.b)).b | result.b
            
            rbx = zx.q(rbx.d + 1)
        while (rbx.d != rdi.d)
else
    if (*(arg1 + 0xb0) != 0)
        uint64_t rax_8 = result * 2
        
        if (rax_8 s>= rcx_2)
            rcx_2 = rax_8
        
        *(arg1 + 0xa8) = rcx_2
        int64_t r15_1 = sx.q(*(arg1 + 0x98))
        int32_t r14_3 = ((rcx_2 + 7) s>> 3).d - *(arg1 + 0x98)
        int32_t rax_9 = r15_1.d + r14_3
        *(arg1 + 0x98) = rax_9
        
        if (rax_9 s> *(arg1 + 0x9c))
            sub_1405daba0(arg1 + 0x90)
        
        memset(r15_1 + *(arg1 + 0x90), 0, sx.q(r14_3))
        r10 = zx.q(*(arg1 + 0xa0))
        rax_10 = *(arg1 + 0xa0)
        goto label_140b54d90
    
    *(arg1 + 0x29) |= 1
__security_check_cookie(rax_1 ^ &var_68)
return result
