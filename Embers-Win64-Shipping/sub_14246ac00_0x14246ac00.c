// 函数: sub_14246ac00
// 地址: 0x14246ac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_2 = arg1[1].d

if (i_2 != 0)
    void* rbx_1 = *arg1 + 0x30
    int32_t i
    
    do
        int64_t rcx = *(rbx_1 + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_14100dc70(rbx_1 - 0x28)
        rbx_1 += 0x58
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

sub_140afef10(arg1, i_3, r8)
int64_t* r13_1 = *arg1

if (i_3 == 0)
    return arg1

void* rdi_1 = rdi + 0x38
void* rbx_2 = r13_1 + 0x3c
int32_t i_1

do
    *r13_1 = *(rdi_1 - 0x38)
    *(rbx_2 - 0x34) = 0
    sub_141ddd4b0(rbx_2 - 0x34, *(rdi_1 - 0x30), *(rdi_1 - 0x28), 0, 0)
    *(rbx_2 - 0x24) = *(rdi_1 - 0x20)
    *(rbx_2 - 0x20) = *(rdi_1 - 0x1c)
    *(rbx_2 - 0x1c) = *(rdi_1 - 0x18)
    *(rbx_2 - 0x18) = *(rdi_1 - 0x14)
    *(rbx_2 - 0x14) = *(rdi_1 - 0x10)
    *(rbx_2 - 0x10) = *(rdi_1 - 0xc)
    *(rbx_2 - 0xc) = 0
    int64_t rbp_1 = sx.q(*rdi_1)
    int64_t rax_9 = *(rdi_1 - 8)
    *(rbx_2 - 4) = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_140638750(rbx_2 - 0xc, rbp_1.d, 0)
        memcpy(*(rbx_2 - 0xc), rax_9, (rbp_1 << 2).d)
    else
        *rbx_2 = 0
    
    *(rbx_2 + 4) = 0
    int64_t rbp_2 = sx.q(*(rdi_1 + 0x10))
    int64_t rax_10 = *(rdi_1 + 8)
    *(rbx_2 + 0xc) = rbp_2.d
    
    if (rbp_2.d != 0)
        sub_140638750(rbx_2 + 4, rbp_2.d, 0)
        memcpy(*(rbx_2 + 4), rax_10, (rbp_2 << 2).d)
    else
        *(rbx_2 + 0x10) = 0
    
    r13_1 = &r13_1[0xb]
    *(rbx_2 + 0x14) = *(rdi_1 + 0x18)
    rdi_1 += 0x58
    rbx_2 += 0x58
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
