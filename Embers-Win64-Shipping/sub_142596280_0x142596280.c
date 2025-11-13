// 函数: sub_142596280
// 地址: 0x142596280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_2 = arg1[1].d

if (i_2 != 0)
    void* rbx_1 = *arg1 + 0x10
    int32_t i
    
    do
        int64_t rcx = *(rbx_1 + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 += 0x30
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_3 = arg2[1].d
void* rdi = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_3

if (i_3 == 0 && r8 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1405a4b40(arg1, i_3, r8)
int64_t* r12_1 = *arg1

if (i_3 == 0)
    return arg1

void* rdi_1 = rdi + 0x28
void* rbx_2 = r12_1 + 0x1c
int32_t i_1

do
    *r12_1 = *(rdi_1 - 0x28)
    *(rbx_2 - 0x14) = *(rdi_1 - 0x20)
    *(rbx_2 - 0x10) ^= (*(rdi_1 - 0x1c) ^ *(rbx_2 - 0x10)) & 1
    *(rbx_2 - 0xc) = 0
    int64_t rbp_1 = sx.q(*(rdi_1 - 0x10))
    int64_t rax_7 = *(rdi_1 - 0x18)
    *(rbx_2 - 4) = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1405c4a00(rbx_2 - 0xc, rbp_1.d, 0)
        memcpy(*(rbx_2 - 0xc), rax_7, (rbp_1 << 3).d)
    else
        *rbx_2 = 0
    
    *(rbx_2 + 4) = 0
    int64_t rbp_2 = sx.q(*rdi_1)
    int64_t rax_8 = *(rdi_1 - 8)
    *(rbx_2 + 0xc) = rbp_2.d
    
    if (rbp_2.d != 0)
        sub_1407c3650(rbx_2 + 4, rbp_2.d, 0)
        memcpy(*(rbx_2 + 4), rax_8, (rbp_2 * 0xc).d)
    else
        *(rbx_2 + 0x10) = 0
    
    r12_1 = &r12_1[6]
    rbx_2 += 0x30
    rdi_1 += 0x30
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
