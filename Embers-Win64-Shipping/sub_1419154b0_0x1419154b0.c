// 函数: sub_1419154b0
// 地址: 0x1419154b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1 + 0x300
__builtin_memset(r15, 0, 0x40)
void* r12 = arg1 + 0x340
int32_t rbp = arg2 - 1
int32_t rsi = 0
int64_t r14 = arg3
__builtin_memset(r12, 0, 0x20)
__builtin_memset(arg1 + 0x360, 0, 0x20)
*(arg1 + 0x2f8) = 0xffffffff

if (rbp s>= 0)
    int64_t rax_1 = sx.q(rbp)
    void* r15_2 = arg1 + 0x300 + (rax_1 << 3)
    void* r12_2 = arg1 + 0x360 + (rax_1 << 2)
    void* r14_2 = arg3 + 0xc + rax_1 * 0x18
    int32_t temp0_1
    
    do
        int64_t* rdi_1 = *(r14_2 - 0xc)
        int64_t rax_3
        
        if (rdi_1 != 0)
            (*(*rdi_1 + 0x48))(rdi_1)
            
            if (data_143f01c92 != 0)
                sub_140a80f40()
            
            rax_3 = (*(*rdi_1 + 0x48))(rdi_1)
        else
            rax_3 = 0
        
        *r15_2 = rax_3
        *(r12_2 - 0x20) = *(r14_2 - 4)
        *r12_2 = *r14_2
        
        if (*r15_2 != 0)
            *(arg1 + 0x2f8) = rbp
        
        r12_2 -= 4
        r15_2 -= 8
        r14_2 -= 0x18
        temp0_1 = rbp
        rbp -= 1
    while (temp0_1 - 1 s>= 0)
    r14 = arg3
    r15 = arg1 + 0x300
    r12 = arg1 + 0x340

int64_t* rdi_2

if (arg4 != 0)
    rdi_2 = *arg4

int64_t rax_10

if (arg4 == 0 || rdi_2 == 0)
    rax_10 = 0
else
    (*(*rdi_2 + 0x48))(rdi_2)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rax_10 = (*(*rdi_2 + 0x48))(rdi_2)

*(arg1 + 0x380) = rax_10
char rax_11

if (arg4 == 0)
    rax_11 = 0
else
    rax_11 = *(arg4 + 0xb)

*(arg1 + 0x388) = rax_11
int32_t rax_12

if (arg4 == 0)
    rax_12 = 0
else
    rax_12 = sub_14190d820(*arg4)

*(arg1 + 0x38c) = rax_12
int32_t rax_13

if (arg4 == 0)
    rax_13 = 0
else
    rax_13 = sub_14190d8b0(*arg4)

bool cond:0 = *(arg1 + 0x2f8) != 0xffffffff
*(arg1 + 0x390) = rax_13

if (not(cond:0) && *(arg1 + 0x380) == 0)
    *(arg1 + 0x2b8) = 0
    *(arg1 + 0x394) = 1
    return rax_13

*(arg1 + 0x2b8) = sub_14193c970(arg1 - 0x18, arg2, r15, arg1 + 0x360, r12, *(arg1 + 0x380))
int64_t rax_16 = sx.q(*(arg1 + 0x2f8))
*(arg1 + 0x394) = 0

if (rax_16.d == 0xffffffff)
    if (arg4 != 0)
        *(arg1 + 0x2d0) = 0
        *(arg1 + 0x2d8) = sub_14190d820(*arg4)
        rax_16 = sub_14190d8b0(*arg4)
        *(arg1 + 0x2dc) = rax_16.d
    
    return rax_16

*(arg1 + 0x2d0) = 0
int64_t* rcx_8 = *(r14 + rax_16 * 0x18)
int32_t rdi_3 = 0
void* rax_18 = (*(*rcx_8 + 8))(rcx_8)

if (rax_18 != 0)
    rsi = *(rax_18 + 0x60)
    rdi_3 = *(rax_18 + 0x64)
else
    int64_t* rcx_10 = *(r14 + sx.q(*(arg1 + 0x2f8)) * 0x18)
    void* rax_21 = (*(*rcx_10 + 0x20))(rcx_10)
    
    if (rax_21 == 0)
        int64_t* rcx_12 = *(r14 + sx.q(*(arg1 + 0x2f8)) * 0x18)
        rax_18 = (*(*rcx_12 + 0x18))(rcx_12)
        
        if (rax_18 != 0)
            rsi = *(rax_18 + 0x60)
            rdi_3 = *(rax_18 + 0x64)
        else
            int64_t* rcx_14 = *(r14 + sx.q(*(arg1 + 0x2f8)) * 0x18)
            rax_18 = (*(*rcx_14 + 0x10))(rcx_14)
            
            if (rax_18 != 0)
                rsi = *(rax_18 + 0x60)
                rdi_3 = *(rax_18 + 0x64)
    else
        rdi_3 = *(rax_21 + 0x60)
        rsi = rdi_3

char rcx_16 = (*(r14 + sx.q(*(arg1 + 0x2f8)) * 0x18 + 8)).b
uint32_t rsi_1 = rsi u>> rcx_16

if (rsi_1 u<= 1)
    rsi_1 = 1

uint32_t rdi_4 = rdi_3 u>> rcx_16
*(arg1 + 0x2ec) = rsi_1
*(arg1 + 0x2d8) = rsi_1

if (rdi_4 u<= 1)
    rdi_4 = 1

*(arg1 + 0x2f0) = rdi_4
*(arg1 + 0x2dc) = rdi_4
return 1
