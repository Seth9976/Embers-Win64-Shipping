// 函数: sub_1426e9110
// 地址: 0x1426e9110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_88
sub_14265ad90(&var_88, arg1, arg2, *(arg3 + 8))
int32_t rbx = 0
int64_t var_98 = 0
int64_t var_90 = 0
int32_t rax = arg5[1].d

if (rax s> 0)
    sub_1408cf3a0(&var_98, rax)
    rax = arg5[1].d

void* rsi = *arg5
void* r15 = rsi + sx.q(rax) * 0x18
uint128_t zmm0_1

while (rsi != r15)
    int64_t r14_1 = sx.q(var_90.d)
    int32_t var_60_1 = arg4[1].d
    int32_t rax_3 = *(rsi + 8)
    int32_t var_54_1 = rax_3
    int32_t rax_4 = (r14_1 + 1).d
    uint64_t var_68_1 = *arg4
    zmm0_1 = zx.o(*rsi)
    uint64_t var_5c_1 = zmm0_1.q
    uint64_t var_50_1 = zmm0_1.q
    int64_t var_40_1 = 0
    char var_38_1 = 0
    var_90.d = rax_4
    
    if (rax_4 s> var_90:4.d)
        sub_1407c3b60(&var_98)
    
    int64_t rax_5 = var_98
    rsi += 0x18
    uint128_t* rcx_4 = r14_1 * 0x38
    *(rcx_4 + rax_5) = var_68_1.o
    *(rcx_4 + rax_5 + 0x10) = var_5c_1:4.o
    *(rcx_4 + rax_5 + 0x20) = rax_3.o
    *(rcx_4 + rax_5 + 0x30) = var_38_1.q

zmm0_1 = var_88
uint128_t var_78 = zmm0_1
void* rax_6 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_6 != 0)
    *(rax_6 + 8) += 1

(*(*arg1 + 0x6e8))(arg1, &var_98, &var_78, 0)
int32_t result = arg5[1].d

if (result s> 0)
    int64_t rdx_4 = 0
    int64_t r8_2 = 0
    
    do
        int64_t rax_8 = var_98
        r8_2 += 0x38
        int64_t rcx_6 = *arg5
        rdx_4 += 0x18
        rbx += 1
        *(rcx_6 + rdx_4 - 0x18) = *(r8_2 + rax_8 - 0x20)
        *(rcx_6 + rdx_4 - 8) = *(r8_2 + rax_8 - 0x10)
        result = arg5[1].d
    while (rbx s< result)

int32_t rbx_1

if (arg6 == 1)
    rbx_1 = result - 1

int64_t rdx_5

if (arg6 != 1 || rbx_1 s< 0)
    rdx_5 = var_98
else
    rdx_5 = var_98
    int64_t rax_9 = sx.q(rbx_1)
    int64_t rsi_1 = rax_9 * 0x38
    result = rbx_1 + 1
    int64_t r14_3 = rax_9 * 0x18
    int64_t r15_2 = sx.q(result) * 0x18
    int32_t temp1_1
    
    do
        if (*(rsi_1 + rdx_5 + 0x30) == 0)
            int32_t rcx_8 = arg5[1].d
            int32_t rax_11 = rcx_8 - rbx_1
            
            if (rax_11 != 1)
                int64_t rcx_9 = *arg5
                memmove(rcx_9 + r14_3, r15_2 + rcx_9, (rax_11 - 1) * 0x18)
                rcx_8 = arg5[1].d
                rdx_5 = var_98
            
            result = rcx_8 - 1
            arg5[1].d = result
        
        r15_2 -= 0x18
        r14_3 -= 0x18
        rsi_1 -= 0x38
        temp1_1 = rbx_1
        rbx_1 -= 1
    while (temp1_1 - 1 s>= 0)

if (rdx_5 != 0)
    result = sub_140a74f90(rdx_5)

int64_t* rbx_2 = var_88:8.q

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
