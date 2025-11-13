// 函数: sub_142576320
// 地址: 0x142576320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

void* rbx = *arg1
int32_t i_2 = arg1[1].d

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x60)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_1405ae180(rbx + 0x10)
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
int64_t* r14_1 = *arg1

if (i_3 == 0)
    return arg1

int32_t* rsi_2 = rsi_1 + 8
void* rbx_1 = &r14_1[6]
int32_t i_1

do
    *r14_1 = 0
    int64_t rbp_1 = sx.q(*rsi_2)
    int64_t r13_1 = *(rsi_2 - 8)
    *(rbx_1 - 0x28) = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1405a4b40(r14_1, rbp_1.d, 0)
        memcpy(*r14_1, r13_1, (rbp_1 * 0x30).d)
    else
        __builtin_memset(rbx_1 - 0x24, 0, 0x14)
    
    void* rdx_3 = rbx_1 - 0x10
    *rbx_1 = 0
    *(rbx_1 + 8) = 0
    *(rbx_1 + 0xc) = 0x80
    void* rax_2 = *rbx_1
    
    if (rax_2 != 0)
        rdx_3 = rax_2
    
    *rdx_3 = 0
    *(rdx_3 + 8) = 0
    *(rbx_1 + 0x10) = 0xffffffff
    *(rbx_1 + 0x14) = 0
    *(rbx_1 + 0x20) = 0
    *(rbx_1 + 0x28) = 0
    sub_1417d6d70(rbx_1 - 0x20, &rsi_2[2])
    *(rbx_1 + 0x30) = 0
    int64_t rbp_2 = sx.q(rsi_2[0x18])
    int64_t rax_3 = *(rsi_2 + 0x58)
    *(rbx_1 + 0x38) = rbp_2.d
    
    if (rbp_2.d != 0)
        sub_140638750(rbx_1 + 0x30, rbp_2.d, 0)
        memcpy(*(rbx_1 + 0x30), rax_3, (rbp_2 << 2).d)
    else
        *(rbx_1 + 0x3c) = 0
    
    r14_1 = &r14_1[0xe]
    rbx_1 += 0x70
    rsi_2 = &rsi_2[0x1c]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
