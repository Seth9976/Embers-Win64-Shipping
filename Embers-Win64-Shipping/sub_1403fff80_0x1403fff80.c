// 函数: sub_1403fff80
// 地址: 0x1403fff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rax_2 = arg1[2]
int32_t r10 = 0
char r15 = 0
void* r8 = arg2

if (rax_2 s> 0)
    r15 = rax_2.b

int32_t i = 0

if (*arg1 s> 0)
    void* rdx = nullptr
    
    do
        i += 1
        r8 += 8
        int64_t rcx = sx.q(*(rdx + *(arg1 + 0x30)))
        rdx += 2
        *(arg3 + (rcx << 3)) = *(r8 - 8)
        int64_t rcx_1 = sx.q(*(rdx + *(arg1 + 0x30) - 2))
        *(arg3 + (rcx_1 << 3)) = *(arg3 + (rcx_1 << 3)) f* arg1[1]
        int64_t rcx_2 = sx.q(*(rdx + *(arg1 + 0x30) - 2))
        *(arg3 + (rcx_2 << 3) + 4) = *(arg3 + (rcx_2 << 3) + 4) f* arg1[1]
    while (i s< *arg1)

int32_t var_58 = 1
void* r8_1 = &arg1[3]
int32_t i_1

do
    i_1 = sx.d(*(r8_1 + 2))
    r10 += 1
    void var_54
    *(&var_54 - arg1 + r8_1 - 0xc) = *(&var_58 - arg1 + r8_1 - 0xc) * sx.d(*r8_1)
    r8_1 += 4
while (i_1 != 1)
int32_t result_1 = r10 - 1
uint64_t r9_1 = zx.q(sx.d(*(&arg1[sx.q(r10)] + 0xa)))
int64_t result = sx.q(result_1)

if (result_1 s>= 0)
    void* rbx_1 = &(&var_58)[result]
    result = &var_58
    int64_t r12_2 = arg1 - &var_58
    int32_t result_2
    
    do
        int32_t rdi_1
        
        if (result_1 == 0)
            rdi_1 = 1
        else
            rdi_1 = sx.d(*(r12_2 + rbx_1 + 0xa))
        
        int32_t rcx_5 = sx.d(*(r12_2 + rbx_1 + 0xc))
        
        if (rcx_5 == 2)
            int32_t r8_8 = *rbx_1
            result = sub_1403fe7e0(arg3, sx.q(r8_8 << r15), arg1, r9_1.d, r8_8, rdi_1)
        else if (rcx_5 == 3)
            int32_t r8_6 = *rbx_1
            result = sub_1403fe8d0(arg3, sx.q(r8_6 << r15), arg1, r9_1.d, r8_6, rdi_1)
        else if (rcx_5 == 4)
            int32_t r8_4 = *rbx_1
            result = sub_1403feac0(arg3, sx.q(r8_4 << r15), arg1, r9_1, r8_4, rdi_1)
        else if (rcx_5 == 5)
            int32_t r8_2 = *rbx_1
            result = sub_1403fed70(arg3, sx.q(r8_2 << r15), arg1, r9_1.d, r8_2, rdi_1)
        
        rbx_1 -= 4
        result_2 = result_1
        result_1 -= 1
        r9_1 = zx.q(rdi_1)
    while (result_2 - 1 s>= 0)

__security_check_cookie(rax_1 ^ &var_88)
return result
