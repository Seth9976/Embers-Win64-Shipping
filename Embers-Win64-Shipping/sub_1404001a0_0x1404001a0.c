// 函数: sub_1404001a0
// 地址: 0x1404001a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rax_2 = arg1[2]
int32_t r9 = 0
char r12 = 0
void* r10 = arg2

if (rax_2 s> 0)
    r12 = rax_2.b

int32_t i = 0

if (*arg1 s> 0)
    void* rdx = nullptr
    
    do
        i += 1
        r10 += 8
        int64_t rcx = sx.q(*(rdx + *(arg1 + 0x30)))
        rdx += 2
        *(arg3 + (rcx << 3)) = *(r10 - 8)
    while (i s< *arg1)

int32_t var_58 = 1
void* r8 = &arg1[3]
int32_t i_1

do
    i_1 = sx.d(*(r8 + 2))
    r9 += 1
    void var_54
    *(&var_54 - arg1 + r8 - 0xc) = *(&var_58 - arg1 + r8 - 0xc) * sx.d(*r8)
    r8 += 4
while (i_1 != 1)
int32_t result_1 = r9 - 1
int32_t r10_2 = sx.d(*(&arg1[sx.q(r9)] + 0xa))
int64_t result = sx.q(result_1)

if (result_1 s>= 0)
    void* rbx_1 = &(&var_58)[result]
    int64_t r15_2 = arg1 - &var_58
    int32_t result_2
    
    do
        int32_t rdi_1
        
        if (result_1 == 0)
            rdi_1 = 1
        else
            rdi_1 = sx.d(*(r15_2 + rbx_1 + 0xa))
        
        int32_t rax_7 = sx.d(*(r15_2 + rbx_1 + 0xc))
        
        if (rax_7 == 2)
            int32_t r8_7 = *rbx_1
            result = sub_1403ff2b0(arg3, sx.q(r8_7 << r12), arg1, r10_2, r8_7, rdi_1)
        else if (rax_7 == 3)
            int32_t r8_5 = *rbx_1
            result = sub_1403ff580(arg3, sx.q(r8_5 << r12), arg1, r10_2, r8_5, rdi_1)
        else if (rax_7 == 4)
            int32_t r8_3 = *rbx_1
            result = sub_1403ff790(arg3, sx.q(r8_3 << r12), arg1, zx.q(r10_2), r8_3, rdi_1)
        else
            result = zx.q(rax_7 - 5)
            
            if (rax_7 == 5)
                int32_t r8_1 = *rbx_1
                result = sub_1403ffa40(arg3, sx.q(r8_1 << r12), arg1, r10_2, r8_1, rdi_1)
        
        rbx_1 -= 4
        result_2 = result_1
        result_1 -= 1
        r10_2 = rdi_1
    while (result_2 - 1 s>= 0)

__security_check_cookie(rax_1 ^ &var_88)
return result
