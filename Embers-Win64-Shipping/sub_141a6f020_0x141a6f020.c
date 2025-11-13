// 函数: sub_141a6f020
// 地址: 0x141a6f020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

void* rbx = *arg1
int32_t i_2 = arg1[1].d

if (i_2 != 0)
    int32_t i
    
    do
        sub_1405ae180(rbx + 0x20)
        int64_t rcx_1 = *(rbx + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx += 0x70
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_3 = arg2[1].d
void* rsi_1 = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_3

if (i_3 == 0 && r8 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_140f15120(arg1, i_3, r8)
int64_t* r15_1 = *arg1

if (i_3 == 0)
    return arg1

int32_t* rsi_2 = rsi_1 + 8
void* rbx_1 = &r15_1[8]
int32_t i_1

do
    *r15_1 = 0
    int64_t rbp_1 = sx.q(*rsi_2)
    int64_t r12_1 = *(rsi_2 - 8)
    *(rbx_1 - 0x38) = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1405c4a90(r15_1, rbp_1.d, 0)
        memcpy(*r15_1, r12_1, (rbp_1 << 2).d)
    else
        *(rbx_1 - 0x34) = 0
    
    *(rbx_1 - 0x30) = 0
    int64_t rbp_2 = sx.q(rsi_2[4])
    int64_t rax_2 = *(rsi_2 + 8)
    *(rbx_1 - 0x28) = rbp_2.d
    
    if (rbp_2.d != 0)
        sub_1405a4be0(rbx_1 - 0x30, rbp_2.d, 0)
        memcpy(*(rbx_1 - 0x30), rax_2, (rbp_2 << 4).d)
    else
        __builtin_memset(rbx_1 - 0x24, 0, 0x14)
    
    void* rdx_5 = rbx_1 - 0x10
    *rbx_1 = 0
    *(rbx_1 + 8) = 0
    *(rbx_1 + 0xc) = 0x80
    void* rax_3 = *rbx_1
    
    if (rax_3 != 0)
        rdx_5 = rax_3
    
    *rdx_5 = 0
    *(rdx_5 + 8) = 0
    *(rbx_1 + 0x10) = 0xffffffff
    *(rbx_1 + 0x14) = 0
    *(rbx_1 + 0x20) = 0
    *(rbx_1 + 0x28) = 0
    sub_1417d6d70(rbx_1 - 0x20, &rsi_2[6])
    r15_1 = &r15_1[0xe]
    rbx_1 += 0x70
    rsi_2 = &rsi_2[0x1c]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
