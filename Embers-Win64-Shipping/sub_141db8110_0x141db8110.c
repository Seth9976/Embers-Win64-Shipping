// 函数: sub_141db8110
// 地址: 0x141db8110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_2 = arg1[1].d

if (i_2 != 0)
    void* rbx_1 = *arg1 + 8
    int32_t i
    
    do
        int64_t rcx = *(rbx_1 + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 += 0x70
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_4 = arg2[1].d
void* rdi = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_4

if (i_4 == 0 && r8 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_140f15120(arg1, i_4, r8)
int32_t* r13 = *arg1

if (i_4 == 0)
    return arg1

int32_t i_3 = i_4
void* rbx_2 = &r13[5]
void* rdi_1 = rdi + 0x20
int32_t i_1

do
    *r13 = *(rdi_1 - 0x20)
    *(rbx_2 - 0xc) = 0
    int64_t rbp_1 = sx.q(*(rdi_1 - 0x10))
    int64_t r12_1 = *(rdi_1 - 0x18)
    *(rbx_2 - 4) = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_140809010(rbx_2 - 0xc, rbp_1.d, 0)
        memcpy(*(rbx_2 - 0xc), r12_1, (rbp_1 * 0x48).d)
    else
        *rbx_2 = 0
    
    *(rbx_2 + 4) = 0
    int64_t rbp_2 = sx.q(*rdi_1)
    int64_t r12_2 = *(rdi_1 - 8)
    *(rbx_2 + 0xc) = rbp_2.d
    
    if (rbp_2.d != 0)
        sub_1409da0d0(rbx_2 + 4, rbp_2.d, 0)
        memcpy(*(rbx_2 + 4), r12_2, (rbp_2 * 0x60).d)
    else
        *(rbx_2 + 0x10) = 0
    
    r13 = &r13[0x1c]
    *(rbx_2 + 0x1c) = *(rdi_1 + 0x10)
    *(rbx_2 + 0x2c) = *(rdi_1 + 0x20)
    *(rbx_2 + 0x3c) = *(rdi_1 + 0x30)
    *(rbx_2 + 0x4c) = *(rdi_1 + 0x40)
    *(rbx_2 + 0x50) ^= (*(rbx_2 + 0x50) ^ *(rdi_1 + 0x44)) & 1
    int32_t rcx_10 = ((*(rbx_2 + 0x50) ^ *(rdi_1 + 0x44)) & 2) ^ *(rbx_2 + 0x50)
    *(rbx_2 + 0x50) = rcx_10
    int32_t rax_8 = rcx_10 ^ *(rdi_1 + 0x44)
    rdi_1 += 0x70
    *(rbx_2 + 0x50) = (rax_8 & 4) ^ rcx_10
    rbx_2 += 0x70
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
